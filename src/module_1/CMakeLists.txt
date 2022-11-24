set( MY_SOURCES 
# insert sources
     src_1.cpp
)

set( MY_PUBLIC_HEADERS 
# insert headers
     src_1.hpp
)

# to reference internal used headers
# set( MY_PRIVATE_HEADERS 
#
# )

set( TARGET_NAME
# rename library name
     module_1
)

add_library( ${TARGET_NAME}  ${MY_SOURCES}  )
target_include_directories( ${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )

install( TARGETS ${TARGET_NAME}  DESTINATION lib )
install( FILES ${MY_PUBLIC_HEADERS} DESTINATION include )
