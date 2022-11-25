#include "catch.hpp"
#include "triangle.hpp"
#include "geometrie_error.hpp"

TEST_CASE( "Initializing some non rectangles", "[triangle]" ) {
    try {
        Triangle t( 1.0, 3.0, 2.0 );
        FAIL( "expected GeometryError not thrown" );
    }
    catch( GeometryError& execption ) {
    }

    try {
        Triangle t( 1.0, 0.5, 0.5 );
        FAIL( "expected GeometryError not thrown" );
    }
    catch( GeometryError& execption ) {
    }

    try {
        Triangle t( 1.0, 0.5, 1.5 );
        FAIL( "expected GeometryError not thrown" );
    }
    catch( GeometryError& execption ) {
    }

    try {
        Triangle t( 0, 0, 0 );
        FAIL( "expected GeometryError not thrown" );
    }
    catch( GeometryError& execption ) {
    }
}

TEST_CASE( "Initializing rectangles with negativ side", "[triangle]" ) {
    try {
        Triangle t( -1.0, -1.0, -1.0 );
        FAIL( "expected GeometryError not thrown" );
    }
    catch( GeometryError& execption ) {
    }

    try {
        Triangle t( -3.0, -4.0, -5.0 );
        FAIL( "expected GeometryError not thrown" );
    }
    catch( GeometryError& execption ) {
    }
}

TEST_CASE( "Initializing rectangle and check a, b, c", "[triangle]" ) {
    Triangle t( 2.0, 3.0, 4.0 );
    REQUIRE_THAT( t.get_a(), Catch::Matchers::WithinRel( 2.0, 1e-5 ) );
    REQUIRE_THAT( t.get_b(), Catch::Matchers::WithinRel( 3.0, 1e-5 ) );
    REQUIRE_THAT( t.get_c(), Catch::Matchers::WithinRel( 4.0, 1e-5 ) );    
}

TEST_CASE( "Rectangel get_alpha", "[triangle]" ) {
    Triangle t( 5, 3, 4 );
    REQUIRE_THAT( t.get_alpha(), Catch::Matchers::WithinRel( M_PI_4, 1e-5 ) );
}