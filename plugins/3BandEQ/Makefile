#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#

# --------------------------------------------------------------
# Project name, used for binaries

NAME = 3BandEQ

# --------------------------------------------------------------
# Files to build

FILES_DSP = \
	DistrhoPlugin3BandEQ.cpp

FILES_UI  = \
	DistrhoArtwork3BandEQ.cpp \
	DistrhoUI3BandEQ.cpp

# --------------------------------------------------------------
# Do some magic

UI_TYPE = generic
FILE_BROWSER_DISABLED = true
include ../../dpf/Makefile.plugins.mk

# --------------------------------------------------------------
# Enable all possible plugin types

PLUGIN_FORMATS = jack ladspa lv2 vst2 vst3 clap

ifeq ($(HAVE_CAIRO_OR_OPENGL),true)
ifeq ($(HAVE_LIBLO),true)
PLUGIN_FORMATS += dssi
endif
endif

TARGETS = $(patsubst lv2,lv2_sep,$(PLUGIN_FORMATS))

all: $(TARGETS)

# --------------------------------------------------------------
