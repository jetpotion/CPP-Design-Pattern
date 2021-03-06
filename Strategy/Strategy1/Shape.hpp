#include <ostream>
#include <string>
#include <sstream>
#include <iostream>
#include <memory>
#ifndef  SHAPE_HPP
#define  SHAPE_HPP

class Shape
{
public:
	Shape() = default;  // Default constructor
	virtual ~Shape() = default;
	Shape(const Shape& shp) = default;  // Copy constructor
	Shape(Shape&& source) = default;
	Shape& operator=(Shape&& source) = default;
	Shape& operator=(const Shape& shp) = default;  // Assignment operator
	//Shape is now a ABSTRACT CLASS
	virtual  std::string toString() const = 0;
	//Overload tostring
	friend std::ostream& operator<<(std::ostream& os, const Shape& shape);
	virtual std::shared_ptr<Shape> clone() const = 0;
};

#endif // ! SHAPE_HPP