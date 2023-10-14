/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:15:14 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/14 14:09:27 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        Fixed x;
        Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& point);
        Fixed getY() const { return y; }
        Fixed getX() const { return x; }
        Point& operator = (const Point& point);
        ~Point();
        bool bsp( Point const a, Point const b, Point const c, Point const point);
};


#endif