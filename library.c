char* stringcat(const char* destination, const char* source) {
    int len1 ,len2;
    
    
    for (len1 = 0; destination[len1] != '\0'; len1++);
    for (len2 = 0; source[len2] != '\0'; len2++);

    char* result = (char*) malloc(sizeof(char) * (len1+len2+ 1));

    for (int i = 0; i < len1; i++) {
        result[i] = destination[i];
    }

    for (int i = 0; i < len2; i++) {
        result[len1 + i] = source[i];
    }

    result[len1+ len2] = '\0';

    return result;
}



char* stringcopy(char* destination, char* source) {
    int length;
    for(length = 0; source[length] != '\0'; length++);

    destination = (char*) malloc((length + 1) * sizeof(char));
    if (destination == NULL) 
    {
        printf("Error: memory allocation failed.\n");
        exit(1);
    }

    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
    return destination;
}


char* strncopy(char* des,char* src, int n)
{
 int i;
 for(i=0;i < n && src[i] !='\0';i++)
 {
    des[i] = src[i];
 }
 for (; i < n; i++)
 {
        des[i] = '\0';
 }

 return des;
    
}

char strrev(char* str) {
    int i, j;
    char temp;
    int len ;
    for(len=0;str[len] != '\0' ;len++);
    j = len -1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return *str;
}

char* strtoken(char* str, char sep)
{
    char* re;
    int length;
    for (length = 0; str[length] != '\0'; length++);
    re = (char*)malloc((length + 1) * sizeof(char));
   
    if (re == NULL) {
        printf("Error: memory allocation failed.\n");
        exit(1);
    }

    int i, j = 0;
    int in_word = 0;
    for (i = 0; str[i] != '\0'; i++) {   
        if (str[i] == sep) {
            re[j++] = str[i]; 
            in_word = 0; 
        } else {
            if (in_word == 0) {
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

    return dest;
}
 
    void* memcopy(void* dest, const void* src, int n) 
    {
    char* cdest = (char*)dest;
    char* csrc = (char*)src;
    for (int i = 0; i < n; i++) {
        cdest[i] = csrc[i];
    }
    return dest;
    }

