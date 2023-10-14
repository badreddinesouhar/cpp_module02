/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:06:45 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/14 12:07:07 by bsouhar          ###   ########.fr       */
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
