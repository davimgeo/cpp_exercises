import numpy as np
import matplotlib.pyplot as plt

path = r"/home/malum/Desktop/coding_tests/data/"

y_path = path + "y_vector.txt"
x_path = path + "x_vector.txt"

y_vector = np.loadtxt(y_path)
x_vector = np.loadtxt(x_path)

fig, ax = plt.subplots(nrows=1, ncols=1, figsize=(6,6))

ax.plot(x_vector, y_vector, 'k')
ax.plot(x_vector, -y_vector, 'k')

fig.tight_layout()
plt.grid(True)
plt.show()

#testando