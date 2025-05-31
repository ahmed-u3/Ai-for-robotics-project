import numpy as np
from roboticstoolbox import DHRobot, RevoluteDH
import matplotlib.pyplot as plt

# Define the scale factor
scale = 1 / 40

# Define the DH parameters as an array: [d, a, alpha, theta]
dh_params = np.array([
    [(9.5) * scale,   0.00, -0.5 * np.pi,  0.0],
    [0.00,            0.00,  0.0,          0.0],
    [0.00,  (12.2) * scale,  0.0,          0.0],
    [0.00,            0.00, -0.5 * np.pi, -0.5 * np.pi],
    [(15.2) * scale,  0.00,  0.5 * np.pi,  0.0]
])

# Create a list of RevoluteDH links from the parameters
links = [RevoluteDH(d=dh[0], a=dh[1], alpha=dh[2], offset=dh[3]) for dh in dh_params]

# Create the robot from the DH links
robot = DHRobot(links, name="CustomRobot")

# Show the robot in a 3D plot
robot.plot([0]*len(links), block=True)  # Assuming all joint angles are zero

# Keep the plot open
plt.show()
