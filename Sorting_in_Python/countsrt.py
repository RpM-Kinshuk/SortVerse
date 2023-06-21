def py_cntsrt(arr, n):
    mx =  max(arr)
    mn = min(arr)
    rng = mx - mn + 1
    count = [0]*rng
    output = [0]*n
    for i in range (0,n):
        count[arr[i]-mn] += 1
    for i in range (1,rng):
        count[i] += count[i-1]
    for i in range (0,n):
        output[count[arr[i]-mn]-1] = arr[i]
        count[arr[i]-mn] -= 1
    return output

def py_visual_cntsrt(arr, n):
    mx =  max(arr)
    mn = min(arr)
    rng = mx - mn + 1
    count = [0]*rng
    output = [0]*n
    for i in range (0,n):
        count[arr[i]-mn] += 1
    for i in range (1,rng):
        count[i] += count[i-1]
    for i in range (0,n):
        output[count[arr[i]-mn]-1] = arr[i]
        count[arr[i]-mn] -= 1
    for i in range (0,n):
        arr[i] = output[i]