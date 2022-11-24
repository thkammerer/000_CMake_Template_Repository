#include "something.hpp"
#include <iostream>

using namespace std;

void find_greatest_number( int a, int b, int c ) {
    if( (a >= b) && (b >= c) ) {
        cout << " a (" << a << ") is greater or equal than b (" << b << ")" << endl;
    }
    else {
        cout << " a (" << a << ") is smaller than b (" << b << ")" << endl;
    }
}
