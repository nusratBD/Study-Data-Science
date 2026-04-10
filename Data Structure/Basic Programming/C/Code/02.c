/*Working with POinters
1) * কে বলা হয় dereferencing operator.
2)* pointer create করতে ইউজ হয়
3)* pointer(location) এ যে value আছে সেটা বের করতে ব্যাবহার হয়।
4)* address এর value বের করে।
5)& value এর address বের করে।
*/
#include<stdio.h>
int main(){
int* p;//integer pointer
int value;//integer value

printf("%p\n",p);
printf("%p\n",&p);
printf("%p\n",&value);//000000000061FE14

value=100;
printf("%p\n",&value);//000000000061FE14(Hex decimal address )

int value2=100;
int* p2=&value2;
printf("%d\n",p2);//6422024(int address)
printf("%d\n",*p2);//100

value2=200;
printf("%d\n",p2);//6422024
printf("%d\n",*p2);//200

*p2=300;
printf("%d\n",p2);//6422024
printf("%d\n",value2);//300
printf("%d\n",*p2);//300

int value3=400;
p2=&value3;
printf("%d\n",p2);//6422020
printf("%d\n",*p2);//400
printf("%d\n",*&value3);//400
}
