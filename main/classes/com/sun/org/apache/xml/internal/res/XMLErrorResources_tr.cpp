#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_tr.h>

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
#undef ER_INCRSAXSRCFILTER_NOT_RESTARTABLE
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_ITERATOR_AXIS_NOT_IMPLEMENTED
#undef ER_ITERATOR_CLONE_NOT_SUPPORTED
#undef ER_LOCATION_UNKNOWN
#undef ER_METHOD_NOT_SUPPORTED
#undef ER_NAMESPACE_PREFIX
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

$FieldInfo _XMLErrorResources_tr_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_tr, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_tr, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_tr, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_tr, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ARG_PREFIX_INVALID)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, _contents)},
	{}
};

$MethodInfo _XMLErrorResources_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLErrorResources_tr::*)()>(&XMLErrorResources_tr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLErrorResources_tr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_tr",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_tr_FieldInfo_,
	_XMLErrorResources_tr_MethodInfo_
};

$Object* allocate$XMLErrorResources_tr($Class* clazz) {
	return $of($alloc(XMLErrorResources_tr));
}

$String* XMLErrorResources_tr::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_tr::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_tr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_tr::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_tr::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_tr::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_tr::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_tr::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_tr::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_tr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_tr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_tr::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_tr::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_tr::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_tr::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_tr::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_tr::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_tr::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_tr::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_tr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_tr::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_tr::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_tr::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_tr::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_tr::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_tr::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_tr::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_tr::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_tr::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_tr::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_tr::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_tr::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_tr::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_tr::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_tr::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_tr::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_tr::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_tr::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_tr::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_tr::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_tr::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_tr::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_tr::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_tr::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_tr::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_tr::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_tr::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_tr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_tr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_tr::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_tr::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_tr::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_tr::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_tr::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_tr::ER_OIERROR = nullptr;
$String* XMLErrorResources_tr::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_tr::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_tr::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_tr::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_tr::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_tr::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_tr::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$ObjectArray2* XMLErrorResources_tr::_contents = nullptr;

void XMLErrorResources_tr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_tr::getContents() {
	return XMLErrorResources_tr::_contents;
}

