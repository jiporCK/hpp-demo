#include <iostream>
#include "include/Product.hpp"
#include "include/ProductService.hpp"

using namespace std;

void menu() {
    cout << "===========" << endl;
    cout << "1. Add product" << endl;
    cout << "2. List products" << endl;
    cout << "3. Delete product by id" << endl;
    cout << "0. Exit" << endl;
}

int main() {
    ProductService productService;

    int op;
    do {
        menu();
        cout << "Enter an option: ";
        cin >> op;

        if (op == 0) {
            cout << "Exiting..." << endl;
            return 0;
        }

        switch (op) {
            case 1: {
                string name;
                double price;
                int qty;
                
                cout << "Enter product name: ";
                cin.ignore(); // Clear the newline from previous input
                getline(cin, name); // Use getline to handle spaces
                
                cout << "Enter product price: ";
                cin >> price;
                
                cout << "Enter product qty: ";
                cin >> qty;
                
                productService.addProduct(Product(name, price, qty));
                cout << "Product added successfully!" << endl;
                break;
            }
            case 2: {
                productService.listProducts();
                break;
            }
            case 3: {
                int id;
                cout << "Enter product ID to delete: ";
                cin >> id;
                productService.deleteProductById(id);
                cout << "Delete functionality not implemented yet." << endl;
                break;
            }
            default:
                cout << "Invalid option!" << endl;
        }

    } while (op != 0);

    return 0;
}