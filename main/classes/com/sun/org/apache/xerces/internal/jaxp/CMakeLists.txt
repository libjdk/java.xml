#machine generated

add_subdirectory("datatype")
add_subdirectory("validation")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._44_SRCS)
file(GLOB classes.com.sun.org.apache._44_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._44_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._44_SRCS classes.com.sun.org.apache._44_SRCS_LENGTH)
if(classes.com.sun.org.apache._44_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._44 OBJECT "${classes.com.sun.org.apache._44_SRCS}" "${classes.com.sun.org.apache._44_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._44)
endif()