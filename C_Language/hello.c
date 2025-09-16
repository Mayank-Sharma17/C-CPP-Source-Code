#include <stdio.h> 

// anything start with # is pre processed by the compiler, and it copy paste the relevant code from the librabry(code that someone else written for you for the C (inbult functions like printf) for resuse)

/*
1. preprocessing 

2. compiling (converting C language code -> assembly low level code (CPU instructions, intel docs)

3. assembling (convert assembly code to actual 0s and 1s machine code that computer understands)

4. linking :- here total 2 files is involved like hello.c stdio.c (somewhere on the server) so after the compiling the machine code is generated for the 2 files sperately and then we link them together into a single binary code file to run the our program 'hello'
*/

int main(void) 
{
    printf("I am learning C language\n");
}