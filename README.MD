# Micromouse Team Alpha 2 2019 Codebase

This is the repository for UCSD IEEE Micromouse Team Alpha 2 run by Ajay Booter, Duy Pham, Tri Truong, Edward Chen, and Matthew Chan.

## Writing Code

```main.cpp``` contains the main code. Add you additional files to the main file using ```#include<file>``` and call the functions in your code.
```\drivers``` will contain all of the driver code.  This is code that interfaces directly with the Mouse subsystems thems (e.g. Motor driving, LED driving, etc.).
```\algo``` will contain all of the code for managin the maze algorithm.
```\lib``` will contain all the code to run the full mouse.

Make sure that you create both a ```.hpp``` file and a ```.cpp``` file when you are writing your code.  The ```.cpp``` file only needs to include your ```.hpp``` file and put all your other include statements inside the ```.hpp``` file.  Be sure to give the ```IFNDEF``` command in the ```.hpp``` file a unique name when you copy paste it.

There is an example ```.hpp``` and ```.cpp``` file inside ```\devices``` to show you how you should write the header and code files.  Be sure to fill in the block comment info at the top when you write the code.

## Compiling Code

To compile the code, follow these steps:
1. Make sure that you have all the files from the drive inside ```\2_10_19_Meeting_9\Library_Code.zip```.  Make sure that it is unzipped into the base folder of this repository (so there is no ```\Library_Code``` folder).
2. Make sure that you have added all the necessary ```.o``` files to the ```Makefile```.  On line 50, there is an example of how to add your ```.o``` files.  You need to add one for every single ```.cpp``` file you create otherwise it will not compile in the build.
3. In Git bash, run ```make``` in the base directory.  This will tell you if you have any errors.
4. When your code is fully error-free, it will create a ```MMTeamAlpha2Build.hex``` inside a new ```\BUILD``` folder.
5. Use the ST-Link utility and select this file to program the Mouse.

## Using Git

To make sure that we are all on the same page, we will be using Git and Github to do version control.  To clone this repository use:
```git clone https://github.com/mrchan64/MMTeamAlpha2.git```
When writing new code, make sure that the first thing you do is checkout to a new branch because you will NOT be able to pus to master:
```git checkout -b branchName```
When you have code you want to save:
```git add .```
```git commit -m "commit message"```
You can check the status of what you have committed and what has changed since your last commit:
```git status```
When you have something you want to push:
```git push -u origin branchName```
Finally, after your pull request has gone through on Github, make sure to go back to the master branch:
```git checkout master```
```git pull```
You can also see all your branches or delete a branch:
```git branch```
```git branch -D branchName```
Unstage all your added files:
```git reset```
If you have any issues, just push your code to a new branch and ask for help to resolve merge conflicts.