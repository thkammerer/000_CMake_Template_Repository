#include "triangle.hpp"
#include "geometrie_error.hpp"
#include <cmath>

Triangle::Triangle( double a, double b, double c )
    : a_( a )
    , b_( b )
    , c_( c ) {

    if ( ( a >= b + c ) || ( b >= a + c ) || ( c >= a + b ) ) {
        throw GeometryError( "no triangle" );
    }
}

double Triangle::get_a() const {
    return a_;
}

double Triangle::get_b() const {
    return b_;
}

double Triangle::get_c() const {
    return c_;
}

double Triangle::get_alpha() const {
    double cos_alpha = ( a_ * a_ - b_ * b_ - c_ * c_ ) / (2 * b_ * c_ );
    return std::acos( cos_alpha );
}
