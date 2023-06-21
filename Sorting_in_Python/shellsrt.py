def py_shellsrt(v, n):
    sp = n//2
    while sp > 0:
        for i in range(sp, n):
            tmp = v[i]
            j = i
            while j >= sp and v[j-sp] > tmp:
                v[j] = v[j-sp]
                j -= sp
            v[j] = tmp
        sp //= 2