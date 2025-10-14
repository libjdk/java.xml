#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.xml.interna_84_SRCS)
file(GLOB classes.com.sun.xml.interna_84_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.xml.interna_84_HEADERS}) 
list(LENGTH classes.com.sun.xml.interna_84_SRCS classes.com.sun.xml.interna_84_SRCS_LENGTH)
if(classes.com.sun.xml.interna_84_SRCS_LENGTH)
	add_library(classes.com.sun.xml.interna_84 OBJECT "${classes.com.sun.xml.interna_84_SRCS}" "${classes.com.sun.xml.interna_84_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.xml.interna_84)
endif()