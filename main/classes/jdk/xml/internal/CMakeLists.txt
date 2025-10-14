#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.xml.internal_SRCS)
file(GLOB classes.jdk.xml.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.xml.internal_HEADERS}) 
list(LENGTH classes.jdk.xml.internal_SRCS classes.jdk.xml.internal_SRCS_LENGTH)
if(classes.jdk.xml.internal_SRCS_LENGTH)
	add_library(classes.jdk.xml.internal OBJECT "${classes.jdk.xml.internal_SRCS}" "${classes.jdk.xml.internal_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.xml.internal)
endif()