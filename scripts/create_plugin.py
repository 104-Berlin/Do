# Maybe replace this with a .do file if we can do all this
import os
import sys

if (len(sys.argv) < 2):
    sys.exit(1)

# Settings
s_build = False

def check_for_args(arg):
    if (arg == "-b"): 
        global s_build
        s_build = True


# Apply settings
if (len(sys.argv) > 2):
    for i in range(len(sys.argv) - 2):
        current_arg = sys.argv[i + 2]
        check_for_args(current_arg)



project_name = sys.argv[1]

cmake_string =  [   "cmake_minimum_required(VERSION 3.10)",
                    "project (" + project_name + ")",
                    "set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../plugins)",
                    "file(GLOB_RECURSE SRC_FILES src/*.c)",
                    "add_library(" + project_name + " MODULE ${SRC_FILES})",
                    "SET_TARGET_PROPERTIES(" + project_name + " PROPERTIES PREFIX \"lib\")"
                ]

main_c_string = """
void load_plugin()
{
    //Custom code to load initialize the plugin
}
"""


print ("Creating plugin '" + project_name + "'")

gitpath = os.path.abspath(os.path.dirname(__file__) + "/..")
project_root_dir = gitpath + "/" + project_name

# Go to the root of the dir
os.chdir(gitpath)

# Check for project folder
if ( not os.path.exists(project_name)):
    # Create project folder
    os.mkdir(project_name)
os.chdir(project_name) # Go in project folder


# Check for src folder
if (not os.path.exists("src")):
    # Create src folder
    os.mkdir("src")
os.chdir("src")

main_c_file = open(project_name + "_init.c", "w")
main_c_file.write(main_c_string)
main_c_file.close()

# Go back to 
os.chdir(project_root_dir)

cmake_file = open("CMakeLists.txt", "w")
cmake_file.write("\n".join(cmake_string))
cmake_file.close()

# Create build dir
if (not os.path.exists("build")):
    os.mkdir("build")
os.chdir("build")
# Generate project
os.system("cmake ..")



if (s_build):
    os.system("cmake --build .")