#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include <string>

class Vector
{
public:
    Vector(std::vector<double> coord);
    std::vector<double> getCoordinates() const;
    unsigned long getDim() const;
    bool operator==(Vector v) const;
    std::string print()const;


private:
    std::vector<double>coordinates;
    unsigned long dimensions;
};

#endif // VECTOR_H
