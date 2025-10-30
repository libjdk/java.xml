#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_ko.h>

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

$FieldInfo _XMLErrorResources_ko_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ko, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ko, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ko, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ko, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, contents)},
	{}
};

$MethodInfo _XMLErrorResources_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLErrorResources_ko::*)()>(&XMLErrorResources_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XMLErrorResources_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_ko",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_ko_FieldInfo_,
	_XMLErrorResources_ko_MethodInfo_
};

$Object* allocate$XMLErrorResources_ko($Class* clazz) {
	return $of($alloc(XMLErrorResources_ko));
}

$String* XMLErrorResources_ko::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_ko::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_ko::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_ko::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_ko::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_ko::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_ko::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_ko::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_ko::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ko::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ko::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ko::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_ko::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_ko::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_ko::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_ko::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ko::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_ko::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_ko::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_ko::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_ko::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_ko::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_ko::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_ko::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ko::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_ko::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_ko::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_ko::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_ko::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_ko::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_ko::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_ko::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ko::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_ko::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ko::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_ko::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ko::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ko::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ko::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ko::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_ko::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_ko::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_ko::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_ko::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_ko::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_ko::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_ko::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_ko::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_ko::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_ko::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_ko::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_ko::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_ko::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_ko::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_ko::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_ko::ER_OIERROR = nullptr;
$String* XMLErrorResources_ko::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_ko::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_ko::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_ko::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_ko::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_ko::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_ko::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_ko::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_ko::contents = nullptr;

void XMLErrorResources_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_ko::getContents() {
	return XMLErrorResources_ko::contents;
}

