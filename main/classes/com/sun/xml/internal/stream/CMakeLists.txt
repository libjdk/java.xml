#machine generated

add_subdirectory("dtd")
add_subdirectory("events")
add_subdirectory("util")
add_subdirectory("writers")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.xml.interna_79_SRCS)
file(GLOB classes.com.sun.xml.interna_79_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.xml.interna_79_HEADERS}) 
list(LENGTH classes.com.sun.xml.interna_79_SRCS classes.com.sun.xml.interna_79_SRCS_LENGTH)
if(classes.com.sun.xml.interna_79_SRCS_LENGTH)
	add_library(classes.com.sun.xml.interna_79 OBJECT "${classes.com.sun.xml.interna_79_SRCS}" "${classes.com.sun.xml.interna_79_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.xml.interna_79)
endif()