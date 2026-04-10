#include<bits/stdc++.h>
using namespace std;

class Shop {
public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];

private:
    int total_income;

public:
    Shop() {
        total_income = 0;
    }

    // setter for income
    void set_income(int amount) {
        total_income += amount;
    }

    // getter for income
    int get_income() {
        return total_income;
    }

    // show all products
    void show_products(int n) {
        cout << "\nAvailable Products:\n";
        for(int i = 0; i < n; i++) {
            cout << i+1 << ". "
                 << product_name[i]
                 << " | Price: " << product_price[i]
                 << " | Quantity: " << product_quantity[i]
                 << endl;
        }
    }

    // buy product
    /*void buy_product(int index, int qty) {
        if(product_quantity[index] >= qty) {
            product_quantity[index] -= qty;
            int cost = product_price[index] * qty;
            set_income(cost);
            cout << "Purchase successful! Cost = " << cost << endl;
        } else {
            cout << "Not enough quantity available.\n";
        }
    }*/
};

int main() {
    Shop shop;
    int n;

    cout << "Enter number of products (max 10): ";
    cin >> n;

    // take input
    for(int i = 0; i < n; i++) {
        cout << "\nProduct " << i+1 << " Info\n";
        cout << "Name: ";
        cin >> shop.product_name[i];

        cout << "Price: ";
        cin >> shop.product_price[i];

        cout << "Quantity: ";
        cin >> shop.product_quantity[i];
    }

    int choice, qty;
    char again = 'y';

    while(again == 'y') {
        shop.show_products(n);

        cout << "\nSelect product number: ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> qty;

        /*shop.buy_product(choice - 1, qty);

        cout << "\nBuy again? (y/n): ";
        cin >> again;*/
    }

    cout << "\nTotal Income of Shop: " << shop.get_income() << endl;
    return 0;
}
