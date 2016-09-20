# pyobjecttrack
An OpenCV based object tracking script in python


Note: This project has code which i obtained from an example from www.pyimagesearch.com

This project uses OpenCV's python binders and Python's Serial communication library to track a ball of predefined color an then rotate the camera towards the direction of the ball. I used a towerpro microservo connected to an arduino uno board to rotate the camera.

to set the HSV range, use gimp2ocv.py and enter the HSV values you get in GIMP. then add +/- 10 or 20 to get the upper and lower limit.

if the camera is moving too fast, reduce the increment to 2 or 1 (it is currently at 4).

If you uncomment the commented code, the window will have a trace of the ball prositions.
