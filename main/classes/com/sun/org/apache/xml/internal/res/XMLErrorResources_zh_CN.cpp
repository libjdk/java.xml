#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef ER_ARG_LOCALNAME_INVALID
#undef ER_ARG_LOCALNAME_NULL
#undef ER_ARG_PREFIX_INVALID
#undef ER_AXIS_NOT_SUPPORTED
#undef ER_AXIS_TRAVERSER_NOT_SUPPORTED
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CANNOT_CHANGE_WHILE_PARSING
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#undef ER_CANNOT_OVERWRITE_CAUSE
#undef ER_CANT_HAVE_MORE_THAN_ONE_ROOT
#undef ER_CANT_OUTPUT_TEXT_BEFORE_DOC
#undef ER_CHILD_HAS_NO_OWNER_DOCUMENT
#undef ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT
#undef ER_CHUNKEDINTARRAY_NOT_SUPPORTED
#undef ER_COJOINROUTINESET_FAILED
#undef ER_COROUTINE_CO_EXIT
#undef ER_COROUTINE_NOT_AVAIL
#undef ER_COROUTINE_PARAM
#undef ER_COULD_NOT_INIT_PARSER
#undef ER_COULD_NOT_LOAD_METHOD_PROPERTY
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_COULD_NOT_RESOLVE_NODE
#undef ER_CREATEDOCUMENT_NOT_SUPPORTED
#undef ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER
#undef ER_EXCEPTION_CREATING_POOL
#undef ER_FRAG_FOR_GENERIC_URI
#undef ER_FRAG_INVALID_CHAR
#undef ER_FRAG_WHEN_PATH_NULL
#undef ER_FUNCTION_NOT_SUPPORTED
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#undef ER_ILLEGAL_CHARACTER
#undef ER_INCRSAXSRCFILTER_NOT_RESTARTABLE
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_ITERATOR_AXIS_NOT_IMPLEMENTED
#undef ER_ITERATOR_CLONE_NOT_SUPPORTED
#undef ER_LOCATION_UNKNOWN
#undef ER_METHOD_NOT_SUPPORTED
#undef ER_NAMESPACE_PREFIX
#undef ER_NAME_CANT_START_WITH_COLON
#undef ER_NODE_NON_NULL
#undef ER_NOT_SUPPORTED
#undef ER_NO_DEFAULT_IMPL
#undef ER_NO_DTMIDS_AVAIL
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#undef ER_NO_PARSE_CALL_WHILE_PARSING
#undef ER_NO_PORT_IF_NO_HOST
#undef ER_NO_QUERY_STRING_IN_PATH
#undef ER_NO_SCHEME_INURI
#undef ER_NO_SCHEME_IN_URI
#undef ER_NO_USERINFO_IF_NO_HOST
#undef ER_OFFSET_BIGGER_THAN_SLOT
#undef ER_OIERROR
#undef ER_PARSER_DOTERMINATE_ANSWERS
#undef ER_PARSER_IN_USE
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#undef ER_PATH_INVALID_CHAR
#undef ER_PORT_WHEN_HOST_NULL
#undef ER_PREFIX_MUST_RESOLVE
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_SCHEME_FROM_NULL_STRING
#undef ER_SCHEME_NOT_CONFORMANT
#undef ER_SCHEME_REQUIRED
#undef ER_SELF_CAUSATION_NOT_PERMITTED
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#undef ER_STARTPARSE_NEEDS_SAXPARSER
#undef ER_STARTPARSE_WHILE_PARSING
#undef ER_STRAY_ATTRIBUTE
#undef ER_STRAY_NAMESPACE
#undef ER_SYSTEMID_UNKNOWN
#undef ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED
#undef ER_UNKNOWN_AXIS_TYPE
#undef ER_XMLRDR_NOT_BEFORE_STARTPARSE
#undef MAX_CODE
#undef MAX_MESSAGES
#undef MAX_OTHERS
#undef MAX_WARNING

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace res {

$FieldInfo _XMLErrorResources_zh_CN_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_zh_CN, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_zh_CN, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_zh_CN, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_zh_CN, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, contents)},
	{}
};

$MethodInfo _XMLErrorResources_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLErrorResources_zh_CN::*)()>(&XMLErrorResources_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XMLErrorResources_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_zh_CN_FieldInfo_,
	_XMLErrorResources_zh_CN_MethodInfo_
};

