#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.xml.interna_81_SRCS)
file(GLOB classes.com.sun.xml.interna_81_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.xml.interna_81_HEADERS}) 
list(LENGTH classes.com.sun.xml.interna_81_SRCS classes.com.sun.xml.interna_81_SRCS_LENGTH)
if(classes.com.sun.xml.interna_81_SRCS_LENGTH)
	add_library(classes.com.sun.xml.interna_81 OBJECT "${classes.com.sun.xml.interna_81_SRCS}" "${classes.com.sun.xml.interna_81_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.xml.interna_81)
endif()