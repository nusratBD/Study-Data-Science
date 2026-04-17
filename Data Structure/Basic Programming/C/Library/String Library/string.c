#include "string.h"
//1) strlen
int Strlen(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
//2) Concatenation
    void Strcat(char dest[], char src[]){
    int i = Strlen(dest); // dest এর শেষ index
    int j = 0;

    while(src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}
//3) Substring
void Substring(char str[], char sub[], int start, int end){
    int i, j=0;

    for(i=start; i<=end; i++){
        sub[j] = str[i];
        j++;
    }

    sub[j] = '\0';
}
//4) Strcpy
void Strcpy(char copy[], char original[]){
    int i = 0;

    while(original[i] != '\0'){
        copy[i] = original[i];
        i++;
    }

    copy[i] = '\0';
}
//5) Strcom
int Strcmp(char s1[], char s2[]){
    int i = 0;

    while(s1[i] != '\0' && s2[i] != '\0'){

        if(s1[i] != s2[i]){
            return s1[i] - s2[i];
        }

        i++;
    }

    return s1[i] - s2[i];
}
//6) String Reverse
void Strrev(char str[]){
    int i = 0;
    int j = 0;

    // length বের করা
    while(str[j] != '\0'){
        j++;
    }
    j = j - 1;   // last index

    // swap
    while(i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}
//7) Insert
void Strinsert(char str[], char insert[], int pos){
    char temp[200];
    int i = 0, j = 0;

    // 1. copy before pos
    for(i = 0; i < pos; i++){
        temp[i] = str[i];
    }

    // 2. insert string
    for(j = 0; insert[j] != '\0'; j++){
        temp[i] = insert[j];
        i++;
    }

    // 3. copy remaining original string
    for(j = pos; str[j] != '\0'; j++){
        temp[i] = str[j];
        i++;
    }

    temp[i] = '\0';

    // copy back to original
    i = 0;
    while(temp[i] != '\0'){
        str[i] = temp[i];
        i++;
    }
    str[i] = '\0';
}
//8. Delete
void Strdelete(char content[], int start, int len){
    int i;

    for(i = start; content[i+len] != '\0'; i++){
        content[i] = content[i+len];
    }

    content[i] = '\0';
}
//9. Trim
void Strtrim(char text[]){
int start=0;
int start2=0;
//Begining space
while(text[start]==' '){
    start++;
}
//cout<<start<<endl;
//Total Length
while(text[start2]!='\0'){
    start2++;
}
//cout<<start2<<endl;
start2--;
//Remove End Space
while(text[start2]==' '){
    start2--;
}
//cout<<start2<<endl;
int j=0;
//Update the text after triming begining & end ending space
int temp[start2-start];
for(int i=start; i<=start2; i++){
    text[j]=text[i];
    j++;
}
text[j] = '\0';
}
//Replace
void Strreplace(char str[], char old[], char new[]){
    int i=0, j, k;

    while(str[i] != '\0'){

        // match check
        for(j=0; old[j] != '\0'; j++){
            if(str[i+j] != old[j])
                break;
        }

        // full match হলে
        if(old[j] == '\0'){

            // delete
            Strdelete(str, i, j);

            // insert
            Strinsert(str, new, i);

            return;
        }

        i++;
    }
}
