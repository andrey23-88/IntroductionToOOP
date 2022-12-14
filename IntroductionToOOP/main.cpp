#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;

public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}

	void set_y(double y)
	{
		this->y = y;
	}
	
	//                Methods:
	double distance(const Point& other)
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;
	}
	void print()const
	{
		cout << "X=" << x << "\tY=" << y << endl;
	}
};

double distance(const Point& A, const Point& B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}

//#define STRUCT_POINT
#define DISTANCE_CHECK

void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT
	cout << "Hello OOP" << endl;
	int a; // обьявление переменной а типа инт
	Point A;// 
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;
	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif // STRUCT_POINT

#ifdef DISTANCE_CHECK
	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point B;
	B.set_x(7);
	B.set_y(8);
	cout << "Расстояние от точки 'A' до точки 'B' :\t " << A.distance(B) << endl;
	cout << "Расстояние от точки 'B' до точки 'A' :\t " << B.distance(A) << endl;
	cout << "Расстояние между точками 'A' и 'B' :\t" << distance(A, B) << endl;
	cout << "Расстояние между точками 'B' и 'A' :\t" << distance(B, A) << endl;
#endif // DISTANCE_CHECK
}