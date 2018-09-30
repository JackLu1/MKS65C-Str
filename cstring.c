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
    char dest1[6] = "foo";
    char source1[] = "bar";
    printf("source: %s\n", source1);
    printf("dest: %s\n", dest1);
    strcat(dest1, source1);
    printf("result: %s\n", dest1);
 

    printf("\nmystrcat test\n");
    char dest2[6] = "foo";
    char source2[] = "bar";
    printf("source: %s\n", source2);
    printf("dest: %s\n", dest2);
    mystrcat(dest2, source2);
    printf("result: %s\n", dest2);

    return 0;
}

