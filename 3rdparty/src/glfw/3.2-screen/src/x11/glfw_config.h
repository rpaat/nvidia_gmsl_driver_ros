//========================================================================
// GLFW 3.2 - www.glfw.org
//------------------------------------------------------------------------
// Copyright (c) 2010-2016 Camilla Berglund <elmindreda@glfw.org>
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would
//    be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
//    distribution.
//
//========================================================================
// As glfw_config.h.in, this file is used by CMake to produce the
// glfw_config.h configuration header file.  If you are adding a feature
// requiring conditional compilation, this is where to add the macro.
//========================================================================
// As glfw_config.h, this file defines compile-time option macros for a
// specific platform and development environment.  If you are using the
// GLFW CMake files, modify glfw_config.h.in instead of this file.  If you
// are using your own build system, make this file define the appropriate
// macros in whatever way is suitable.
//========================================================================

// Define this to 1 if building GLFW for X11
#define _GLFW_X11
// Define this to 1 if building GLFW for Win32
/* #undef _GLFW_WIN32 */
// Define this to 1 if building GLFW for Cocoa
/* #undef _GLFW_COCOA */
// Define this to 1 if building GLFW for Wayland
/* #undef _GLFW_WAYLAND */
// Define this to 1 if building GLFW for Mir
/* #undef _GLFW_MIR */
// Define this to 1 if building GLFW for Screen 
/* #undef _GLFW_SCREEN */

// Define this to 1 if building as a shared library / dynamic library / DLL
#define _GLFW_BUILD_DLL

// Define this to 1 to force use of high-performance GPU on hybrid systems
/* #undef _GLFW_USE_HYBRID_HPG */

// Define this to 1 if the Xxf86vm X11 extension is available
#define _GLFW_HAS_XF86VM

// Define this to 1 if glfwInit should change the current directory
/* #undef _GLFW_USE_CHDIR */
// Define this to 1 if glfwCreateWindow should populate the menu bar
/* #undef _GLFW_USE_MENUBAR */
// Define this to 1 if windows should use full resolution on Retina displays
/* #undef _GLFW_USE_RETINA */
