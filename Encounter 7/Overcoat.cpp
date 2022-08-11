#include "Overcoat.h"

bool Overcoat::operator==(const Overcoat& coat) const {
	return this->getType()._Equal(coat.getType());
}

bool Overcoat::operator>(const Overcoat& coat) const {
	return price > coat.getPrice();
}

bool Overcoat::operator<(const Overcoat& coat) const {
	return price < coat.getPrice();
}

Overcoat& Overcoat::operator=(const Overcoat& coat) {
	this->price = coat.getPrice();
	this->type = coat.getType();

	return *this;
}

