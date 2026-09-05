//--------------------------------------------------------------------------------------------------
//emts console mode main program.
//--------------------------------------------------------------------------------------------------
//This program is the main program of the emts console mode program.  The program can also be
//rebranded by changing startup and copyright messages using the mechanisms available to
//modules incorporated into the build, so it may also be the main program of other similar
//proprietary programs.
//--------------------------------------------------------------------------------------------------
//This file is part of LibGen, https://github.com/dtashley/Emts, and is provided
//under The Unlicense, reproduced below.
//--------------------------------------------------------------------------------------------------
//This is free and unencumbered software released into the public domain.
//
//Anyone is free to copy, modify, publish, use, compile, sell, or
//distribute this software, either in source code form or as a compiled
//binary, for any purpose, commercial or non - commercial, and by any
//means.
//
//In jurisdictions that recognize copyright laws, the author or authors
//of this software dedicate any and all copyright interest in the
//software to the public domain. We make this dedication for the benefit
//of the public at large and to the detriment of our heirs and
//successors. We intend this dedication to be an overt act of
//relinquishment in perpetuity of all present and future rights to this
//software under copyright law.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//OTHER DEALINGS IN THE SOFTWARE.
//
//For more information, please refer to <https://unlicense.org>
//--------------------------------------------------------------------------------------------------
#define MODULE_ET_EMTS_CONSOLE_MAIN

#include <iostream>

#include "et_emts_console_main.hpp"

#include "lg_cpp_cm_fio.hpp"

int main()
{
    LgCppCm_FioHline();
    std::cout << "Hello World!\n";
}

//End of et_emts_console_main.cpp
