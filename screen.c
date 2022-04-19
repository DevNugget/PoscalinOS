#include "include/types.h"
#include "include/screen.h"

// Cursor positions
int cursorX = 0;
int cursorY = 0;

// Screen size
const U8 screenWidth  = 80;
const U8 screenHeight = 25;
const U8 screenDepth  = 2;

int clearLine(U8 from, U8 to)
{
    // Function exit status
    // Successful execution =  0
    // Failed execution     = -1
    int exitStatus = fail; // Starts off as a failed execution

    U16 i = screenWidth * from * screenDepth;

    char *videoMemory = (char *)0xB8000;
    
    for (i; i < (screenWidth * (to + 1) * screenDepth); i++)
    {
        videoMemory[i] = 0x0;
    
    }
    if (from < 257 && to < 257) {
        exitStatus = success;
    }

    return exitStatus;
}