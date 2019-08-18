; Define the function to be filled out - GLOBAL must pair with a body in the same file
global _AddSubtractIntegers

; Output assembled code into the .text field in the ouput file
section .text

; Funcion body
_AddSubtractIntegers:
    ; Load int from the function registers
    mov eax, ecx    ;eax = A
    add eax, edx    ;eax = A + B
    add eax, r8d    ;eax = A + B + C
    sub eax, r9d    ;eax = A + B + C - D
    ret             ;return Result (EAX)

