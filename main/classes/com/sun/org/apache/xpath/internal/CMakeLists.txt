#machine generated

add_subdirectory("axes")
add_subdirectory("compiler")
add_subdirectory("functions")
add_subdirectory("jaxp")
add_subdirectory("objects")
add_subdirectory("operations")
add_subdirectory("patterns")
add_subdirectory("res")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._70_SRCS)
file(GLOB classes.com.sun.org.apache._70_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._70_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._70_SRCS classes.com.sun.org.apache._70_SRCS_LENGTH)
if(classes.com.sun.org.apache._70_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._70 OBJECT "${classes.com.sun.org.apache._70_SRCS}" "${classes.com.sun.org.apache._70_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._70)
endif()