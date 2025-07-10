#include "../include/ProductService.hpp"
#include "../include/Product.hpp"
#include <iostream>

void ProductService::addProduct(const Product& product) {
    products.push_back(product);
    std::cout << "Product added successfully!" << std::endl;
}

void ProductService::listProducts() const {
    for (const auto& p: products) {
        std::cout << "======| Product Info |======" << std::endl;
        std::cout << "ID    : " << p.getId() << std::endl;
        std::cout << "Name  : " << p.getName() << std::endl;
        std::cout << "Price : " << p.getPrice() << std::endl;
        std::cout << "Qty   : " << p.getQty() << std::endl;
    }
}

bool ProductService::deleteProductById(int id) {
    for (auto it = products.begin(); it != products.end(); it++) {
        if (it->getId() == id) {
            products.erase(it);
            std::cout << "Product deleted successfully" << std::endl;
            return true;
        }
    }
    std::cout << "Product not found " << std::endl;
    return false;
}