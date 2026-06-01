#include<stdio.h>
#include "string.h"
int main(){
//1. Strlength
char a[]="Bangladesh Open University.";
printf("1) String Length: %d\n",Strlen(a));
//2. Concat
char a2[]="Hello ";
char a3[]="BD";
Strcat(a2,a3);
printf("2) %s\n",a2);
//3. Substring
char a4[]="Hello Beautiful BD";
char sub[20];
Substring(a4,sub,2,9);
printf("3) %s\n",sub);
//4. String Compare
char original[] = "Does really programming is an interesting thing?";
char copy[100];
Strcpy(copy,original);
printf("4) %s\n",copy);
//5. Strcomp
char s1[]="Apple";
char s2[]="Banana";
printf("5) %d\n",Strcmp(s1,s2));
//6. Strrev
char r[]="Hello BD";
Strrev(r);
printf("6) %s\n",r);
//7. String Insert
char s3[]="Hello BD";
char s4[]="__Beautiful__";
int pos=5;
Strinsert(s3,s4,5);
printf("7) %s\n",s3);
//8. Delete
char content[100]="Hello Beautiful BD";
Strdelete(content, 5,9);
printf("8) %s\n",content);
//09. Trim
char text[]="         Habijabi BD        ";
Strtrim(text);
printf("9) %s\n",text);
//10. Replace
char str[100] = "Hello World";
Strreplace(str, "World", "C");
printf("10) %s", str);
}

