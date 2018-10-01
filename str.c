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
char * mystrncpy( char *dest, char *source, int n )
{
  while (*source && n--)
    {
      *dest++ = *source++;
    }
  *dest = 0;
}
int mystrcmp( char *s1, char *s2 )
{
  while (*s1 && *s2 && *s1 == *s2){
    s1++;
    s2++;
  }
  return *s1 - *s2;
}
char * mystrchr( char *s, char c )
{
  while (*s != c)
    if (!*s++)
	return 0;
  return s;
}
