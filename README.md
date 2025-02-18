# Disk Simulation Read Me File

All changes to the code will be tracked in this readme file, with each section corresponding to a new version of the program tracked using git. Features were developed in the develop branch before being merged back into main. Everytime a change is documented in this file the corresponding the git tag for that commit will be shown alongside it. These changes will also be recorded using a remote repository at https://github.com/Associated-Nebulocity/Test-2

## Reconstructing the Header Files (1.1)

Header files system.h and disk.h were reconstructed using sections 3.1 and 3.2 of the provided reference manual as well as their dependencies which from section 4 of the reference manual. 
The completed header files were then merged with the main branch.

## Fixing disk.cpp (1.2)

The implimentation of the distance function in disk.cpp was fixed by adding the distance calculation into the distance function implimentation.

## Fixing system.cpp (1.3)

The dependencies of system.cpp was fixed by updating to include the system.h header file.
The implimentation of the uniform class was added.

## ReadMe update (1.4)

The readme file was updated to include more details about previous changes.

## Fixing main.cpp (1.5)

The dependencies of main.cpp were fixed by adding system.h

## Compiling and Running the Code (1.6)

2 more commits were required to update the README file and fix issues with the code in main.cpp.

A makefile was then written so that the all of the cpp files could be compiled at once by simply typing make into the terminal, the executable is called disksim. Once the code had compiled running the executable by writing ./disksim in the terminal, the python file view.py was used to visualise the results. An animated figure was produced that showed the disks starting lined up on the left side of a box before slowly dispersing throughout the box at random. The disks appeared to behave as expected, colliding with the walls of the box and not overlapping with each other. This is the behaviour our code was expected to produce.

The completed code was then merged with the main branch