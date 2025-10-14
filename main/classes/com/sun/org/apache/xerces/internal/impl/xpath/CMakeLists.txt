#machine generated

add_subdirectory("regex")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._36_SRCS)
file(GLOB classes.com.sun.org.apache._36_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._36_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._36_SRCS classes.com.sun.org.apache._36_SRCS_LENGTH)
if(classes.com.sun.org.apache._36_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._36 OBJECT "${classes.com.sun.org.apache._36_SRCS}" "${classes.com.sun.org.apache._36_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._36)
endif()