//Pointers & Constant
#include<stdio.h>
int main(){
int N=10;
int *p=&N;
*p=20;
printf("%d\n",N);//20(*p আর N same)

const int a = 10;
int *p2=&a;
*p2=100;//*p2 দিয়ে value update allowed
printf("%d\n",a);//100
printf("%d\n",p2);

const int b=20;
const int *p3=&b;
//*p3=200; not allowed.
p3=&a;//allowed
printf("%d\n",p3);

int c = 10;
int *const p4 = &c;
*p4 = 20;
//printf("%d",c);

const int d=10;
const int *const p5=&d;
//*p5=1 Not allowed
//p5=&c Not allowed
}
