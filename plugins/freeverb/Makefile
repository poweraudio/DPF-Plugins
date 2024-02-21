#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#

# --------------------------------------------------------------
# Project name, used for binaries

NAME = MaFreeverb

# --------------------------------------------------------------
# Files to build

FILES_DSP = \
	DistrhoPluginMaxGen.cpp

# --------------------------------------------------------------
# Do some magic

include ../../dpf/Makefile.plugins.mk

# --------------------------------------------------------------
# Extra flags

BUILD_CXX_FLAGS += -I../common -I../common/gen_dsp
BUILD_CXX_FLAGS += -Wno-unused-parameter

# --------------------------------------------------------------
# Enable all possible plugin types

PLUGIN_FORMATS = jack ladspa lv2 vst2 vst3 clap
TARGETS = $(patsubst lv2,lv2_dsp,$(PLUGIN_FORMATS))

all: $(TARGETS)

# --------------------------------------------------------------