$Object* allocate$XMLErrorResources_zh_CN($Class* clazz) {
	return $of($alloc(XMLErrorResources_zh_CN));
}

$String* XMLErrorResources_zh_CN::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_zh_CN::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_zh_CN::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_zh_CN::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_zh_CN::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_zh_CN::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_zh_CN::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_zh_CN::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_zh_CN::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_zh_CN::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_zh_CN::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_zh_CN::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_zh_CN::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_zh_CN::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_zh_CN::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_zh_CN::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_zh_CN::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_zh_CN::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_zh_CN::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_zh_CN::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_zh_CN::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_zh_CN::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_zh_CN::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_zh_CN::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_zh_CN::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_zh_CN::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_zh_CN::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_zh_CN::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_zh_CN::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_zh_CN::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_zh_CN::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_zh_CN::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_zh_CN::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_zh_CN::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_zh_CN::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_zh_CN::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_zh_CN::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_zh_CN::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_zh_CN::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_zh_CN::ER_OIERROR = nullptr;
$String* XMLErrorResources_zh_CN::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_zh_CN::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_zh_CN::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_zh_CN::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_zh_CN::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_zh_CN::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_zh_CN::contents = nullptr;

void XMLErrorResources_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_zh_CN::getContents() {
	return XMLErrorResources_zh_CN::contents;
}

