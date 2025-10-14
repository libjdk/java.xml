#machine generated

add_subdirectory("sax")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.xml_SRCS)
file(GLOB classes.org.xml_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.xml_HEADERS}) 
list(LENGTH classes.org.xml_SRCS classes.org.xml_SRCS_LENGTH)
if(classes.org.xml_SRCS_LENGTH)
	add_library(classes.org.xml OBJECT "${classes.org.xml_SRCS}" "${classes.org.xml_HEADERS}")
	jcpp_enable_bigobj(classes.org.xml)
endif()