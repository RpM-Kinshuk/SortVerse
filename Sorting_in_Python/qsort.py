def py_split(arr, l, r):
    pivot = arr[r]
    i = l - 1
    for j in range(l, r):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i+1], arr[r] = arr[r], arr[i+1]
    return i+1


def insrt(arr, l, r):
    for i in range(l+1, r+1):
        curr = arr[i]
        j = i
        while j > l and curr < arr[j-1]:
            arr[j] = arr[j-1]
            j -= 1
        arr[j] = curr


def Hoarepartition(arr, l, r):
    pi = arr[l]
    i = l - 1
    j = r + 1
    while True:
        i += 1
        while (arr[i] < pi):
            i += 1
        j -= 1
        while (arr[j] > pi):
            j -= 1
        if i >= j:
            return j
        arr[i], arr[j] = arr[j], arr[i]


def py_QSort(arr, l, r):
    if l < r:
        pi = py_split(arr, l, r)
        py_QSort(arr, pi+1, r)
        py_QSort(arr, l, pi-1)


def hy_qsort(arr, l, r):
    while l < r:
        if (r - l + 1 < 10):
            insrt(arr, l, r)
            break
        else:
            pi = Hoarepartition(arr, l, r)
            if (pi-l < r-pi):
                hy_qsort(arr, l, pi-1)
                l = pi+1
            else:
                hy_qsort(arr, pi+1, r)
                r = pi-1
