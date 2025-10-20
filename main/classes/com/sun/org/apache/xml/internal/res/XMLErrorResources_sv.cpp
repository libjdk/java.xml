#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_sv.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _XMLErrorResources_sv_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_sv, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_sv, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_sv, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_sv, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_sv, contents)},
	{}
};

$MethodInfo _XMLErrorResources_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLErrorResources_sv::*)()>(&XMLErrorResources_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XMLErrorResources_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_sv",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_sv_FieldInfo_,
	_XMLErrorResources_sv_MethodInfo_
};

$Object* allocate$XMLErrorResources_sv($Class* clazz) {
	return $of($alloc(XMLErrorResources_sv));
}

$String* XMLErrorResources_sv::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sv::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_sv::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_sv::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sv::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_sv::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_sv::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_sv::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_sv::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_sv::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_sv::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_sv::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_sv::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_sv::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sv::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_sv::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sv::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_sv::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sv::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_sv::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_sv::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_sv::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_sv::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_sv::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_sv::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_sv::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_sv::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_sv::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_sv::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_sv::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_sv::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_sv::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_sv::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_sv::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_sv::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_sv::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_sv::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_sv::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_sv::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_sv::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_sv::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_sv::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_sv::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_sv::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_sv::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_sv::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sv::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_sv::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_sv::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sv::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_sv::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_sv::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_sv::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_sv::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sv::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_sv::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_sv::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_sv::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_sv::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_sv::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_sv::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_sv::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_sv::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_sv::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_sv::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_sv::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_sv::ER_OIERROR = nullptr;
$String* XMLErrorResources_sv::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_sv::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_sv::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_sv::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_sv::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_sv::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_sv::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_sv::ER_ILLEGAL_CHARACTER = nullptr;

$ObjectArray2* XMLErrorResources_sv::contents = nullptr;

void XMLErrorResources_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_sv::getContents() {
	return XMLErrorResources_sv::contents;
}

