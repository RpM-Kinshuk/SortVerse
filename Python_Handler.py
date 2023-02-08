import sys
import os
import time
import gc
from Sorting_in_Python.bubble import *
from Sorting_in_Python.selection import *
from Sorting_in_Python.insertion import *
from Sorting_in_Python.qsort import *
from Sorting_in_Python.mergesrt import *
from Sorting_in_Python.countsrt import *
from Sorting_in_Python.dnfsrt import *
from Sorting_in_Python.wavesrt import *
from Sorting_in_Python.radixsrt import *
from Sorting_in_Python.heapsrt import *
from Sorting_in_Python.shellsrt import *

os.chdir('test/')
# inf = open('Input Data.txt','r')
sys.stdin = open('Input Data.txt', 'r')
# sys.stdout=open("Output Data.txt","a")

# input_str = [int(w) for w in inf.read().split()]
vec = [int(z) for z in sys.stdin.read().split()]
temp = vec.copy()
n = len(vec)

print("\n~~~~~~~~~~~ Sorting with Python ~~~~~~~~~~~\n")

# gc.disable()
st = time.perf_counter_ns()
temp.sort()
en = time.perf_counter_ns()
# gc.enable()
print("> Inbuilt Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()


# gc.disable()
st = time.perf_counter_ns()
py_insertionsrt(temp, n)
en = time.perf_counter_ns()
# gc.enable()
print("> Insertion Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()


# gc.disable()
st = time.perf_counter_ns()
py_mrgsrt(temp, 0, n-1)
en = time.perf_counter_ns()
# gc.enable()
print("> Merge Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()


# gc.disable()
st = time.perf_counter_ns()
py_QSort(temp, 0, n-1)
en = time.perf_counter_ns()
# gc.enable()
print("> Quick Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()


# gc.disable()
st = time.perf_counter_ns()
py_selectionSort(temp, n)
en = time.perf_counter_ns()
# gc.enable()
print("> Selection Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()


# gc.disable()
st = time.perf_counter_ns()
py_cntsrt(temp, n)
en = time.perf_counter_ns()
# gc.enable()
print("> Counting Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()


# gc.disable()
st = time.perf_counter_ns()
py_bubble(temp, n)
en = time.perf_counter_ns()
# gc.enable()
print("> Bubble Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()

# gc.disable()
st = time.perf_counter_ns()
hy_qsort(temp, 0, n-1)
en = time.perf_counter_ns()
# gc.enable()
print("> Hybrid Quick Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()

# gc.disable()
st = time.perf_counter_ns()
py_heapsrt(temp, n)
en = time.perf_counter_ns()
# gc.enable()
print("> Heap Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()

# gc.disable()
st = time.perf_counter_ns()
Py_radixsrt(temp, n)
en = time.perf_counter_ns()
# gc.enable()
print("> Radix Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()

# gc.disable()
st = time.perf_counter_ns()
shellsrt(temp, n)
en = time.perf_counter_ns()
# gc.enable()
print("> Shell Sort: ", int(((en-st)//(10**3)) % (10**8)), " microseconds\n")
temp = vec.copy()

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n")


# arr = [-2, 45, 0, 11, -9,88,-97,-202,747]
# py_mrgsrt(arr,0,len(arr)-1)
# print("Sorted array is:")
# for i in range(len(arr)):
#    print("% d" % arr[i], end=" ")
# arr = [-2, 45, 0, 11, -9,88,-97,-202,747]
# size = len(arr)
# arr=py_cntsrt(arr, size)
# print('\nThe array after sorting in Ascending Order by selection sort is:')
# print(arr)
# print(os.getcwd())

## gc.disable()
#st = time.monotonic()
#temp.sort()
#en = time.monotonic()
## gc.enable()
#print("> Inbuilt Sort: ", int(((en-st)*(10**6)) % (10**8)), " microseconds\n")
#temp = vec.copy()
