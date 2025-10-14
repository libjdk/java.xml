#machine generated

add_subdirectory("dom2dtm")
add_subdirectory("sax2dtm")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._59_SRCS)
file(GLOB classes.com.sun.org.apache._59_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._59_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._59_SRCS classes.com.sun.org.apache._59_SRCS_LENGTH)
if(classes.com.sun.org.apache._59_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._59 OBJECT "${classes.com.sun.org.apache._59_SRCS}" "${classes.com.sun.org.apache._59_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._59)
endif()