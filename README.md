# pImpl Starter
Starter files for in-lab pImpl activity including HelloWorld.h, HelloWorld.cpp, HelloWorldImpl.h, HelloWorldImpl.cpp, main.cpp, and Makefile

## To use:
ssh into CAEN :
```
  $ ssh uniqname@login-oncampus.engin.umich.edu
```
Once ssh-ed into CAEN, run:
```  
  $ module load gcc/9.1.0
```  
Clone the starter files:
```
  $ git clone https://github.com/eecs482/pImpl-starter.git
```
Take a look at `main.cpp` and complete the starter files so that it works as intended. Compile with:
```
  $ make
```
If you're finished, your results should look like:
```
  hello world 1
  hello world 2
  hello world 3
```
Be sure to look inside the Makefile and think about which .o files get recompiled when you make changes to HelloWorld.cpp, HelloWorldImpl.cpp, HelloWorldImpl.h, etc. Based on your answer, what is one of the benefits of using the pImpl idiom?
