#include<bits/stdc++.h>
using namespace std;
class Shop
{
public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];
private:
    int total_income=0;
public:
    void setter(int price){
    total_income+=price;
    }
    int getter(){
    return total_income;}
};
void shop_owner_input(Shop *shop, int n){
for(int i=0; i<n; i++){
    cout<<"Product "<<i+1<<" Info: "<<endl;
    cout<<"Name: ";
    cin>>shop->product_name[i];
    cout<<"Price: ";
    cin>>shop->product_price[i];
    cout<<"Quantity: ";
    cin>>shop->product_quantity[i];
}
}
void available_product(Shop *shop, int n){
cout<<"Available Products: "<<endl;
for(int i=0; i<n; i++){
cout<<shop->product_name[i]<<" "<<shop->product_price[i]<<" "<<shop->product_quantity[i]<<" "<<"="<<" "<<shop->product_price[i]*shop->product_quantity[i]<<endl;
}
cout<<"========================="<<endl;
}
void user_input(Shop *shop, int total_products){
int total_bill=0;
cout<<"==========Customer Section=========="<<endl;
cout<<"Order Info: "<<endl;
cout<<"Total Item: ";
int n;
string name;
int quantity;
cin>>n;
for(int i=0; i<n; i++){
    cout<<"Item "<<i+1<<endl;
    cout<<"Name: ";
    cin>>name;
    cout<<"Quantity: ";
    cin>>quantity;


bool found=false;
//find product in shop
for(int j=0; j<total_products; j++){
    if(name==shop->product_name[j]){
        found=true;
        if(quantity<=shop->product_quantity[j]){
            int price=quantity*shop->product_price[j];
            total_bill+=price;
            shop->setter(price);
            shop->product_quantity[j]-=quantity;
            cout<<"Added "<<quantity<<" x"<<name<<" ="<<price<<endl;
        }
        else{
            cout<<"Not available."<<endl;
        }
        break;
    }
}
if(!found){
    cout<<"Product not found!"<<endl;
}
}
cout<<"Total Bill: "<<total_bill<<endl;
}
int main(){
    Shop shop;
cout<<"Enter number of products (max 10): ";
int n;
cin>>n;
    shop_owner_input(&shop, n);
cout<<"============================"<<endl;
    available_product(&shop, n);
    user_input(&shop,n);
}
