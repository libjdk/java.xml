#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.datatype_SRCS)
file(GLOB classes.javax.xml.datatype_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.datatype_HEADERS}) 
list(LENGTH classes.javax.xml.datatype_SRCS classes.javax.xml.datatype_SRCS_LENGTH)
if(classes.javax.xml.datatype_SRCS_LENGTH)
	add_library(classes.javax.xml.datatype OBJECT "${classes.javax.xml.datatype_SRCS}" "${classes.javax.xml.datatype_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.datatype)
endif()