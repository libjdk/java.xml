#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.xml.catalog_SRCS)
file(GLOB classes.javax.xml.catalog_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.xml.catalog_HEADERS}) 
list(LENGTH classes.javax.xml.catalog_SRCS classes.javax.xml.catalog_SRCS_LENGTH)
if(classes.javax.xml.catalog_SRCS_LENGTH)
	add_library(classes.javax.xml.catalog OBJECT "${classes.javax.xml.catalog_SRCS}" "${classes.javax.xml.catalog_HEADERS}")
	jcpp_enable_bigobj(classes.javax.xml.catalog)
endif()