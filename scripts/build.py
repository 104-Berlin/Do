import os

homepath = os.path.abspath(os.path.dirname(__file__) + "/..")
print (homepath)

os.chdir(homepath)
os.system("mkdir build")
os.chdir("build")
os.system("cmake ..")

if (os.sys.platform == "win32"):
    os.system("msbuild Do_Scripting.sln")
else:
    os.system("make")