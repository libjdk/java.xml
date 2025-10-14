#machine generated

add_subdirectory("bootstrap")
add_subdirectory("events")
add_subdirectory("ls")
add_subdirectory("ranges")
add_subdirectory("traversal")
add_subdirectory("views")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.org.w3c.dom_SRCS)
file(GLOB classes.org.w3c.dom_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.org.w3c.dom_HEADERS}) 
list(LENGTH classes.org.w3c.dom_SRCS classes.org.w3c.dom_SRCS_LENGTH)
if(classes.org.w3c.dom_SRCS_LENGTH)
	add_library(classes.org.w3c.dom OBJECT "${classes.org.w3c.dom_SRCS}" "${classes.org.w3c.dom_HEADERS}")
	jcpp_enable_bigobj(classes.org.w3c.dom)
endif()