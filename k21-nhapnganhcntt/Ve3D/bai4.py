import numpy as np
from mpl_toolkits import mplot3d
import matplotlib.pyplot as plt
fig=plt.figure(figsize = (10,10))
ax=plt.axes (projection="3d") 
n=1000
t=np.linspace(0,2*2*np.pi,n)
x=np.cos(t)
y=np.sin(t)
ax.plot3D(x, y, t)
ax.set_xlabel("x",labelpad=20)
ax.set_ylabel("y",labelpad=20)
ax.set_zlabel("t",labelpad=20)
plt.show()