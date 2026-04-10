//Pointer Arithmatic
#include<stdio.h>
int main(){
int value=10;
int *p=&value;
printf("%d\n",p);//6422036
printf("%d\n",*p);//10

p++;
printf("%d\n",p);//6422040(int 4 bit নেয়। তাই 1 increment করায় 4 ঘর আগায় যায়। কিন্তু charachter 1 bit নিয়েই থাকে। তাই  char data-র address 1 increment করলে 1 ঘরই আগাবে।)
printf("%d\n",*p);//6422040

int val1, val2;
int *p1=&val1;
int *p2=&val2;
printf("%d\n",p1);//6422016
printf("%d\n",p2);//6422012
printf("%d\n",p1-p2);//1
}
