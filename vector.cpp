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
