def py_bubble(arr, n):
    flag = False
    for i in range(n):
        flag = False
        for j in range(0, n-i-1):
            if arr[j] > arr[j + 1]:
                flag = True
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
        if not flag:
            return
