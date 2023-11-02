/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:07:31 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/02 09:10:11 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _fixed;
        static const int scale = 8;
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
        Fixed operator + (const Fixed& fixed) const;
        Fixed operator * (const Fixed& fixed) const;
        Fixed operator-(const Fixed& fixed) const;
        Fixed operator/(const Fixed& fixed) const;
        bool operator<(const Fixed& fixed) const;
        bool operator<=(const Fixed& fixed) const;
        bool operator>=(const Fixed& fixed) const;
        bool operator==(const Fixed& fixed) const;
        bool operator!=(const Fixed& fixed) const;
        bool operator>(const Fixed& fixed) const;
        Fixed operator++(int);
        Fixed operator++();
        Fixed operator--(int);
        Fixed operator--();
        static Fixed& min(Fixed& fixed, Fixed& fixed1);
        static const Fixed& min(const Fixed& fixed, const Fixed& fixed1);
        static Fixed& max(Fixed& fixed, Fixed& fixed1);
        static const Fixed& max(const Fixed& fixed, const Fixed& fixed1);
};

std::ostream& operator << (std::ostream& out, const Fixed& fixed);

#endif