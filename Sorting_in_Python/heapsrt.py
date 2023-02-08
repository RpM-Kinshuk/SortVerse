def heapify(arr, n, i):
    mx = i
    lcl = 2*i + 1
    rcl = 2*i + 2
    if lcl < n and arr[i] < arr[lcl]:
        mx = lcl
    if rcl < n and arr[mx] < arr[rcl]:
        mx = rcl
    if mx != i:
        arr[i], arr[mx] = arr[mx], arr[i]
        heapify(arr, n, mx)


def py_heapsrt(arr, n):
    for i in range(n//2, -1, -1):
        heapify(arr, n, i)
    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr, i, 0)
