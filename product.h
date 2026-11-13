#pragma once
#ifndef LAPRAIRIE_PRODUCT_H
#define LAPRAIRIE_PRODUCT_H

#include <string>

class Product {
private:
	double price;
	int discountPercent;
public:
	std::string name;

	Product(std::string name = "", double price = 0.0, int discountPercent = 0);

	void set_price(double);
	double get_price() const {return price;}

	void set_discount(int);
	int get_discount() const {return discountPercent;}

	double get_discount_ammount() const;
	double get_discount_price() const;
};

#endif
