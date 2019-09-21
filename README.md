# Creation of linux library (4 iosys)

## Step 1 :
### Creation of `main.c` , `fonction.c` and `fonction.h`.
### [You can take a look at source code here ! ](https://github.com/cherchariwahb/libraryLinux/tree/master/SourceCode)
## Step 2 :
### Creation of `main.o`.
```console
 $ gcc -c main.c
```
![GitHub Logo](/images/1.png)

## Step 3 : 
### Creation of `fonction.o`.
```console
 $ gcc -c fonction.c
```
![GitHub Logo](/images/2.png)
## Step 4 : 
### Runing the program.
```console
 $ gcc main.o fonction.o -o prog
```
![GitHub Logo](/images/3.png)
## Step 5 :
### Creation of `Makefile` and execute it.
### [You can take a look at source code here ! ](https://github.com/cherchariwahb/libraryLinux/blob/master/SourceCode/Makefile)
```console
 $ make clean
 $ make install
 $ make mrproper 
 $ make
```
![GitHub Logo](/images/4.png)
## Step 6 : 
### Creation of static linux library .


```console
 $ gcc -c fonction.c
 $ ar -rv libcalculator.a fonction.o
 $ sudo cp libcalculator.o /usr/lib/ 
 $ sudo cp fonction.h /usr/include/
```
> change `" "` with `< >` at `main.c` 
```console
 $ sudo ldconfig
 $ gcc main.c -o prog -lcalculator -static 
 ```
 ![GitHub Logo](/images/5.png)
 ## Step 6 : 
### Creation of dynamic linux library .
```console
 $ gcc -c -fPIC fonction.c
 $ nm fonction.o
 $ gcc -o libcalculator.so -shared fonction.o
 $ sudo cp libcalculator.so /usr/lib/
 $ sudo ldconfig
 $ gcc main.c -o prog -lcalculator
 $ ./prog
```
![GitHub Logo](/images/6.png)
