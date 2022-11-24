set( MY_SOURCES 
     main.cpp
)

string( CONCAT TARGET_NAME ${CMAKE_PROJECT_NAME} _main )

add_executable( ${TARGET_NAME} ${MY_SOURCES} )

# link libraries to exe 
# rename linked module names!
target_link_libraries( ${TARGET_NAME} module_1 )

# install binary to bin directory
install( TARGETS ${TARGET_NAME} DESTINATION bin )