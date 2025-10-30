#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_fr.h>

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

$FieldInfo _XMLErrorResources_fr_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_fr, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_fr, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_fr, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_fr, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, contents)},
	{}
};

$MethodInfo _XMLErrorResources_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLErrorResources_fr::*)()>(&XMLErrorResources_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XMLErrorResources_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_fr",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_fr_FieldInfo_,
	_XMLErrorResources_fr_MethodInfo_
};

$Object* allocate$XMLErrorResources_fr($Class* clazz) {
	return $of($alloc(XMLErrorResources_fr));
}

$String* XMLErrorResources_fr::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_fr::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_fr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_fr::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_fr::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_fr::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_fr::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_fr::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_fr::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_fr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_fr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_fr::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_fr::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_fr::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_fr::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_fr::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_fr::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_fr::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_fr::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_fr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_fr::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_fr::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_fr::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_fr::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_fr::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_fr::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_fr::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_fr::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_fr::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_fr::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_fr::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_fr::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_fr::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_fr::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_fr::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_fr::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_fr::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_fr::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_fr::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_fr::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_fr::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_fr::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_fr::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_fr::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_fr::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_fr::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_fr::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_fr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_fr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_fr::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_fr::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_fr::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_fr::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_fr::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_fr::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_fr::ER_OIERROR = nullptr;
$String* XMLErrorResources_fr::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_fr::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_fr::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_fr::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_fr::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_fr::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_fr::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_fr::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_fr::contents = nullptr;

void XMLErrorResources_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_fr::getContents() {
	return XMLErrorResources_fr::contents;
}

