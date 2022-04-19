#ifndef IO_H
#define IO_H

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
    lightGreen  = 10,
    lightCyan   = 11,
    lightRed    = 12,
    lightPurple = 13,
    yellow      = 14,
    white       = 15,
};

int print(char *string, int color);

#endif
