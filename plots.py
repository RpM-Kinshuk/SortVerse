import matplotlib.pyplot as plt
import numpy as np

#Plot for Java

y1 = np.array([482, 358, 970,5202, 46152,116218])
y2 = np.array([4,58,2046,15753,754144,74976328])
y3 = np.array([63,8,691,2868,20751,160941])
y4 = np.array([34,5,431,1729,13495,80779])
y5 = np.array([116,3,2530,141581,11672102,516213217])
y6 = np.array([992,999,1054,2315,10383,33331])
y7 = np.array([179,5,4853,103615,16243540,1577919139])
y8 = np.array([25,6,316,3130,16448,69536])
y9 = np.array([74,7,682,4432,28327,163092])
y = np.array([53,15,638,3489,18437,107633])
y0 = np.array([31,5,510,8305,15634,145878])

plt.xlim(0, 5)
plt.ylim(5, 100000)

plt.plot(y,color='black',label='Radix')
plt.plot(y0,color='blue',label='Shell')
plt.plot(y1,color='green',label='Inbuilt')
plt.plot(y2,color='orange',label='Insertion')
plt.plot(y3,color='red',label='Merge')
plt.plot(y4,color='pink',label='Quick')
plt.plot(y5,color='brown',label='Selection')
plt.plot(y6,color='magenta',label='Counting')
plt.plot(y7,color='yellow',label='Bubble')
plt.plot(y8,color='cyan',label='Hybrid Quick')
plt.plot(y9,color='grey',label='Heap')

plt.title("Java")
plt.xlabel("No. of elements")
plt.ylabel("Time Taken")

plt.legend()
plt.show()

#Plot for C

y1 = np.array([5,10,86,878,10602,91497])
y2 = np.array([6,10,577,50835,5154775,191199687])
y3 = np.array([2,8,106,1114,14507,93086])
y4 = np.array([1,6,63,676,9369,58315])
y5 = np.array([1,12,903,75280,7705311,334503674])
y6 = np.array([186,176,188,283,1356,1162])
y7 = np.array([0,24,1723,174021,21025785,1110940057])
y8 = np.array([1,5,52,613,7730,54763])
y9 = np.array([1,9,105,1669,17796,252654])
y = np.array([2,8,75,784,7922,54762])
y0 = np.array([0,5,85,1480,19107,124359])

plt.xlim(0, 5)
plt.ylim(5, 100000)

plt.plot(y,color='black',label='Radix')
plt.plot(y0,color='blue',label='Shell')
plt.plot(y1,color='green',label='Inbuilt')
plt.plot(y2,color='orange',label='Insertion')
plt.plot(y3,color='red',label='Merge')
plt.plot(y4,color='pink',label='Quick')
plt.plot(y5,color='brown',label='Selection')
plt.plot(y6,color='magenta',label='Counting')
plt.plot(y7,color='yellow',label='Bubble')
plt.plot(y8,color='cyan',label='Hybrid Quick')
plt.plot(y9,color='grey',label='Heap')

plt.title("C")
plt.xlabel("No. of elements")
plt.ylabel("Time Taken")

plt.legend()
plt.show()

#Plot for C++

y1 = np.array([2,15,143,2829,22399,53231])
y2 = np.array([1,14,1165,116934,11559938,183391337])
y3 = np.array([1,7,87,1235,15328,70644])
y4 = np.array([0,8,90,1183,14341,58217])
y5 = np.array([0,23,1532,159694,16270240,321037327])
y6 = np.array([166,162,214,395,2456,16008])
y7 = np.array([1,50,4364,489551,50854009,1560320312])
y8 = np.array([0,7,83,1061,13423,55436])
y9 = np.array([1,17,194,3280,34610,178613])
y = np.array([4,15,115,1130,11069,64414])
y0 = np.array([0,10,136,2572,32167,128752])

plt.xlim(0, 5)
plt.ylim(5, 100000)

plt.plot(y,color='black',label='Radix')
plt.plot(y0,color='blue',label='Shell')
plt.plot(y1,color='green',label='Inbuilt')
plt.plot(y2,color='orange',label='Insertion')
plt.plot(y3,color='red',label='Merge')
plt.plot(y4,color='pink',label='Quick')
plt.plot(y5,color='brown',label='Selection')
plt.plot(y6,color='magenta',label='Counting')
plt.plot(y7,color='yellow',label='Bubble')
plt.plot(y8,color='cyan',label='Hybrid Quick')
plt.plot(y9,color='grey',label='Heap')

plt.title("C++")
plt.xlabel("No. of elements")
plt.ylabel("Time Taken")

plt.legend()
plt.show()

#Plot for Python

y1 = np.array([2,7,79,1030,15645,242196])
y2 = np.array([8,217,31071,3020276,46458039,52277799787])
y3 = np.array([28,207,2780,34131,450521,5392594])
y4 = np.array([13,93,1152,14322,220545,2897822])
y5 = np.array([8,190,20399,2153966,62125641,32105493180])
y6 = np.array([2883,2968,3530,6114,36655,376264])
y7 = np.array([14,385,48205,5167219,31597725,76971925824])
y8 = np.array([7,70,1015,12982,166430,2162604])
y9 = np.array([17,199,3106,46508,664555,8108707])
y = np.array([35,189,1797,18848,275071,3002543])
y0 = np.array([7,343,43556,4390244,78388133,80671826754])

plt.xlim(0, 5)
plt.ylim(5, 100000)

plt.plot(y,color='black',label='Radix')
plt.plot(y0,color='blue',label='Shell')
plt.plot(y1,color='green',label='Inbuilt')
plt.plot(y2,color='orange',label='Insertion')
plt.plot(y3,color='red',label='Merge')
plt.plot(y4,color='pink',label='Quick')
plt.plot(y5,color='brown',label='Selection')
plt.plot(y6,color='magenta',label='Counting')
plt.plot(y7,color='yellow',label='Bubble')
plt.plot(y8,color='cyan',label='Hybrid Quick')
plt.plot(y9,color='grey',label='Heap')

plt.title("Python")
plt.xlabel("No. of elements")
plt.ylabel("Time Taken")

plt.legend()
plt.show()
