#include <string>
#include <iostream>
#include <vector>
#include "product.h"


using namespace std;

void show_products(const vector<Products>& product)
{
	cout << "PRODUCTS\n";
	int number = 0;
	for (Product p : products)
	{
		cout << number++ << ") " << p.name << endl;
	}
	cout << endl;
}

void show_product(const Product& p)
{
	cout << "PRODUCT DATA\n"
		<< "Name: " << p.name << endl
		<< "Price: " << p.get_price() << endl
		<< "Discount Percent: " << p.get_discount() << endl
		<< "Discount Amount: " << p.get_discount_ammount() << endl
		<< "Discount Price: " << p.get_discount_price() << endl << endl;
}

int main()
{
	cout << "Welcome To The Product Viewer\n\n";

	vector<Product> products;
	products.push_back(Product("Cannon EOS R7", 899.99, 20));
	products.push_back(Product("R2D2", 999.99, 60));
	products.push_back(Product("Tooth Pick", 2.50, 0));
	products.push_back(Product("Chicken", 10.75, 0));

	show_products(Product);

	char choice = 'y';
	while (choice == 'y')
	{
		int number;
		cout << "Enter Product Number: ";
		cin >> number;

		if (number > 0 && number <= products.size())
		{
			Product p = products[number - 1];
			show_product(p);
		} else {
			cout << "There Is No Product With That Number\n\n";
		}

		cout << "View Another Product? (y/n)";
		cin >> choice;
	}
	return 0;
}

