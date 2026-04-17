#include<stdio.h>
#include "string.h"
int main(){
//1) strlen
char a[100]="madamalsanapayywtrwgjj";
printf("%d\n",strlen(a));
//2) strcat
char A[100]="Hello ";
char B[]="World";
strcat(A,B);
printf("%s\n",A);
//3) Substrin
char str[] = "Hello World";
char sub[20];
substring(str, sub, 3, 5);
printf("%s", sub);
}
