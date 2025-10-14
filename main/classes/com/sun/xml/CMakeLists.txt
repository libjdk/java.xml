#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.xml_SRCS)
file(GLOB classes.com.sun.xml_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.xml_HEADERS}) 
list(LENGTH classes.com.sun.xml_SRCS classes.com.sun.xml_SRCS_LENGTH)
if(classes.com.sun.xml_SRCS_LENGTH)
	add_library(classes.com.sun.xml OBJECT "${classes.com.sun.xml_SRCS}" "${classes.com.sun.xml_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.xml)
endif()