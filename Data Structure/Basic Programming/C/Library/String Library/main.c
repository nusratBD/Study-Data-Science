#include<stdio.h>
#include "string.h"
int main(){
//1) strlen
char a[100]="madamalsanapayywtrwgjj";
printf("1) %d\n",Strlen(a));
//2) strcat
char A[100]="Hello ";
char B[]="World";
Strcat(A,B);
printf("2) %s\n",A);
//3) Substring
char str[] = "Hello World";
char sub[20];
Substring(str, sub, 3, 5);
printf("3) %s\n", sub);
//4) Strcpy
char original[] = "Does really programming is an interesting thing?";
char copy[100];
Strcpy(copy, original);
printf("4) %s\n", copy);
//5) Strcom
char s1[] = "apple";
char s2[] = "apricot";
printf("5) %d\n", Strcmp(s1,s2));
//6) Strrev
char r[] = "Hello";
Strrev(r);
printf("6) %s\n", r);
//7) String Insert
char main[200] = "HelloWorld";
char insert[] = "_Beautiful_";
int pos=5;
Strinsert(main, insert, pos);
printf("7) %s\n", main);
//8) Delete
char content[100] = "HelloBeautifulWorld";
Strdelete(content, 5, 9);
printf("8) %s\n", content);
//9)Trim
char text[100]="    Hello Bangladesh    ";
Strtrim(text);
printf("9) %s\n",text);
//10)Replace
char main_text[100] = "Hello World";
Strreplace(str, "World", "C");
printf("10) %s", str);

}