void clinit$XMLErrorResources_tr($Class* class$) {
	$assignStatic(XMLErrorResources_tr::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_tr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_tr::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_tr::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_tr::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_tr::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_tr::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_tr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_tr::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_tr::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_tr::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_tr::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_tr::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_tr::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_tr::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_tr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_tr::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_tr::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_tr::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_tr::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_tr::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_tr::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_tr::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_tr::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_tr::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_tr::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_tr::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_tr::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_tr::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_tr::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_tr::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_tr::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_tr::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_tr::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_tr::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_tr::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_tr::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_tr::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_tr::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_tr::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_tr::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_tr::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_tr::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_tr::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_tr::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_tr::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_tr::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_tr::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_tr::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"\u0130\u015flev desteklenmiyor!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"Nedenin \u00fczerine yaz\u0131lamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_DEFAULT_IMPL),
			$of(u"Varsay\u0131lan uygulama bulunamad\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"ChunkedIntArray({0}) \u015fu an desteklenmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"G\u00f6reli konum yuvadan b\u00fcy\u00fck"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COROUTINE_NOT_AVAIL),
			$of(u"Coroutine kullan\u0131lam\u0131yor, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager co_exit() iste\u011fi ald\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COJOINROUTINESET_FAILED),
			$of(u"co_joinCoroutineSet() ba\u015far\u0131s\u0131z oldu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COROUTINE_PARAM),
			$of(u"Coroutine de\u011fi\u015ftirgesi hatas\u0131 ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\nBEKLENMEYEN: Parser doTerminate yan\u0131t\u0131 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"Ayr\u0131\u015ft\u0131rma s\u0131ras\u0131nda parse \u00e7a\u011fr\u0131lamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Hata: {0} ekseni i\u00e7in tip atanm\u0131\u015f yineleyici ger\u00e7ekle\u015ftirilmedi"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Hata: {0} ekseni i\u00e7in yineleyici ger\u00e7ekle\u015ftirilmedi"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"Yineleyici e\u015fkopyas\u0131 desteklenmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_UNKNOWN_AXIS_TYPE),
			$of(u"Bilinmeyen eksen dola\u015fma tipi: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_AXIS_NOT_SUPPORTED),
			$of(u"Eksen dola\u015f\u0131c\u0131 desteklenmiyor: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_DTMIDS_AVAIL),
			$of(u"Kullan\u0131labilecek ba\u015fka DTM tan\u0131t\u0131c\u0131s\u0131 yok"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NOT_SUPPORTED),
			$of("Desteklenmiyor: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NODE_NON_NULL),
			$of(u"getDTMHandleFromNode i\u00e7in d\u00fc\u011f\u00fcm bo\u015f de\u011ferli olmamal\u0131d\u0131r"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"D\u00fc\u011f\u00fcm tan\u0131t\u0131c\u0131 de\u011fere \u00e7\u00f6z\u00fclemedi"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_STARTPARSE_WHILE_PARSING),
			$of(u"Ayr\u0131\u015ft\u0131rma s\u0131ras\u0131nda startParse \u00e7a\u011fr\u0131lamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse i\u00e7in bo\u015f de\u011ferli olmayan SAXParser gerekiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COULD_NOT_INIT_PARSER),
			$of(u"Ayr\u0131\u015ft\u0131r\u0131c\u0131 bununla kullan\u0131ma haz\u0131rlanamad\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_EXCEPTION_CREATING_POOL),
			$of(u"Havuz i\u00e7in yeni \u00f6rnek yarat\u0131l\u0131rken kural d\u0131\u015f\u0131 durum"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"Yol ge\u00e7ersiz ka\u00e7\u0131\u015f dizisi i\u00e7eriyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SCHEME_REQUIRED),
			$of(u"\u015eema gerekli!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_SCHEME_IN_URI),
			$of(u"URI i\u00e7inde \u015fema bulunamad\u0131: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_SCHEME_INURI),
			$of(u"URI i\u00e7inde \u015fema bulunamad\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PATH_INVALID_CHAR),
			$of(u"Yol ge\u00e7ersiz karakter i\u00e7eriyor: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Bo\u015f de\u011ferli dizgiden \u015fema tan\u0131mlanamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SCHEME_NOT_CONFORMANT),
			$of(u"\u015eema uyumlu de\u011fil."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"Anasistem do\u011fru bi\u00e7imli bir adres de\u011fil"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PORT_WHEN_HOST_NULL),
			$of(u"Anasistem bo\u015f de\u011ferliyken kap\u0131 tan\u0131mlanamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_INVALID_PORT),
			$of(u"Kap\u0131 numaras\u0131 ge\u00e7ersiz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Par\u00e7a yaln\u0131zca soysal URI i\u00e7in tan\u0131mlanabilir"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_FRAG_WHEN_PATH_NULL),
			$of(u"Yol bo\u015f de\u011ferliyken par\u00e7a tan\u0131mlanamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_FRAG_INVALID_CHAR),
			$of(u"Par\u00e7a ge\u00e7ersiz karakter i\u00e7eriyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PARSER_IN_USE),
			$of(u"Ayr\u0131\u015ft\u0131r\u0131c\u0131 kullan\u0131mda"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"Ayr\u0131\u015ft\u0131rma s\u0131ras\u0131nda {0} {1} de\u011fi\u015ftirilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"\u00d6znedenselli\u011fe izin verilmez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Anasistem belirtilmediyse kullan\u0131c\u0131 bilgisi belirtilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_PORT_IF_NO_HOST),
			$of(u"Anasistem belirtilmediyse kap\u0131 belirtilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_QUERY_STRING_IN_PATH),
			$of("Yol ve sorgu dizgisinde sorgu dizgisi belirtilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Par\u00e7a hem yolda, hem de par\u00e7ada belirtilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"Bo\u015f de\u011fi\u015ftirgelerle URI kullan\u0131ma haz\u0131rlanamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_METHOD_NOT_SUPPORTED),
			$of(u"Y\u00f6ntem hen\u00fcz desteklenmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"IncrementalSAXSource_Filter \u015fu an yeniden ba\u015flat\u0131labilir durumda de\u011fil"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReader, startParse iste\u011finden \u00f6nce olmaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"Eksen dola\u015f\u0131c\u0131 desteklenmiyor: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"ListingErrorHandler bo\u015f de\u011ferli PrintWriter ile yarat\u0131ld\u0131!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SYSTEMID_UNKNOWN),
			$of("SystemId bilinmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_LOCATION_UNKNOWN),
			$of("Hata yeri bilinmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PREFIX_MUST_RESOLVE),
			$of(u"\u00d6nek bir ad alan\u0131na \u00e7\u00f6z\u00fclmelidir: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"XPathContext i\u00e7inde createDocument() desteklenmiyor!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"\u00d6zniteli\u011fin alt \u00f6\u011fesinin iye belgesi yok!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"\u00d6zniteli\u011fin alt \u00f6\u011fesinin iye belge \u00f6\u011fesi yok!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"Uyar\u0131: Belge \u00f6\u011fesinden \u00f6nce metin \u00e7\u0131k\u0131\u015f\u0131 olamaz!  Yoksay\u0131l\u0131yor..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"DOM \u00fczerinde birden fazla k\u00f6k olamaz!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ARG_LOCALNAME_NULL),
			$of(u"\'localName\' ba\u011f\u0131ms\u0131z de\u011fi\u015ftirgesi bo\u015f de\u011ferli"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ARG_LOCALNAME_INVALID),
			$of(u"QNAME i\u00e7indeki yerel ad (localname) ge\u00e7erli bir NCName olmal\u0131d\u0131r"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ARG_PREFIX_INVALID),
			$of(u"QNAME i\u00e7indeki \u00f6nek ge\u00e7erli bir NCName olmal\u0131d\u0131r"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"createMessage i\u00e7in kullan\u0131lan de\u011fi\u015ftirge s\u0131n\u0131rlar\u0131n d\u0131\u015f\u0131nda"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"messageFormat \u00e7a\u011fr\u0131s\u0131 s\u0131ras\u0131nda kural d\u0131\u015f\u0131 durum yay\u0131nland\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"Sat\u0131r #"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of("Kolon #"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"Diziselle\u015ftirici s\u0131n\u0131f\u0131 \'\'{0}\'\' org.xml.sax.ContentHandler i\u015flevini uygulam\u0131yor."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"Kaynak [ {0} ] bulunamad\u0131.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"Kaynak [ {0} ] y\u00fckleyemedi: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"Arabellek b\u00fcy\u00fckl\u00fc\u011f\u00fc <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_INVALID_UTF16_SURROGATE),
			$of(u"UTF-16 yerine kullan\u0131lan de\u011fer ge\u00e7ersiz: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_OIERROR),
			$of(u"G\u00c7 hatas\u0131"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Alt d\u00fc\u011f\u00fcmlerden sonra ya da bir \u00f6\u011fe \u00fcretilmeden \u00f6nce {0} \u00f6zniteli\u011fi eklenemez. \u00d6znitelik yoksay\u0131lacak."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NAMESPACE_PREFIX),
			$of(u"\'\'{0}\'\' \u00f6nekine ili\u015fkin ad alan\u0131 bildirilmedi."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_STRAY_ATTRIBUTE),
			$of(u"\'\'{0}\'\' \u00f6zniteli\u011fi \u00f6\u011fenin d\u0131\u015f\u0131nda."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_STRAY_NAMESPACE),
			$of(u"\'\'{0}\'\'=\'\'{1}\'\' ad alan\u0131 bildirimi \u00f6\u011fenin d\u0131\u015f\u0131nda."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"\'\'{0}\'\' y\u00fcklenemedi (CLASSPATH de\u011fi\u015fkeninizi inceleyin), yaln\u0131zca varsay\u0131lanlar kullan\u0131l\u0131yor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"\'\'{1}\'\' \u00e7\u0131k\u0131\u015f y\u00f6ntemi i\u00e7in \'\'{0}\'\' \u00f6zellik dosyas\u0131 y\u00fcklenemedi (CLASSPATH de\u011fi\u015fkenini inceleyin)"_s)
		})
	}));
}

XMLErrorResources_tr::XMLErrorResources_tr() {
}

$Class* XMLErrorResources_tr::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_tr, name, initialize, &_XMLErrorResources_tr_ClassInfo_, clinit$XMLErrorResources_tr, allocate$XMLErrorResources_tr);
	return class$;
}

$Class* XMLErrorResources_tr::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com