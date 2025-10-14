#machine generated

add_subdirectory("dtm")
add_subdirectory("res")
add_subdirectory("serialize")
add_subdirectory("serializer")
add_subdirectory("utils")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._57_SRCS)
file(GLOB classes.com.sun.org.apache._57_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._57_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._57_SRCS classes.com.sun.org.apache._57_SRCS_LENGTH)
if(classes.com.sun.org.apache._57_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._57 OBJECT "${classes.com.sun.org.apache._57_SRCS}" "${classes.com.sun.org.apache._57_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._57)
endif()