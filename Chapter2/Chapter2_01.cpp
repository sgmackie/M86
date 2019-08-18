#include "stdio.h"

// Define external assembly function
extern "C" int _AddSubtractIntegers(int A, int B, int C, int D);

// Print test results
void PrintResults(const char *Message, int A, int B, int C, int D, int Result)
{
    printf("\n");
    printf("%s\n", Message);
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("Result = %d\n", Result);
    printf("\n");
}

int main()
{
    // Initialise
    int A       = 10;
    int B       = 20;
    int C       = 30;
    int D       = 18;
    int Result  = 0;
    
    // Call assembly function and print results
    Result      = _AddSubtractIntegers(A, B, C, D);
    PrintResults("Test 01", A, B, C, D, Result);

    // 2nd test
    A           = 101;
    B           = 34;
    C           = -190;
    D           = 25;
    Result      = _AddSubtractIntegers(A, B, C, D);
    PrintResults("Test 02", A, B, C, D, Result);

    return 0;
}

