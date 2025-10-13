#ifndef COLORS_H
#define COLORS_H

#include <stdio.h>

// Basic ANSI color helpers
void red()     { printf("\033[1;31m"); }  // Bold Red
void green()   { printf("\033[1;32m"); }  // Bold Green
void yellow()  { printf("\033[1;33m"); }  // Bold Yellow
void blue()    { printf("\033[1;34m"); }  // Bold Blue
void magenta() { printf("\033[1;35m"); }  // Bold Magenta
void cyan()    { printf("\033[1;36m"); }  // Bold Cyan
void reset()   { printf("\033[0m"); }     // Reset to normal

#endif
