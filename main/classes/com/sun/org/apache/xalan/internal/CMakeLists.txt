#machine generated

add_subdirectory("extensions")
add_subdirectory("lib")
add_subdirectory("res")
add_subdirectory("templates")
add_subdirectory("utils")
add_subdirectory("xsltc")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache.x_8_SRCS)
file(GLOB classes.com.sun.org.apache.x_8_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache.x_8_HEADERS}) 
list(LENGTH classes.com.sun.org.apache.x_8_SRCS classes.com.sun.org.apache.x_8_SRCS_LENGTH)
if(classes.com.sun.org.apache.x_8_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache.x_8 OBJECT "${classes.com.sun.org.apache.x_8_SRCS}" "${classes.com.sun.org.apache.x_8_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache.x_8)
endif()