void clinit$XMLErrorResources_fr($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_fr::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_fr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_fr::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_fr::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_fr::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_fr::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_fr::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_fr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_fr::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_fr::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_fr::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_fr::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_fr::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_fr::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_fr::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_fr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_fr::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_fr::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_fr::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_fr::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_fr::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_fr::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_fr::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_fr::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_fr::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_fr::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_fr::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_fr::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_fr::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_fr::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_fr::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_fr::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_fr::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_fr::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_fr::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_fr::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_fr::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_fr::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_fr::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_fr::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_fr::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_fr::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_fr::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_fr::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_fr::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_fr::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_fr::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_fr::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_fr::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_fr::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_fr::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_FUNCTION_NOT_SUPPORTED),
			$of("Fonction non prise en charge."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANNOT_OVERWRITE_CAUSE),
			$of("Impossible de remplacer la cause"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_DEFAULT_IMPL),
			$of(u"Aucune impl\u00e9mentation par d\u00e9faut trouv\u00e9e "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of("ChunkedIntArray({0}) n\'\'est actuellement pas pris en charge"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"D\u00e9calage sup\u00e9rieur \u00e0 l\'emplacement"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COROUTINE_NOT_AVAIL),
			$of("Coroutine non disponible, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager a re\u00e7u la demande co_exit()"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COJOINROUTINESET_FAILED),
			$of("Echec de co_joinCoroutineSet()"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COROUTINE_PARAM),
			$of(u"Erreur de param\u00e8tre de coroutine ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\nINATTENDU : r\u00e9ponses doTerminate de l\'\'analyseur - {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of("impossible d\'appeler l\'analyse lorsqu\'elle est en cours"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Erreur : it\u00e9rateur saisi pour l\'\'axe {0} non impl\u00e9ment\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Erreur : it\u00e9rateur pour l\'\'axe {0} non impl\u00e9ment\u00e9 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"Clone d\'it\u00e9rateur non pris en charge"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_UNKNOWN_AXIS_TYPE),
			$of("Type de parcours d\'\'axe inconnu : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_AXIS_NOT_SUPPORTED),
			$of("Parcours d\'\'axe non pris en charge : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_DTMIDS_AVAIL),
			$of("Aucun autre ID DTM n\'est disponible"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NOT_SUPPORTED),
			$of("Non pris en charge : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NODE_NON_NULL),
			$of(u"Le noeud doit \u00eatre non NULL pour getDTMHandleFromNode"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"Impossible de r\u00e9soudre le noeud sur un descripteur"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_STARTPARSE_WHILE_PARSING),
			$of("impossible d\'appeler startParse lorsque l\'analyse est en cours"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse n\u00e9cessite un SAXParser non NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COULD_NOT_INIT_PARSER),
			$of("impossible d\'initialiser l\'analyseur avec"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_EXCEPTION_CREATING_POOL),
			$of(u"exception lors de la cr\u00e9ation de l\'instance du pool"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"Le chemin d\'acc\u00e8s contient une s\u00e9quence d\'\u00e9chappement non valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SCHEME_REQUIRED),
			$of(u"Mod\u00e8le obligatoire."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_SCHEME_IN_URI),
			$of(u"Mod\u00e8le introuvable dans l\'\'URI: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_SCHEME_INURI),
			$of(u"Mod\u00e8le introuvable dans l\'URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PATH_INVALID_CHAR),
			$of(u"Le chemin contient un caract\u00e8re non valide : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Impossible de d\u00e9finir le mod\u00e8le \u00e0 partir de la cha\u00eene NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SCHEME_NOT_CONFORMANT),
			$of(u"Le mod\u00e8le n\'est pas conforme."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"Le format de l\'adresse de l\'h\u00f4te n\'est pas correct"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PORT_WHEN_HOST_NULL),
			$of(u"Impossible de d\u00e9finir le port quand l\'h\u00f4te est NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_INVALID_PORT),
			$of(u"Num\u00e9ro de port non valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Le fragment ne peut \u00eatre d\u00e9fini que pour un URI g\u00e9n\u00e9rique"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_FRAG_WHEN_PATH_NULL),
			$of(u"Impossible de d\u00e9finir le fragment quand le chemin d\'acc\u00e8s est NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_FRAG_INVALID_CHAR),
			$of(u"Le fragment contient un caract\u00e8re non valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PARSER_IN_USE),
			$of(u"L\'analyseur est d\u00e9j\u00e0 utilis\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of("Impossible de modifier {0} {1} pendant l\'\'analyse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"Causalit\u00e9 circulaire non autoris\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Userinfo peut ne pas \u00eatre sp\u00e9cifi\u00e9 si l\'h\u00f4te ne l\'est pas"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_PORT_IF_NO_HOST),
			$of(u"Le port peut ne pas \u00eatre sp\u00e9cifi\u00e9 si l\'h\u00f4te ne l\'est pas"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"La cha\u00eene de requ\u00eate ne doit pas figurer dans un chemin et une cha\u00eene de requ\u00eate"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Le fragment ne doit pas \u00eatre indiqu\u00e9 \u00e0 la fois dans le chemin et dans le fragment"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"Impossible d\'initialiser l\'URI avec des param\u00e8tres vides"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_METHOD_NOT_SUPPORTED),
			$of(u"La m\u00e9thode n\'est pas encore prise en charge "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"IncrementalSAXSource_Filter ne peut actuellement pas \u00eatre red\u00e9marr\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of("XMLReader pas avant la demande startParse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of("Parcours d\'\'axe non pris en charge : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"ListingErrorHandler cr\u00e9\u00e9 avec PrintWriter NULL."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SYSTEMID_UNKNOWN),
			$of(u"ID syst\u00e8me inconnu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_LOCATION_UNKNOWN),
			$of("Emplacement de l\'erreur inconnu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PREFIX_MUST_RESOLVE),
			$of(u"Le pr\u00e9fixe doit \u00eatre r\u00e9solu en espace de noms : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of("createDocument() non pris en charge dans XPathContext."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"L\'enfant de l\'attribut ne poss\u00e8de pas de document propri\u00e9taire."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"L\'enfant de l\'attribut ne poss\u00e8de pas d\'\u00e9l\u00e9ment de document propri\u00e9taire."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"Avertissement : impossible de g\u00e9n\u00e9rer une sortie du texte avant l\'\u00e9l\u00e9ment de document. Non pris en compte..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of("Impossible d\'avoir plus d\'une racine sur un DOM."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ARG_LOCALNAME_NULL),
			$of("L\'argument \"localName\" est NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ARG_LOCALNAME_INVALID),
			$of(u"Le nom local du QName doit \u00eatre un NCName valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ARG_PREFIX_INVALID),
			$of(u"Le pr\u00e9fixe du QName doit \u00eatre un NCName valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NAME_CANT_START_WITH_COLON),
			$of("Le nom ne peut pas commencer par deux-points"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"Le param\u00e8tre createMessage \u00e9tait hors limites"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"Exception g\u00e9n\u00e9r\u00e9e pendant l\'appel messageFormat"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"Ligne n\u00b0"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"Colonne n\u00b0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"La classe de serializer \'\'{0}\'\' n\'\'impl\u00e9mente pas org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_FIND),
			$of("La ressource [ {0} ] est introuvable.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_LOAD),
			$of("La ressource [ {0} ] n\'\'a pas pu charger : {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Taille du tampon <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_INVALID_UTF16_SURROGATE),
			$of(u"Substitut UTF-16 non valide d\u00e9tect\u00e9 : {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_OIERROR),
			$of("Erreur d\'E-S"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Impossible d\'\'ajouter l\'\'attribut {0} apr\u00e8s des noeuds enfant ou avant la production d\'\'un \u00e9l\u00e9ment. L\'\'attribut est ignor\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NAMESPACE_PREFIX),
			$of(u"L\'\'espace de noms du pr\u00e9fixe \'\'{0}\'\' n\'\'a pas \u00e9t\u00e9 d\u00e9clar\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_STRAY_ATTRIBUTE),
			$of(u"Attribut \'\'{0}\'\' \u00e0 l\'\'ext\u00e9rieur de l\'\'\u00e9l\u00e9ment."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_STRAY_NAMESPACE),
			$of(u"La d\u00e9claration d\'\'espace de noms \'\'{0}\'\'=\'\'{1}\'\' est \u00e0 l\'\'ext\u00e9rieur de l\'\'\u00e9l\u00e9ment."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"Impossible de charger \'\'{0}\'\' (v\u00e9rifier CLASSPATH), les valeurs par d\u00e9faut sont donc employ\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ILLEGAL_CHARACTER),
			$of(u"Tentative de sortie d\'\'un caract\u00e8re avec une valeur enti\u00e8re {0}, non repr\u00e9sent\u00e9 dans l\'\'encodage de sortie sp\u00e9cifi\u00e9 pour {1}."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"Impossible de charger le fichier de propri\u00e9t\u00e9s \'\'{0}\'\' pour la m\u00e9thode de sortie \'\'{1}\'\' (v\u00e9rifier CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources_fr::XMLErrorResources_fr() {
}

$Class* XMLErrorResources_fr::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_fr, name, initialize, &_XMLErrorResources_fr_ClassInfo_, clinit$XMLErrorResources_fr, allocate$XMLErrorResources_fr);
	return class$;
}

$Class* XMLErrorResources_fr::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com