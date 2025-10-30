#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_ja.h>

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

$FieldInfo _XMLErrorResources_ja_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ja, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ja, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ja, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ja, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, contents)},
	{}
};

$MethodInfo _XMLErrorResources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLErrorResources_ja::*)()>(&XMLErrorResources_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XMLErrorResources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_ja_FieldInfo_,
	_XMLErrorResources_ja_MethodInfo_
};

$Object* allocate$XMLErrorResources_ja($Class* clazz) {
	return $of($alloc(XMLErrorResources_ja));
}

$String* XMLErrorResources_ja::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_ja::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_ja::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_ja::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_ja::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_ja::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_ja::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_ja::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_ja::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ja::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ja::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ja::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_ja::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_ja::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_ja::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_ja::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ja::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_ja::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_ja::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_ja::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_ja::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_ja::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_ja::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_ja::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ja::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_ja::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_ja::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_ja::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_ja::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_ja::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_ja::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_ja::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ja::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_ja::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ja::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_ja::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ja::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ja::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ja::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ja::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_ja::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_ja::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_ja::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_ja::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_ja::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_ja::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_ja::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_ja::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_ja::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_ja::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_ja::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_ja::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_ja::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_ja::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_ja::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_ja::ER_OIERROR = nullptr;
$String* XMLErrorResources_ja::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_ja::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_ja::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_ja::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_ja::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_ja::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_ja::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_ja::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_ja::contents = nullptr;

void XMLErrorResources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_ja::getContents() {
	return XMLErrorResources_ja::contents;
}

