//Null Pointers
#include<stdio.h>
int main(){
int *pt;//Null POinter
printf("%p\n",pt);
char str[]="Hello";
char *first=&str[0];
char *third=&str[3];
printf("%d\n",&str);//6422026
printf("%d\n",first);//6422026
printf("%d\n",third);//6422029



char *ch=strchr(str,'l');
printf("%d\n",ch);
printf("%d\n",ch-first);

}
