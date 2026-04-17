#include "string.h"
//1) strlen
int strlen(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
//2) Concatenation
    void strcat(char dest[], char src[]){
    int i = strlen(dest); // dest এর শেষ index
    int j = 0;

    while(src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}
//3) Substring
void substring(char str[], char sub[], int start, int end){
    int i, j=0;

    for(i=start; i<=end; i++){
        sub[j] = str[i];
        j++;
    }

    sub[j] = '\0';
}
