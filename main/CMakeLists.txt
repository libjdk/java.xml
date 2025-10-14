#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
)

include_directories("classes")

add_subdirectory("classes")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:classes.com.sun.java_cup.int_1>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.b_3>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.b_4>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.b_5>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.b_6>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache.x_9>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._10>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._11>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._12>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._13>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._14>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._15>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._16>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._17>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._18>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._19>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._20>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._21>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._24>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._25>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._26>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._27>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._28>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._29>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._30>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._31>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._32>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._33>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._34>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._35>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._36>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._37>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._38>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._39>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._40>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._41>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._42>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._43>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._44>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._45>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._46>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._47>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._48>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._49>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._50>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._51>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._52>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._53>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._54>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._55>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._56>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._58>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._59>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._60>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._61>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._62>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._63>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._64>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._65>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._66>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._67>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._68>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._70>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._71>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._72>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._73>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._74>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._75>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._76>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._77>"
	"$<TARGET_OBJECTS:classes.com.sun.org.apache._78>"
	"$<TARGET_OBJECTS:classes.com.sun.xml.interna_79>"
	"$<TARGET_OBJECTS:classes.com.sun.xml.interna_80>"
	"$<TARGET_OBJECTS:classes.com.sun.xml.interna_81>"
	"$<TARGET_OBJECTS:classes.com.sun.xml.interna_82>"
	"$<TARGET_OBJECTS:classes.com.sun.xml.interna_83>"
	"$<TARGET_OBJECTS:classes.com.sun.xml.interna_84>"
	"$<TARGET_OBJECTS:classes.javax.xml>"
	"$<TARGET_OBJECTS:classes.javax.xml.catalog>"
	"$<TARGET_OBJECTS:classes.javax.xml.datatype>"
	"$<TARGET_OBJECTS:classes.javax.xml.namespace>"
	"$<TARGET_OBJECTS:classes.javax.xml.parsers>"
	"$<TARGET_OBJECTS:classes.javax.xml.stream>"
	"$<TARGET_OBJECTS:classes.javax.xml.stream.ev_85>"
	"$<TARGET_OBJECTS:classes.javax.xml.stream.util>"
	"$<TARGET_OBJECTS:classes.javax.xml.transform>"
	"$<TARGET_OBJECTS:classes.javax.xml.transform_86>"
	"$<TARGET_OBJECTS:classes.javax.xml.transform_87>"
	"$<TARGET_OBJECTS:classes.javax.xml.transform_88>"
	"$<TARGET_OBJECTS:classes.javax.xml.transform_89>"
	"$<TARGET_OBJECTS:classes.javax.xml.validation>"
	"$<TARGET_OBJECTS:classes.javax.xml.xpath>"
	"$<TARGET_OBJECTS:classes.jdk.xml.internal>"
	"$<TARGET_OBJECTS:classes.org.w3c.dom>"
	"$<TARGET_OBJECTS:classes.org.w3c.dom.bootstrap>"
	"$<TARGET_OBJECTS:classes.org.w3c.dom.events>"
	"$<TARGET_OBJECTS:classes.org.w3c.dom.ls>"
	"$<TARGET_OBJECTS:classes.org.w3c.dom.ranges>"
	"$<TARGET_OBJECTS:classes.org.w3c.dom.traversal>"
	"$<TARGET_OBJECTS:classes.org.w3c.dom.views>"
	"$<TARGET_OBJECTS:classes.org.xml.sax>"
	"$<TARGET_OBJECTS:classes.org.xml.sax.ext>"
	"$<TARGET_OBJECTS:classes.org.xml.sax.helpers>"
)

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}_static STATIC "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_static)

	install(TARGETS ${JCPP_PROJECT_NAME}_static
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macosx")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_enable_debug_info(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

install(
	DIRECTORY "include"
	DESTINATION "${JCPP_INSTALL_PATH}"
)

install(
	FILES "dependencies.txt"
	DESTINATION "${JCPP_INSTALL_PATH}"
)
