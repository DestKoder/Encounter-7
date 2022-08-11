#pragma once
#include <iostream>
#include <string>

using namespace std;

class Flat
{
	int square;
	double price;

	public:
		Flat(int square, double price) {
			this->square = square;
			this->price = price;
		}

		int getSquare() const { return square; }
		double getPrice() const { return price; }

		friend ostream& operator<< (ostream & os, const Flat & flat) {
			os << "Flat{square: \"" << flat.getSquare() << "\", price: \"" << flat.getPrice() << "\"}";
			return os;
		}

		bool operator==(const Flat& flat) const;
		bool operator>(const Flat& flat) const;
		bool operator<(const Flat& flat) const;

		Flat& operator=(const Flat& flat);
};

