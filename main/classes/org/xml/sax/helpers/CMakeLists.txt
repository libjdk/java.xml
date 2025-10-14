#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.xml.sax.helpers_SRCS)
file(GLOB classes.org.xml.sax.helpers_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.xml.sax.helpers_HEADERS}) 
list(LENGTH classes.org.xml.sax.helpers_SRCS classes.org.xml.sax.helpers_SRCS_LENGTH)
if(classes.org.xml.sax.helpers_SRCS_LENGTH)
	add_library(classes.org.xml.sax.helpers OBJECT "${classes.org.xml.sax.helpers_SRCS}" "${classes.org.xml.sax.helpers_HEADERS}")
	jcpp_enable_bigobj(classes.org.xml.sax.helpers)
endif()