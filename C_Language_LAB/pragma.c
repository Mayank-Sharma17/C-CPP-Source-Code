// GCC / Clang — using :- __attribute__((constructor))
// Works on Linux, Mac, MinGW, etc.

#include <stdio.h>
__attribute__((constructor)) void beforeMain()
{
    printf("Runs before main!\n");
}
__attribute__((destructor)) void afterMain()
{
    printf("Runs after main!\n");
}
int main()

{
    printf("Inside main function !\n");

    return 0;
}

// ------------------------------------------------------------------ (OLD COMPILER) ------------------------------------------------------
// Turbo C / Borland C — using #pragma startup

// #include <stdio.h>

// void beforeMain() {
//     printf("This runs before main!\n");
// }

// void afterMain() {
//     printf("This runs after main!\n");
// }

// #pragma startup beforeMain
// #pragma exit afterMain

// int main() {
//     printf("Inside main function\n");
//     return 0;
// }

// ----------------------------------------------------------------- THEORY ------------------------------------------------------------

// #pragma can be used to run a function before main(), but only in certain compilers (like Turbo C) using #pragma startup.
// Modern compilers use __attribute__((constructor)) instead.

// In C, #pragma is not a function — it is a preprocessor directive.
// It is used to give special instructions to the compiler. These instructions are compiler-specific, meaning different compilers may support different pragmas.

// #pragma is used to tell the compiler to perform specific actions or change behavior during compilation.
