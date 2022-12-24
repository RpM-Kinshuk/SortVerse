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

void swap(float *a, float *b)
{
    asm(""
        : "=r"(*a), "=r"(*b)
        : "1"(*a), "0"(*b));
}

void swap(double *a, double *b)
{
    asm(""
        : "=r"(*a), "=r"(*b)
        : "1"(*a), "0"(*b));
}

void swap(long double *a, long double *b)
{
    asm(""
        : "=r"(*a), "=r"(*b)
        : "1"(*a), "0"(*b));
}