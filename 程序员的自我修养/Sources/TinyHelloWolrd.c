char* str = "Hello world!\n";

void print()
{
    asm("movwq $13 %%edx \n\t"
        "movwq $0 %%ecx \n\t"
        "movwq $0 %%ebx \n\t"
        "movwq $4 %%eax \n\t"
        "int $0x80 \n\t"
        ::"r"(str):"edx", "ecx", "ebx");
}

void exit()
{
    asm("movwq $42 %ebx \n\t"
        "movwq $1 %%eax \n\t"
        "int $0x80 \n\t");
}

void nomain()
{
    print();
    exit();
}