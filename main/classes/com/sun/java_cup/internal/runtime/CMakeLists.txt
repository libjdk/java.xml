#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.java_cup.int_1_SRCS)
file(GLOB classes.com.sun.java_cup.int_1_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.java_cup.int_1_HEADERS}) 
list(LENGTH classes.com.sun.java_cup.int_1_SRCS classes.com.sun.java_cup.int_1_SRCS_LENGTH)
if(classes.com.sun.java_cup.int_1_SRCS_LENGTH)
	add_library(classes.com.sun.java_cup.int_1 OBJECT "${classes.com.sun.java_cup.int_1_SRCS}" "${classes.com.sun.java_cup.int_1_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.java_cup.int_1)
endif()