#machine generated

add_subdirectory("events")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.stream_SRCS)
file(GLOB classes.javax.xml.stream_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.stream_HEADERS}) 
list(LENGTH classes.javax.xml.stream_SRCS classes.javax.xml.stream_SRCS_LENGTH)
if(classes.javax.xml.stream_SRCS_LENGTH)
	add_library(classes.javax.xml.stream OBJECT "${classes.javax.xml.stream_SRCS}" "${classes.javax.xml.stream_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.stream)
endif()