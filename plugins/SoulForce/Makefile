#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#

# --------------------------------------------------------------
# Project name, used for binaries

NAME = SoulForce

# --------------------------------------------------------------
# Files to build

FILES_DSP = \
	DistrhoPluginSoulForce.cpp

FILES_UI  = \
	DistrhoArtworkSoulForce.cpp \
	DistrhoUISoulForce.cpp

# --------------------------------------------------------------
# Do some magic

UI_TYPE = generic
SKIP_NATIVE_AUDIO_FALLBACK = true
USE_FILE_BROWSER = false
include ../../dpf/Makefile.plugins.mk

# --------------------------------------------------------------
# Enable all possible plugin types

PLUGIN_FORMATS += clap
PLUGIN_FORMATS += jack
PLUGIN_FORMATS += ladspa
PLUGIN_FORMATS += lv2
PLUGIN_FORMATS += vst2
PLUGIN_FORMATS += vst3

ifeq ($(HAVE_CAIRO_OR_OPENGL),true)
ifeq ($(HAVE_LIBLO),true)
PLUGIN_FORMATS += dssi
endif
endif

TARGETS = $(patsubst lv2,lv2_sep,$(PLUGIN_FORMATS))

all: $(TARGETS)

# --------------------------------------------------------------
