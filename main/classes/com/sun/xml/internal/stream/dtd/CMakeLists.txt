#machine generated

add_subdirectory("nonvalidating")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.xml.interna_80_SRCS)
file(GLOB classes.com.sun.xml.interna_80_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.xml.interna_80_HEADERS}) 
list(LENGTH classes.com.sun.xml.interna_80_SRCS classes.com.sun.xml.interna_80_SRCS_LENGTH)
if(classes.com.sun.xml.interna_80_SRCS_LENGTH)
	add_library(classes.com.sun.xml.interna_80 OBJECT "${classes.com.sun.xml.interna_80_SRCS}" "${classes.com.sun.xml.interna_80_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.xml.interna_80)
endif()