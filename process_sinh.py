import numpy as np
import pdb
N=3
Nh=2
M=1

X=np.genfromtxt('data.txt',delimiter=',')
#pdb.set_trace()
(Nv,NPlusOne)=np.shape(X)
x=X[:,:N]
x1=x
y_col=X[:,-1] #This contains the last column
x=np.resize(x,(Nv,NPlusOne+1))
x[:,:N]=x1
x[:,N]=np.ones((Nv,))
x[:,NPlusOne]=y_col
W=np.random.rand(Nh,N+1)
Woh=np.random.rand(M,Nh)
temp_x=x[:,:NPlusOne]
net=np.transpose(np.dot(W,temp_x.T))
O=np.tanh(net)
y_hat=np.dot(Woh,O.T)
y_hat=np.transpose(y_hat)
y_hat=np.squeeze(y_hat)
temp=y_col-y_hat
initial_E=1./Nv*np.dot(temp,temp)
print initial_E
R=np.dot(O,O.T)
C=np.dot(O.T,y_col)
print R.shape,C.shape
Woh=np.linalg.solve(R,C)



