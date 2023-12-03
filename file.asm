calculateFactorial(int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], edi
        cmp     DWORD PTR [rbp-20], 0
        je      .L2
        cmp     DWORD PTR [rbp-20], 1
        jne     .L3
.L2:
        mov     eax, 1
        jmp     .L4
.L3:
        mov     DWORD PTR [rbp-4], 1
        mov     DWORD PTR [rbp-8], 1
        jmp     .L5
.L6:
        mov     eax, DWORD PTR [rbp-4]
        imul    eax, DWORD PTR [rbp-8]
        mov     DWORD PTR [rbp-4], eax
        add     DWORD PTR [rbp-8], 1
.L5:
        mov     eax, DWORD PTR [rbp-8]
        cmp     eax, DWORD PTR [rbp-20]
        jle     .L6
        mov     eax, DWORD PTR [rbp-4]
.L4:
        pop     rbp
        ret