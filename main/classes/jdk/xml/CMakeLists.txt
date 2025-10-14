#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.xml_SRCS)
file(GLOB classes.jdk.xml_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.xml_HEADERS}) 
list(LENGTH classes.jdk.xml_SRCS classes.jdk.xml_SRCS_LENGTH)
if(classes.jdk.xml_SRCS_LENGTH)
	add_library(classes.jdk.xml OBJECT "${classes.jdk.xml_SRCS}" "${classes.jdk.xml_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.xml)
endif()