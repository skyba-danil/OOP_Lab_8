#include "rectangle.h"
#include <iostream>

using namespace std;

rectangle* rectangle::instance_ = nullptr;


rectangle::rectangle(const double height, const double width)
{
	if (height < 0 || width < 0)
	{
		throw "Incorrect value!";
	}
	this->height_ = height;
	this->width_ = width;
}

rectangle::rectangle()
{
	this->height_ = 0;
	this->width_ = 0;
}



rectangle* rectangle::instance(const double height, const double width)
{
	if (nullptr == rectangle::instance_)
	{
		instance_ = new rectangle(height, width);
	}
	return instance_;
}

rectangle::~rectangle()
{
	cout << "rectangle::~rectangle()" << endl;
}

void rectangle::set_width(const double value)
{
	if (value < 0)
	{
		throw "Incorrect value of width_!";
	}
	width_ = value;
}

void rectangle::set_height(const double value)
{
	if (value < 0)
	{
		throw "Incorrect value of height_!";
	}
	height_ = value;
}

double rectangle::get_width() const
{
	return width_;
}

double rectangle::get_height() const
{
	return height_;
}

double rectangle::perimeter() const
{
	return 2 * (width_ + height_);
}

double rectangle::square() const
{
	return (width_) * (height_);
}


void rectangle::operator-=(const double n)
{
	this->width_ = this->width_ - n;
	this->height_ = this->height_ - n;
}

ostream& operator << (ostream& out, const rectangle& obj)
{
	out << "rectangle(" << obj.height_ << ", " << obj.width_ << ")" << "; square = " << obj.square() << "; perimeter = " << obj.perimeter();
	return out;
}

istream& operator>>(istream& in, rectangle& obj)
{
	cout << "Print height_: ";
	in >> obj.height_;
	if (obj.height_ < 0) throw "Incorrect value of height_!";
	cout << "Print width_: ";
	in >> obj.width_;
	if (obj.width_ < 0) throw "Incorrect value of width_!";
	return in;
}
