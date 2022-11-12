void swap(long long *a, long long *b)
{
    asm(""
        : "=r"(*a), "=r"(*b)
        : "1"(*a), "0"(*b));
}

void swap(int *a, int *b)
{
    asm(""
        : "=r"(*a), "=r"(*b)
        : "1"(*a), "0"(*b));
}

void swap(char *a, char *b)
{
    asm(""
        : "=r"(*a), "=r"(*b)
        : "1"(*a), "0"(*b));
}