#machine generated

add_subdirectory("ext")
add_subdirectory("helpers")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.xml.sax_SRCS)
file(GLOB classes.org.xml.sax_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.xml.sax_HEADERS}) 
list(LENGTH classes.org.xml.sax_SRCS classes.org.xml.sax_SRCS_LENGTH)
if(classes.org.xml.sax_SRCS_LENGTH)
	add_library(classes.org.xml.sax OBJECT "${classes.org.xml.sax_SRCS}" "${classes.org.xml.sax_HEADERS}")
	jcpp_enable_bigobj(classes.org.xml.sax)
endif()