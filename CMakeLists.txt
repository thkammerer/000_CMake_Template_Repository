# Specify the minimum version for CMake
cmake_minimum_required( VERSION 3.0 FATAL_ERROR )

# Project name
project( project_name )

# enable c++ language
enable_language( CXX )

#  c++ compiler flags for GNU compiler
if( CMAKE_CXX_COMPILER_ID MATCHES GNU )
    set( CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Weffc++ -Wextra" )
    set( CMAKE_CXX_FLAGS_DEBUG   "-O0 -g3" )
    set( CMAKE_CXX_FLAGS_RELEASE "-O2" )
#    set( CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage" )
endif()

#  c++ compiler flags for Clang compiler
if( CMAKE_CXX_COMPILER_ID MATCHES Clang )
    set( CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Weffc++ -Wextra" )
    set( CMAKE_CXX_FLAGS_DEBUG   "-O0 -g3" )
    set( CMAKE_CXX_FLAGS_RELEASE "-O2" )
#    set( CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage" )
endif()

#  c++ compiler flags for Microsoft VC compiler
if( CMAKE_CXX_COMPILER_ID MATCHES MSVC )
    set( CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS} /std:c++17 /W4" )
    set( CMAKE_CXX_FLAGS_DEBUG   "/O0 /Zi" )
    set( CMAKE_CXX_FLAGS_RELEASE "/O2" )
endif()

# set ccache when available to boost compile time
find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache) # Less useful to do it for linking, see edit2
endif(CCACHE_FOUND)

# Automatically add the current source- and build directories to the include path.
SET( CMAKE_INCLUDE_CURRENT_DIR ON )

# subdirectories 
add_subdirectory( src )
add_subdirectory( test )

