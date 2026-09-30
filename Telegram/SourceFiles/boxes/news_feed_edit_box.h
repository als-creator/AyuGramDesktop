// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2026
#pragma once

#include "base/basic_types.h" // not_null

namespace Window {
class SessionController;
} // namespace Window

// Open a box with a checkbox list of the user's broadcast channels.
// Checked channels are shown in the built-in "News feed" tab, unchecked
// ones are excluded from it. Everything stays local: nothing is written
// to the user's account.
void EditNewsFeedFilter(not_null<Window::SessionController*> controller);
