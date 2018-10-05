import numpy as np

np.random.seed(17)
A=np.random.rand(3,3)
b=np.random.rand(3)
x=np.zeros((3))
U,sigma,VT=np.linalg.svd(A)
print A
print b
print U.shape,sigma.shape,VT.shape
temp=np.dot(U,np.diag(sigma))
print A-np.dot(temp,VT)
for i in range(3):
    x+=np.dot(b,U[:,i])/sigma[i]*VT[i,:]

print x

residual=np.dot(A,x)-b
print np.linalg.norm(residual)

