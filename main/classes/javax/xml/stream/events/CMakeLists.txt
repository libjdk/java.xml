#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.stream.ev_85_SRCS)
file(GLOB classes.javax.xml.stream.ev_85_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.stream.ev_85_HEADERS}) 
list(LENGTH classes.javax.xml.stream.ev_85_SRCS classes.javax.xml.stream.ev_85_SRCS_LENGTH)
if(classes.javax.xml.stream.ev_85_SRCS_LENGTH)
	add_library(classes.javax.xml.stream.ev_85 OBJECT "${classes.javax.xml.stream.ev_85_SRCS}" "${classes.javax.xml.stream.ev_85_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.stream.ev_85)
endif()