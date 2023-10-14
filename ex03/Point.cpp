/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:15:16 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/14 14:12:28 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {
    x.setRawBits(0);
    y.setRawBits(0);
}

Point::Point(const Point& point) {
    *this = point;
}

Point& Point::operator = (const Point& point) {
    if (this != &point) {
        x = point.x;
        y = point.y;
    }
    return *this;
}

Point::~Point() {
    
}

Point::Point(const float f1, const float f2) {
    x = Fixed(f1);
    y = Fixed(f2);
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed f1 = (b.x - a.x) * (point.y - a.y) - (b.y - a.y) * (point.x - a.x);
    Fixed f2 = (c.x - b.x) * (point.y - b.y) - (c.y - b.y) * (point.x - b.x);
    Fixed f3 = (a.x - c.x) * (point.y - c.y) - (a.y - c.y) * (point.x - c.x);
    if ((f1 > 0 && f2 > 0 && f3 > 0) || (f1 < 0 && f2 < 0 && f3 < 0))
        return true;
    return false;
}