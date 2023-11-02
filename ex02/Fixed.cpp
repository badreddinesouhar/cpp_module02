/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:07:27 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/02 09:56:56 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Fixed Fixed::operator+(const Fixed& fixed) const {
    return Fixed(this->_fixed + fixed._fixed);
}

Fixed Fixed::operator*(const Fixed& fixed) const {
    float a = (static_cast<float>(this->_fixed) / (1 << 4) ) * ((fixed._fixed) / (1 << 4)) / (1 << 8);
    return Fixed(a);
}

Fixed Fixed::operator-(const Fixed& fixed) const {
    return Fixed(this->_fixed - fixed._fixed);
}

Fixed Fixed::operator/(const Fixed& fixed) const {
    float i = ((static_cast<float>(this->_fixed) * 256)) / ((fixed._fixed) << 8);
    return(Fixed(i));
}

bool Fixed::operator<(const Fixed& fixed) const {
    return(this->_fixed < fixed._fixed);
}

bool Fixed::operator>(const Fixed& fixed) const {
    return(this->_fixed > fixed._fixed);
}

bool Fixed::operator!=(const Fixed& fixed) const {
    return(this->_fixed != fixed._fixed);
}

bool Fixed::operator==(const Fixed& fixed) const {
    return(this->_fixed == fixed._fixed);
}

bool Fixed::operator>=(const Fixed& fixed) const {
    return(this->_fixed >= fixed._fixed);
}

bool Fixed::operator<=(const Fixed& fixed) const {
    return(this->_fixed <= fixed._fixed);
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    this->_fixed++;
    return (tmp);
}

Fixed Fixed::operator++() {
    this->_fixed++;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    this->_fixed--;
    return (tmp);
}

Fixed Fixed::operator--() {
    this->_fixed--;
    return (*this);
}

const Fixed& Fixed::min(const Fixed& fixed, const Fixed& fixed1) {
    if (fixed < fixed1)
        return (fixed);
    return (fixed1);
}

const Fixed& Fixed::max(const Fixed& fixed, const Fixed& fixed1) {
    if (fixed > fixed1)
        return (fixed);
    return (fixed1);
}

Fixed& Fixed::min(Fixed& fixed, Fixed& fixed1) {
    if (fixed < fixed1)
        return (fixed);
    return (fixed1);
}

Fixed& Fixed::max(Fixed& fixed, Fixed& fixed1) {
    if (fixed > fixed1)
        return (fixed);
    return (fixed1);
}