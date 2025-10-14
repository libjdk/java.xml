#machine generated

add_subdirectory("stream")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.xml.internal_SRCS)
file(GLOB classes.com.sun.xml.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.xml.internal_HEADERS}) 
list(LENGTH classes.com.sun.xml.internal_SRCS classes.com.sun.xml.internal_SRCS_LENGTH)
if(classes.com.sun.xml.internal_SRCS_LENGTH)
	add_library(classes.com.sun.xml.internal OBJECT "${classes.com.sun.xml.internal_SRCS}" "${classes.com.sun.xml.internal_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.xml.internal)
endif()