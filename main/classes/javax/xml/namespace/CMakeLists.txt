#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.namespace_SRCS)
file(GLOB classes.javax.xml.namespace_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.namespace_HEADERS}) 
list(LENGTH classes.javax.xml.namespace_SRCS classes.javax.xml.namespace_SRCS_LENGTH)
if(classes.javax.xml.namespace_SRCS_LENGTH)
	add_library(classes.javax.xml.namespace OBJECT "${classes.javax.xml.namespace_SRCS}" "${classes.javax.xml.namespace_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.namespace)
endif()