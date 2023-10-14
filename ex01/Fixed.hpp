/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:07:14 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/14 12:07:15 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _fixed;
        static const int scale = 8; // 1/2^8 
    public:
        Fixed();
        Fixed(const int f);
        Fixed(const float f);
        Fixed(const Fixed& Fixed); 
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator = (const Fixed&);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator << (std::ostream& out, const Fixed& fixed);

#endif