#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#

# --------------------------------------------------------------
# Project name, used for binaries

NAME = 3BandSplitter

# --------------------------------------------------------------
# Files to build

FILES_DSP = \
	DistrhoPlugin3BandSplitter.cpp

FILES_UI  = \
	DistrhoArtwork3BandSplitter.cpp \
	DistrhoUI3BandSplitter.cpp

# --------------------------------------------------------------
# Do some magic

UI_TYPE = generic
SKIP_NATIVE_AUDIO_FALLBACK = true
USE_FILE_BROWSER = false
include ../../dpf/Makefile.plugins.mk

# --------------------------------------------------------------
# Enable all possible plugin types

PLUGIN_FORMATS = au clap jack ladspa lv2 vst2 vst3

ifeq ($(HAVE_CAIRO_OR_OPENGL)$(HAVE_LIBLO),truetrue)
PLUGIN_FORMATS += dssi
endif

TARGETS = $(patsubst lv2,lv2_sep,$(PLUGIN_FORMATS))

all: $(TARGETS)

# --------------------------------------------------------------
