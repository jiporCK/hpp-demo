#ifndef PRODUCTSERVICE_HPP
#define PRODUCTSERVICE_HPP

#include "../include/Product.hpp"
#include <vector>

class ProductService {
private:
    std::vector<Product> products; 

public:
    void addProduct(const Product& product);
    void listProducts() const;
    bool deleteProductById(int id);

};

#endif