#include <stdio.h>

/**
* myStartupFun - applying the constructor
* attribute to the function
*/

void myStartupFun(void) __attribute__((constructor));

/**
* myStartupFun - print a statement
*/

void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
