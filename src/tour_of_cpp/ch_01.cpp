#include <complex>
#include <iostream>
#include <string>

double d1 = 2.3;
double d2 = 3.4;
using namespace std;

complex<double> c1 = complex<double>(d1, d2);

namespace tour_of_cpp_01 {
#include <iostream>
#include <string>

    void fct(int arg)
    {
        std::string motto{"hello world"};

        std::cout << motto << '\n';
    }
}
