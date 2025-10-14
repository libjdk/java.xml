#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.parsers_SRCS)
file(GLOB classes.javax.xml.parsers_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.parsers_HEADERS}) 
list(LENGTH classes.javax.xml.parsers_SRCS classes.javax.xml.parsers_SRCS_LENGTH)
if(classes.javax.xml.parsers_SRCS_LENGTH)
	add_library(classes.javax.xml.parsers OBJECT "${classes.javax.xml.parsers_SRCS}" "${classes.javax.xml.parsers_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.parsers)
endif()