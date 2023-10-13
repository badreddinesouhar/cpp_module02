#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->_fixed = fixed.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed = raw;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed;
}

Fixed::Fixed(const int f) {
    std::cout << "Int constructor called" << std::endl;
    _fixed = (f << scale);
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    _fixed = f * (double)(1<<scale);
}

float Fixed::toFloat( void ) const {
    return((double)_fixed / (double)(1<<scale));
}

int Fixed::toInt( void ) const {
    return (_fixed >> scale);
}

std::ostream& operator << (std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}