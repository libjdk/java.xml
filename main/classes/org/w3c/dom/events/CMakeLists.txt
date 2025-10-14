#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.w3c.dom.events_SRCS)
file(GLOB classes.org.w3c.dom.events_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.w3c.dom.events_HEADERS}) 
list(LENGTH classes.org.w3c.dom.events_SRCS classes.org.w3c.dom.events_SRCS_LENGTH)
if(classes.org.w3c.dom.events_SRCS_LENGTH)
	add_library(classes.org.w3c.dom.events OBJECT "${classes.org.w3c.dom.events_SRCS}" "${classes.org.w3c.dom.events_HEADERS}")
	jcpp_enable_bigobj(classes.org.w3c.dom.events)
endif()