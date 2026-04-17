#include<stdio.h>
#include "string.h"
int main(){
//1) strlen
char a[100]="madamalsanapayywtrwgjj";
printf("%d\n",Strlen(a));
//2) strcat
char A[100]="Hello ";
char B[]="World";
Strcat(A,B);
printf("%s\n",A);
//3) Substring
char str[] = "Hello World";
char sub[20];
Substring(str, sub, 3, 5);
printf("%s\n", sub);
//4) Strcpy
char original[] = "Does really programming is an interesting thing?";
char copy[100];
Strcpy(copy, original);
printf("%s\n", copy);
//5) Strcom
char s1[] = "apple";
char s2[] = "apricot";
printf("%d\n", Strcmp(s1,s2));
//6) Strrev
char r[] = "Hello";
Strrev(r);
printf("%s\n", r);
//7) String Insert
char main[200] = "HelloWorld";
char insert[] = "_Beautiful_";
int pos=5;
Strinsert(main, insert, pos);
printf("%s\n", main);
//8) Delete
char content[100] = "HelloBeautifulWorld";
Strdelete(content, 5, 9);
printf("%s\n", content);
//9)Trim
char text[100]="    Hello Bangladesh    ";
Strtrim(text);
printf("%s\n",text);
//10)Replace
char main_text[100] = "Hello World";
Strreplace(str, "World", "C");
printf("%s", str);

}

