#include "include/io.h"

enum
{
    success = 0,
    fail = -1,
};

enum
{
    black       = 0x00,
    blue        = 0x01,
    green       = 0x02,
    cyan        = 0x03,
    red         = 0x04,
    purple      = 0x05,
    brown       = 0x06,
    gray        = 0x07,
    darkGray    = 0x08,
    lightBlue   = 0x09,
    lightGreen  = 0x10,
    lightCyan   = 0x11,
    lightRed    = 0x12,
    lightPurple = 0x13,
    yellow      = 0x14,
    white       = 0x15,
};

int print(char *string, int color)
{
    int exitStatus = fail;
    char *videoMemory = (char *)0xB8000;

    while (*string != 0)
    {
        *videoMemory++ = *string++;
        *videoMemory++ = color;
    }

    switch (color)
    {
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
