/*
Question Link: https://docs.google.com/document/d/1uSQUXrcYMZ0q_ZsDDI23NDwBrdsnwKVm/edit
*/
#include<bits/stdc++.h>
using namespace std;
class Restaurant{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
private:
    int total_tax=0;
    int total_bill=0;
public:
    void set_total_tax(int tax){
    total_tax+=tax;
    }
    int get_total_tax(){
    return total_tax;
    }
    void set_total_bill(int total){
    total_bill+=total;
    }
    int get_total_bill(){
    return total_bill;
    }
};



//Restaurant Input
void restaurant_input(Restaurant *restaurant){
int n=4;
//Take Input
for(int i=0; i<n; i++){
    cout<<"Enter food "<<i+1<<" Info"<<endl;
    cout<<"food item code: ";
    cin>>restaurant->food_item_codes[i];
    cout<<"food item name: ";
    cin>>restaurant->food_item_names[i];
    cout<<"food item price: ";
    cin>>restaurant->food_item_prices[i];
}
//Display Output
cout<<"===============Make Bill==============="<<endl;
cout<<"Item Code"<<"        "<<"Item Name"<<"       "<<"Item Price"<<endl;
for(int i=0; i<n; i++){
    cout<<restaurant->food_item_codes[i]<<"                 "<<restaurant->food_item_names[i]<<"                "<<restaurant->food_item_prices[i]<<endl;
}
}



//Customer Input
void customer_input(Restaurant *restaurant){
int table_num, total_items;
cout<<"Enter the table no: ";
cin>>table_num;
cout<<"Enter the Number of total items: ";
cin>>total_items;
int item_no[total_items], item_quantity[total_items];
for(int i=0; i<total_items; i++){
    cout<<"Enter Item "<<i+1<<" Code: ";
    cin>>item_no[i];
    cout<<"Enter Item "<<i+1<<" Quantity: ";
    cin>>item_quantity[i];
}
//customer invoice
cout<<"=======================Invoice==================="<<endl;
cout<<"Code"<<"     "<<"Item"<<"    "<<"Price"<<"       "<<"Quantity"<<"      "<<"Sub Total"<<endl;
for(int i=0; i<total_items; i++){
    for(int j=0; j<4; j++){
        if(item_no[i]==restaurant->food_item_codes[j]){
            int total=restaurant->food_item_prices[j]*item_quantity[i];
            int tax=(total*5)/100;
            int total_bill=total+tax;
            restaurant->set_total_tax(tax);
            restaurant->set_total_bill(total_bill);
            cout<<restaurant->food_item_codes[j]<<"     "<<restaurant->food_item_names[j]<<"        "<<restaurant->food_item_prices[j]<<"           "<<item_quantity[i]<<"          "<<total<<endl;
        }
    }
}
cout<<"TAX"<<"                                          "<<restaurant->get_total_tax()<<endl;
cout<<"-------------------------------------------------------"<<endl;
cout<<"Total Bill                           "<<restaurant->get_total_bill();
}
int main(){
    Restaurant restaurant;
    restaurant_input(&restaurant);
    customer_input(&restaurant);
}
