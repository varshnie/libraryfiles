#include<stdio.h>
#include<stdlib.h>
#include "library.h"


int main() 

{
    char a[50] = "Hello, ";
    char b[50] = "world!";
    stringcat(a,b);
    printf("%s",a);
    
    
    
    char c[50] = "Hello, ";
    char d[50] = "world!";
    stringcopy(c,d);
    printf("%s",c);

  

  
     char e[]="this is a ball";
     char f[50];
     strncopy(f,e,7);
     printf("%s",f);
     
  
    char g[]="This is a ball";
    strrev(g);
    printf(" %s", g);
    
  
    char h[]="hello world";
    char i=' ';
    char* res=strtoken(h,i);
    printf("%s",res);
    free(res);
    
  
    char j[] = "hello world";
    char* result = strchar(j, 'o');
    printf("Result: %s\n", result);
   
  
    char str1[20] = "Hello, world!";
    char str2[20];
    memcopy(str2, str1, sizeof(str1));
    printf("Copied string: %s\n", str2);
    
  
   char str[] = "abcdefg";
   memmovee(str + 2, str, strlen(str) + 1);
   printf("Result: %s\n", str);
   return 0;
  
  
  
  
 }


    
