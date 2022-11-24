#include "catch.hpp"
#include "something.hpp"

TEST_CASE( "test_find_greatest_number" ) {
    find_greatest_number( 1, 2, 3 );
    find_greatest_number( 1, 3, 2 );
    find_greatest_number( 2, 1, 3 );
    find_greatest_number( 2, 3, 1 );
    find_greatest_number( 3, 1, 2 );
    find_greatest_number( 3, 2, 1 );
}
