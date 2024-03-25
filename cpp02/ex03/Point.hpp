/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:07:38 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/03 22:37:26 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(float const x, float const y);
		Point(Point const &src);
		Point &operator=(Point const &rhs);
		Fixed getX(void) const;
		Fixed getY(void) const;
		~Point(void);
	private:
		Fixed const _x;
		Fixed const _y;
};

bool is_inside(Point a, Point b, Point c, Point p);

std::ostream &operator<<(std::ostream &o, Point const &rhs);
