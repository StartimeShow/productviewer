#include <string>
#include <cmath>
#include <stdexcept>
#include "product.h"

using namespace std;

Product::Product(string p_name = "", double price, int discountPercent) {
	name = p_name;
	set_price(price);
	set_discount(discountPercent);
}

void Product::set_price(double p_price) {
	if (p_price >= 0.0)
	{
		price = round(p_price * 100) / 100;
	} else {
		throw invalid_argument("Price Cant Be Negative");
	}
}
void Product::set_discount(int p_discount) {
	if (p_discount >= 0 && p_discount <= 100)
	{
		discountPercent = p_discount;
	} else {
		throw invalid_argument("Percent Cant Be Negative");
	}
}

double Product::get_discount_ammount() const {
	double discountAmt = price * discountPercent / 100;
	return round(discountAmt * 100) / 100;
}

double Product::get_discount_price() const {
	double discountPrice = price - get_discount_ammount();
	return round(discountPrice * 100) / 100;
}