void clinit$XMLErrorResources_sv($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_sv::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_sv::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_sv::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_sv::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_sv::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_sv::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_sv::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_sv::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_sv::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_sv::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_sv::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_sv::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_sv::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_sv::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_sv::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_sv::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_sv::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_sv::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_sv::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_sv::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_sv::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_sv::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_sv::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_sv::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_sv::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_sv::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_sv::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_sv::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_sv::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_sv::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_sv::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_sv::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_sv::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_sv::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_sv::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_sv::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_sv::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_sv::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_sv::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_sv::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_sv::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_sv::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_sv::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_sv::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sv::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_sv::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_sv::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_sv::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_sv::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_sv::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_sv::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_sv::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_sv::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_sv::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_sv::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_sv::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_sv::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_sv::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_sv::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_sv::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_sv::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_sv::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_sv::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_sv::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_sv::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_sv::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"Funktionen st\u00f6ds inte!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"Orsak kan inte skrivas \u00f6ver"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NO_DEFAULT_IMPL),
			$of("Hittade ingen standardimplementering "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"ChunkedIntArray({0}) underst\u00f6ds f\u00f6r n\u00e4rvarande inte"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"Offset st\u00f6rre \u00e4n plats"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_COROUTINE_NOT_AVAIL),
			$of(u"Sidorutin \u00e4r inte tillg\u00e4nglig, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager har tagit emot co_exit()-beg\u00e4ran"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_COJOINROUTINESET_FAILED),
			$of(u"co_joinCoroutineSet() utf\u00f6rdes inte"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_COROUTINE_PARAM),
			$of(u"Parameterfel f\u00f6r sidorutin ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\nUNEXPECTED: Parsersvar {0} f\u00f6r doTerminate"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"parse f\u00e5r inte anropas medan tolkning sker"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Fel: typad iterator f\u00f6r axeln {0} har inte implementerats"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Fel: iterator f\u00f6r axeln {0} har inte implementerats "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"Iteratorklon underst\u00f6ds inte"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_UNKNOWN_AXIS_TYPE),
			$of(u"Ok\u00e4nd axeltraverstyp: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_AXIS_NOT_SUPPORTED),
			$of(u"Axeltravers underst\u00f6ds inte: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NO_DTMIDS_AVAIL),
			$of(u"Inga fler DTM-id:n \u00e4r tillg\u00e4ngliga"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NOT_SUPPORTED),
			$of(u"Underst\u00f6ds inte: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NODE_NON_NULL),
			$of(u"Nod m\u00e5ste vara icke-null f\u00f6r getDTMHandleFromNode"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_COULD_NOT_RESOLVE_NODE),
			$of("Kunde inte matcha noden med en referens"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_STARTPARSE_WHILE_PARSING),
			$of(u"startParse f\u00e5r inte anropas medan tolkning sker"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse beh\u00f6ver en SAXParser som \u00e4r icke-null"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_COULD_NOT_INIT_PARSER),
			$of("kunde inte initiera parser med"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_EXCEPTION_CREATING_POOL),
			$of(u"undantag skapar ny instans f\u00f6r pool"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"S\u00f6kv\u00e4gen inneh\u00e5ller en ogiltig escape-sekvens"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_SCHEME_REQUIRED),
			$of(u"Schema kr\u00e4vs!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NO_SCHEME_IN_URI),
			$of("Schema saknas i URI: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NO_SCHEME_INURI),
			$of("Schema saknas i URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_PATH_INVALID_CHAR),
			$of(u"S\u00f6kv\u00e4gen inneh\u00e5ller ett ogiltigt tecken: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Kan inte st\u00e4lla in schema fr\u00e5n null-str\u00e4ng"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_SCHEME_NOT_CONFORMANT),
			$of(u"Schemat \u00e4r inte likformigt."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"V\u00e4rd \u00e4r inte en v\u00e4lformulerad adress"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_PORT_WHEN_HOST_NULL),
			$of(u"Port kan inte st\u00e4llas in n\u00e4r v\u00e4rd \u00e4r null"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_INVALID_PORT),
			$of("Ogiltigt portnummer"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Fragment kan bara st\u00e4llas in f\u00f6r en allm\u00e4n URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_FRAG_WHEN_PATH_NULL),
			$of(u"Fragment kan inte st\u00e4llas in n\u00e4r s\u00f6kv\u00e4g \u00e4r null"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_FRAG_INVALID_CHAR),
			$of(u"Fragment inneh\u00e5ller ett ogiltigt tecken"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_PARSER_IN_USE),
			$of(u"Parser anv\u00e4nds redan"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"Kan inte \u00e4ndra {0} {1} medan tolkning sker"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"Sj\u00e4lvorsakande inte till\u00e5ten"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Anv\u00e4ndarinfo f\u00e5r inte anges om v\u00e4rden inte \u00e4r angiven"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NO_PORT_IF_NO_HOST),
			$of(u"Port f\u00e5r inte anges om v\u00e4rden inte \u00e4r angiven"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"Fr\u00e5gestr\u00e4ng kan inte anges i b\u00e5de s\u00f6kv\u00e4gen och fr\u00e5gestr\u00e4ngen"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Fragment kan inte anges i b\u00e5de s\u00f6kv\u00e4gen och fragmentet"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of("Kan inte initiera URI med tomma parametrar"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_METHOD_NOT_SUPPORTED),
			$of(u"Metoden st\u00f6ds \u00e4nnu inte "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"IncrementalSAXSource_Filter kan f\u00f6r n\u00e4rvarande inte startas om"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReader inte f\u00f6re startParse-beg\u00e4ran"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"Axeltravers underst\u00f6ds inte: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of("ListingErrorHandler skapad med null PrintWriter!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_SYSTEMID_UNKNOWN),
			$of(u"SystemId ok\u00e4nt"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_LOCATION_UNKNOWN),
			$of(u"Platsen f\u00f6r felet \u00e4r ok\u00e4nd"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_PREFIX_MUST_RESOLVE),
			$of(u"Prefix m\u00e5ste matchas till en namnrymd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"createDocument() st\u00f6ds inte i XPathContext!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"Underordnat attribut har inget \u00e4gardokument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"Underordnat attribut har inget \u00e4gardokumentelement!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"Varning: utdatatext kan inte skrivas ut f\u00f6re dokumentelement! Ignoreras..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"En DOM kan inte ha fler \u00e4n en rot!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_ARG_LOCALNAME_NULL),
			$of(u"Argumentet \'localName\' \u00e4r null"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_ARG_LOCALNAME_INVALID),
			$of(u"Localname i QNAME b\u00f6r vara giltigt NCName"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_ARG_PREFIX_INVALID),
			$of(u"Prefix i QNAME b\u00f6r vara giltigt NCName"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NAME_CANT_START_WITH_COLON),
			$of(u"Namnet kan inte b\u00f6rja med kolon"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"Parameter f\u00f6r createMessage ligger utanf\u00f6r gr\u00e4nsv\u00e4rdet"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"Undantag utl\u00f6st vid messageFormat-anrop"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of("Rad nr"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of("Kolumn nr"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of("Serializerklassen \'\'{0}\'\' implementerar inte org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"Resursen [ {0} ] kunde inte h\u00e4mtas.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_RESOURCE_COULD_NOT_LOAD),
			$of("Resursen [ {0} ] kunde inte laddas: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Buffertstorlek <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_INVALID_UTF16_SURROGATE),
			$of(u"Ogiltigt UTF-16-surrogat uppt\u00e4ckt: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_OIERROR),
			$of("IO-fel"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Kan inte l\u00e4gga till attributet {0} efter underordnade noder eller innan ett element har skapats. Attributet ignoreras."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_NAMESPACE_PREFIX),
			$of(u"Namnrymd f\u00f6r prefix \'\'{0}\'\' har inte deklarerats."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_STRAY_ATTRIBUTE),
			$of(u"Attributet \'\'{0}\'\' finns utanf\u00f6r elementet."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_STRAY_NAMESPACE),
			$of(u"Namnrymdsdeklarationen \'\'{0}\'\'=\'\'{1}\'\' finns utanf\u00f6r element."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"Kunde inte ladda \'\'{0}\'\' (kontrollera CLASSPATH), anv\u00e4nder nu enbart standardv\u00e4rden"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_ILLEGAL_CHARACTER),
			$of(u"F\u00f6rs\u00f6k att skriva utdatatecken med integralv\u00e4rdet {0} som inte \u00e4r representerat i angiven utdatakodning av {1}."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sv::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"Kunde inte ladda egenskapsfilen \'\'{0}\'\' f\u00f6r utdatametoden \'\'{1}\'\' (kontrollera CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources_sv::XMLErrorResources_sv() {
}

$Class* XMLErrorResources_sv::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_sv, name, initialize, &_XMLErrorResources_sv_ClassInfo_, clinit$XMLErrorResources_sv, allocate$XMLErrorResources_sv);
	return class$;
}

$Class* XMLErrorResources_sv::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com