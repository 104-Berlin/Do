import os
import sys

err = os.system("python " + os.path.dirname(__file__) + "/build.py")
if (err != 0):
    sys.exit(1)

homepath = os.path.abspath(os.path.dirname(__file__) + "/..")

execpath = homepath + "/build"
if (sys.platform == "win32"):
    execpath += "/Debug/Do.exe"
else:
    execpath += "/core/Do"

print ("Running " + execpath)
os.system(execpath)