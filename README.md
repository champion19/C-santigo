# to clone the repository

git clone https://github.com/champion19/C-santigo.git

## Installling C

In order to install and use C language,go to https://sublimetext.com/3, since we are goint to use gcc, select your opertaing system, OS X for mac ,Windows,Windows64,Ubuntu etc

## Installing C using Windows

Go to www.mingw.org , select download installer,that activates the sourceforge instantly ,once it's done dowmñoading and set in downloads,hit it and push the button install,next the button continue,if you decide to reinstall it, it takes some tine.

Go to All the packages and select of package  mingw32.gcc,the classes bin,dev,doc,lang ,info and lic then go to install section on top right and select Apply changes,hit Apply and wait for a couple of minutes.

The main program should be in the local disk(C:) in the folder bin with the name mingw32-gc.
## Adding commands
Type cmd in order to access the local variables, if the program doesn´t recognize the command gcc,you should go to this device, access properties, hit advanced configuration of the system, environment variables,look for "path",hit edit,if you have windows 10 the route appears "C:\MinGW\bin", if you have other versions of windows,the same route should have a semicolon before or after writting it;hit accept three times,restart your terminal and try again.


## say hello world

open your favorite idle ,sublime text or visual studio code,add new project or folder, create a new file and type helloworld.c in the powershell

## Important lines in every file

we are going to be using these lines so many times
"##include <stdio.h>" then write the function main() with {}, inside the brackets always type "return 0;" like this:
##include<stdio.h>
int main()
{
printf("Hola Mundo");
return 0;
}
the main function is essential,every program in C starts its execution inside it.
if you want to print a line of characters use, printf("");
if you want to read formated data from the entrance and storage them in variables or obtain data entered  by the user,you can use scanf("",&);
if you want to see it from the terminal, locate your folder and hit ls in a Mac,to list your files;if you have windows, use dir.
In order to enter to your directory using windows use cd, it stands for "change directory"

## Compile and execute files in MacOS

In order to run files with c you must compile and save them, use this command in the powershell " gcc filename.c -o filename.out"(any name that you desire) and hit enter.
then type "./filename.out", the name you entered before, filename.out

## execute and compile files in windows
if you want to run a file with c use this command gcc filename.c filename.exe
in order to run it, use gcc filename.exe



