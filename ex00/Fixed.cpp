/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:56:01 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/15 09:03:18 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::i = 8;

Fixed::Fixed() : _fixed(0) {
    std::cout << "Default constructor called" << std::endl;    
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor is called" << std::endl;
}

Fixed &Fixed::operator =(const Fixed &fixed) {
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &fixed)
        this->_fixed = fixed.getRawBits();
    return *this;
}

void Fixed::setRawBits (int const raw) {
    this->_fixed = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed;
}