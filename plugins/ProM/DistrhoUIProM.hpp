/*
 * DISTRHO ProM Plugin
 * Copyright (C) 2015-2021 Filipe Coelho <falktx@falktx.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * For a full copy of the license see the LICENSE file.
 */

#ifndef DISTRHO_UI_PROM_HPP_INCLUDED
#define DISTRHO_UI_PROM_HPP_INCLUDED

#ifdef DISTRHO_OS_MAC
# define DGL_USE_OPENGL3
#endif

#include "DistrhoUI.hpp"

#ifndef DGL_USE_OPENGL3
# include "ResizeHandle.hpp"
#endif

class projectM;

START_NAMESPACE_DISTRHO

// -----------------------------------------------------------------------

class DistrhoUIProM : public UI
{
public:
    DistrhoUIProM();
    ~DistrhoUIProM() override;

protected:
    // -------------------------------------------------------------------
    // DSP Callbacks

    void parameterChanged(uint32_t, float) override;

    // -------------------------------------------------------------------
    // UI Callbacks

    void uiIdle() override;
    void uiReshape(uint width, uint height) override;

    // -------------------------------------------------------------------
    // Widget Callbacks

    void onDisplay() override;
    bool onKeyboard(const KeyboardEvent&) override;

private:
    ScopedPointer<projectM> fPM;
#ifndef DGL_USE_OPENGL3
    ResizeHandle fResizeHandle;
#endif

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DistrhoUIProM)
};

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO

#endif // DISTRHO_UI_PROM_HPP_INCLUDED
