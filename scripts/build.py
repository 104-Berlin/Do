import os

homepath = os.path.abspath(os.path.dirname(__file__) + "/..")
print (homepath)

os.chdir(homepath)
os.system("mkdir build")
os.chdir("build")
os.system("cmake ..")
os.system("cmake --build .")