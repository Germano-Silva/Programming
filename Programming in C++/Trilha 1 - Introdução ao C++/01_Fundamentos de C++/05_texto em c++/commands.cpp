
-- Run your code in the folder projects/build_tasks

-- Run using the terminal within VS code (below the code)

-- Open up  hello_world.cpp file and paste in this code


------------------------------------

=> have the hello_world.cpp open in the editor as the next step will use the active file in the editor as context to create the build task in the next step


Compiling
----------
tasks.json
-----------

=> tasks.json tells VS Code how to build (compile) programs.

=> Go to main menu > Terminal > Configure Default Build task.

	A dropdown will appear with predefined build tasks for all the different compilers on your mac.

	Choose "C/C++ clang++ build active file" to build helloworld.cpp

=> this will create tasks.json in the .vscode folder and open it in the editor.

=> replace the contents with the following

		{
			"version": "2.0.0",
			"tasks": [
				{
					"type": "cppbuild",
					"label": "C/C++: clang++ build active file",
					"command": "/usr/bin/clang++",
					"args": [
						"-std=c++20",
		        		"-stdlib=libc++",
						"-fdiagnostics-color=always",
						"-g",
						"${workspaceFolder}/*.cpp",
						"-o",
						"${fileDirname}/${fileBasenameNoExtension}"
					],
					"options": {
						"cwd": "${fileDirname}"
					},
					"problemMatcher": [
						"$gcc"
					],
					"group": {
						"kind": "build",
						"isDefault": true
					},
					"detail": "compiler: /usr/bin/clang++"
				}
			]
		}


# @Vitthal some notes for you

-------------------

# This is the compiler command that will be run

"command": "/usr/bin/clang++"


# We are using C++20 (available only if you get the latest versions of the compiler)

# IMPORTANT: Everything in this journey we should be able to run with C++17 so if that
# is the version that they have, that is what should be specified in this file
# It is ok to use C++17 for all demos in this learning path

		"-std=c++20",
		"-stdlib=libc++"

# also note that we want to compile all the files of the workspace folder

		"-g",
		"${workspaceFolder}/*.cpp" 

# The output will be stored in a file with the same name as the cpp file with the main()

		"-o",
		"${fileDirname}/${fileBasenameNoExtension}"

# setting "isDefault": true will let you build using shift+cmd+B (keyboard shortcut). If you set it to false 
# you will need to go to the main menu > Terminal > Run Build Task.


Please just show the equivalent tasks.json file for Windows
-----------------------------------------------------------

@Shejo please upload the Windows tasks.json file to the folder for this demo

-- Just show the Windows tasks.json file in SublimeText so Windows users can see what this looks like



Running the build
------------------

=> Make sure that hello_world.cpp is the active file in the VS code editor.

=> to run the build task that you defined in tasks.json go to Terminal -> Run Build Task ...


=> Hit enter and then run

ls -l

./hello_world


-- Change the code just a build_tasks

  std::cout << "Hello C++ World!" << "\n";



=> to run the build task that you defined in tasks.json press shift+cmd+B 


./hello_world


Using c_cpp_properties.json
----------------------------

=> open command palette using shift+cmd+P and search for c/c++: edit configurations (UI)

=> scroll down to c++ standards and change it to c++ 20

=> after you make this change a file c_cpp_properties.json is created in the .vscode folder. The contents are as follows

{
    "configurations": [
        {
            "name": "Mac",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "macFrameworkPath": [
                "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks"
            ],
            "compilerPath": "/usr/bin/clang",
            "cStandard": "c17",
            "cppStandard": "c++20",
            "intelliSenseMode": "macos-clang-x64"
        }
    ],
    "version": 4
}


















































