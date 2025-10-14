#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.java_cup_SRCS)
file(GLOB classes.com.sun.java_cup_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.java_cup_HEADERS}) 
list(LENGTH classes.com.sun.java_cup_SRCS classes.com.sun.java_cup_SRCS_LENGTH)
if(classes.com.sun.java_cup_SRCS_LENGTH)
	add_library(classes.com.sun.java_cup OBJECT "${classes.com.sun.java_cup_SRCS}" "${classes.com.sun.java_cup_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.java_cup)
endif()