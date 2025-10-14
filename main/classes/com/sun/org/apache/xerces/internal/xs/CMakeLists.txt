#machine generated

add_subdirectory("datatypes")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._55_SRCS)
file(GLOB classes.com.sun.org.apache._55_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._55_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._55_SRCS classes.com.sun.org.apache._55_SRCS_LENGTH)
if(classes.com.sun.org.apache._55_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._55 OBJECT "${classes.com.sun.org.apache._55_SRCS}" "${classes.com.sun.org.apache._55_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._55)
endif()