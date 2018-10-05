import sys
import numpy as np

s=0
fname='random.csv'
X=np.loadtxt(fname,delimiter=',')
print X[:4] 
output=X[-1]
print output
#the_list=[2,2.0,'doofus','gallant',['another','list']]
#the_dictionary={'class':['a','b'],'girls':'have fun'}
#print the_list[2]
#print the_list[4]
#print the_dictionary['girls']
#a=np.array([1.0,2.5,3.7])
#a1=np.array([])
#print a
#print np.sum(a)
#print np.sum(a1)
#print sys.argv[0]
#for i in range(int(sys.argv[1])):
#    s=s+i
#print s
