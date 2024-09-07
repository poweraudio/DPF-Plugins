#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#

# --------------------------------------------------------------
# Project name, used for binaries

NAME = MVerb

# --------------------------------------------------------------
# Files to build

FILES_DSP = \
	DistrhoPluginMVerb.cpp

FILES_UI  = \
	DistrhoArtworkMVerb.cpp \
	DistrhoUIMVerb.cpp

# --------------------------------------------------------------
# Do some magic

SKIP_NATIVE_AUDIO_FALLBACK = true
USE_FILE_BROWSER = false
include ../../dpf/Makefile.plugins.mk

# --------------------------------------------------------------
# Enable all possible plugin types

PLUGIN_FORMATS = jack ladspa lv2 vst2 vst3 clap

ifeq ($(HAVE_DGL),true)
ifeq ($(HAVE_LIBLO),true)
PLUGIN_FORMATS += dssi
endif
endif

TARGETS = $(patsubst lv2,lv2_sep,$(PLUGIN_FORMATS))

all: $(TARGETS)

# --------------------------------------------------------------
