#machine generated

add_subdirectory("grammars")
add_subdirectory("parser")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._51_SRCS)
file(GLOB classes.com.sun.org.apache._51_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._51_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._51_SRCS classes.com.sun.org.apache._51_SRCS_LENGTH)
if(classes.com.sun.org.apache._51_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._51 OBJECT "${classes.com.sun.org.apache._51_SRCS}" "${classes.com.sun.org.apache._51_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._51)
endif()