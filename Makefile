#
# Makefile to latex document, uncompress .ps files etc...
# original version : Mark Ito
# modified:
#
#     use for hadron05 paper - Elton Smith 9/30/03
#     html output de-activated for now
#     halld_safety - Elton Smith 10/16/06
#     cc_geometry - Elton Smith 10/16/06
#     bcal_specs - Elton Smith 04/02/07
#     halld_specs - Elton Smith 08/27/07
#     feldman_cousins - Elton Smith 09/17/07
#     feldman_cousins systematics  - Elton Smith 08/05/08
#     cdc_segments  - Elton Smith 09/31/08
#     sipm_cooling  - Elton Smith 09/31/08
#     b1pi_studies  - Elton Smith 02/24/10
#     b1_pi studies  - Elton Smith 03/18/10
#     gen_eta studies  - Elton Smith 04/26/10
#     short_currents - Elton Smith 06/22/10
#     short_response - Elton Smith 09/24/10
#     short_cover - Elton Smith 09/24/10   -- use pdflatex
#     solenoid_replacement - Elton Smith 10/15/10   -- use pdflatex
#     bcal_prod_guides  - Elton Smith 06/08/11   -- use pdflatex
#     bcal_voltage_settings  - Elton Smith 26/09/14  -- use pdflatex
#     photon_rates  - Elton Smith 10/21/14  -- use pdflatex
#     double_slit  - Elton Smith 11/12/14  -- use pdflatex
#     bcal_constants  - Elton Smith 12/02/14  -- use pdflatex
#     bdx_C1  - Elton Smith 04/03/15  -- use pdflatex
#     BCAL_nim  - Elton Smith 10/03/16  -- use pdflatex
#
#
TEX_FILES_0 = GlueX_nim beamline solenoid detector_overview tracking_detectors \
              calorimeters scintillators triggerdaq controls online reconstruction simulation \
              performance summary authors
TEX_FILES = $(addsuffix .tex,$(TEX_FILES_0)) # add .tex suffix

PS_FILES_0 =
PS_FILES = $(addsuffix .ps,$(PS_FILES_0)) # add .ps suffix

EPS_FILES_0 = 
EPS_FILES = $(addsuffix .eps,$(EPS_FILES_0)) # add .eps suffix

PDF_FILES_0 =

PDF_FILES = $(addsuffix .pdf,$(PDF_FILES_0)) # add .pdf suffix

PNG_FILES_0 =
PNG_FILES = $(addsuffix .png,$(PNG_FILES_0)) # add .PNG suffix

JPG_FILES_0 = 
JPG_FILES = $(addsuffix .jpg,$(JPG_FILES_0)) # add .PNG suffix

C_FILES_0 =
C_FILES = $(addsuffix .C,$(C_FILES_0)) # add .C suffix


all : GlueX_nim.pdf

GlueX_nim.pdf : $(TEX_FILES) Makefile GlueX_nim.bbl $(PS_FILES) \
               $(EPS_FILES)                      # make the pdf file
	pdflatex GlueX_nim.tex
	pdflatex GlueX_nim.tex

GlueX_nim.bbl : GlueX_nim.bib $(TEX_FILES) $(PS_FILES) $(EPS_FILES)
	pdflatex GlueX_nim
	bibtex GlueX_nim

tar : $(TEX_FILES) $(PS_FILES) $(EPS_FILES) # tar files; will remove old tar files
	rm -f GlueX_nim.tar
	rm -f GlueX_nim.tar.gz
	rm -rf GlueX_nim
	mkdir GlueX_nim
	mkdir GlueX_nim/figures
#	cp GlueX_nim.ps GlueX_nim
	cp GlueX_nim.bib GlueX_nim
#	cp GlueX_nim.bbl GlueX_nim
	cp $(TEX_FILES) GlueX_nim
#	cp $(EPS_FILES) GlueX_nim
#	cp $(PS_FILES) GlueX_nim/figures
	cp $(PDF_FILES) GlueX_nim/figures
	cp $(PNG_FILES) GlueX_nim/figures
	cp $(JPG_FILES) GlueX_nim/figures
#	cp $(C_FILES) GlueX_nim
#	cp GlueX_nim.pdf GlueX_nim
#	cp Makefile GlueX_nim
	tar cvf GlueX_nim.tar GlueX_nim
	gzip GlueX_nim.tar
#	rm -rf GlueX_nim

%.ps : %.dvi
	dvips -t letter -o $*.ps $* 
	dvipdf $*.dvi $*.pdf


%.dvi : %.tex
	latex $*
	latex $*

%.pdf : %.tex
	pdflatex $*
	pdflatex $*

%.ps : %.ps.gz
	gunzip -l $*.ps.gz
	rm -f $*.ps
	gunzip -c $*.ps.gz > $*.ps

%.eps : %.eps.gz
	gunzip -l $*.eps.gz
	rm -f $*.eps
	gunzip -c $*.eps.gz > $*.eps

#
#
% : %.dvi
#	'rm' -rf $*
#	latex2html $*      # produce html pages

clean:
	rm -f GlueX_nim.dvi GlueX_nim.ps


