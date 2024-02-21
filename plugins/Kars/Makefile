#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#

# --------------------------------------------------------------
# Project name, used for binaries

NAME = Kars

# --------------------------------------------------------------
# Files to build

FILES_DSP = \
	DistrhoPluginKars.cpp

# --------------------------------------------------------------
# Do some magic

include ../../dpf/Makefile.plugins.mk

# --------------------------------------------------------------
# Enable all possible plugin types

PLUGIN_FORMATS = jack dssi lv2 vst2 vst3 clap
TARGETS = $(patsubst lv2,lv2_dsp,$(PLUGIN_FORMATS))
TARGETS := $(patsubst dssi,dssi_dsp,$(TARGETS))

all: $(TARGETS)

# --------------------------------------------------------------
