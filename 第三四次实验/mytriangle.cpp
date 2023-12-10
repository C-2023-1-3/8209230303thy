#include <cmath>

bool is_valid(double side1, double side2, double side3)
{
	int temp = 0;
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		temp = true;
	}
	return temp;
}

double _area(double side1, double side2, double side3)
{
	double s = 0, area = 0;
	s = (side1 + side2 + side3) / 2;
    area= sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}