#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.org.apache._46_SRCS)
file(GLOB classes.com.sun.org.apache._46_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.org.apache._46_HEADERS}) 
list(LENGTH classes.com.sun.org.apache._46_SRCS classes.com.sun.org.apache._46_SRCS_LENGTH)
if(classes.com.sun.org.apache._46_SRCS_LENGTH)
	add_library(classes.com.sun.org.apache._46 OBJECT "${classes.com.sun.org.apache._46_SRCS}" "${classes.com.sun.org.apache._46_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.org.apache._46)
endif()