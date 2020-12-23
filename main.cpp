#include <iostream>
#include <vector>
#include "vector.h"

using namespace std;

int main()
{
    Vector vec1 = Vector(std::vector<double> {8.218, -9.341});
    Vector vec2 = Vector(std::vector<double> {7.119, 8.215});
    Vector vec3 = Vector(std::vector<double> {1.671,-1.012, -0.318});


    vec1+ Vector(std::vector<double> {-1.129, 2.111});
    vec2- Vector(std::vector<double> {-8.223, 0.878});

    vec3*7.41;
    cout << vec1.print();
    cout << vec2.print();
    cout << vec3.print();



    //cout << vec.getDim()<< endl;
    return 0;
}
