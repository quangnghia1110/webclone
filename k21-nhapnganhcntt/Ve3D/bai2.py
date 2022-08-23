import numpy as np
import matplotlib.pyplot as plt
n = 101
eps=1.0E-6
x = np.linspace(-np.pi, np.pi, n)+eps
y = np.sin(x)/x
plt.plot(x,y)
plt.show()




