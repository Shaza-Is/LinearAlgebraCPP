#include "vector.h"

Vector::Vector(std::vector<double> coord)
{
    coordinates = coord;
    dimensions = coord.size();
}

std::vector<double> Vector::getCoordinates() const
{
    return coordinates;
}

unsigned long Vector::getDim() const
{
    return dimensions;
}

bool Vector::operator==(Vector v) const
{
    return coordinates == v.getCoordinates();
}

void Vector::operator+(Vector v)
{
    for(unsigned i = 0; i < coordinates.size(); ++i) {
      coordinates[i] = coordinates[i] + v.getCoordinates()[i];
    }
}

void Vector::operator-(Vector v)
{
    for(unsigned i = 0; i < coordinates.size(); ++i) {
      coordinates[i] = coordinates[i] - v.getCoordinates()[i];
    }
}

void Vector::operator*(double c)
{
    for(unsigned i = 0; i < coordinates.size(); ++i) {
      coordinates[i] = c* coordinates[i];
    }
}

std::string Vector::print() const
{
    std::string s = "Vector: (";
    for(double n : coordinates)
    {
        s+= std::to_string(n);
        s+= ", ";
    }
    s.pop_back();
    s.pop_back();
    s+= ") \n";
    return s;
}
