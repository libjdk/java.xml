#machine generated

add_subdirectory("ref")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._58_SRCS)
file(GLOB classes.com.sun.org.apache._58_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._58_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._58_SRCS classes.com.sun.org.apache._58_SRCS_LENGTH)
if(classes.com.sun.org.apache._58_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._58 OBJECT "${classes.com.sun.org.apache._58_SRCS}" "${classes.com.sun.org.apache._58_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._58)
endif()