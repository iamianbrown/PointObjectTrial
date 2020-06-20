/*
	Create a Point Object
	Ian Brown
	June 18 2020
*/

#include <ostream>
#include <iostream>
using namespace std;


class Point
{
	public:
		Point(double xval = 0.0, double yval = 0.0)
		{
			x = xval, y = yval;
		}
		double getx()
		{
			return x;
		}
		double gety()
		{
			return y;
		}
		void setx(double v)
		{
			x = v;
		}
		void sety(double v)
		{
			y = v;
		}
		Point operator+ (const Point & p)
		{
			Point sum;
			sum.x = this->x + p.x;
			sum.y = this->y + p.y;
			return sum;
		}
		friend ostream& operator<<(ostream& out, Point& p);
	private:
		double x, y;
};
ostream& operator<< (ostream& out, Point& p)
{
	out << "( " << p.getx() << " , " << p.gety() << " )";
	return out;
}
int main(void)
{
	Point point1 = {1.2, 9};
	Point point2 = {4.2, 0.1};
	cout << point1 + point2 << endl;
	return 0;
}
