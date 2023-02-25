char* stringcat(char destination[], char source[]) {
    int len1, len2;

    for (len1 = 0; destination[len1] != '\0'; len1++);
    for (len2 = 0; source[len2] != '\0'; len2++);

    int j = len1;

    for (int i = 0; i < len2; i++) {
        destination[j++] = source[i];
    }

    destination[j] = '\0';

    return destination;
}


char* stringcopy(char* destination, char* source) {
    int length;
    for(length = 0; source[length] != '\0'; length++);
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
    return destination;
}


char* strncopy(char* destination,char* source, int n)
{
 int i;
 for(i=0;i < n && source[i] !='\0';i++)
 {
    destination[i] = source[i];
 }


    destination[i] = '\0';


 return destination;
    
}


char* strchar(char str[], char ch) {
    int i, j,len, count = -1;
    for(len=0;str[len] != '\0';len++); 
   
    for (i = 0; i < len; i++) {
        if (str[i] == ch) {
            count = i;
            break;
        }
    }
    
    if(count ==-1)
    {
        return str;
    }
    
    for (i = count, j = 0; i < len; i++, j++) {
        
        str[j] = str[i];
        
    }
    str[j] = '\0';
    return str;
}
 

char strrev(char* str) {
    int i, j;
    char temp;
    int len ;
    for(len=0;str[len] != '\0' ;len++);
    j = len -1;
    

    for (i = 0; i <=j/2; i++,j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return *str;
}



char* strtoken(char str[], char sep)
{
    char* re = malloc(50 * sizeof(char));
    if (re == NULL) {
        printf("Error: failed to allocate memory\n");
        exit(1);
    }
    int length;
    for (length = 0; str[length] != '\0'; length++);
    
    int i, j = 0;
    char b=' ';
    int in_word = 0;
    for (i = 0; str[i] != '\0'; i++) 
    {   
        if (str[i] == sep )
        {
            re[j++] = b; 
            in_word = 0; 
        }
        else 
        {
            if (in_word == 0)
            {
                \
                re[j++] = '\n'; 
                in_word = 1;
            }
            re[j++] = str[i];
        }
    }
    re[j] = '\0';
    return re;
}


void* memmovee(void* dest, const void* src, int n) {
    char* cdest = (char*)dest;
    char* csrc = (char*)src;
    char temp[n];

    for (int i = 0; i < n; i++) {
        temp[i] = csrc[i];
    }

    for (int i = 0; i < n; i++) {
        cdest[i] = temp[i];
    }
    
}


void memcopy(void *dest, void *src, int n) 
{ 

char *csrc = (char *)src; 
char *cdest = (char *)dest; 
  

for (int i=0; i<n; i++) 
    cdest[i] = csrc[i]; 
} 
