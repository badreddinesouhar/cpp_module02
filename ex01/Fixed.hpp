/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:55:17 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/12 13:49:40 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
  private:
    int _fixed;
    static const int i;
  public:
  Fixed();
  Fixed(const Fixed &fixed);
  Fixed(const int param);
  Fixed(const float n);
  ~Fixed();
  
  Fixed & operator = (const Fixed &fixed);
  void setRawBits(int const raw);
  int getRawBits() const;
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif