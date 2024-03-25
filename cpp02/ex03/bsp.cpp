#include "Point.hpp"

bool is_inside(Point a, Point b, Point c, Point p)
{
	if (((a.getX() - p.getX()) * (b.getY() - p.getY())) - ((a.getY() - p.getY()) * (b.getX() - p.getX())) > 0)
	{
		if (((b.getX() - p.getX()) * (c.getY() - p.getY())) - ((b.getY() - p.getY()) * (c.getX() - p.getX())) > 0)
		{
			if (((c.getX() - p.getX()) * (a.getY() - p.getY())) - ((c.getY() - p.getY()) * (a.getX() - p.getX())) > 0)
				return (true);
			return (false);
		}
		return (false);
	}
	if (((b.getX() - p.getX()) * (c.getY() - p.getY())) - ((b.getY() - p.getY()) * (c.getX() - p.getX())) < 0)
	{
		if (((c.getX() - p.getX()) * (a.getY() - p.getY())) - ((c.getY() - p.getY()) * (a.getX() - p.getX())) < 0)
			return (true);
		return (false);
	}
	return (false);
}