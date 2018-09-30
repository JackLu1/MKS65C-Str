#include <stdio.h>
#include "str.h"

int mystrlen( char * s){
    int a = 0;
    while(*s++){a++;}
    return a;
}


char * mystrcat( char *dest, char *source ){
    char * ans = dest;
    while(*dest){dest++;} //iterate to terminating 0
    while(*dest++ = *source++);
    return ans;
}
