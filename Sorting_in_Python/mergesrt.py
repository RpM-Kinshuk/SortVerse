def merge(arr, l, mid, r):
    n1 = mid - l+1
    n2 = r-mid
    a = [0]*n1
    b = [0]*n2
    for i in range(0,n1):
        a[i]=arr[l+i]
    for i in range(0,n2):
        b[i]=arr[mid+1+i]
    i=0
    j=0
    k=l
    while i<n1 and j<n2:
        if a[i] <b[j]:
            arr[k] = a[i]
            i += 1
        else:
            arr[k] = b[j]
            j += 1
        k += 1
    while i<n1:
        arr[k]=a[i]
        i += 1
        k += 1
    while j<n2:
        arr[k]=b[j]
        j += 1
        k += 1

def py_mrgsrt(arr , l , r):
    if(l<r):
        mid = (l+r)//2
        py_mrgsrt(arr,l,mid)
        py_mrgsrt(arr,mid+1,r)
        merge(arr,l,mid,r)