void clinit$XMLErrorResources_ja($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_ja::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_ja::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_ja::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_ja::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_ja::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_ja::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_ja::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ja::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_ja::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_ja::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_ja::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_ja::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ja::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_ja::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_ja::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_ja::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_ja::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_ja::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ja::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_ja::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_ja::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_ja::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_ja::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_ja::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_ja::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_ja::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ja::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ja::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_ja::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_ja::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_ja::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_ja::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ja::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ja::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_ja::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_ja::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_ja::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_ja::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_ja::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_ja::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_ja::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_ja::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_ja::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_ja::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_ja::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_ja::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_ja::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_ja::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_ja::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_ja::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_ja::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"\u95a2\u6570\u304c\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"\u539f\u56e0\u3092\u4e0a\u66f8\u304d\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_DEFAULT_IMPL),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u5b9f\u88c5\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"ChunkedIntArray({0})\u306f\u73fe\u5728\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"\u30aa\u30d5\u30bb\u30c3\u30c8\u304c\u30b9\u30ed\u30c3\u30c8\u3088\u308a\u3082\u5927\u304d\u3044\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COROUTINE_NOT_AVAIL),
			$of(u"\u30b3\u30eb\u30fc\u30c1\u30f3\u3092\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093\u3002id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager\u304cco_exit()\u30ea\u30af\u30a8\u30b9\u30c8\u3092\u53d7\u3051\u53d6\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COJOINROUTINESET_FAILED),
			$of(u"co_joinCoroutineSet()\u304c\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COROUTINE_PARAM),
			$of(u"\u30b3\u30eb\u30fc\u30c1\u30f3\u30fb\u30d1\u30e9\u30e1\u30fc\u30bf\u306e\u30a8\u30e9\u30fc({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\n\u4e0d\u660e: \u30d1\u30fc\u30b5\u30fcdoTerminate\u306e\u5fdc\u7b54\u306f{0}\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"\u89e3\u6790\u306f\u69cb\u6587\u89e3\u6790\u4e2d\u306b\u547c\u3073\u51fa\u3059\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"\u30a8\u30e9\u30fc: \u8ef8{0}\u306e\u578b\u6307\u5b9a\u3055\u308c\u305f\u30a4\u30c6\u30ec\u30fc\u30bf\u304c\u5b9f\u88c5\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"\u30a8\u30e9\u30fc: \u8ef8{0}\u306e\u30a4\u30c6\u30ec\u30fc\u30bf\u304c\u5b9f\u88c5\u3055\u308c\u3066\u3044\u307e\u305b\u3093 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"\u30a4\u30c6\u30ec\u30fc\u30bf\u306e\u30af\u30ed\u30fc\u30f3\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_UNKNOWN_AXIS_TYPE),
			$of(u"\u4e0d\u660e\u306a\u8ef8\u30c8\u30e9\u30d0\u30fc\u30b9\u30fb\u30bf\u30a4\u30d7\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_AXIS_NOT_SUPPORTED),
			$of(u"\u8ef8\u30c8\u30e9\u30d0\u30fc\u30b5\u6a5f\u80fd\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_DTMIDS_AVAIL),
			$of(u"DTM ID\u306f\u3053\u308c\u4ee5\u4e0a\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NOT_SUPPORTED),
			$of(u"\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NODE_NON_NULL),
			$of(u"\u30ce\u30fc\u30c9\u306fgetDTMHandleFromNode\u306b\u3064\u3044\u3066\u975enull\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"\u30ce\u30fc\u30c9\u3092\u30cf\u30f3\u30c9\u30eb\u306b\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_STARTPARSE_WHILE_PARSING),
			$of(u"startParse\u306f\u69cb\u6587\u89e3\u6790\u4e2d\u306b\u547c\u3073\u51fa\u3059\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse\u306b\u306f\u975enull\u306eSAXParser\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COULD_NOT_INIT_PARSER),
			$of(u"\u6b21\u306e\u7406\u7531\u3067\u30d1\u30fc\u30b5\u30fc\u3092\u521d\u671f\u5316\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f: "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_EXCEPTION_CREATING_POOL),
			$of(u"\u30d7\u30fc\u30eb\u7528\u306e\u65b0\u898f\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u306e\u4f5c\u6210\u4e2d\u306b\u767a\u751f\u3057\u305f\u4f8b\u5916"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"\u30d1\u30b9\u306b\u7121\u52b9\u306a\u30a8\u30b9\u30b1\u30fc\u30d7\u30fb\u30b7\u30fc\u30b1\u30f3\u30b9\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SCHEME_REQUIRED),
			$of(u"\u30b9\u30ad\u30fc\u30e0\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_SCHEME_IN_URI),
			$of(u"\u30b9\u30ad\u30fc\u30e0\u304cURI\u306b\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_SCHEME_INURI),
			$of(u"\u30b9\u30ad\u30fc\u30e0\u304cURI\u306b\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PATH_INVALID_CHAR),
			$of(u"\u30d1\u30b9\u306b\u7121\u52b9\u306a\u6587\u5b57\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SCHEME_FROM_NULL_STRING),
			$of(u"null\u6587\u5b57\u5217\u304b\u3089\u306f\u30b9\u30ad\u30fc\u30e0\u3092\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SCHEME_NOT_CONFORMANT),
			$of(u"\u30b9\u30ad\u30fc\u30e0\u304c\u6574\u5408\u3057\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"\u30db\u30b9\u30c8\u306f\u6574\u5f62\u5f0f\u306e\u30a2\u30c9\u30ec\u30b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PORT_WHEN_HOST_NULL),
			$of(u"\u30db\u30b9\u30c8\u304cnull\u306e\u5834\u5408\u306f\u30dd\u30fc\u30c8\u3092\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_INVALID_PORT),
			$of(u"\u7121\u52b9\u306a\u30dd\u30fc\u30c8\u756a\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_FRAG_FOR_GENERIC_URI),
			$of(u"\u6c4e\u7528URI\u306e\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306e\u307f\u8a2d\u5b9a\u3067\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_FRAG_WHEN_PATH_NULL),
			$of(u"\u30d1\u30b9\u304cnull\u306e\u5834\u5408\u306f\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u3092\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_FRAG_INVALID_CHAR),
			$of(u"\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306b\u7121\u52b9\u6587\u5b57\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PARSER_IN_USE),
			$of(u"\u30d1\u30fc\u30b5\u30fc\u306f\u3059\u3067\u306b\u4f7f\u7528\u4e2d\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"\u89e3\u6790\u4e2d\u306b{0} {1}\u3092\u5909\u66f4\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"\u81ea\u5df1\u539f\u56e0\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"\u30db\u30b9\u30c8\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u306a\u3044\u5834\u5408\u306fUserinfo\u3092\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_PORT_IF_NO_HOST),
			$of(u"\u30db\u30b9\u30c8\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u306a\u3044\u5834\u5408\u306f\u30dd\u30fc\u30c8\u3092\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"\u554f\u5408\u305b\u6587\u5b57\u5217\u306f\u30d1\u30b9\u304a\u3088\u3073\u554f\u5408\u305b\u6587\u5b57\u5217\u5185\u306b\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306f\u30d1\u30b9\u3068\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306e\u4e21\u65b9\u306b\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"URI\u306f\u7a7a\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u4f7f\u7528\u3057\u3066\u521d\u671f\u5316\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_METHOD_NOT_SUPPORTED),
			$of(u"\u30e1\u30bd\u30c3\u30c9\u306f\u307e\u3060\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"IncrementalSAXSource_Filter\u306f\u73fe\u5728\u306f\u518d\u8d77\u52d5\u53ef\u80fd\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReader\u306fstartParse\u30ea\u30af\u30a8\u30b9\u30c8\u3088\u308a\u524d\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"\u8ef8\u30c8\u30e9\u30d0\u30fc\u30b5\u6a5f\u80fd\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"null PrintWriter\u306b\u3088\u3063\u3066ListingErrorHandler\u304c\u4f5c\u6210\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SYSTEMID_UNKNOWN),
			$of(u"\u4e0d\u660e\u306aSystemId"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_LOCATION_UNKNOWN),
			$of(u"\u30a8\u30e9\u30fc\u306e\u5834\u6240\u304c\u4e0d\u660e\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PREFIX_MUST_RESOLVE),
			$of(u"\u63a5\u982d\u8f9e\u306f\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306b\u89e3\u6c7a\u3055\u308c\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"createDocument()\u306fXPathContext\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"\u5c5e\u6027\u306e\u5b50\u306b\u6240\u6709\u8005\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"\u5c5e\u6027\u306e\u5b50\u306b\u6240\u6709\u8005\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u8981\u7d20\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"\u8b66\u544a: \u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u8981\u7d20\u306e\u524d\u306b\u30c6\u30ad\u30b9\u30c8\u3092\u51fa\u529b\u3067\u304d\u307e\u305b\u3093\u3002  \u7121\u8996\u3057\u307e\u3059..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"DOM\u306b\u8907\u6570\u306e\u30eb\u30fc\u30c8\u3092\u6301\u3064\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ARG_LOCALNAME_NULL),
			$of(u"\u5f15\u6570\'localName\'\u306fnull\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ARG_LOCALNAME_INVALID),
			$of(u"QNAME\u306eLocalname\u306f\u6709\u52b9\u306aNCName\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ARG_PREFIX_INVALID),
			$of(u"QNAME\u306e\u63a5\u982d\u8f9e\u306f\u6709\u52b9\u306aNCName\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NAME_CANT_START_WITH_COLON),
			$of(u"\u540d\u524d\u306e\u5148\u982d\u3092\u30b3\u30ed\u30f3\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"createMessage\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u304c\u7bc4\u56f2\u5916\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"messageFormat\u306e\u547c\u51fa\u3057\u4e2d\u306b\u4f8b\u5916\u304c\u30b9\u30ed\u30fc\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"\u884c\u756a\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"\u5217\u756a\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"\u30b7\u30ea\u30a2\u30e9\u30a4\u30b6\u30fb\u30af\u30e9\u30b9\'\'{0}\'\'\u306forg.xml.sax.ContentHandler\u3092\u5b9f\u88c5\u3057\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"\u30ea\u30bd\u30fc\u30b9[ {0} ]\u306f\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f\u3002\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"\u30ea\u30bd\u30fc\u30b9[ {0} ]\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"\u30d0\u30c3\u30d5\u30a1\u30fb\u30b5\u30a4\u30ba<=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u7121\u52b9\u306aUTF-16\u30b5\u30ed\u30b2\u30fc\u30c8\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f: {0}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_OIERROR),
			$of(u"IO\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"\u5b50\u30ce\u30fc\u30c9\u306e\u5f8c\u307e\u305f\u306f\u8981\u7d20\u304c\u751f\u6210\u3055\u308c\u308b\u524d\u306b\u5c5e\u6027{0}\u3092\u8ffd\u52a0\u3067\u304d\u307e\u305b\u3093\u3002\u5c5e\u6027\u306f\u7121\u8996\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NAMESPACE_PREFIX),
			$of(u"\u63a5\u982d\u8f9e\'\'{0}\'\'\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u304c\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_STRAY_ATTRIBUTE),
			$of(u"\u5c5e\u6027\'\'{0}\'\'\u304c\u8981\u7d20\u306e\u5916\u5074\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_STRAY_NAMESPACE),
			$of(u"\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u5ba3\u8a00\'\'{0}\'\'=\'\'{1}\'\'\u304c\u8981\u7d20\u306e\u5916\u5074\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"\'\'{0}\'\'\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f(CLASSPATH\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044)\u3002\u73fe\u5728\u306f\u5358\u306b\u30c7\u30d5\u30a9\u30eb\u30c8\u3092\u4f7f\u7528\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ILLEGAL_CHARACTER),
			$of(u"{1}\u306e\u6307\u5b9a\u3055\u308c\u305f\u51fa\u529b\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\u3067\u793a\u3055\u308c\u306a\u3044\u6574\u6570\u5024{0}\u306e\u6587\u5b57\u3092\u51fa\u529b\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"\u51fa\u529b\u30e1\u30bd\u30c3\u30c9\'\'{1}\'\'\u306e\u30d7\u30ed\u30d1\u30c6\u30a3\u30fb\u30d5\u30a1\u30a4\u30eb\'\'{0}\'\'\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f(CLASSPATH\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044)"_s)
		})
	}));
}

XMLErrorResources_ja::XMLErrorResources_ja() {
}

$Class* XMLErrorResources_ja::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_ja, name, initialize, &_XMLErrorResources_ja_ClassInfo_, clinit$XMLErrorResources_ja, allocate$XMLErrorResources_ja);
	return class$;
}

$Class* XMLErrorResources_ja::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com