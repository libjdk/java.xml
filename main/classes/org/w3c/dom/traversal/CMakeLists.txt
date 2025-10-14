#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.w3c.dom.traversal_SRCS)
file(GLOB classes.org.w3c.dom.traversal_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.w3c.dom.traversal_HEADERS}) 
list(LENGTH classes.org.w3c.dom.traversal_SRCS classes.org.w3c.dom.traversal_SRCS_LENGTH)
if(classes.org.w3c.dom.traversal_SRCS_LENGTH)
	add_library(classes.org.w3c.dom.traversal OBJECT "${classes.org.w3c.dom.traversal_SRCS}" "${classes.org.w3c.dom.traversal_HEADERS}")
	jcpp_enable_bigobj(classes.org.w3c.dom.traversal)
endif()