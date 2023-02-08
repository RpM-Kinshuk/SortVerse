def shellsrt(v, n):
    for sp in range(n//2, -1, -1):
        for i in range(sp, n):
            tmp = v[i]
            j = i
            while j >= sp and v[j-sp] > tmp:
                v[j] = v[j-sp]
                j -= sp
            v[j] = tmp
