def CountSort(v, n, dig):
    output = [0]*n
    count = [0]*20
    for i in range(0, n):
        count[((v[i]//dig) % 10)+10] += 1
    for i in range(1, 20):
        count[i] += count[i-1]
    for i in range(n-1, -1, -1):
        output[count[((v[i]//dig) % 10)+10]-1] = v[i]
        count[((v[i]//dig) % 10)+10] -= 1
    for i in range(0, n):
        v[i] = output[i]


def Max(v, n):
    mx = v[0]
    for i in range(1, n):
        if (v[i] > mx):
            mx = v[i]
    return mx


def Py_radixsrt(v, n):
    mx = Max(v, n)
    dig = 1
    while (mx//dig > 0):
        CountSort(v, n, dig)
        dig *= 10
