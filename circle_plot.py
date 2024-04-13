import numpy as np
import matplotlib.pyplot as plt

path = r"/home/malum/Desktop/coding_tests/circle_exercise/data/"

y_vector = np.loadtxt(path + "y_vector.txt")
x_vector = np.loadtxt(path + "x_vector.txt")

fig, ax = plt.subplots(nrows=1, ncols=1, figsize=(6,6))

ax.plot(x_vector, y_vector, 'k')

fig.tight_layout()
plt.grid(True)
plt.show()
