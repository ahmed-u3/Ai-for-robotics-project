import numpy as np
from roboticstoolbox import DHRobot, RevoluteDH
import spatialmath as sm
import matplotlib.pyplot as plt
from spatialmath import SE3
# Define the scale factor
scale = 1 / 40

# DH parameters: [d, a, alpha, offset]
dh_params = np.array([
    [(9.5) * scale,   0.00, -0.5 * np.pi,  0.0],
    [0.00,            0.00,  0.0,          0.0],
    [0.00,  (12.2) * scale,  0.0,          0.0],
    [0.00,            0.00, -0.5 * np.pi, -0.5 * np.pi],
    [(15.2) * scale,  0.00,  0.5 * np.pi,  0.0]
])

# Create robot
links = [RevoluteDH(d=dh[0], a=dh[1], alpha=dh[2], offset=dh[3]) for dh in dh_params]
robot = DHRobot(links, name="CustomRobot")

# Desired end-effector pose (as SE3 object)
T_desired = sm.SE3(0.685, 0.0, 0.2375)  # match FK output
sol = robot.ikine_LM(T_desired, mask=[1, 1, 1, 0, 0, 0])

print(robot.fkine([0, 0, 0, 0, 0]))

if sol.success:
    print("Joint solution:", sol.q)
    robot.plot(sol.q, block=True)
else:
    print("IK failed to find a solution.")

plt.show()
