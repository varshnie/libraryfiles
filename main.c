#include<stdio.h>
#include<stdlib.h>
#include "stringcat.h"
#include "stringcopy.h"
#include "strncopy.h"
#include "strreverse.h"
#include "strtoken.h"
#include "strchar.h"
#include "memcopy.h"
#include "memmove.h"


int main() 

{
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char* result = stringcat(str1, str2);
    printf("%s\n", result);
    free(result);
  
  
    char a[]="hello";
    char* b=NULL;
    b=stringcopy(b,a);
    printf("%s",b);
  
  
     char a[]="this is a ball";
     char b[50];
     strncopy(b,a,7);
     printf("%s",b);
     
  
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    strrev(str);
    printf("Reversed string: %s\n", str);
    
  
  
    char str[]="hello world";
    char a=' ';
    char* res=strtoken(str,a);
    printf("%s",res);
  
    char str[] = "hello world";
    char* result = strchar(str, 'o');
    printf("Result: %s\n", result);
    free(result);
  
    char str1[20] = "Hello, world!";
    char str2[20];
    int n = sizeof(str1);
    memcopy(str2, str1, n);
    printf("Copied string: %s\n", str2);
    
  
   char str[] = "abcdefg";
   memmovee(str + 2, str, strlen(str) + 1);
   printf("Result: %s\n", str);
   return 0;
  
  
  
  
 }


    
}
