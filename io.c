#include "include/io.h"

int print(char *string, int color)
{
    // Function exit status
    // Successful execution =  0
    // Failed execution     = -1
    int exitStatus = fail; // Starts off as a failed execution

    char *videoMemory = (char *)0xB8000; // Video memory address

    while (*string != 0)
    {
        // How videoMemory works
        // videoMemory[index] = char
        // videoMemory[index+1] = color int
        *videoMemory++ = *string++;
        *videoMemory++ = color;
    }

    switch (color)
    {
        // Exit status is set to successful if the color specified
        // is one of the 15 available colors
        case black:      case blue:
        case green:      case cyan:
        case red:        case purple:
        case brown:      case gray:
        case darkGray:   case lightBlue:
        case lightGreen: case lightCyan:
        case lightRed:   case lightPurple:
        case yellow:     case white:
            exitStatus = success;
    };

    return exitStatus;
}
