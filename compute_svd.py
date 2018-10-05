import numpy as np

np.random.seed(17)
A=np.random.rand(3,3)
b=np.random.rand(3)
z=np.zeros((3))
U,sigma,VT=np.linalg.svd(A)
print A
print b
print U.shape,sigma.shape,VT.shape
temp=np.dot(U,np.diag(sigma))
print A-np.dot(temp,VT)
for i in range(3):
    z[i]=np.dot(b,U[:,i])/sigma[i]

print z
residual=np.dot(A,z)-b
print np.linalg.norm(residual)

