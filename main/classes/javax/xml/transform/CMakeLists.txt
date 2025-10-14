#machine generated

add_subdirectory("dom")
add_subdirectory("sax")
add_subdirectory("stax")
add_subdirectory("stream")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.transform_SRCS)
file(GLOB classes.javax.xml.transform_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.transform_HEADERS}) 
list(LENGTH classes.javax.xml.transform_SRCS classes.javax.xml.transform_SRCS_LENGTH)
if(classes.javax.xml.transform_SRCS_LENGTH)
	add_library(classes.javax.xml.transform OBJECT "${classes.javax.xml.transform_SRCS}" "${classes.javax.xml.transform_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.transform)
endif()