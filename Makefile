TEX_FILES_0 = GlueX_nim gluex_experiment beamline solenoid detector_overview \
	tracking_detectors calorimeters scintillators controls online \
	reconstruction simulation performance summary authors
TEX_FILES = $(addsuffix .tex,$(TEX_FILES_0)) # add .tex suffix

all : GlueX_nim.pdf

GlueX_nim.pdf : $(TEX_FILES) GlueX_nim.bbl
	pdflatex -interaction=nonstopmode GlueX_nim
	pdflatex -interaction=nonstopmode GlueX_nim

GlueX_nim.bbl : GlueX_nim.bib $(TEX_FILES)
	pdflatex -interaction=nonstopmode GlueX_nim
	bibtex GlueX_nim

GlueX_nim.aux:
	pdflatex -interaction=nonstopmode GlueX_nim
