#include "Flat.h"

using namespace destkoder;

bool Flat::operator==(const Flat& flat) const {
	return square == flat.getSquare();
}

bool Flat::operator>(const Flat& flat) const {
	return price > flat.getPrice();
}

bool Flat::operator<(const Flat& flat) const {
	return price < flat.getPrice();
}

Flat& Flat::operator=(const Flat& flat) {
	square = flat.getSquare();
	price = flat.getPrice();

	return *this;
}