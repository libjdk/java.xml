#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.transform_89_SRCS)
file(GLOB classes.javax.xml.transform_89_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.transform_89_HEADERS}) 
list(LENGTH classes.javax.xml.transform_89_SRCS classes.javax.xml.transform_89_SRCS_LENGTH)
if(classes.javax.xml.transform_89_SRCS_LENGTH)
	add_library(classes.javax.xml.transform_89 OBJECT "${classes.javax.xml.transform_89_SRCS}" "${classes.javax.xml.transform_89_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.transform_89)
endif()