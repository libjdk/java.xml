#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.stream.util_SRCS)
file(GLOB classes.javax.xml.stream.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.stream.util_HEADERS}) 
list(LENGTH classes.javax.xml.stream.util_SRCS classes.javax.xml.stream.util_SRCS_LENGTH)
if(classes.javax.xml.stream.util_SRCS_LENGTH)
	add_library(classes.javax.xml.stream.util OBJECT "${classes.javax.xml.stream.util_SRCS}" "${classes.javax.xml.stream.util_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.stream.util)
endif()