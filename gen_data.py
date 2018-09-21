import numpy as np
import sys

N=int(sys.argv[1])
f=open("data.txt",'w')
for k in range(N):
    x=np.random.rand(3)
    y=np.sinh(np.sum(x))
    for i in x:
        f.write(str(i))
        f.write(',')
    f.write(str(y))
    f.write('\n')
f.close()



#print x[0],x[1],x[2],y
