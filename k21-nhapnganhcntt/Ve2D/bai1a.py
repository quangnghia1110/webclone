import numpy as np
import matplotlib.pyplot as plt
x = np.arange(-3,3.01,0.2)
y = x**2
plt.plot(x, y)
plt.axis('equal')
plt.show()
