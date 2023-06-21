def py_wavesrt(arr, n):
    for i in range(1, n, 2):
        if arr[i] > arr[i-1]:
            arr[i-1], arr[i] = arr[i], arr[i-1]
        if i < n-1 and arr[i] > arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]