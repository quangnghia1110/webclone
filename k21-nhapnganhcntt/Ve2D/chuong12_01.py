import numpy as np
import matplotlib.pyplot as plt
r=1
n=1001
phi=np.linspace(-np.pi/2,5*np.pi/2,n)
x=r*(phi-np.sin(phi))
y=r*(1-np.cos(phi))
plt.plot(x,y)
ax=plt.gca()
ax.set_aspect('equal')
plt.show()