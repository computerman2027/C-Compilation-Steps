#include <stdio.h>

int main()
{

    // The following preprocessor conditionals check which OS the code is being compiled on.

#ifdef _WIN32

    // This macro is defined when compiling on Windows (both 32-bit and 64-bit). 
    printf("hello from windows\n");

#elif __linux__

    // This macro is defined when compiling on most Linux distributions. 
    printf("hello from linux\n");

#elif __APPLE__

    // This macro is defined when compiling on macOS (Apple systems). 
    printf("hello from macOS\n");

#else

    // Fallback if the OS is not recognized. printf("hello from an unknown 05\n");

#endif
}