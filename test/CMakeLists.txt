# Prepare "Catch" library for other executables
set( CATCH_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../extern/unit_test/Catch2/single_include/catch2 )
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

# Make test executable
set( TEST_SOURCES 
     test_main.cpp 
)

string( CONCAT TARGET_NAME ${CMAKE_PROJECT_NAME} _tests )

add_executable( ${TARGET_NAME} ${TEST_SOURCES} )

# Link INTERFACE-Library to Test
target_link_libraries( ${TARGET_NAME} Catch )

# link libraries to test
# change this to your module name
target_link_libraries( ${TARGET_NAME} module_1 )

# install binary to bin directory
install( TARGETS ${TARGET_NAME} DESTINATION test )
