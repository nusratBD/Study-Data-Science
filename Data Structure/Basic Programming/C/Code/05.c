//Using pointers to pass by address in functions
void makeDouble(int *a){
*a *=2;
}
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int x=5;
makeDouble(&x);
printf("%d\n",x);

int a=5, b=10;
swap(&a, &b);
printf("a=%d b=%d",a,b);
}
