import os
import sys

homepath = os.path.abspath(os.path.dirname(__file__) + "/..")
print (homepath)

os.chdir(homepath)
os.system("mkdir build")
os.chdir("build")
err = os.system("cmake ..")
if (err != 0):
    sys.exit(os.EX_OSERR)

err = os.system("cmake --build .")
if (err != 0):
    sys.exit(os.EX_OSERR)