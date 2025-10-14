#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.xpath_SRCS)
file(GLOB classes.javax.xml.xpath_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.xpath_HEADERS}) 
list(LENGTH classes.javax.xml.xpath_SRCS classes.javax.xml.xpath_SRCS_LENGTH)
if(classes.javax.xml.xpath_SRCS_LENGTH)
	add_library(classes.javax.xml.xpath OBJECT "${classes.javax.xml.xpath_SRCS}" "${classes.javax.xml.xpath_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.xpath)
endif()