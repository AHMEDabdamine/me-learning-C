#include <stdio.h>

// ANSI color codes for Linux/macOS (and modern Windows terminals)
void red()    { printf("\033[1;31m"); }  // Bold Red
void green()  { printf("\033[1;32m"); }  // Bold Green
void yellow() { printf("\033[1;33m"); }  // Bold Yellow
void blue()   { printf("\033[1;34m"); }  // Bold Blue
void magenta(){ printf("\033[1;35m"); }  // Bold Magenta
void cyan()   { printf("\033[1;36m"); }  // Bold Cyan
void reset()  { printf("\033[0m"); }     // Reset to default        


int main(){
red();
printf("hello world ! ");
reset();
return 0;