void clinit$XMLErrorResources_zh_CN($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_zh_CN::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_zh_CN::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"\u4e0d\u652f\u6301\u8be5\u51fd\u6570!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"\u65e0\u6cd5\u8986\u76d6\u539f\u56e0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_DEFAULT_IMPL),
			$of(u"\u627e\u4e0d\u5230\u9ed8\u8ba4\u5b9e\u73b0 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"\u5f53\u524d\u4e0d\u652f\u6301 ChunkedIntArray({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"\u504f\u79fb\u91cf\u5927\u4e8e\u63d2\u69fd"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COROUTINE_NOT_AVAIL),
			$of(u"Coroutine \u4e0d\u53ef\u7528, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager \u6536\u5230 co_exit() \u8bf7\u6c42"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COJOINROUTINESET_FAILED),
			$of(u"co_joinCoroutineSet() \u5931\u8d25"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COROUTINE_PARAM),
			$of(u"Coroutine \u53c2\u6570\u9519\u8bef ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\n\u610f\u5916: \u89e3\u6790\u5668\u5bf9\u7b54\u590d{0}\u6267\u884c doTerminate"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"\u65e0\u6cd5\u5728\u89e3\u6790\u65f6\u8c03\u7528 parse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"\u9519\u8bef: \u672a\u5b9e\u73b0\u8f74{0}\u7684\u7c7b\u578b\u5316\u8fed\u4ee3\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"\u9519\u8bef: \u672a\u5b9e\u73b0\u8f74{0}\u7684\u8fed\u4ee3\u5668 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"\u4e0d\u652f\u6301\u514b\u9686\u8fed\u4ee3\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_UNKNOWN_AXIS_TYPE),
			$of(u"\u8f74\u904d\u5386\u7c7b\u578b\u672a\u77e5: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_AXIS_NOT_SUPPORTED),
			$of(u"\u4e0d\u652f\u6301\u8f74\u904d\u5386\u7a0b\u5e8f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_DTMIDS_AVAIL),
			$of(u"\u65e0\u6cd5\u4f7f\u7528\u66f4\u591a DTM ID"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NOT_SUPPORTED),
			$of(u"\u4e0d\u652f\u6301: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NODE_NON_NULL),
			$of(u"getDTMHandleFromNode \u7684\u8282\u70b9\u5fc5\u987b\u4e3a\u975e\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"\u65e0\u6cd5\u5c06\u8282\u70b9\u89e3\u6790\u4e3a\u53e5\u67c4"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_STARTPARSE_WHILE_PARSING),
			$of(u"\u65e0\u6cd5\u5728\u89e3\u6790\u65f6\u8c03\u7528 startParse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse \u9700\u8981\u975e\u7a7a SAXParser"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COULD_NOT_INIT_PARSER),
			$of(u"\u65e0\u6cd5\u4f7f\u7528\u4ee5\u4e0b\u5bf9\u8c61\u521d\u59cb\u5316\u89e3\u6790\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_EXCEPTION_CREATING_POOL),
			$of(u"\u4e3a\u6c60\u521b\u5efa\u65b0\u5b9e\u4f8b\u65f6\u51fa\u73b0\u5f02\u5e38\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"\u8def\u5f84\u5305\u542b\u65e0\u6548\u7684\u8f6c\u4e49\u5e8f\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SCHEME_REQUIRED),
			$of(u"\u65b9\u6848\u662f\u5fc5\u9700\u7684!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_SCHEME_IN_URI),
			$of(u"\u5728 URI \u4e2d\u627e\u4e0d\u5230\u65b9\u6848: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_SCHEME_INURI),
			$of(u"\u5728 URI \u4e2d\u627e\u4e0d\u5230\u65b9\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PATH_INVALID_CHAR),
			$of(u"\u8def\u5f84\u5305\u542b\u65e0\u6548\u7684\u5b57\u7b26: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SCHEME_FROM_NULL_STRING),
			$of(u"\u65e0\u6cd5\u4ece\u7a7a\u5b57\u7b26\u4e32\u8bbe\u7f6e\u65b9\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SCHEME_NOT_CONFORMANT),
			$of(u"\u65b9\u6848\u4e0d\u4e00\u81f4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"\u4e3b\u673a\u4e0d\u662f\u683c\u5f0f\u826f\u597d\u7684\u5730\u5740"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PORT_WHEN_HOST_NULL),
			$of(u"\u4e3b\u673a\u4e3a\u7a7a\u65f6, \u65e0\u6cd5\u8bbe\u7f6e\u7aef\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_INVALID_PORT),
			$of(u"\u65e0\u6548\u7684\u7aef\u53e3\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_FRAG_FOR_GENERIC_URI),
			$of(u"\u53ea\u80fd\u4e3a\u4e00\u822c URI \u8bbe\u7f6e\u7247\u6bb5"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_FRAG_WHEN_PATH_NULL),
			$of(u"\u8def\u5f84\u4e3a\u7a7a\u65f6, \u65e0\u6cd5\u8bbe\u7f6e\u7247\u6bb5"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_FRAG_INVALID_CHAR),
			$of(u"\u7247\u6bb5\u5305\u542b\u65e0\u6548\u7684\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PARSER_IN_USE),
			$of(u"\u89e3\u6790\u5668\u5df2\u5728\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"\u65e0\u6cd5\u5728\u89e3\u6790\u65f6\u66f4\u6539{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"\u4e0d\u5141\u8bb8\u4f7f\u7528\u81ea\u56e0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"\u5982\u679c\u6ca1\u6709\u6307\u5b9a\u4e3b\u673a, \u5219\u4e0d\u53ef\u4ee5\u6307\u5b9a Userinfo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_PORT_IF_NO_HOST),
			$of(u"\u5982\u679c\u6ca1\u6709\u6307\u5b9a\u4e3b\u673a, \u5219\u4e0d\u53ef\u4ee5\u6307\u5b9a\u7aef\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"\u8def\u5f84\u548c\u67e5\u8be2\u5b57\u7b26\u4e32\u4e2d\u4e0d\u80fd\u6307\u5b9a\u67e5\u8be2\u5b57\u7b26\u4e32"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"\u8def\u5f84\u548c\u7247\u6bb5\u4e2d\u90fd\u65e0\u6cd5\u6307\u5b9a\u7247\u6bb5"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"\u65e0\u6cd5\u4ee5\u7a7a\u53c2\u6570\u521d\u59cb\u5316 URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_METHOD_NOT_SUPPORTED),
			$of(u"\u5c1a\u4e0d\u652f\u6301\u8be5\u65b9\u6cd5 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"\u5f53\u524d\u65e0\u6cd5\u91cd\u65b0\u542f\u52a8 IncrementalSAXSource_Filter"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReader \u4e0d\u5728 startParse \u8bf7\u6c42\u4e4b\u524d"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"\u4e0d\u652f\u6301\u8f74\u904d\u5386\u7a0b\u5e8f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"\u4f7f\u7528\u7a7a PrintWriter \u521b\u5efa\u4e86 ListingErrorHandler!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SYSTEMID_UNKNOWN),
			$of(u"SystemId \u672a\u77e5"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_LOCATION_UNKNOWN),
			$of(u"\u9519\u8bef\u6240\u5728\u7684\u4f4d\u7f6e\u672a\u77e5"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PREFIX_MUST_RESOLVE),
			$of(u"\u524d\u7f00\u5fc5\u987b\u89e3\u6790\u4e3a\u540d\u79f0\u7a7a\u95f4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"XPathContext \u4e2d\u4e0d\u652f\u6301 createDocument()!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"\u5c5e\u6027\u5b50\u7ea7\u6ca1\u6709\u6240\u6709\u8005\u6587\u6863!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"\u5c5e\u6027\u5b50\u7ea7\u6ca1\u6709\u6240\u6709\u8005\u6587\u6863\u5143\u7d20!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"\u8b66\u544a: \u65e0\u6cd5\u8f93\u51fa\u6587\u6863\u5143\u7d20\u4e4b\u524d\u7684\u6587\u672c! \u5c06\u5ffd\u7565..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"DOM \u4e0a\u4e0d\u80fd\u6709\u591a\u4e2a\u6839!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_NULL),
			$of(u"\u53c2\u6570 \'localName\' \u4e3a\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_INVALID),
			$of(u"QNAME \u4e2d\u7684\u672c\u5730\u540d\u79f0\u5e94\u4e3a\u6709\u6548 NCName"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ARG_PREFIX_INVALID),
			$of(u"QNAME \u4e2d\u7684\u524d\u7f00\u5e94\u4e3a\u6709\u6548 NCName"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NAME_CANT_START_WITH_COLON),
			$of(u"\u540d\u79f0\u4e0d\u80fd\u4ee5\u5192\u53f7\u5f00\u5934"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"createMessage \u7684\u53c2\u6570\u8d85\u51fa\u8303\u56f4"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"\u8c03\u7528 messageFormat \u65f6\u629b\u51fa\u5f02\u5e38\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"\u884c\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"\u5217\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"\u4e32\u884c\u5668\u7c7b \'\'{0}\'\' \u4e0d\u5b9e\u73b0 org.xml.sax.ContentHandler\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"\u627e\u4e0d\u5230\u8d44\u6e90 [ {0} ]\u3002\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"\u8d44\u6e90 [ {0} ] \u65e0\u6cd5\u52a0\u8f7d: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"\u7f13\u51b2\u533a\u5927\u5c0f <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u68c0\u6d4b\u5230\u65e0\u6548\u7684 UTF-16 \u4ee3\u7406: {0}?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_OIERROR),
			$of(u"IO \u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"\u5728\u751f\u6210\u5b50\u8282\u70b9\u4e4b\u540e\u6216\u5728\u751f\u6210\u5143\u7d20\u4e4b\u524d\u65e0\u6cd5\u6dfb\u52a0\u5c5e\u6027 {0}\u3002\u5c06\u5ffd\u7565\u5c5e\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NAMESPACE_PREFIX),
			$of(u"\u6ca1\u6709\u8bf4\u660e\u540d\u79f0\u7a7a\u95f4\u524d\u7f00 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_STRAY_ATTRIBUTE),
			$of(u"\u5c5e\u6027 \'\'{0}\'\' \u5728\u5143\u7d20\u5916\u90e8\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_STRAY_NAMESPACE),
			$of(u"\u540d\u79f0\u7a7a\u95f4\u58f0\u660e \'\'{0}\'\'=\'\'{1}\'\' \u5728\u5143\u7d20\u5916\u90e8\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"\u65e0\u6cd5\u52a0\u8f7d \'\'{0}\'\' (\u68c0\u67e5 CLASSPATH), \u73b0\u5728\u53ea\u4f7f\u7528\u9ed8\u8ba4\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ILLEGAL_CHARACTER),
			$of(u"\u5c1d\u8bd5\u8f93\u51fa\u672a\u4ee5{1}\u7684\u6307\u5b9a\u8f93\u51fa\u7f16\u7801\u8868\u793a\u7684\u6574\u6570\u503c {0} \u7684\u5b57\u7b26\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"\u65e0\u6cd5\u4e3a\u8f93\u51fa\u65b9\u6cd5 \'\'{1}\'\' \u52a0\u8f7d\u5c5e\u6027\u6587\u4ef6 \'\'{0}\'\' (\u68c0\u67e5 CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources_zh_CN::XMLErrorResources_zh_CN() {
}

$Class* XMLErrorResources_zh_CN::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_zh_CN, name, initialize, &_XMLErrorResources_zh_CN_ClassInfo_, clinit$XMLErrorResources_zh_CN, allocate$XMLErrorResources_zh_CN);
	return class$;
}

$Class* XMLErrorResources_zh_CN::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com