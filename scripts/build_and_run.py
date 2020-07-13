import os

os.system("python " + os.path.dirname(__file__) + "/build.py")

homepath = os.path.abspath(os.path.dirname(__file__) + "/..")

execpath = homepath + "/build"
if (os.sys.platform == "win32"):
    execpath += "/Debug/Do.exe"
else:
    execpath += "/core/Do"

print ("Running " + execpath)
os.system(execpath)