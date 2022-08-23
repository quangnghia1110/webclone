import numpy as np
import matplotlib.pyplot as plt


n = 201
x1 = np.linspace(-np.pi,np.pi, n)
y1 = 3*np.sin(x1)
r=4
x21 = np.linspace(-r,r,n)
y21 = np.sqrt(r**2-x21**2)
x22 = np.linspace(r,-r,n)
x22 = x22[1:]
y22 = -np.sqrt(r**2-x22**2)
x2=np.hstack((x21,x22))
y2=np.hstack((y21,y22))
x3=np.linspace(-2.5,2.5,n)
y3 = x3**2 -3.5


plt.plot(x1,y1, label='y=sinx')
plt.plot(x2,y2,label='x^2+y^2=r^2')
plt.plot(x3,y3,label='y=x^2-3.5')
plt.legend(loc = 'upper right')
plt.xticks([-6,-4, -2, 0, 2, 4,6])
plt.yticks([-6,-4, -2, 0, 2, 4,6])
axes=plt.gca()
axes.set_aspect('equal')
plt.axis([-6,6,-6,6])
plt.show()