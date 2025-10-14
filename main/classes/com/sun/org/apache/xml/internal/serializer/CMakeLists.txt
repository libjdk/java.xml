#machine generated

add_subdirectory("dom3")
add_subdirectory("utils")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._64_SRCS)
file(GLOB classes.com.sun.org.apache._64_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._64_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._64_SRCS classes.com.sun.org.apache._64_SRCS_LENGTH)
if(classes.com.sun.org.apache._64_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._64 OBJECT "${classes.com.sun.org.apache._64_SRCS}" "${classes.com.sun.org.apache._64_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._64)
endif()