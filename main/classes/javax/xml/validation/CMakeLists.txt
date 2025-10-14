#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.validation_SRCS)
file(GLOB classes.javax.xml.validation_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.validation_HEADERS}) 
list(LENGTH classes.javax.xml.validation_SRCS classes.javax.xml.validation_SRCS_LENGTH)
if(classes.javax.xml.validation_SRCS_LENGTH)
	add_library(classes.javax.xml.validation OBJECT "${classes.javax.xml.validation_SRCS}" "${classes.javax.xml.validation_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.validation)
endif()