# Structure in C language

## Overview
In this project, we are surfacing with the basic functions in the language C.

## Get Started with C
1. Git clone the repository
```bash
git clone https://github.com/champion19/C-santigo.git
```

2. Install your preference IDE
Example:
 - [Visual Studio Code](https://code.visualstudio.com/download)
 - [Sublime Test](https://www.sublimetext.com/3)
 - [Intellij Idea](https://www.jetbrains.com/idea/download/?section=mac)

 3. Open this project into your preference IDE
 ```bash
  cd C-santigo
  ```

  4. Install dependencies
  - Go to [Download Compiler](https://sourceforge.net/projects/mingw/)
  - Hit clic **Download** button.
  - Set in dowloads section , execute it and hit **install** button.
  - Go to All the packages, select from package  **"mingw32.gcc"**.
     - ```mingw32-gcc bin```
     - ```mingw32-gcc dev```
     - ```mingw32-gcc doc```
     - ```mingw32-gcc lang```
     - ```mingw32-gcc info```
     - ```mingw32-gcc lic```
  - Go to **install section** on top right.
  - Select **Apply changes**,hit **Apply**.
  - The main program should be in the local disk(C:) in the folder bin with the name **mingw32-gc**.

## Adding commands
- Go to **"this device"**
- Hit **right click** on the mouse  and hit **"properties"**.
- hit **"advanced configuration of the system"**.
- acces **"environment variables"**.
- look for **"path"**.
- hit **"edit"**,if you have windows 10 the route appears "C:\MinGW\bin", if you have other versions of windows,the same route should have a semicolon before or after writting it.
- hit **"accept"** three times.
- restart your terminal and type **"gcc"**.

## say hello world

- Open your favorite idle, sublime text or visual studio code.
- Add new project or folder.
- Create a new file and type helloworld.c in the powershell.

## Important lines in every file
```
##include<stdio.h>
int main()
{
printf("Hola Mundo");
return 0;
}
```

- The **"main function"** of  every program in C ,starts its execution inside the parenthesis.
- **"printf("")":**  To print a line of characters, formated data,messagess or the value of the variables in the console.
- **"scanf("",&)":** To read formated data from the entrance and storage them in variables or obtain data entered  by the user.
- In order to see it from the terminal, locate your folder and hit **ls** in a Mac,to list your files;if you have windows, use **dir**.
- In order to enter to your directory using windows use cd, it stands for "change directory"

## Compile and execute files in MacOS

In order to run files with C you must:
- Compile and save them, use this command in the powershell " gcc filename.c -o filename.out"(any name that you desire) and hit enter.
- Type "./filename.out", the name you entered before, filename.out

## Execute and compile files in windows
- To run a file with c use this command, gcc filename.c filename.exe
- To run it, use gcc filename.exe
