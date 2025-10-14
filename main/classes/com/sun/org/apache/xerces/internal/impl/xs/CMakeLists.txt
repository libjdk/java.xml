#machine generated

add_subdirectory("identity")
add_subdirectory("models")
add_subdirectory("opti")
add_subdirectory("traversers")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._38_SRCS)
file(GLOB classes.com.sun.org.apache._38_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._38_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._38_SRCS classes.com.sun.org.apache._38_SRCS_LENGTH)
if(classes.com.sun.org.apache._38_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._38 OBJECT "${classes.com.sun.org.apache._38_SRCS}" "${classes.com.sun.org.apache._38_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._38)
endif()