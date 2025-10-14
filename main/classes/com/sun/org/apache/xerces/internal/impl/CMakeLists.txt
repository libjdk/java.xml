#machine generated

add_subdirectory("dtd")
add_subdirectory("dv")
add_subdirectory("io")
add_subdirectory("msg")
add_subdirectory("validation")
add_subdirectory("xpath")
add_subdirectory("xs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._26_SRCS)
file(GLOB classes.com.sun.org.apache._26_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._26_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._26_SRCS classes.com.sun.org.apache._26_SRCS_LENGTH)
if(classes.com.sun.org.apache._26_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._26 OBJECT "${classes.com.sun.org.apache._26_SRCS}" "${classes.com.sun.org.apache._26_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._26)
endif()