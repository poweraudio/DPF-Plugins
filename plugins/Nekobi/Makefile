#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#

# --------------------------------------------------------------
# Project name, used for binaries

NAME = Nekobi

# --------------------------------------------------------------
# Files to build

FILES_DSP = \
	DistrhoPluginNekobi.cpp

FILES_UI = \
	DistrhoArtworkNekobi.cpp \
	DistrhoUINekobi.cpp

# --------------------------------------------------------------
# Do some magic

UI_TYPE = generic
SKIP_NATIVE_AUDIO_FALLBACK = true
USE_FILE_BROWSER = false
include ../../dpf/Makefile.plugins.mk

# --------------------------------------------------------------
# Extra flags

ifneq ($(WASM),true)
BASE_FLAGS += -pthread
LINK_FLAGS += -pthread
endif

# --------------------------------------------------------------
# Enable all possible plugin types

PLUGIN_FORMATS = au clap dssi jack lv2 vst2 vst3
TARGETS = $(patsubst lv2,lv2_sep,$(PLUGIN_FORMATS))

all: $(TARGETS)

# --------------------------------------------------------------
