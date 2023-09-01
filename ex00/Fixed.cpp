/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:56:01 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/01 13:36:31 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "constrctor is called" << std::endl;    
}

void Fixed::setRawBits (int const raw) {
    Fixed::i = raw;
}

Fixed::~Fixed() {
    std::cout << "destructor is called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits called" << std::endl;
    // return (0);
    return (Fixed::i);
}