#pragma once
#include <iostream>
#include <string>

using namespace std;

class Overcoat
{
	double price;
	//В идеале конечно стоило реализовать ENUM типов, но так как мне лень вспоминать что к этому относится.. Та и впринципе я ленивый.. 
	string type;
	
	public:
		Overcoat(string type, double price) {
			this->type = type;
			this->price = price;
		}
		
		double getPrice() const { return price; }
		string getType() const { return type; }

		friend ostream& operator<<(ostream& os, const Overcoat& coat) {
			os << "Overcoat{type: \"" << coat.getType() << "\", price: \"" << coat.getPrice() << "\"}";
			return os;
		}
		
		bool operator==(const Overcoat& coat) const;
		Overcoat& operator=(const Overcoat& coat);
		bool operator>(const Overcoat& coat) const;
		bool operator<(const Overcoat& coat) const;
};

