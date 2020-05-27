#pragma once
#include <iostream>

using namespace std;

class rectangle
{
private:
	double width_;
	double height_;
	
	rectangle();
	rectangle(double, double);

	static  rectangle* instance_;
	
public:

	static rectangle* instance(const double height, const double width);
	
	~rectangle();

	void set_width(double value);
	void set_height(double value);
	double get_width() const;
	double get_height() const;
	
	double perimeter() const;
	double square() const;
	
	void operator -=(double);
	friend ostream& operator <<(ostream& out, const rectangle& obj);
	friend istream& operator >>(istream& in, rectangle& obj);
};