void clinit$XMLErrorResources_ko($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_ko::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_ko::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_ko::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_ko::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_ko::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_ko::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_ko::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ko::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_ko::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_ko::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_ko::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_ko::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ko::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_ko::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_ko::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_ko::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_ko::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_ko::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ko::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_ko::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_ko::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_ko::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_ko::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_ko::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_ko::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_ko::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ko::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ko::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_ko::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_ko::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_ko::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_ko::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ko::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ko::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_ko::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_ko::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_ko::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_ko::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_ko::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_ko::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_ko::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_ko::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_ko::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_ko::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_ko::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_ko::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_ko::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_ko::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_ko::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_ko::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_ko::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"\ud568\uc218\uac00 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"\uc6d0\uc778\uc744 \uacb9\uccd0 \uc4f8 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_DEFAULT_IMPL),
			$of(u"\uae30\ubcf8 \uad6c\ud604\uc744 \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"ChunkedIntArray({0})\ub294 \ud604\uc7ac \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"\uc624\ud504\uc14b\uc774 \uc2ac\ub86f\ubcf4\ub2e4 \ud07d\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COROUTINE_NOT_AVAIL),
			$of(u"Coroutine\uc744 \uc0ac\uc6a9\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. ID={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager\uac00 co_exit() \uc694\uccad\uc744 \uc218\uc2e0\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COJOINROUTINESET_FAILED),
			$of(u"co_joinCoroutineSet()\ub97c \uc2e4\ud328\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COROUTINE_PARAM),
			$of(u"Coroutine \ub9e4\uac1c\ubcc0\uc218 \uc624\ub958({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\n\uc608\uc0c1\uce58 \uc54a\uc740 \uc624\ub958: \uad6c\ubb38 \ubd84\uc11d\uae30 doTerminate\uac00 {0}\uc5d0 \uc751\ub2f5\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"\uad6c\ubb38 \ubd84\uc11d \uc911 parse\ub97c \ud638\ucd9c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"\uc624\ub958: {0} \ucd95\uc5d0 \ub300\ud574 \uc785\ub825\ub41c \uc774\ud130\ub808\uc774\ud130\uac00 \uad6c\ud604\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"\uc624\ub958: {0} \ucd95\uc5d0 \ub300\ud55c \uc774\ud130\ub808\uc774\ud130\uac00 \uad6c\ud604\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"\uc774\ud130\ub808\uc774\ud130 \ubcf5\uc81c\ub294 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_UNKNOWN_AXIS_TYPE),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \ucd95 \uc21c\ud68c \uc720\ud615: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_AXIS_NOT_SUPPORTED),
			$of(u"\ucd95 \uc21c\ud658\uae30\uac00 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_DTMIDS_AVAIL),
			$of(u"\ub354 \uc774\uc0c1 \uc0ac\uc6a9 \uac00\ub2a5\ud55c DTM ID\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NOT_SUPPORTED),
			$of(u"\uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NODE_NON_NULL),
			$of(u"\ub178\ub4dc\ub294 getDTMHandleFromNode\uc5d0 \ub300\ud574 \ub110\uc774 \uc544\ub2c8\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"\ub178\ub4dc\ub97c \ud578\ub4e4\ub85c \ubd84\uc11d\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_STARTPARSE_WHILE_PARSING),
			$of(u"\uad6c\ubb38 \ubd84\uc11d \uc911 startParse\ub97c \ud638\ucd9c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse\uc5d0\ub294 \ub110\uc774 \uc544\ub2cc SAXParser\uac00 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COULD_NOT_INIT_PARSER),
			$of(u"\uad6c\ubb38 \ubd84\uc11d\uae30\ub97c \ucd08\uae30\ud654\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_EXCEPTION_CREATING_POOL),
			$of(u"\ud480\uc5d0 \ub300\ud55c \uc0c8 \uc778\uc2a4\ud134\uc2a4\ub97c \uc0dd\uc131\ud558\ub294 \uc911 \uc608\uc678\uc0ac\ud56d\uc774 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"\uacbd\ub85c\uc5d0 \ubd80\uc801\ud569\ud55c \uc774\uc2a4\ucf00\uc774\ud504 \uc2dc\ud000\uc2a4\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SCHEME_REQUIRED),
			$of(u"\uccb4\uacc4\uac00 \ud544\uc694\ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_SCHEME_IN_URI),
			$of(u"URI\uc5d0\uc11c \uccb4\uacc4\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_SCHEME_INURI),
			$of(u"URI\uc5d0\uc11c \uccb4\uacc4\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PATH_INVALID_CHAR),
			$of(u"\uacbd\ub85c\uc5d0 \ubd80\uc801\ud569\ud55c \ubb38\uc790\uac00 \ud3ec\ud568\ub428: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SCHEME_FROM_NULL_STRING),
			$of(u"\ub110 \ubb38\uc790\uc5f4\uc5d0\uc11c \uccb4\uacc4\ub97c \uc124\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SCHEME_NOT_CONFORMANT),
			$of(u"\uccb4\uacc4\uac00 \uc77c\uce58\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"\ud638\uc2a4\ud2b8\uac00 \uc644\uc804\ud55c \uc8fc\uc18c\uac00 \uc544\ub2d9\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PORT_WHEN_HOST_NULL),
			$of(u"\ud638\uc2a4\ud2b8\uac00 \ub110\uc77c \uacbd\uc6b0 \ud3ec\ud2b8\ub97c \uc124\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_INVALID_PORT),
			$of(u"\ud3ec\ud2b8 \ubc88\ud638\uac00 \ubd80\uc801\ud569\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_FRAG_FOR_GENERIC_URI),
			$of(u"\uc77c\ubc18 URI\uc5d0 \ub300\ud574\uc11c\ub9cc \ubd80\ubd84\uc744 \uc124\uc815\ud560 \uc218 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_FRAG_WHEN_PATH_NULL),
			$of(u"\uacbd\ub85c\uac00 \ub110\uc77c \uacbd\uc6b0 \ubd80\ubd84\uc744 \uc124\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_FRAG_INVALID_CHAR),
			$of(u"\ubd80\ubd84\uc5d0 \ubd80\uc801\ud569\ud55c \ubb38\uc790\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PARSER_IN_USE),
			$of(u"\uad6c\ubb38 \ubd84\uc11d\uae30\uac00 \uc774\ubbf8 \uc0ac\uc6a9\ub418\uace0 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"\uad6c\ubb38 \ubd84\uc11d \uc911 {0} {1}\uc744(\ub97c) \ubcc0\uacbd\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"\uc790\uccb4 \uc778\uacfc \uad00\uacc4\ub294 \ud5c8\uc6a9\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"\ud638\uc2a4\ud2b8\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uc740 \uacbd\uc6b0\uc5d0\ub294 Userinfo\ub97c \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_PORT_IF_NO_HOST),
			$of(u"\ud638\uc2a4\ud2b8\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uc740 \uacbd\uc6b0\uc5d0\ub294 \ud3ec\ud2b8\ub97c \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"\uacbd\ub85c \ubc0f \uc9c8\uc758 \ubb38\uc790\uc5f4\uc5d0 \uc9c8\uc758 \ubb38\uc790\uc5f4\uc744 \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"\uacbd\ub85c\uc640 \ubd80\ubd84\uc5d0 \ubaa8\ub450 \ubd80\ubd84\uc744 \uc9c0\uc815\ud560 \uc218\ub294 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"\ube48 \ub9e4\uac1c\ubcc0\uc218\ub85c URI\ub97c \ucd08\uae30\ud654\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_METHOD_NOT_SUPPORTED),
			$of(u"\uba54\uc18c\ub4dc\uac00 \uc544\uc9c1 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"\ud604\uc7ac IncrementalSAXSource_Filter\ub97c \uc7ac\uc2dc\uc791\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"startParse \uc694\uccad \uc804\uc5d0 XMLReader\uac00 \uc2e4\ud589\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"\ucd95 \uc21c\ud658\uae30\uac00 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"\ub110 PrintWriter\ub85c ListingErrorHandler\uac00 \uc0dd\uc131\ub418\uc5c8\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SYSTEMID_UNKNOWN),
			$of(u"SystemId\ub97c \uc54c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_LOCATION_UNKNOWN),
			$of(u"\uc624\ub958 \uc704\uce58\ub97c \uc54c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PREFIX_MUST_RESOLVE),
			$of(u"\uc811\ub450\uc5b4\ub294 \ub124\uc784\uc2a4\ud398\uc774\uc2a4\ub85c \ubd84\uc11d\ub418\uc5b4\uc57c \ud568: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"XPathContext\uc5d0\uc11c\ub294 createDocument()\uac00 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"\uc18d\uc131 \ud558\uc704\uc5d0 \uc18c\uc720\uc790 \ubb38\uc11c\uac00 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"\uc18d\uc131 \ud558\uc704\uc5d0 \uc18c\uc720\uc790 \ubb38\uc11c \uc694\uc18c\uac00 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"\uacbd\uace0: \ubb38\uc11c \uc694\uc18c \uc55e\uc5d0 \ud14d\uc2a4\ud2b8\ub97c \ucd9c\ub825\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4! \ubb34\uc2dc\ud558\ub294 \uc911..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"DOM\uc5d0\uc11c \ub8e8\ud2b8\ub97c \ub450 \uac1c \uc774\uc0c1 \uc0ac\uc6a9\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ARG_LOCALNAME_NULL),
			$of(u"\'localName\' \uc778\uc218\uac00 \ub110\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ARG_LOCALNAME_INVALID),
			$of(u"QNAME\uc758 Localname\uc740 \uc801\ud569\ud55c NCName\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ARG_PREFIX_INVALID),
			$of(u"QNAME\uc758 \uc811\ub450\uc5b4\ub294 \uc801\ud569\ud55c NCName\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NAME_CANT_START_WITH_COLON),
			$of(u"\uc774\ub984\uc740 \ucf5c\ub860\uc73c\ub85c \uc2dc\uc791\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"createMessage\uc5d0 \ub300\ud55c \ub9e4\uac1c\ubcc0\uc218\uac00 \ubc94\uc704\ub97c \ubc97\uc5b4\ub0ac\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"messageFormat \ud638\ucd9c \uc911 \uc608\uc678\uc0ac\ud56d\uc774 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"\ud589 \ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"\uc5f4 \ubc88\ud638"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"Serializer \ud074\ub798\uc2a4 \'\'{0}\'\'\uc774(\uac00) org.xml.sax.ContentHandler\ub97c \uad6c\ud604\ud558\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"[{0}] \ub9ac\uc18c\uc2a4\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"[{0}] \ub9ac\uc18c\uc2a4\uac00 \ub2e4\uc74c\uc744 \ub85c\ub4dc\ud560 \uc218 \uc5c6\uc74c: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"\ubc84\ud37c \ud06c\uae30 <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_INVALID_UTF16_SURROGATE),
			$of(u"\ubd80\uc801\ud569\ud55c UTF-16 \ub300\ub9ac \uc694\uc18c\uac00 \uac10\uc9c0\ub428: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_OIERROR),
			$of(u"IO \uc624\ub958"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"\ud558\uc704 \ub178\ub4dc\uac00 \uc0dd\uc131\ub41c \ud6c4 \ub610\ub294 \uc694\uc18c\uac00 \uc0dd\uc131\ub418\uae30 \uc804\uc5d0 {0} \uc18d\uc131\uc744 \ucd94\uac00\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. \uc18d\uc131\uc774 \ubb34\uc2dc\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NAMESPACE_PREFIX),
			$of(u"\'\'{0}\'\' \uc811\ub450\uc5b4\uc5d0 \ub300\ud55c \ub124\uc784\uc2a4\ud398\uc774\uc2a4\uac00 \uc120\uc5b8\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_STRAY_ATTRIBUTE),
			$of(u"\'\'{0}\'\' \uc18d\uc131\uc774 \uc694\uc18c\uc5d0 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_STRAY_NAMESPACE),
			$of(u"\ub124\uc784\uc2a4\ud398\uc774\uc2a4 \uc120\uc5b8 \'\'{0}\'\'=\'\'{1}\'\'\uc774(\uac00) \uc694\uc18c\uc5d0 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"{0}\uc744(\ub97c) \ub85c\ub4dc\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. CLASSPATH\ub97c \ud655\uc778\ud558\uc2ed\uc2dc\uc624. \ud604\uc7ac \uae30\ubcf8\uac12\ub9cc \uc0ac\uc6a9\ud558\ub294 \uc911\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ILLEGAL_CHARACTER),
			$of(u"{1}\uc758 \uc9c0\uc815\ub41c \ucd9c\ub825 \uc778\ucf54\ub529\uc5d0\uc11c \ud45c\uc2dc\ub418\uc9c0 \uc54a\ub294 \uc815\uc218 \uac12 {0}\uc758 \ubb38\uc790\ub97c \ucd9c\ub825\ud558\ub824\uace0 \uc2dc\ub3c4\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"\ucd9c\ub825 \uba54\uc18c\ub4dc \'\'{1}\'\'\uc5d0 \ub300\ud55c \uc18d\uc131 \ud30c\uc77c \'\'{0}\'\'\uc744(\ub97c) \ub85c\ub4dc\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. CLASSPATH\ub97c \ud655\uc778\ud558\uc2ed\uc2dc\uc624."_s)
		})
	}));
}

XMLErrorResources_ko::XMLErrorResources_ko() {
}

$Class* XMLErrorResources_ko::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_ko, name, initialize, &_XMLErrorResources_ko_ClassInfo_, clinit$XMLErrorResources_ko, allocate$XMLErrorResources_ko);
	return class$;
}

$Class* XMLErrorResources_ko::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com