#include <iostream>
#include <vector>
#include "vector.h"

using namespace std;

int main()
{
    std::vector<double> v {1, 2, 3};
    Vector vec = Vector(v);
    Vector vec2 = Vector(std::vector<double> {1, 2, 3});
    Vector vec3 = Vector(std::vector<double> {-1, 2, 3});
    cout << vec.print();
    bool b = (vec == vec2);
    cout << b << endl;

    b = (vec == vec3);
    cout << b << endl;

    cout << vec.getDim()<< endl;
    return 0;
}
