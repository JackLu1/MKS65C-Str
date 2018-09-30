#include <stdio.h>
#include <string.h>
#include "str.h"

int main(){
    char s1[256] = "stuyvesant"; 
    char s2[] = "science";
    char *s3 = "btech";

    printf("\nstrlen test\n");
    printf("length of %s: %d\n", s1, (int)strlen(s1)); //10
    printf("length of %s: %d\n", s2, (int)strlen(s2)); //7
    printf("length of %s: %d\n", s3, (int)strlen(s3)); //5
    
    printf("\nmystrlen test\n");
    printf("length of %s: %d\n", s1, mystrlen(s1)); //10
    printf("length of %s: %d\n", s2, mystrlen(s2)); //7
    printf("length of %s: %d\n", s3, mystrlen(s3)); //5

    printf("\nstrcat test\n");
    printf("concat %s and %s: %d\n", s1, strlen(s1)); //10
    printf("concat %s and %s: %d\n", s1, strlen(s1)); //10
    printf("concat %s and %s: %d\n", s1, strlen(s1)); //10
    
    return 0;
}

