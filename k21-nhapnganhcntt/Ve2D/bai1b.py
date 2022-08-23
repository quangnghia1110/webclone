import numpy as np
import matplotlib.pyplot as plt

plt.rcParams ['text.usetex']=True

x = np.linspace(-3,3,31)
y = x**2
plt.plot(x,y)
plt.title(r'$y=x^2$')
plt.xlabel(r'$x$')
plt.ylabel(r'$y$')
plt.plot(x, y)

plt.axis('equal')
plt.show()
