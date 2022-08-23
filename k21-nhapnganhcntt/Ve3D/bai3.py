import numpy as np
from mpl_toolkits import mplot3d
import matplotlib.pyplot as plt
plt.style.use("seaborn-poster")
fig =plt.figure(figsize =(10,10))
ax = plt.axes (projection="3d")
n = 21
u = np.linspace(0,2*np.pi,11)
v = np.linspace(0,1,n)
U, v = np.meshgrid(u, v)
R = 3
H = 8
Y = R*np.cos(U)
Z = H*(v)
X = R*np.sin(U)
  
  
ax.plot_wireframe (X,Y,Z)
ax.set_title("Wireframe Plbt")
plt.show()