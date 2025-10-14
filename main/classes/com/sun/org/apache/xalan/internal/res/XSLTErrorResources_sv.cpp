#include <com/sun/org/apache/xalan/internal/res/XSLTErrorResources_sv.h>

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

#undef BAD_CODE
#undef ER_ARG_LITERAL
#undef ER_ASSERT_NO_TEMPLATE_PARENT
#undef ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR
#undef ER_ATTRIB_VALUE_NOT_FOUND
#undef ER_ATTRIB_VALUE_NOT_RECOGNIZED
#undef ER_ATTR_NOT_ALLOWED
#undef ER_BAD_STYLESHEET_URL
#undef ER_BAD_VALUE
#undef ER_BAD_VAL_ON_LEVEL_ATTRIB
#undef ER_BAD_XSLSORT_USE
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CALL_TO_EXT_FAILED
#undef ER_CANNOT_ADD
#undef ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT
#undef ER_CANNOT_CALL_PARSE
#undef ER_CANNOT_CMPL_EXTENSN
#undef ER_CANNOT_CREATE_EXTENSN
#undef ER_CANNOT_FIND_SAX1_DRIVER
#undef ER_CANNOT_INIT_BSFMGR
#undef ER_CANNOT_INIT_DEFAULT_TEMPLATES
#undef ER_CANNOT_MIX_XERCESDOM
#undef ER_CANNOT_SERIALIZE_XSLPROCESSOR
#undef ER_CANNOT_TRANSFORM_SOURCE_TYPE
#undef ER_CANNOT_TRANSFORM_TO_RESULT_TYPE
#undef ER_CANT_CREATE_ITEM
#undef ER_CANT_CREATE_URL
#undef ER_CANT_HAVE_CONTENT_AND_SELECT
#undef ER_CANT_RESOLVE_NAME_AVT
#undef ER_CANT_RESOLVE_NSPREFIX
#undef ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER
#undef ER_CANT_USE_DTM_FOR_INPUT
#undef ER_CANT_USE_DTM_FOR_OUTPUT
#undef ER_CAN_ONLY_OUTPUT_TO_ELEMENT
#undef ER_CHARS_NOT_ALLOWED
#undef ER_CHOOSE_REQUIRES_WHEN
#undef ER_CLASS_NOT_FOUND_FOR_OPTION
#undef ER_COULDNT_FIND_FRAGMENT
#undef ER_COULDNT_PARSE_DOC
#undef ER_COULD_NOT_CREATE_TRACELISTENER
#undef ER_COULD_NOT_CREATE_XML_PROC_LIAISON
#undef ER_COULD_NOT_FIND_EXTERN_SCRIPT
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_CURRENCY_SIGN_ILLEGAL
#undef ER_DEFAULTSPACE_NOT_SUPPORTED
#undef ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM
#undef ER_DUPLICATE_GLOBAL_VAR
#undef ER_DUPLICATE_NAMED_TEMPLATE
#undef ER_DUPLICATE_VAR
#undef ER_ELEMENT_NAME_METHOD_STATIC
#undef ER_ELEMTEMPLATEELEM_ERR
#undef ER_ELEM_CONTENT_NOT_ALLOWED
#undef ER_ENCODING_NOT_SUPPORTED
#undef ER_ERRORLISTENER
#undef ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING
#undef ER_EXTENSION_FUNC_UNKNOWN
#undef ER_FAILED_CALLING_METHOD
#undef ER_FAILED_CREATING_ELEMLITRSLT
#undef ER_FAILED_CREATING_ELEMTMPL
#undef ER_FAILED_PROCESS_STYLESHEET
#undef ER_FEATURE
#undef ER_FILE_CANNOT_BE_NULL
#undef ER_FILE_NOT_FOUND
#undef ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB
#undef ER_FUNCTION_NOT_FOUND
#undef ER_FUNCTION_NOT_SUPPORTED
#undef ER_GET_FEATURE_NULL_NAME
#undef ER_ILLEGAL_ATTRIB
#undef ER_ILLEGAL_ATTRIBUTE
#undef ER_ILLEGAL_ATTRIBUTE_VALUE
#undef ER_ILLEGAL_DOMSOURCE_INPUT
#undef ER_ILLEGAL_VALUE
#undef ER_ILLEGAL_XMLSPACE_VALUE
#undef ER_IMPORTING_ITSELF
#undef ER_IMPORTS_AS_FIRST_ELEM
#undef ER_INDENTRESULT_NOT_SUPPORTED
#undef ER_INPUT_CANNOT_BE_NULL
#undef ER_INSTANCE_MTHD_CALL_REQUIRES
#undef ER_INVALID_CONTEXT_PASSED
#undef ER_INVALID_DRIVER
#undef ER_INVALID_DRIVER_NAME
#undef ER_INVALID_ELEMENT_NAME
#undef ER_INVALID_KEY_CALL
#undef ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX
#undef ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT
#undef ER_INVALID_OPTION
#undef ER_INVALID_PREFIX
#undef ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX
#undef ER_INVALID_SET_PARAM_VALUE
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_IN_ELEMTEMPLATEELEM_READOBJECT
#undef ER_IOEXCEPTION
#undef ER_KEY_REQUIRES_MATCH_ATTRIB
#undef ER_KEY_REQUIRES_NAME_ATTRIB
#undef ER_KEY_REQUIRES_USE_ATTRIB
#undef ER_MALFORMED_FORMAT_STRING
#undef ER_MISPLACED_XSLOTHERWISE
#undef ER_MISPLACED_XSLWHEN
#undef ER_MISSING_ARG_FOR_OPTION
#undef ER_MISSING_CONTAINER_ELEMENT_COMPONENT
#undef ER_MISSING_LANG_ATTRIB
#undef ER_MISSING_NS_URI
#undef ER_MISSING_PREFIX_ATTRIB
#undef ER_MORE_MATCH_CONSTRUCTOR
#undef ER_MORE_MATCH_ELEMENT
#undef ER_MORE_MATCH_METHOD
#undef ER_MUST_HAVE_TEST_ATTRIB
#undef ER_NAMESPACE_CONTEXT_NULL_NAMESPACE
#undef ER_NAMESPACE_CONTEXT_NULL_PREFIX
#undef ER_NEED_MATCH_ATTRIB
#undef ER_NEED_NAME_ATTRIB
#undef ER_NEED_NAME_OR_MATCH_ATTRIB
#undef ER_NEED_SELECT_ATTRIB
#undef ER_NEED_TEST_ATTRIB
#undef ER_NODE_NOT_ELEMENT
#undef ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION
#undef ER_NOT_ALLOWED_INSIDE_STYLESHEET
#undef ER_NOT_ALLOWED_INSIDE_TEMPLATE
#undef ER_NOT_ALLOWED_IN_POSITION
#undef ER_NOT_SUCCESSFUL
#undef ER_NOT_SUPPORTED
#undef ER_NO_APPLY_IMPORT_IN_FOR_EACH
#undef ER_NO_ATTRIB_SET
#undef ER_NO_CLONE_OF_DOCUMENT_FRAG
#undef ER_NO_CONTEXT_OWNERDOC
#undef ER_NO_CURLYBRACE
#undef ER_NO_DRIVER_NAME
#undef ER_NO_DRIVER_NAME_SPECIFIED
#undef ER_NO_HREF_ATTRIB
#undef ER_NO_INPUT_STYLESHEET
#undef ER_NO_NAMESPACE_DECL
#undef ER_NO_NAME_ATTRIB
#undef ER_NO_OUTPUT_SPECIFIED
#undef ER_NO_OWNERDOC
#undef ER_NO_PARENT_FOR_FILTER
#undef ER_NO_SELECT_EXPRESSION
#undef ER_NO_STYLESHEETROOT
#undef ER_NO_STYLESHEET_IN_MEDIA
#undef ER_NO_STYLESHEET_PI
#undef ER_NO_URL
#undef ER_NO_URL_SPECIFIED
#undef ER_NO_XSLKEY_DECLARATION
#undef ER_NULL_CHILD
#undef ER_NULL_CONTENT_HANDLER
#undef ER_NULL_DTD_HANDLER
#undef ER_NULL_ENTITY_RESOLVER
#undef ER_NULL_ERROR_HANDLER
#undef ER_NULL_SOURCENODE_APPLYIMPORTS
#undef ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES
#undef ER_NULL_URI_NAMESPACE
#undef ER_NUMBER_TOO_BIG
#undef ER_ONE_OR_TWO
#undef ER_OUTPUT_PROPERTY_NOT_RECOGNIZED
#undef ER_PARSER_ARG_CANNOT_BE_NULL
#undef ER_PARSER_PROPERTY_NOT_SPECIFIED
#undef ER_POOLSIZE_LESS_THAN_ONE
#undef ER_POOL_EXISTS
#undef ER_POOL_SIZE_LESSTHAN_ONE
#undef ER_PREFIX_MUST_RESOLVE
#undef ER_PROCESSFROMNODE_FAILED
#undef ER_PROCESSINCLUDE_ERROR
#undef ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML
#undef ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME
#undef ER_PROCESSOR_ERROR
#undef ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL
#undef ER_PROCESS_ERROR
#undef ER_PROCESS_NOT_SUCCESSFUL
#undef ER_PROPERTY
#undef ER_PROPERTY_VALUE_BOOLEAN
#undef ER_REDIRECT_COULDNT_GET_FILENAME
#undef ER_REFERENCING_ITSELF
#undef ER_REQUIRED_ELEM_NOT_FOUND
#undef ER_REQUIRES_ATTRIB
#undef ER_REQUIRES_ELEMENTS_ATTRIB
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_RESULTNS_NOT_SUPPORTED
#undef ER_RESULT_COULD_NOT_BE_SET
#undef ER_RESULT_NULL
#undef ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER
#undef ER_SAX1_DRIVER_NOT_INSTANTIATED
#undef ER_SAX1_DRIVER_NOT_LOADED
#undef ER_SAX_EXCEPTION
#undef ER_SET_FEATURE_NULL_NAME
#undef ER_SOURCE_CANNOT_BE_NULL
#undef ER_STYLESHEET_DIRECTED_TERMINATION
#undef ER_STYLESHEET_INCLUDES_ITSELF
#undef ER_STYLESHEET_REQUIRES_VERSION_ATTRIB
#undef ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB
#undef ER_TEMPLATE_NAME_MATCH
#undef ER_TEMPLATE_NOT_FOUND
#undef ER_TOO_MANY_LISTENERS
#undef ER_TWO_OR_THREE
#undef ER_UNIMPLNODE_ERROR
#undef ER_UNKNOWN_ERROR_CALLING_EXTENSION
#undef ER_UNKNOWN_EXT_NS_PREFIX
#undef ER_UNKNOWN_XSL_ELEM
#undef ER_UNSUPPORTED_FEATURE
#undef ER_URI_CANNOT_BE_NULL
#undef ER_VALUE_SHOULD_BE_NUMBER
#undef ER_VALUE_SHOULD_EQUAL
#undef ER_XMLSPACE_ILLEGAL_VAL
#undef ER_XMLSPACE_ILLEGAL_VALUE
#undef ER_XPATH_RESOLVER_NEGATIVE_ARITY
#undef ER_XPATH_RESOLVER_NULL_QNAME
#undef ER_XSLATTRSET_USED_ITSELF
#undef ER_XSLFUNCTIONS_UNSUPPORTED
#undef ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE
#undef ER_XSLT_ERROR
#undef ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE
#undef FORMAT_FAILED
#undef INVALID_BOOLEAN
#undef INVALID_ENUM
#undef INVALID_NCNAME
#undef INVALID_NMTOKEN
#undef INVALID_NUMBER
#undef INVALID_QNAME
#undef INVALID_TCHAR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef WG_ATTRIB_NOT_HANDLED
#undef WG_ATTR_TEMPLATE
#undef WG_CANNOT_FIND_COLLATOR
#undef WG_CANNOT_LOAD_REQUESTED_DOC
#undef WG_CANNOT_MAKE_URL_FROM
#undef WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE
#undef WG_COULD_NOT_RESOLVE_PREFIX
#undef WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR
#undef WG_EMPTY_SECOND_ARG
#undef WG_ENCODING_NOT_SUPPORTED_USING_JAVA
#undef WG_ENCODING_NOT_SUPPORTED_USING_UTF8
#undef WG_EXPR_ATTRIB_CHANGED_TO_SELECT
#undef WG_FOUND_CURLYBRACE
#undef WG_FUNCTIONS_SHOULD_USE_URL
#undef WG_ILLEGAL_ATTRIBUTE
#undef WG_ILLEGAL_ATTRIBUTE_NAME
#undef WG_ILLEGAL_ATTRIBUTE_POSITION
#undef WG_ILLEGAL_ATTRIBUTE_VALUE
#undef WG_LOCALE_NOT_FOUND
#undef WG_NO_DECIMALFORMAT_DECLARATION
#undef WG_NO_LOCALE_IN_FORMATNUMBER
#undef WG_OLD_XSLT_NS
#undef WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED
#undef WG_PARSING_AND_PREPARING
#undef WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML
#undef WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME
#undef WG_SPECIFICITY_CONFLICTS
#undef WG_STYLESHEET_REQUIRES_VERSION_ATTRIB
#undef WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace res {

$FieldInfo _XSLTErrorResources_sv_FieldInfo_[] = {
	{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX)},
	{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT)},
	{"ER_NO_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_CURLYBRACE)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ILLEGAL_ATTRIBUTE)},
	{"ER_NULL_SOURCENODE_APPLYIMPORTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NULL_SOURCENODE_APPLYIMPORTS)},
	{"ER_CANNOT_ADD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_ADD)},
	{"ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES)},
	{"ER_NO_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_NAME_ATTRIB)},
	{"ER_TEMPLATE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_TEMPLATE_NOT_FOUND)},
	{"ER_CANT_RESOLVE_NAME_AVT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANT_RESOLVE_NAME_AVT)},
	{"ER_REQUIRES_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_REQUIRES_ATTRIB)},
	{"ER_MUST_HAVE_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MUST_HAVE_TEST_ATTRIB)},
	{"ER_BAD_VAL_ON_LEVEL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_BAD_VAL_ON_LEVEL_ATTRIB)},
	{"ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
	{"ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
	{"ER_NEED_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NEED_MATCH_ATTRIB)},
	{"ER_NEED_NAME_OR_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NEED_NAME_OR_MATCH_ATTRIB)},
	{"ER_CANT_RESOLVE_NSPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANT_RESOLVE_NSPREFIX)},
	{"ER_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ILLEGAL_VALUE)},
	{"ER_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_OWNERDOC)},
	{"ER_ELEMTEMPLATEELEM_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ELEMTEMPLATEELEM_ERR)},
	{"ER_NULL_CHILD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NULL_CHILD)},
	{"ER_NEED_SELECT_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NEED_SELECT_ATTRIB)},
	{"ER_NEED_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NEED_TEST_ATTRIB)},
	{"ER_NEED_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NEED_NAME_ATTRIB)},
	{"ER_NO_CONTEXT_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_CONTEXT_OWNERDOC)},
	{"ER_COULD_NOT_CREATE_XML_PROC_LIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_COULD_NOT_CREATE_XML_PROC_LIAISON)},
	{"ER_PROCESS_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROCESS_NOT_SUCCESSFUL)},
	{"ER_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NOT_SUCCESSFUL)},
	{"ER_ENCODING_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ENCODING_NOT_SUPPORTED)},
	{"ER_COULD_NOT_CREATE_TRACELISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_COULD_NOT_CREATE_TRACELISTENER)},
	{"ER_KEY_REQUIRES_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_KEY_REQUIRES_NAME_ATTRIB)},
	{"ER_KEY_REQUIRES_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_KEY_REQUIRES_MATCH_ATTRIB)},
	{"ER_KEY_REQUIRES_USE_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_KEY_REQUIRES_USE_ATTRIB)},
	{"ER_REQUIRES_ELEMENTS_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_REQUIRES_ELEMENTS_ATTRIB)},
	{"ER_MISSING_PREFIX_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MISSING_PREFIX_ATTRIB)},
	{"ER_BAD_STYLESHEET_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_BAD_STYLESHEET_URL)},
	{"ER_FILE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FILE_NOT_FOUND)},
	{"ER_IOEXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_IOEXCEPTION)},
	{"ER_NO_HREF_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_HREF_ATTRIB)},
	{"ER_STYLESHEET_INCLUDES_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_STYLESHEET_INCLUDES_ITSELF)},
	{"ER_PROCESSINCLUDE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROCESSINCLUDE_ERROR)},
	{"ER_MISSING_LANG_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MISSING_LANG_ATTRIB)},
	{"ER_MISSING_CONTAINER_ELEMENT_COMPONENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MISSING_CONTAINER_ELEMENT_COMPONENT)},
	{"ER_CAN_ONLY_OUTPUT_TO_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CAN_ONLY_OUTPUT_TO_ELEMENT)},
	{"ER_PROCESS_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROCESS_ERROR)},
	{"ER_UNIMPLNODE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_UNIMPLNODE_ERROR)},
	{"ER_NO_SELECT_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_SELECT_EXPRESSION)},
	{"ER_CANNOT_SERIALIZE_XSLPROCESSOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_SERIALIZE_XSLPROCESSOR)},
	{"ER_NO_INPUT_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_INPUT_STYLESHEET)},
	{"ER_FAILED_PROCESS_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FAILED_PROCESS_STYLESHEET)},
	{"ER_COULDNT_PARSE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_COULDNT_PARSE_DOC)},
	{"ER_COULDNT_FIND_FRAGMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_COULDNT_FIND_FRAGMENT)},
	{"ER_NODE_NOT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NODE_NOT_ELEMENT)},
	{"ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB)},
	{"ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB)},
	{"ER_NO_CLONE_OF_DOCUMENT_FRAG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_CLONE_OF_DOCUMENT_FRAG)},
	{"ER_CANT_CREATE_ITEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANT_CREATE_ITEM)},
	{"ER_XMLSPACE_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_XMLSPACE_ILLEGAL_VALUE)},
	{"ER_NO_XSLKEY_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_XSLKEY_DECLARATION)},
	{"ER_CANT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANT_CREATE_URL)},
	{"ER_XSLFUNCTIONS_UNSUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_XSLFUNCTIONS_UNSUPPORTED)},
	{"ER_PROCESSOR_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROCESSOR_ERROR)},
	{"ER_NOT_ALLOWED_INSIDE_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NOT_ALLOWED_INSIDE_STYLESHEET)},
	{"ER_RESULTNS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_RESULTNS_NOT_SUPPORTED)},
	{"ER_DEFAULTSPACE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_DEFAULTSPACE_NOT_SUPPORTED)},
	{"ER_INDENTRESULT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INDENTRESULT_NOT_SUPPORTED)},
	{"ER_ILLEGAL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ILLEGAL_ATTRIB)},
	{"ER_UNKNOWN_XSL_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_UNKNOWN_XSL_ELEM)},
	{"ER_BAD_XSLSORT_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_BAD_XSLSORT_USE)},
	{"ER_MISPLACED_XSLWHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MISPLACED_XSLWHEN)},
	{"ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE)},
	{"ER_MISPLACED_XSLOTHERWISE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MISPLACED_XSLOTHERWISE)},
	{"ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE)},
	{"ER_NOT_ALLOWED_INSIDE_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NOT_ALLOWED_INSIDE_TEMPLATE)},
	{"ER_UNKNOWN_EXT_NS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_UNKNOWN_EXT_NS_PREFIX)},
	{"ER_IMPORTS_AS_FIRST_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_IMPORTS_AS_FIRST_ELEM)},
	{"ER_IMPORTING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_IMPORTING_ITSELF)},
	{"ER_XMLSPACE_ILLEGAL_VAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_XMLSPACE_ILLEGAL_VAL)},
	{"ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL)},
	{"ER_SAX_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_SAX_EXCEPTION)},
	{"ER_XSLT_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_XSLT_ERROR)},
	{"ER_CURRENCY_SIGN_ILLEGAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CURRENCY_SIGN_ILLEGAL)},
	{"ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM)},
	{"ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER)},
	{"ER_REDIRECT_COULDNT_GET_FILENAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_REDIRECT_COULDNT_GET_FILENAME)},
	{"ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT)},
	{"ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX)},
	{"ER_MISSING_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MISSING_NS_URI)},
	{"ER_MISSING_ARG_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MISSING_ARG_FOR_OPTION)},
	{"ER_INVALID_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_OPTION)},
	{"ER_MALFORMED_FORMAT_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MALFORMED_FORMAT_STRING)},
	{"ER_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
	{"ER_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ILLEGAL_ATTRIBUTE_VALUE)},
	{"ER_CHOOSE_REQUIRES_WHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CHOOSE_REQUIRES_WHEN)},
	{"ER_NO_APPLY_IMPORT_IN_FOR_EACH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_APPLY_IMPORT_IN_FOR_EACH)},
	{"ER_CANT_USE_DTM_FOR_OUTPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANT_USE_DTM_FOR_OUTPUT)},
	{"ER_CANT_USE_DTM_FOR_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANT_USE_DTM_FOR_INPUT)},
	{"ER_CALL_TO_EXT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CALL_TO_EXT_FAILED)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PREFIX_MUST_RESOLVE)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_UTF16_SURROGATE)},
	{"ER_XSLATTRSET_USED_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_XSLATTRSET_USED_ITSELF)},
	{"ER_CANNOT_MIX_XERCESDOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_MIX_XERCESDOM)},
	{"ER_TOO_MANY_LISTENERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_TOO_MANY_LISTENERS)},
	{"ER_IN_ELEMTEMPLATEELEM_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_IN_ELEMTEMPLATEELEM_READOBJECT)},
	{"ER_DUPLICATE_NAMED_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_DUPLICATE_NAMED_TEMPLATE)},
	{"ER_INVALID_KEY_CALL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_KEY_CALL)},
	{"ER_REFERENCING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_REFERENCING_ITSELF)},
	{"ER_ILLEGAL_DOMSOURCE_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ILLEGAL_DOMSOURCE_INPUT)},
	{"ER_CLASS_NOT_FOUND_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CLASS_NOT_FOUND_FOR_OPTION)},
	{"ER_REQUIRED_ELEM_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_REQUIRED_ELEM_NOT_FOUND)},
	{"ER_INPUT_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INPUT_CANNOT_BE_NULL)},
	{"ER_URI_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_URI_CANNOT_BE_NULL)},
	{"ER_FILE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FILE_CANNOT_BE_NULL)},
	{"ER_SOURCE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_SOURCE_CANNOT_BE_NULL)},
	{"ER_CANNOT_INIT_BSFMGR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_INIT_BSFMGR)},
	{"ER_CANNOT_CMPL_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_CMPL_EXTENSN)},
	{"ER_CANNOT_CREATE_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_CREATE_EXTENSN)},
	{"ER_INSTANCE_MTHD_CALL_REQUIRES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INSTANCE_MTHD_CALL_REQUIRES)},
	{"ER_INVALID_ELEMENT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_ELEMENT_NAME)},
	{"ER_ELEMENT_NAME_METHOD_STATIC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ELEMENT_NAME_METHOD_STATIC)},
	{"ER_EXTENSION_FUNC_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_EXTENSION_FUNC_UNKNOWN)},
	{"ER_MORE_MATCH_CONSTRUCTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MORE_MATCH_CONSTRUCTOR)},
	{"ER_MORE_MATCH_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MORE_MATCH_METHOD)},
	{"ER_MORE_MATCH_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_MORE_MATCH_ELEMENT)},
	{"ER_INVALID_CONTEXT_PASSED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_CONTEXT_PASSED)},
	{"ER_POOL_EXISTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_POOL_EXISTS)},
	{"ER_NO_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_DRIVER_NAME)},
	{"ER_NO_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_URL)},
	{"ER_POOL_SIZE_LESSTHAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_POOL_SIZE_LESSTHAN_ONE)},
	{"ER_INVALID_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_DRIVER)},
	{"ER_NO_STYLESHEETROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_STYLESHEETROOT)},
	{"ER_ILLEGAL_XMLSPACE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ILLEGAL_XMLSPACE_VALUE)},
	{"ER_PROCESSFROMNODE_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROCESSFROMNODE_FAILED)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_UNKNOWN_ERROR_CALLING_EXTENSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_UNKNOWN_ERROR_CALLING_EXTENSION)},
	{"ER_NO_NAMESPACE_DECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_NAMESPACE_DECL)},
	{"ER_ELEM_CONTENT_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ELEM_CONTENT_NOT_ALLOWED)},
	{"ER_STYLESHEET_DIRECTED_TERMINATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_STYLESHEET_DIRECTED_TERMINATION)},
	{"ER_ONE_OR_TWO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ONE_OR_TWO)},
	{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_TWO_OR_THREE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_CANNOT_INIT_DEFAULT_TEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_INIT_DEFAULT_TEMPLATES)},
	{"ER_RESULT_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_RESULT_NULL)},
	{"ER_RESULT_COULD_NOT_BE_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_RESULT_COULD_NOT_BE_SET)},
	{"ER_NO_OUTPUT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_OUTPUT_SPECIFIED)},
	{"ER_CANNOT_TRANSFORM_TO_RESULT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_TRANSFORM_TO_RESULT_TYPE)},
	{"ER_CANNOT_TRANSFORM_SOURCE_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_TRANSFORM_SOURCE_TYPE)},
	{"ER_NULL_CONTENT_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NULL_CONTENT_HANDLER)},
	{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NULL_ERROR_HANDLER)},
	{"ER_CANNOT_CALL_PARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_CALL_PARSE)},
	{"ER_NO_PARENT_FOR_FILTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_PARENT_FOR_FILTER)},
	{"ER_NO_STYLESHEET_IN_MEDIA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_STYLESHEET_IN_MEDIA)},
	{"ER_NO_STYLESHEET_PI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_STYLESHEET_PI)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NOT_SUPPORTED)},
	{"ER_PROPERTY_VALUE_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROPERTY_VALUE_BOOLEAN)},
	{"ER_COULD_NOT_FIND_EXTERN_SCRIPT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_COULD_NOT_FIND_EXTERN_SCRIPT)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_OUTPUT_PROPERTY_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_OUTPUT_PROPERTY_NOT_RECOGNIZED)},
	{"ER_FAILED_CREATING_ELEMLITRSLT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FAILED_CREATING_ELEMLITRSLT)},
	{"ER_VALUE_SHOULD_BE_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_VALUE_SHOULD_BE_NUMBER)},
	{"ER_VALUE_SHOULD_EQUAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_VALUE_SHOULD_EQUAL)},
	{"ER_FAILED_CALLING_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FAILED_CALLING_METHOD)},
	{"ER_FAILED_CREATING_ELEMTMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FAILED_CREATING_ELEMTMPL)},
	{"ER_CHARS_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CHARS_NOT_ALLOWED)},
	{"ER_ATTR_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ATTR_NOT_ALLOWED)},
	{"ER_BAD_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_BAD_VALUE)},
	{"ER_ATTRIB_VALUE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ATTRIB_VALUE_NOT_FOUND)},
	{"ER_ATTRIB_VALUE_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ATTRIB_VALUE_NOT_RECOGNIZED)},
	{"ER_NULL_URI_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NULL_URI_NAMESPACE)},
	{"ER_NUMBER_TOO_BIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NUMBER_TOO_BIG)},
	{"ER_CANNOT_FIND_SAX1_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANNOT_FIND_SAX1_DRIVER)},
	{"ER_SAX1_DRIVER_NOT_LOADED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_SAX1_DRIVER_NOT_LOADED)},
	{"ER_SAX1_DRIVER_NOT_INSTANTIATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_SAX1_DRIVER_NOT_INSTANTIATED)},
	{"ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER)},
	{"ER_PARSER_PROPERTY_NOT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PARSER_PROPERTY_NOT_SPECIFIED)},
	{"ER_PARSER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PARSER_ARG_CANNOT_BE_NULL)},
	{"ER_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FEATURE)},
	{"ER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_PROPERTY)},
	{"ER_NULL_ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NULL_ENTITY_RESOLVER)},
	{"ER_NULL_DTD_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NULL_DTD_HANDLER)},
	{"ER_NO_DRIVER_NAME_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_DRIVER_NAME_SPECIFIED)},
	{"ER_NO_URL_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_URL_SPECIFIED)},
	{"ER_POOLSIZE_LESS_THAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_POOLSIZE_LESS_THAN_ONE)},
	{"ER_INVALID_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_DRIVER_NAME)},
	{"ER_ERRORLISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ERRORLISTENER)},
	{"ER_ASSERT_NO_TEMPLATE_PARENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ASSERT_NO_TEMPLATE_PARENT)},
	{"ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR)},
	{"ER_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NOT_ALLOWED_IN_POSITION)},
	{"ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION)},
	{"ER_NAMESPACE_CONTEXT_NULL_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NAMESPACE_CONTEXT_NULL_NAMESPACE)},
	{"ER_NAMESPACE_CONTEXT_NULL_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NAMESPACE_CONTEXT_NULL_PREFIX)},
	{"ER_XPATH_RESOLVER_NULL_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_XPATH_RESOLVER_NULL_QNAME)},
	{"ER_XPATH_RESOLVER_NEGATIVE_ARITY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_XPATH_RESOLVER_NEGATIVE_ARITY)},
	{"INVALID_TCHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, INVALID_TCHAR)},
	{"INVALID_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, INVALID_QNAME)},
	{"INVALID_ENUM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, INVALID_ENUM)},
	{"INVALID_NMTOKEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, INVALID_NMTOKEN)},
	{"INVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, INVALID_NCNAME)},
	{"INVALID_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, INVALID_BOOLEAN)},
	{"INVALID_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, INVALID_NUMBER)},
	{"ER_ARG_LITERAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_ARG_LITERAL)},
	{"ER_DUPLICATE_GLOBAL_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_DUPLICATE_GLOBAL_VAR)},
	{"ER_DUPLICATE_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_DUPLICATE_VAR)},
	{"ER_TEMPLATE_NAME_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_TEMPLATE_NAME_MATCH)},
	{"ER_INVALID_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_PREFIX)},
	{"ER_NO_ATTRIB_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_NO_ATTRIB_SET)},
	{"ER_FUNCTION_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_FUNCTION_NOT_FOUND)},
	{"ER_CANT_HAVE_CONTENT_AND_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_CANT_HAVE_CONTENT_AND_SELECT)},
	{"ER_INVALID_SET_PARAM_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_INVALID_SET_PARAM_VALUE)},
	{"ER_SET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_SET_FEATURE_NULL_NAME)},
	{"ER_GET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_GET_FEATURE_NULL_NAME)},
	{"ER_UNSUPPORTED_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_UNSUPPORTED_FEATURE)},
	{"ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING)},
	{"WG_FOUND_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_FOUND_CURLYBRACE)},
	{"WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR)},
	{"WG_EXPR_ATTRIB_CHANGED_TO_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_EXPR_ATTRIB_CHANGED_TO_SELECT)},
	{"WG_NO_LOCALE_IN_FORMATNUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_NO_LOCALE_IN_FORMATNUMBER)},
	{"WG_LOCALE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_LOCALE_NOT_FOUND)},
	{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_CANNOT_MAKE_URL_FROM)},
	{"WG_CANNOT_LOAD_REQUESTED_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_CANNOT_LOAD_REQUESTED_DOC)},
	{"WG_CANNOT_FIND_COLLATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_CANNOT_FIND_COLLATOR)},
	{"WG_FUNCTIONS_SHOULD_USE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_FUNCTIONS_SHOULD_USE_URL)},
	{"WG_ENCODING_NOT_SUPPORTED_USING_UTF8", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_ENCODING_NOT_SUPPORTED_USING_UTF8)},
	{"WG_ENCODING_NOT_SUPPORTED_USING_JAVA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_ENCODING_NOT_SUPPORTED_USING_JAVA)},
	{"WG_SPECIFICITY_CONFLICTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_SPECIFICITY_CONFLICTS)},
	{"WG_PARSING_AND_PREPARING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_PARSING_AND_PREPARING)},
	{"WG_ATTR_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_ATTR_TEMPLATE)},
	{"WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE)},
	{"WG_ATTRIB_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_ATTRIB_NOT_HANDLED)},
	{"WG_NO_DECIMALFORMAT_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_NO_DECIMALFORMAT_DECLARATION)},
	{"WG_OLD_XSLT_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_OLD_XSLT_NS)},
	{"WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED)},
	{"WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE)},
	{"WG_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_ILLEGAL_ATTRIBUTE)},
	{"WG_COULD_NOT_RESOLVE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_COULD_NOT_RESOLVE_PREFIX)},
	{"WG_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
	{"WG_ILLEGAL_ATTRIBUTE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_ILLEGAL_ATTRIBUTE_NAME)},
	{"WG_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_ILLEGAL_ATTRIBUTE_VALUE)},
	{"WG_EMPTY_SECOND_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_EMPTY_SECOND_ARG)},
	{"WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
	{"WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
	{"WG_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, WG_ILLEGAL_ATTRIBUTE_POSITION)},
	{"NO_MODIFICATION_ALLOWED_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, NO_MODIFICATION_ALLOWED_ERR)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_sv, FORMAT_FAILED)},
	{}
};

$MethodInfo _XSLTErrorResources_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XSLTErrorResources_sv::*)()>(&XSLTErrorResources_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XSLTErrorResources_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.res.XSLTErrorResources_sv",
	"java.util.ListResourceBundle",
	nullptr,
	_XSLTErrorResources_sv_FieldInfo_,
	_XSLTErrorResources_sv_MethodInfo_
};

$Object* allocate$XSLTErrorResources_sv($Class* clazz) {
	return $of($alloc(XSLTErrorResources_sv));
}

$String* XSLTErrorResources_sv::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT = nullptr;
$String* XSLTErrorResources_sv::ER_NO_CURLYBRACE = nullptr;
$String* XSLTErrorResources_sv::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_sv::ER_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources_sv::ER_NULL_SOURCENODE_APPLYIMPORTS = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_ADD = nullptr;
$String* XSLTErrorResources_sv::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES = nullptr;
$String* XSLTErrorResources_sv::ER_NO_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_TEMPLATE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_sv::ER_CANT_RESOLVE_NAME_AVT = nullptr;
$String* XSLTErrorResources_sv::ER_REQUIRES_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_MUST_HAVE_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_BAD_VAL_ON_LEVEL_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources_sv::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources_sv::ER_NEED_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_NEED_NAME_OR_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_CANT_RESOLVE_NSPREFIX = nullptr;
$String* XSLTErrorResources_sv::ER_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources_sv::ER_NO_OWNERDOC = nullptr;
$String* XSLTErrorResources_sv::ER_ELEMTEMPLATEELEM_ERR = nullptr;
$String* XSLTErrorResources_sv::ER_NULL_CHILD = nullptr;
$String* XSLTErrorResources_sv::ER_NEED_SELECT_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_NEED_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_NEED_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_NO_CONTEXT_OWNERDOC = nullptr;
$String* XSLTErrorResources_sv::ER_COULD_NOT_CREATE_XML_PROC_LIAISON = nullptr;
$String* XSLTErrorResources_sv::ER_PROCESS_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_sv::ER_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_sv::ER_ENCODING_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_sv::ER_COULD_NOT_CREATE_TRACELISTENER = nullptr;
$String* XSLTErrorResources_sv::ER_KEY_REQUIRES_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_KEY_REQUIRES_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_KEY_REQUIRES_USE_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_REQUIRES_ELEMENTS_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_MISSING_PREFIX_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_BAD_STYLESHEET_URL = nullptr;
$String* XSLTErrorResources_sv::ER_FILE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_sv::ER_IOEXCEPTION = nullptr;
$String* XSLTErrorResources_sv::ER_NO_HREF_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_STYLESHEET_INCLUDES_ITSELF = nullptr;
$String* XSLTErrorResources_sv::ER_PROCESSINCLUDE_ERROR = nullptr;
$String* XSLTErrorResources_sv::ER_MISSING_LANG_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_MISSING_CONTAINER_ELEMENT_COMPONENT = nullptr;
$String* XSLTErrorResources_sv::ER_CAN_ONLY_OUTPUT_TO_ELEMENT = nullptr;
$String* XSLTErrorResources_sv::ER_PROCESS_ERROR = nullptr;
$String* XSLTErrorResources_sv::ER_UNIMPLNODE_ERROR = nullptr;
$String* XSLTErrorResources_sv::ER_NO_SELECT_EXPRESSION = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_SERIALIZE_XSLPROCESSOR = nullptr;
$String* XSLTErrorResources_sv::ER_NO_INPUT_STYLESHEET = nullptr;
$String* XSLTErrorResources_sv::ER_FAILED_PROCESS_STYLESHEET = nullptr;
$String* XSLTErrorResources_sv::ER_COULDNT_PARSE_DOC = nullptr;
$String* XSLTErrorResources_sv::ER_COULDNT_FIND_FRAGMENT = nullptr;
$String* XSLTErrorResources_sv::ER_NODE_NOT_ELEMENT = nullptr;
$String* XSLTErrorResources_sv::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_NO_CLONE_OF_DOCUMENT_FRAG = nullptr;
$String* XSLTErrorResources_sv::ER_CANT_CREATE_ITEM = nullptr;
$String* XSLTErrorResources_sv::ER_XMLSPACE_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources_sv::ER_NO_XSLKEY_DECLARATION = nullptr;
$String* XSLTErrorResources_sv::ER_CANT_CREATE_URL = nullptr;
$String* XSLTErrorResources_sv::ER_XSLFUNCTIONS_UNSUPPORTED = nullptr;
$String* XSLTErrorResources_sv::ER_PROCESSOR_ERROR = nullptr;
$String* XSLTErrorResources_sv::ER_NOT_ALLOWED_INSIDE_STYLESHEET = nullptr;
$String* XSLTErrorResources_sv::ER_RESULTNS_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_sv::ER_DEFAULTSPACE_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_sv::ER_INDENTRESULT_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_sv::ER_ILLEGAL_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_UNKNOWN_XSL_ELEM = nullptr;
$String* XSLTErrorResources_sv::ER_BAD_XSLSORT_USE = nullptr;
$String* XSLTErrorResources_sv::ER_MISPLACED_XSLWHEN = nullptr;
$String* XSLTErrorResources_sv::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources_sv::ER_MISPLACED_XSLOTHERWISE = nullptr;
$String* XSLTErrorResources_sv::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources_sv::ER_NOT_ALLOWED_INSIDE_TEMPLATE = nullptr;
$String* XSLTErrorResources_sv::ER_UNKNOWN_EXT_NS_PREFIX = nullptr;
$String* XSLTErrorResources_sv::ER_IMPORTS_AS_FIRST_ELEM = nullptr;
$String* XSLTErrorResources_sv::ER_IMPORTING_ITSELF = nullptr;
$String* XSLTErrorResources_sv::ER_XMLSPACE_ILLEGAL_VAL = nullptr;
$String* XSLTErrorResources_sv::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_sv::ER_SAX_EXCEPTION = nullptr;
$String* XSLTErrorResources_sv::ER_XSLT_ERROR = nullptr;
$String* XSLTErrorResources_sv::ER_CURRENCY_SIGN_ILLEGAL = nullptr;
$String* XSLTErrorResources_sv::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM = nullptr;
$String* XSLTErrorResources_sv::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER = nullptr;
$String* XSLTErrorResources_sv::ER_REDIRECT_COULDNT_GET_FILENAME = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX = nullptr;
$String* XSLTErrorResources_sv::ER_MISSING_NS_URI = nullptr;
$String* XSLTErrorResources_sv::ER_MISSING_ARG_FOR_OPTION = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_OPTION = nullptr;
$String* XSLTErrorResources_sv::ER_MALFORMED_FORMAT_STRING = nullptr;
$String* XSLTErrorResources_sv::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::ER_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources_sv::ER_CHOOSE_REQUIRES_WHEN = nullptr;
$String* XSLTErrorResources_sv::ER_NO_APPLY_IMPORT_IN_FOR_EACH = nullptr;
$String* XSLTErrorResources_sv::ER_CANT_USE_DTM_FOR_OUTPUT = nullptr;
$String* XSLTErrorResources_sv::ER_CANT_USE_DTM_FOR_INPUT = nullptr;
$String* XSLTErrorResources_sv::ER_CALL_TO_EXT_FAILED = nullptr;
$String* XSLTErrorResources_sv::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XSLTErrorResources_sv::ER_XSLATTRSET_USED_ITSELF = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_MIX_XERCESDOM = nullptr;
$String* XSLTErrorResources_sv::ER_TOO_MANY_LISTENERS = nullptr;
$String* XSLTErrorResources_sv::ER_IN_ELEMTEMPLATEELEM_READOBJECT = nullptr;
$String* XSLTErrorResources_sv::ER_DUPLICATE_NAMED_TEMPLATE = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_KEY_CALL = nullptr;
$String* XSLTErrorResources_sv::ER_REFERENCING_ITSELF = nullptr;
$String* XSLTErrorResources_sv::ER_ILLEGAL_DOMSOURCE_INPUT = nullptr;
$String* XSLTErrorResources_sv::ER_CLASS_NOT_FOUND_FOR_OPTION = nullptr;
$String* XSLTErrorResources_sv::ER_REQUIRED_ELEM_NOT_FOUND = nullptr;
$String* XSLTErrorResources_sv::ER_INPUT_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_sv::ER_URI_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_sv::ER_FILE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_sv::ER_SOURCE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_INIT_BSFMGR = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_CMPL_EXTENSN = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_CREATE_EXTENSN = nullptr;
$String* XSLTErrorResources_sv::ER_INSTANCE_MTHD_CALL_REQUIRES = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_ELEMENT_NAME = nullptr;
$String* XSLTErrorResources_sv::ER_ELEMENT_NAME_METHOD_STATIC = nullptr;
$String* XSLTErrorResources_sv::ER_EXTENSION_FUNC_UNKNOWN = nullptr;
$String* XSLTErrorResources_sv::ER_MORE_MATCH_CONSTRUCTOR = nullptr;
$String* XSLTErrorResources_sv::ER_MORE_MATCH_METHOD = nullptr;
$String* XSLTErrorResources_sv::ER_MORE_MATCH_ELEMENT = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_CONTEXT_PASSED = nullptr;
$String* XSLTErrorResources_sv::ER_POOL_EXISTS = nullptr;
$String* XSLTErrorResources_sv::ER_NO_DRIVER_NAME = nullptr;
$String* XSLTErrorResources_sv::ER_NO_URL = nullptr;
$String* XSLTErrorResources_sv::ER_POOL_SIZE_LESSTHAN_ONE = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_DRIVER = nullptr;
$String* XSLTErrorResources_sv::ER_NO_STYLESHEETROOT = nullptr;
$String* XSLTErrorResources_sv::ER_ILLEGAL_XMLSPACE_VALUE = nullptr;
$String* XSLTErrorResources_sv::ER_PROCESSFROMNODE_FAILED = nullptr;
$String* XSLTErrorResources_sv::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XSLTErrorResources_sv::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XSLTErrorResources_sv::ER_UNKNOWN_ERROR_CALLING_EXTENSION = nullptr;
$String* XSLTErrorResources_sv::ER_NO_NAMESPACE_DECL = nullptr;
$String* XSLTErrorResources_sv::ER_ELEM_CONTENT_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_sv::ER_STYLESHEET_DIRECTED_TERMINATION = nullptr;
$String* XSLTErrorResources_sv::ER_ONE_OR_TWO = nullptr;
$String* XSLTErrorResources_sv::ER_TWO_OR_THREE = nullptr;
$String* XSLTErrorResources_sv::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_INIT_DEFAULT_TEMPLATES = nullptr;
$String* XSLTErrorResources_sv::ER_RESULT_NULL = nullptr;
$String* XSLTErrorResources_sv::ER_RESULT_COULD_NOT_BE_SET = nullptr;
$String* XSLTErrorResources_sv::ER_NO_OUTPUT_SPECIFIED = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_TRANSFORM_SOURCE_TYPE = nullptr;
$String* XSLTErrorResources_sv::ER_NULL_CONTENT_HANDLER = nullptr;
$String* XSLTErrorResources_sv::ER_NULL_ERROR_HANDLER = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_CALL_PARSE = nullptr;
$String* XSLTErrorResources_sv::ER_NO_PARENT_FOR_FILTER = nullptr;
$String* XSLTErrorResources_sv::ER_NO_STYLESHEET_IN_MEDIA = nullptr;
$String* XSLTErrorResources_sv::ER_NO_STYLESHEET_PI = nullptr;
$String* XSLTErrorResources_sv::ER_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_sv::ER_PROPERTY_VALUE_BOOLEAN = nullptr;
$String* XSLTErrorResources_sv::ER_COULD_NOT_FIND_EXTERN_SCRIPT = nullptr;
$String* XSLTErrorResources_sv::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XSLTErrorResources_sv::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources_sv::ER_FAILED_CREATING_ELEMLITRSLT = nullptr;
$String* XSLTErrorResources_sv::ER_VALUE_SHOULD_BE_NUMBER = nullptr;
$String* XSLTErrorResources_sv::ER_VALUE_SHOULD_EQUAL = nullptr;
$String* XSLTErrorResources_sv::ER_FAILED_CALLING_METHOD = nullptr;
$String* XSLTErrorResources_sv::ER_FAILED_CREATING_ELEMTMPL = nullptr;
$String* XSLTErrorResources_sv::ER_CHARS_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_sv::ER_ATTR_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_sv::ER_BAD_VALUE = nullptr;
$String* XSLTErrorResources_sv::ER_ATTRIB_VALUE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_sv::ER_ATTRIB_VALUE_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources_sv::ER_NULL_URI_NAMESPACE = nullptr;
$String* XSLTErrorResources_sv::ER_NUMBER_TOO_BIG = nullptr;
$String* XSLTErrorResources_sv::ER_CANNOT_FIND_SAX1_DRIVER = nullptr;
$String* XSLTErrorResources_sv::ER_SAX1_DRIVER_NOT_LOADED = nullptr;
$String* XSLTErrorResources_sv::ER_SAX1_DRIVER_NOT_INSTANTIATED = nullptr;
$String* XSLTErrorResources_sv::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER = nullptr;
$String* XSLTErrorResources_sv::ER_PARSER_PROPERTY_NOT_SPECIFIED = nullptr;
$String* XSLTErrorResources_sv::ER_PARSER_ARG_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_sv::ER_FEATURE = nullptr;
$String* XSLTErrorResources_sv::ER_PROPERTY = nullptr;
$String* XSLTErrorResources_sv::ER_NULL_ENTITY_RESOLVER = nullptr;
$String* XSLTErrorResources_sv::ER_NULL_DTD_HANDLER = nullptr;
$String* XSLTErrorResources_sv::ER_NO_DRIVER_NAME_SPECIFIED = nullptr;
$String* XSLTErrorResources_sv::ER_NO_URL_SPECIFIED = nullptr;
$String* XSLTErrorResources_sv::ER_POOLSIZE_LESS_THAN_ONE = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_DRIVER_NAME = nullptr;
$String* XSLTErrorResources_sv::ER_ERRORLISTENER = nullptr;
$String* XSLTErrorResources_sv::ER_ASSERT_NO_TEMPLATE_PARENT = nullptr;
$String* XSLTErrorResources_sv::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR = nullptr;
$String* XSLTErrorResources_sv::ER_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources_sv::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources_sv::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE = nullptr;
$String* XSLTErrorResources_sv::ER_NAMESPACE_CONTEXT_NULL_PREFIX = nullptr;
$String* XSLTErrorResources_sv::ER_XPATH_RESOLVER_NULL_QNAME = nullptr;
$String* XSLTErrorResources_sv::ER_XPATH_RESOLVER_NEGATIVE_ARITY = nullptr;
$String* XSLTErrorResources_sv::INVALID_TCHAR = nullptr;
$String* XSLTErrorResources_sv::INVALID_QNAME = nullptr;
$String* XSLTErrorResources_sv::INVALID_ENUM = nullptr;
$String* XSLTErrorResources_sv::INVALID_NMTOKEN = nullptr;
$String* XSLTErrorResources_sv::INVALID_NCNAME = nullptr;
$String* XSLTErrorResources_sv::INVALID_BOOLEAN = nullptr;
$String* XSLTErrorResources_sv::INVALID_NUMBER = nullptr;
$String* XSLTErrorResources_sv::ER_ARG_LITERAL = nullptr;
$String* XSLTErrorResources_sv::ER_DUPLICATE_GLOBAL_VAR = nullptr;
$String* XSLTErrorResources_sv::ER_DUPLICATE_VAR = nullptr;
$String* XSLTErrorResources_sv::ER_TEMPLATE_NAME_MATCH = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_PREFIX = nullptr;
$String* XSLTErrorResources_sv::ER_NO_ATTRIB_SET = nullptr;
$String* XSLTErrorResources_sv::ER_FUNCTION_NOT_FOUND = nullptr;
$String* XSLTErrorResources_sv::ER_CANT_HAVE_CONTENT_AND_SELECT = nullptr;
$String* XSLTErrorResources_sv::ER_INVALID_SET_PARAM_VALUE = nullptr;
$String* XSLTErrorResources_sv::ER_SET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources_sv::ER_GET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources_sv::ER_UNSUPPORTED_FEATURE = nullptr;
$String* XSLTErrorResources_sv::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING = nullptr;
$String* XSLTErrorResources_sv::WG_FOUND_CURLYBRACE = nullptr;
$String* XSLTErrorResources_sv::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR = nullptr;
$String* XSLTErrorResources_sv::WG_EXPR_ATTRIB_CHANGED_TO_SELECT = nullptr;
$String* XSLTErrorResources_sv::WG_NO_LOCALE_IN_FORMATNUMBER = nullptr;
$String* XSLTErrorResources_sv::WG_LOCALE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_sv::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XSLTErrorResources_sv::WG_CANNOT_LOAD_REQUESTED_DOC = nullptr;
$String* XSLTErrorResources_sv::WG_CANNOT_FIND_COLLATOR = nullptr;
$String* XSLTErrorResources_sv::WG_FUNCTIONS_SHOULD_USE_URL = nullptr;
$String* XSLTErrorResources_sv::WG_ENCODING_NOT_SUPPORTED_USING_UTF8 = nullptr;
$String* XSLTErrorResources_sv::WG_ENCODING_NOT_SUPPORTED_USING_JAVA = nullptr;
$String* XSLTErrorResources_sv::WG_SPECIFICITY_CONFLICTS = nullptr;
$String* XSLTErrorResources_sv::WG_PARSING_AND_PREPARING = nullptr;
$String* XSLTErrorResources_sv::WG_ATTR_TEMPLATE = nullptr;
$String* XSLTErrorResources_sv::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE = nullptr;
$String* XSLTErrorResources_sv::WG_ATTRIB_NOT_HANDLED = nullptr;
$String* XSLTErrorResources_sv::WG_NO_DECIMALFORMAT_DECLARATION = nullptr;
$String* XSLTErrorResources_sv::WG_OLD_XSLT_NS = nullptr;
$String* XSLTErrorResources_sv::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED = nullptr;
$String* XSLTErrorResources_sv::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE = nullptr;
$String* XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources_sv::WG_COULD_NOT_RESOLVE_PREFIX = nullptr;
$String* XSLTErrorResources_sv::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE_NAME = nullptr;
$String* XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources_sv::WG_EMPTY_SECOND_ARG = nullptr;
$String* XSLTErrorResources_sv::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources_sv::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XSLTErrorResources_sv::NO_MODIFICATION_ALLOWED_ERR = nullptr;

$String* XSLTErrorResources_sv::BAD_CODE = nullptr;

$String* XSLTErrorResources_sv::FORMAT_FAILED = nullptr;

void XSLTErrorResources_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XSLTErrorResources_sv::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_CURLYBRACE),
			$of(u"Fel: Uttryck f\u00e5r inte inneh\u00e5lla \'{\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ILLEGAL_ATTRIBUTE),
			$of(u"{0} har ett otill\u00e5tet attribut: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NULL_SOURCENODE_APPLYIMPORTS),
			$of(u"sourceNode \u00e4r null i xsl:apply-imports!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_ADD),
			$of("Kan inte addera {0} till {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES),
			$of(u"sourceNode \u00e4r null i handleApplyTemplatesInstruction!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_NAME_ATTRIB),
			$of(u"{0} m\u00e5ste ha ett namnattribut."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_TEMPLATE_NOT_FOUND),
			$of("Hittade inte mallen med namnet: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANT_RESOLVE_NAME_AVT),
			$of("Kunde inte matcha namn-AVT i xsl:call-template."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_REQUIRES_ATTRIB),
			$of(u"{0} kr\u00e4ver attribut: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MUST_HAVE_TEST_ATTRIB),
			$of(u"{0} m\u00e5ste ha ett \'\'test\'\'-attribut."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_BAD_VAL_ON_LEVEL_ATTRIB),
			$of(u"Felaktigt v\u00e4rde i niv\u00e5attribut: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML),
			$of(u"Namn p\u00e5 bearbetningsinstruktion kan inte vara \'xml\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME),
			$of(u"Namn p\u00e5 bearbetningsinstruktion m\u00e5ste vara ett giltigt NCName: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NEED_MATCH_ATTRIB),
			$of(u"{0} m\u00e5ste ha ett matchningsattribut n\u00e4r det anger ett l\u00e4ge."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NEED_NAME_OR_MATCH_ATTRIB),
			$of(u"{0} kr\u00e4ver antingen ett namn eller ett matchningsattribut."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANT_RESOLVE_NSPREFIX),
			$of(u"Kan inte matcha prefix f\u00f6r namnrymd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ILLEGAL_VALUE),
			$of(u"xml:space har ett otill\u00e5tet v\u00e4rde: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_OWNERDOC),
			$of(u"Underordnad nod har inget \u00e4gardokument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ELEMTEMPLATEELEM_ERR),
			$of("ElemTemplateElement-fel: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NULL_CHILD),
			$of(u"F\u00f6rs\u00f6ker l\u00e4gga till en null-underordnad!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NEED_SELECT_ATTRIB),
			$of(u"{0} kr\u00e4ver ett select-attribut."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NEED_TEST_ATTRIB),
			$of(u"xsl:when m\u00e5ste ha ett \'test\'-attribut."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NEED_NAME_ATTRIB),
			$of(u"xsl:with-parametern m\u00e5ste ha ett \'namn\'-attribut."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_CONTEXT_OWNERDOC),
			$of(u"context har inget \u00e4gardokument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_COULD_NOT_CREATE_XML_PROC_LIAISON),
			$of("Kunde inte skapa XML TransformerFactory Liaison: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROCESS_NOT_SUCCESSFUL),
			$of(u"Xalan: Processen utf\u00f6rdes inte."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NOT_SUCCESSFUL),
			$of(u"Xalan: utf\u00f6rdes inte."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ENCODING_NOT_SUPPORTED),
			$of(u"Kodningen st\u00f6ds inte: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_COULD_NOT_CREATE_TRACELISTENER),
			$of("Kunde inte TraceListener: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_KEY_REQUIRES_NAME_ATTRIB),
			$of(u"xsl:key kr\u00e4ver ett \'namn\'-attribut!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_KEY_REQUIRES_MATCH_ATTRIB),
			$of(u"xsl:key kr\u00e4ver ett \'matchning\'-attribut!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_KEY_REQUIRES_USE_ATTRIB),
			$of(u"xsl:key kr\u00e4ver ett \'anv\u00e4nd\'-attribut!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_REQUIRES_ELEMENTS_ATTRIB),
			$of(u"(StylesheetHandler) {0} kr\u00e4ver ett \'\'element\'\'-attribut!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MISSING_PREFIX_ATTRIB),
			$of(u"(StylesheetHandler) \'\'prefix\'\' f\u00f6r {0}-attribut saknas"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_BAD_STYLESHEET_URL),
			$of(u"Formatmall-URL \u00e4r felaktig: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FILE_NOT_FOUND),
			$of("Formatmallfil kunde inte hittas: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_IOEXCEPTION),
			$of("Fick IO-undantag med formatmallfil: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_HREF_ATTRIB),
			$of(u"(StylesheetHandler) Hittade inte href-attribut f\u00f6r {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_STYLESHEET_INCLUDES_ITSELF),
			$of(u"(StylesheetHandler) {0} inkluderar, direkt eller indirekt, sig sj\u00e4lv!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROCESSINCLUDE_ERROR),
			$of("StylesheetHandler.processInclude-fel, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MISSING_LANG_ATTRIB),
			$of(u"(StylesheetHandler) \'\'lang\'\' f\u00f6r {0}-attribut saknas"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MISSING_CONTAINER_ELEMENT_COMPONENT),
			$of(u"(StylesheetHandler) {0}-element?? \u00e4r felplacerat Container-elementet \'\'component\'\' saknas"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CAN_ONLY_OUTPUT_TO_ELEMENT),
			$of("Kan endast skicka utdata till ett Element, ett DocumentFragment, ett Document eller en PrintWriter."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROCESS_ERROR),
			$of("StylesheetRoot.process-fel"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_UNIMPLNODE_ERROR),
			$of("UnImplNode-fel: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_SELECT_EXPRESSION),
			$of("Fel! Hittade inte xpath select-uttryck (-select)."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_SERIALIZE_XSLPROCESSOR),
			$of("Kan inte serialisera en XSLProcessor!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_INPUT_STYLESHEET),
			$of("Formatmallindata ej angiven!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FAILED_PROCESS_STYLESHEET),
			$of("Kunde inte behandla formatmall!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_COULDNT_PARSE_DOC),
			$of("Kunde inte tolka dokumentet {0}!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_COULDNT_FIND_FRAGMENT),
			$of("Hittade inte fragment: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NODE_NOT_ELEMENT),
			$of(u"Nod som pekades p\u00e5 av fragment-identifierare var inte ett element: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB),
			$of(u"for-each kr\u00e4ver antingen en matchning eller ett namnattribut"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB),
			$of(u"templates kr\u00e4ver antingen en matchning eller ett namnattribut"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_CLONE_OF_DOCUMENT_FRAG),
			$of("Ingen klon av ett dokumentfragment!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANT_CREATE_ITEM),
			$of(u"Kan inte skapa element i resultattr\u00e4d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_XMLSPACE_ILLEGAL_VALUE),
			$of(u"xml:space i k\u00e4ll-XML har ett otill\u00e5tet v\u00e4rde: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_XSLKEY_DECLARATION),
			$of(u"Det finns ingen xsl:key-deklaration f\u00f6r {0}!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANT_CREATE_URL),
			$of(u"Fel! Kan inte skapa URL f\u00f6r: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_XSLFUNCTIONS_UNSUPPORTED),
			$of(u"xsl:functions st\u00f6ds inte"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROCESSOR_ERROR),
			$of("XSLT TransformerFactory-fel"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NOT_ALLOWED_INSIDE_STYLESHEET),
			$of(u"(StylesheetHandler) {0} \u00e4r inte till\u00e5ten inne i en formatmall!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_RESULTNS_NOT_SUPPORTED),
			$of(u"result-ns st\u00f6ds inte l\u00e4ngre! Anv\u00e4nd xsl:output ist\u00e4llet."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_DEFAULTSPACE_NOT_SUPPORTED),
			$of(u"default-space st\u00f6ds inte l\u00e4ngre! Anv\u00e4nd xsl:strip-space eller xsl:preserve-space ist\u00e4llet."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INDENTRESULT_NOT_SUPPORTED),
			$of(u"indent-result st\u00f6ds inte l\u00e4ngre! Anv\u00e4nd xsl:output ist\u00e4llet."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ILLEGAL_ATTRIB),
			$of(u"(StylesheetHandler) {0} har ett otill\u00e5tet attribut: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_UNKNOWN_XSL_ELEM),
			$of(u"Ok\u00e4nt XSL-element: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_BAD_XSLSORT_USE),
			$of(u"(StylesheetHandler) xsl:sort kan endast anv\u00e4ndas med xsl:apply-templates eller xsl:for-each."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MISPLACED_XSLWHEN),
			$of("(StylesheetHandler) felplacerade xsl:when!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE),
			$of(u"(StylesheetHandler) xsl:when h\u00e4rstammar inte fr\u00e5n xsl:choose!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MISPLACED_XSLOTHERWISE),
			$of("(StylesheetHandler) felplacerade xsl:otherwise!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE),
			$of(u"(StylesheetHandler) xsl:otherwise h\u00e4rstammar inte fr\u00e5n xsl:choose!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NOT_ALLOWED_INSIDE_TEMPLATE),
			$of(u"(StylesheetHandler) {0} \u00e4r inte till\u00e5ten inne i en mall!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_UNKNOWN_EXT_NS_PREFIX),
			$of(u"(StylesheetHandler) ok\u00e4nt namnrymdsprefix {1} f\u00f6r till\u00e4gg {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_IMPORTS_AS_FIRST_ELEM),
			$of(u"(StylesheetHandler) Imports kan endast f\u00f6rekomma som de f\u00f6rsta elementen i formatmallen!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_IMPORTING_ITSELF),
			$of(u"(StylesheetHandler) {0} importerar, direkt eller indirekt, sig sj\u00e4lv!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_XMLSPACE_ILLEGAL_VAL),
			$of(u"(StylesheetHandler) xml:space har ett otill\u00e5tet v\u00e4rde: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL),
			$of(u"processStylesheet utf\u00f6rdes inte!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_SAX_EXCEPTION),
			$of("SAX-undantag"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"Funktionen st\u00f6ds inte!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_XSLT_ERROR),
			$of("XSLT-fel"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CURRENCY_SIGN_ILLEGAL),
			$of(u"valutatecken \u00e4r inte till\u00e5tet i formatm\u00f6nsterstr\u00e4ng"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM),
			$of(u"Dokumentfunktion st\u00f6ds inte i Stylesheet DOM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER),
			$of("Kan inte matcha prefix med matchning som saknar prefix!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_REDIRECT_COULDNT_GET_FILENAME),
			$of(u"Redirect-till\u00e4gg: Hittade inte filnamn - fil eller valattribut m\u00e5ste returnera giltig str\u00e4ng."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT),
			$of(u"Kan inte bygga FormatterListener i Redirect-till\u00e4gg!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX),
			$of(u"Prefix i exclude-result-prefixes \u00e4r inte giltigt: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MISSING_NS_URI),
			$of(u"Namnrymds-URI saknas f\u00f6r angivna prefix"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MISSING_ARG_FOR_OPTION),
			$of(u"Argument saknas f\u00f6r alternativet: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_OPTION),
			$of("Ogiltigt alternativ: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MALFORMED_FORMAT_STRING),
			$of(u"Felaktigt utformad formatstr\u00e4ng: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB),
			$of(u"xsl:stylesheet kr\u00e4ver ett \'version\'-attribut!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ILLEGAL_ATTRIBUTE_VALUE),
			$of(u"Attribut: {0} har ett otill\u00e5tet v\u00e4rde: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CHOOSE_REQUIRES_WHEN),
			$of(u"xsl:choose kr\u00e4ver xsl:when"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_APPLY_IMPORT_IN_FOR_EACH),
			$of(u"xsl:apply-imports inte till\u00e5tet i xsl:for-each"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANT_USE_DTM_FOR_OUTPUT),
			$of(u"Kan inte anv\u00e4nda DTMLiaison till en DOM utdatanod... skicka en com.sun.org.apache.xpath.internal.DOM2Helper ist\u00e4llet!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANT_USE_DTM_FOR_INPUT),
			$of(u"Kan inte anv\u00e4nda DTMLiaison till en DOM indatanod... skicka en com.sun.org.apache.xpath.internal.DOM2Helper ist\u00e4llet!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CALL_TO_EXT_FAILED),
			$of(u"Anrop till till\u00e4ggselement utf\u00f6rdes inte: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PREFIX_MUST_RESOLVE),
			$of(u"Prefix m\u00e5ste matchas till en namnrymd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_UTF16_SURROGATE),
			$of(u"Ogiltigt UTF-16-surrogat uppt\u00e4ckt: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_XSLATTRSET_USED_ITSELF),
			$of(u"xsl:attribute-set {0} anv\u00e4nde sig sj\u00e4lvt, vilket kommer att orsaka en o\u00e4ndlig slinga."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_MIX_XERCESDOM),
			$of("Kan inte blanda icke-Xerces-DOM-indata med Xerces-DOM-utdata!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_TOO_MANY_LISTENERS),
			$of("addTraceListenersToStylesheet - TooManyListenersException"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_IN_ELEMTEMPLATEELEM_READOBJECT),
			$of("I ElemTemplateElement.readObject: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_DUPLICATE_NAMED_TEMPLATE),
			$of(u"Hittade fler \u00e4n en mall med namnet: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_KEY_CALL),
			$of(u"Ogiltigt funktionsanrop: rekursiva key()-anrop \u00e4r inte till\u00e5tna"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_REFERENCING_ITSELF),
			$of(u"Variabeln {0} refererar, direkt eller indirekt, till sig sj\u00e4lv!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ILLEGAL_DOMSOURCE_INPUT),
			$of(u"Indatanoden till en DOMSource f\u00f6r newTemplates f\u00e5r inte vara null!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CLASS_NOT_FOUND_FOR_OPTION),
			$of(u"Klassfil f\u00f6r alternativ {0} saknas"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_REQUIRED_ELEM_NOT_FOUND),
			$of("Obligatoriska element hittades inte: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INPUT_CANNOT_BE_NULL),
			$of("InputStream kan inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_URI_CANNOT_BE_NULL),
			$of("URI kan inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FILE_CANNOT_BE_NULL),
			$of("Fil kan inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_SOURCE_CANNOT_BE_NULL),
			$of("InputSource kan inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_INIT_BSFMGR),
			$of("Kunde inte initiera BSF Manager"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_CMPL_EXTENSN),
			$of(u"Kunde inte kompilera till\u00e4gg"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_CREATE_EXTENSN),
			$of(u"Kunde inte skapa till\u00e4gg: {0} p\u00e5 grund av: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INSTANCE_MTHD_CALL_REQUIRES),
			$of(u"Instansmetodanrop till metod {0} kr\u00e4ver en objektinstans som f\u00f6rsta argument"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_ELEMENT_NAME),
			$of("Ogiltigt elementnamn angivet {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ELEMENT_NAME_METHOD_STATIC),
			$of(u"Elementnamnmetod m\u00e5ste vara statisk {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_EXTENSION_FUNC_UNKNOWN),
			$of(u"Till\u00e4ggsfunktion {0} : {1} \u00e4r ok\u00e4nd"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MORE_MATCH_CONSTRUCTOR),
			$of(u"Fler \u00e4n en b\u00e4sta matchning f\u00f6r konstruktor f\u00f6r {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MORE_MATCH_METHOD),
			$of(u"Fler \u00e4n en b\u00e4sta matchning f\u00f6r metod {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_MORE_MATCH_ELEMENT),
			$of(u"Fler \u00e4n en b\u00e4sta matchning f\u00f6r elementmetod {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_CONTEXT_PASSED),
			$of(u"Ogiltig kontext skickad f\u00f6r att utv\u00e4rdera {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_POOL_EXISTS),
			$of("Pool finns redan"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_DRIVER_NAME),
			$of("Inget drivrutinsnamn angivet"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_URL),
			$of("Ingen URL angiven"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_POOL_SIZE_LESSTHAN_ONE),
			$of(u"Poolstorlek \u00e4r mindre \u00e4n ett!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_DRIVER),
			$of("Ogiltigt drivrutinsnamn angivet!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_STYLESHEETROOT),
			$of("Hittade inte formatmallen roten!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ILLEGAL_XMLSPACE_VALUE),
			$of(u"Otill\u00e5tet v\u00e4rde f\u00f6r xml:space"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROCESSFROMNODE_FAILED),
			$of(u"processFromNode utf\u00f6rdes inte"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_RESOURCE_COULD_NOT_LOAD),
			$of("Resursen [ {0} ] kunde inte laddas: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Buffertstorlek <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_UNKNOWN_ERROR_CALLING_EXTENSION),
			$of(u"Ok\u00e4nt fel vid anrop av till\u00e4gg"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_NAMESPACE_DECL),
			$of("Prefix {0} har ingen motsvarande namnrymdsdeklaration"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ELEM_CONTENT_NOT_ALLOWED),
			$of(u"Elementinneh\u00e5ll inte till\u00e5tet f\u00f6r lang=javaclass {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_STYLESHEET_DIRECTED_TERMINATION),
			$of("Avslutning via formatmall"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ONE_OR_TWO),
			$of("1 eller 2"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_TWO_OR_THREE),
			$of("2 eller 3"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"Kunde inte ladda {0} (kontrollera CLASSPATH), anv\u00e4nder nu enbart standardv\u00e4rden"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_INIT_DEFAULT_TEMPLATES),
			$of("Kan inte initiera standardmallar"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_RESULT_NULL),
			$of("Result borde inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_RESULT_COULD_NOT_BE_SET),
			$of(u"Result kunde inte st\u00e4llas in"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_OUTPUT_SPECIFIED),
			$of("Ingen utdata angiven"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE),
			$of("Kan inte omvandla till Result av typ {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_TRANSFORM_SOURCE_TYPE),
			$of("Kan inte omvandla Source av typ {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NULL_CONTENT_HANDLER),
			$of(u"Inneh\u00e5llshanterare med v\u00e4rde null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NULL_ERROR_HANDLER),
			$of(u"Felhanterare med v\u00e4rde null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_CALL_PARSE),
			$of("parse kan inte anropas om ContentHandler inte har satts"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_PARENT_FOR_FILTER),
			$of(u"Ingen \u00f6verordnad f\u00f6r filter"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_STYLESHEET_IN_MEDIA),
			$of("Formatmall saknas i: {0}, media= {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_STYLESHEET_PI),
			$of(u"PI f\u00f6r xml-formatmall saknas i: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NOT_SUPPORTED),
			$of(u"Underst\u00f6ds inte: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROPERTY_VALUE_BOOLEAN),
			$of(u"V\u00e4rde f\u00f6r egenskap {0} b\u00f6r vara en boolesk instans"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_COULD_NOT_FIND_EXTERN_SCRIPT),
			$of(u"Kunde inte h\u00e4mta externt skript fr\u00e5n {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"Resursen [ {0} ] kunde inte h\u00e4mtas.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED),
			$of("Utdataegenskap kan inte identifieras: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FAILED_CREATING_ELEMLITRSLT),
			$of("Kunde inte skapa instans av ElemLiteralResult"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_VALUE_SHOULD_BE_NUMBER),
			$of(u"V\u00e4rdet f\u00f6r {0} b\u00f6r inneh\u00e5lla ett tal som kan tolkas"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_VALUE_SHOULD_EQUAL),
			$of(u"V\u00e4rdet f\u00f6r {0} b\u00f6r vara ja eller nej"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FAILED_CALLING_METHOD),
			$of("Kunde inte anropa metoden {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FAILED_CREATING_ELEMTMPL),
			$of("Kunde inte skapa instans av ElemTemplateElement"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CHARS_NOT_ALLOWED),
			$of(u"Tecken \u00e4r inte till\u00e5tna i dokumentet i det h\u00e4r skedet"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ATTR_NOT_ALLOWED),
			$of(u"Attributet \"{0}\" \u00e4r inte till\u00e5tet i elementet {1}!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_BAD_VALUE),
			$of(u"{0} felaktigt v\u00e4rde {1} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ATTRIB_VALUE_NOT_FOUND),
			$of("Attributet {0} saknas "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ATTRIB_VALUE_NOT_RECOGNIZED),
			$of(u"Attributv\u00e4rdet {0} kan inte identifieras "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NULL_URI_NAMESPACE),
			$of(u"F\u00f6rs\u00f6ker generera ett namnrymdsprefix med en null-URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NUMBER_TOO_BIG),
			$of(u"F\u00f6rs\u00f6ker formatera ett tal som \u00e4r st\u00f6rre \u00e4n det st\u00f6rsta l\u00e5nga heltalet"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANNOT_FIND_SAX1_DRIVER),
			$of("Hittar inte SAX1-drivrutinen klass {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_SAX1_DRIVER_NOT_LOADED),
			$of("SAX1-drivrutinen klass {0} hittades, men kan inte laddas"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_SAX1_DRIVER_NOT_INSTANTIATED),
			$of("SAX1-drivrutinen klass {0} laddades, men kan inte instansieras"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER),
			$of("SAX1-drivrutinen klass {0} implementerar inte org.xml.sax.Parser"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PARSER_PROPERTY_NOT_SPECIFIED),
			$of(u"Systemegenskapen org.xml.sax.parser \u00e4r inte angiven"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PARSER_ARG_CANNOT_BE_NULL),
			$of(u"Parserargument m\u00e5ste vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FEATURE),
			$of("Funktion: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_PROPERTY),
			$of("Egenskap: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NULL_ENTITY_RESOLVER),
			$of(u"Enhetsmatchning med v\u00e4rde null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NULL_DTD_HANDLER),
			$of(u"DTD-hanterare med v\u00e4rde null"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_DRIVER_NAME_SPECIFIED),
			$of("Inget angivet drivrutinsnamn!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_URL_SPECIFIED),
			$of("Ingen URL angiven!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_POOLSIZE_LESS_THAN_ONE),
			$of(u"Poolstorlek \u00e4r mindre \u00e4n ett!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_DRIVER_NAME),
			$of("Ogiltigt drivrutinsnamn angivet!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ERRORLISTENER),
			$of("ErrorListener"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ASSERT_NO_TEMPLATE_PARENT),
			$of(u"Programmerarfel! Uttrycket har ingen \u00f6verordnad ElemTemplateElement!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR),
			$of("Programmerarens utsaga i RedundentExprEliminator: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NOT_ALLOWED_IN_POSITION),
			$of(u"{0} \u00e4r inte till\u00e5ten i denna position i formatmallen!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION),
			$of(u"Text utan blanktecken \u00e4r inte till\u00e5ten i denna position i formatmallen!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::INVALID_TCHAR),
			$of(u"Otill\u00e5tet v\u00e4rde: {1} anv\u00e4nds f\u00f6r CHAR-attributet: {0}. Ett attribut av CHAR-typ f\u00e5r bara ha 1 tecken!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::INVALID_QNAME),
			$of(u"Otill\u00e5tet v\u00e4rde: {1} anv\u00e4nds f\u00f6r QNAME-attributet: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::INVALID_ENUM),
			$of(u"Otill\u00e5tet v\u00e4rde: {1} anv\u00e4nds f\u00f6r ENUM-attributet: {0}. Giltiga v\u00e4rden \u00e4r: {2}."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::INVALID_NMTOKEN),
			$of(u"Otill\u00e5tet v\u00e4rde: {1} anv\u00e4nds f\u00f6r NMTOKEN-attributet: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::INVALID_NCNAME),
			$of(u"Otill\u00e5tet v\u00e4rde: {1} anv\u00e4nds f\u00f6r NCNAME-attributet: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::INVALID_BOOLEAN),
			$of(u"Otill\u00e5tet v\u00e4rde: {1} anv\u00e4nds f\u00f6r boolean-attributet: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::INVALID_NUMBER),
			$of(u"Otill\u00e5tet v\u00e4rde: {1} anv\u00e4nds f\u00f6r number-attributet: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_ARG_LITERAL),
			$of(u"Argument f\u00f6r {0} i matchningsm\u00f6nstret m\u00e5ste vara litteral."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_DUPLICATE_GLOBAL_VAR),
			$of("Dubbel deklaration av global variabel."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_DUPLICATE_VAR),
			$of("Dubbel deklaration av variabel."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_TEMPLATE_NAME_MATCH),
			$of(u"xsl:template m\u00e5ste ha name- och/eller match-attribut"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_PREFIX),
			$of(u"Prefix i exclude-result-prefixes \u00e4r inte giltigt: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NO_ATTRIB_SET),
			$of("attributserien {0} finns inte"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_FUNCTION_NOT_FOUND),
			$of("Det finns ingen funktion med namnet {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_CANT_HAVE_CONTENT_AND_SELECT),
			$of(u"Elementet {0} kan inte ha b\u00e5de inneh\u00e5ll och select-attribut."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_SET_PARAM_VALUE),
			$of(u"Parameterv\u00e4rdet f\u00f6r {0} m\u00e5ste vara giltigt Java-objekt"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT),
			$of(u"result-prefix-attributet i xsl:namespace-alias-element har v\u00e4rdet \'#default\', men det finns ingen deklaration av standardnamnrymd inom omfattningen av elementet"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX),
			$of(u"result-prefix-attributet i xsl:namespace-alias-element har v\u00e4rdet \'\'{0}\'\', men det finns ingen deklaration av namnrymd f\u00f6r prefixet \'\'{0}\'\' inom omfattningen av elementet."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_SET_FEATURE_NULL_NAME),
			$of(u"Funktionsnamnet kan inte vara null i TransformerFactory.setFeature(namn p\u00e5 str\u00e4ng, booleskt v\u00e4rde)."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_GET_FEATURE_NULL_NAME),
			$of(u"Funktionsnamnet kan inte vara null i TransformerFactory.getFeature(namn p\u00e5 str\u00e4ng)."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_UNSUPPORTED_FEATURE),
			$of(u"Kan inte st\u00e4lla in funktionen \'\'{0}\'\' i denna TransformerFactory."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING),
			$of(u"Anv\u00e4ndning av till\u00e4ggselementet \'\'{0}\'\' \u00e4r inte till\u00e5tet n\u00e4r s\u00e4ker bearbetning till\u00e4mpas."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE),
			$of(u"Kan inte h\u00e4mta prefix f\u00f6r namnrymds-uri som \u00e4r null."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_NAMESPACE_CONTEXT_NULL_PREFIX),
			$of(u"Kan inte h\u00e4mta namnrymds-uri f\u00f6r prefix som \u00e4r null."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_XPATH_RESOLVER_NULL_QNAME),
			$of(u"Funktionsnamn f\u00e5r inte vara null."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::ER_XPATH_RESOLVER_NEGATIVE_ARITY),
			$of("Ariteten kan inte vara negativ."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_FOUND_CURLYBRACE),
			$of(u"Hittade \'}\' men det finns ingen \u00f6ppen attributmall!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR),
			$of(u"Varning: r\u00e4knarattribut matchar inte \u00f6verordnad i xsl:number! Target = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_EXPR_ATTRIB_CHANGED_TO_SELECT),
			$of(u"Gammal syntax: Namnet p\u00e5 \'expr\'-attributet har \u00e4ndrats till \'select\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_NO_LOCALE_IN_FORMATNUMBER),
			$of(u"Xalan hanterar \u00e4nnu inte spr\u00e5kkonventionen i funktionen format-number."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_LOCALE_NOT_FOUND),
			$of(u"Varning: Hittade inte spr\u00e5kkonvention f\u00f6r xml:lang={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_CANNOT_MAKE_URL_FROM),
			$of(u"Kan inte skapa URL fr\u00e5n: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_CANNOT_LOAD_REQUESTED_DOC),
			$of(u"Kan inte ladda beg\u00e4rt dokument: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_CANNOT_FIND_COLLATOR),
			$of(u"Hittade inte kollationering f\u00f6r <sort xml:lang={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_FUNCTIONS_SHOULD_USE_URL),
			$of(u"Gammal syntax: funktionsinstruktionen b\u00f6r anv\u00e4nda url:en {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_ENCODING_NOT_SUPPORTED_USING_UTF8),
			$of(u"kodning underst\u00f6ds inte: {0}, anv\u00e4nder UTF-8"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_ENCODING_NOT_SUPPORTED_USING_JAVA),
			$of(u"kodning underst\u00f6ds inte: {0}, anv\u00e4nder Java {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_SPECIFICITY_CONFLICTS),
			$of(u"Specifika konflikter hittades: {0} Senast hittade i formatmall kommer att anv\u00e4ndas."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_PARSING_AND_PREPARING),
			$of(u"========= Tolkar och f\u00f6rbereder {0} =========="_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_ATTR_TEMPLATE),
			$of("Attributmall, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE),
			$of("Matchningskonflikt mellan xsl:strip-space och xsl:preserve-space"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_ATTRIB_NOT_HANDLED),
			$of(u"Xalan hanterar \u00e4nnu inte attributet {0}!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_NO_DECIMALFORMAT_DECLARATION),
			$of(u"Hittade ingen deklaration f\u00f6r decimalformatet: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_OLD_XSLT_NS),
			$of(u"XSLT-namnrymd saknas eller \u00e4r inkorrekt. "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED),
			$of(u"Endast en standarddeklaration av xsl:decimal-format \u00e4r till\u00e5ten."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE),
			$of(u"Namn p\u00e5 xsl:decimal-format m\u00e5ste vara unika. Namnet \"{0}\" har blivit duplicerat."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE),
			$of(u"{0} har ett otill\u00e5tet attribut: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_COULD_NOT_RESOLVE_PREFIX),
			$of("Kunde inte matcha namnrymdsprefix: {0}. Noden ignoreras."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB),
			$of(u"xsl:stylesheet kr\u00e4ver ett \'version\'-attribut!"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE_NAME),
			$of(u"Otill\u00e5tet attributnamn: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE_VALUE),
			$of(u"Otill\u00e5tet v\u00e4rde anv\u00e4nds f\u00f6r attributet {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_EMPTY_SECOND_ARG),
			$of(u"Resulterande nodupps\u00e4ttning fr\u00e5n dokumentfunktionens andra argumentet \u00e4r tomt. En tom nodupps\u00e4ttning anv\u00e4nds."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML),
			$of(u"\'name\'-attributets v\u00e4rde f\u00f6r xsl:processing-instruction kan inte vara \'xml\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME),
			$of(u"\'\'name\'\'-attributets v\u00e4rde f\u00f6r xsl:processing-instruction m\u00e5ste vara giltigt NCName: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Kan inte l\u00e4gga till attributet {0} efter underordnade noder eller innan ett element har skapats. Attributet ignoreras."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_sv::NO_MODIFICATION_ALLOWED_ERR),
			$of(u"F\u00f6rs\u00f6ker \u00e4ndra ett objekt d\u00e4r \u00e4ndringar inte \u00e4r till\u00e5tna."_s)
		}),
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("en"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("en"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("en"_s)
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
			$of("version"_s),
			$of(">>>>>>> Xalan version "_s)
		}),
		$$new($ObjectArray, {
			$of("version2"_s),
			$of("<<<<<<<"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of("ja"_s)
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
			$of("xsldone"_s),
			$of(u"XSLProcessor: utf\u00f6rd"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_option"_s),
			$of(u"Process-klassalternativ f\u00f6r Xalan-J-kommandorad:"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_option"_s),
			$of(u"Process-klassalternativ f\u00f6r Xalan-J-kommandorad:"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_invalid_xsltc_option"_s),
			$of(u"Alternativet {0} underst\u00f6ds inte i XSLTC-l\u00e4ge."_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_invalid_xalan_option"_s),
			$of(u"Alternativet {0} kan anv\u00e4ndas endast med -XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_no_input"_s),
			$of(u"Fel: Ingen formatmall eller indata-xml har angetts. K\u00f6r kommandot utan n\u00e5got alternativ f\u00f6r att visa syntax."_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_common_options"_s),
			$of(u"-Allm\u00e4nna alternativ-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_xalan_options"_s),
			$of(u"-Alternativ f\u00f6r Xalan-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_xsltc_options"_s),
			$of(u"-Alternativ f\u00f6r XSLTC-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_return_to_continue"_s),
			$of(u"(tryck p\u00e5 Enter f\u00f6r att forts\u00e4tta)"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXSLTC"_s),
			$of(u"   [-XSLTC (anv\u00e4nd XSLTC f\u00f6r transformering)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionIN"_s),
			$of("   [-IN inputXMLURL]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXSL"_s),
			$of("   [-XSL XSLTransformationURL]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionOUT"_s),
			$of("   [-OUT outputFileName]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLXCIN"_s),
			$of("   [-LXCIN compiledStylesheetFileNameIn]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLXCOUT"_s),
			$of("   [-LXCOUT compiledStylesheetFileNameOutOut]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionPARSER"_s),
			$of(u"   [-PARSER fullt kvalificerat klassnamn p\u00e5 parserf\u00f6rbindelse]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionE"_s),
			$of(u"   [-E (Ut\u00f6ka inte enhetsreferenser)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionV"_s),
			$of(u"   [-E (Ut\u00f6ka inte enhetsreferenser)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionQC"_s),
			$of(u"   [-QC (Tysta m\u00f6nsterkonfliktvarningar)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionQ"_s),
			$of(u"   [-Q  (Tyst l\u00e4ge)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLF"_s),
			$of(u"   [-LF (Anv\u00e4nd radmatningar endast f\u00f6r utdata {standard \u00e4r CR/LF})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionCR"_s),
			$of(u"   [-CR (Anv\u00e4nd radmatningar endast f\u00f6r utdata {standard \u00e4r CR/LF})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionESCAPE"_s),
			$of(u"   [-ESCAPE (Vilka tecken \u00e4r skiftningstecken {standard \u00e4r <>&\"\'\\r\\n}]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionINDENT"_s),
			$of(u"   [-INDENT (Best\u00e4m antal blanksteg f\u00f6r indrag {standard \u00e4r 0})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTT"_s),
			$of(u"   [-TT (Sp\u00e5ra mallar vid anrop.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTG"_s),
			$of(u"   [-TG (Sp\u00e5ra varje generationsh\u00e4ndelse.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTS"_s),
			$of(u"   [-TS (Sp\u00e5ra varje urvalsh\u00e4ndelse.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTTC"_s),
			$of(u"   [-TTC (Sp\u00e5ra mallunderordnade n\u00e4r de bearbetas.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTCLASS"_s),
			$of(u"   [-TCLASS (TraceListener-klass f\u00f6r sp\u00e5rningstill\u00e4gg.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionVALIDATE"_s),
			$of(u"   [-VALIDATE (St\u00e4ll in om validering utf\u00f6rs. Standard \u00e4r att validering \u00e4r avst\u00e4ngd.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionEDUMP"_s),
			$of(u"   [-EDUMP {valfritt filnamn} (G\u00f6r stackdump vid fel.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXML"_s),
			$of(u"   [-XML (Anv\u00e4nd XML-formaterare och l\u00e4gg till XML-huvud.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTEXT"_s),
			$of(u"   [-TEXT (Anv\u00e4nd enkel textformaterare.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionHTML"_s),
			$of(u"   [-HTML (Anv\u00e4nd HTML-formaterare.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionPARAM"_s),
			$of(u"   [-PARAM-namnuttryck (St\u00e4ll in parameter f\u00f6r formatmall)]"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg1"_s),
			$of(u"XSL-processen utf\u00f6rdes inte."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg2"_s),
			$of("** Hittade inte parser **"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg3"_s),
			$of(u"Kontrollera klass\u00f6kv\u00e4gen."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg4"_s),
			$of(u"Om du inte har IBMs XML Parser f\u00f6r Java kan du ladda ned den fr\u00e5n"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg5"_s),
			$of("IBMs AlphaWorks: http://www.alphaworks.ibm.com/formula/xml"_s)
		}),
		$$new($ObjectArray, {
			$of("optionURIRESOLVER"_s),
			$of(u"   [-URIRESOLVER fullst\u00e4ndigt klassnamn (URIResolver som anv\u00e4nds vid matchning av URI-er)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionENTITYRESOLVER"_s),
			$of(u"   [-ENTITYRESOLVER fullst\u00e4ndigt klassnamn (EntityResolver som anv\u00e4nds vid matchning av enheter)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionCONTENTHANDLER"_s),
			$of(u"   [-CONTENTHANDLER fullst\u00e4ndigt klassnamn (ContentHandler som anv\u00e4nds vid serialisering av utdata)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLINENUMBERS"_s),
			$of(u"   [-L anv\u00e4nd radnummer i k\u00e4lldokument]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionSECUREPROCESSING"_s),
			$of(u"   [-SECURE (ange att s\u00e4ker bearbetning ska till\u00e4mpas.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionMEDIA"_s),
			$of(u"   [-MEDIA mediaType (anv\u00e4nd medieattribut f\u00f6r att hitta formatmall som h\u00f6r ihop med dokument.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionFLAVOR"_s),
			$of(u"   [-FLAVOR flavorName (Anv\u00e4nd s2s=SAX eller d2d=DOM vid transformering.)] "_s)
		}),
		$$new($ObjectArray, {
			$of("optionDIAG"_s),
			$of(u"   [-DIAG (Skriv ut tid f\u00f6r transformering i millisekunder.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionINCREMENTAL"_s),
			$of(u"   [-INCREMENTAL (beg\u00e4r inkrementell DTM-konstruktion genom att ange http://xml.apache.org/xalan/features/incremental true.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionNOOPTIMIMIZE"_s),
			$of(u"   [-NOOPTIMIMIZE (beg\u00e4r att ingen formatmallsoptimering utf\u00f6rs genom att ange http://xml.apache.org/xalan/features/optimize false.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionRL"_s),
			$of(u"   [-RL rekursionsgr\u00e4ns (verifiera numeriskt gr\u00e4nsv\u00e4rde f\u00f6r formatmallens rekursionsdjup.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXO"_s),
			$of("   [-XO [transletName] (tilldela namnet till genererad translet)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXD"_s),
			$of(u"   [-XD destinationDirectory (ange destinationskatalog f\u00f6r translet)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXJ"_s),
			$of("   [-XJ jarfile (paketerar transletklasserna i en jar-fil med namnet <jarfile>)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXP"_s),
			$of(u"   [-XP package (anger paketnamnsprefix f\u00f6r alla genererade transletklasser)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXN"_s),
			$of("   [-XN (aktiverar mallinfogning)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXX"_s),
			$of(u"   [-XX (aktiverar ytterligare fels\u00f6kningsmeddelanden)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXT"_s),
			$of(u"   [-XT (anv\u00e4nder translet vid transformering om m\u00f6jligt)]"_s)
		}),
		$$new($ObjectArray, {
			$of("diagTiming"_s),
			$of(" --------- Transformering av {0} via {1} tog {2} ms"_s)
		}),
		$$new($ObjectArray, {
			$of("recursionTooDeep"_s),
			$of(u"Mallkapslingen \u00e4r f\u00f6r djup. kapsling = {0}, mall {1} {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("nameIs"_s),
			$of(u"namnet \u00e4r"_s)
		}),
		$$new($ObjectArray, {
			$of("matchPatternIs"_s),
			$of(u"matchningsm\u00f6nstret \u00e4r"_s)
		})
	});
}

XSLTErrorResources_sv::XSLTErrorResources_sv() {
}

void clinit$XSLTErrorResources_sv($Class* class$) {
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX, "ER_INVALID_SET_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT, "ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_CURLYBRACE, "ER_NO_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ILLEGAL_ATTRIBUTE, "ER_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NULL_SOURCENODE_APPLYIMPORTS, "ER_NULL_SOURCENODE_APPLYIMPORTS"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_ADD, "ER_CANNOT_ADD"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES, "ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_NAME_ATTRIB, "ER_NO_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_TEMPLATE_NOT_FOUND, "ER_TEMPLATE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANT_RESOLVE_NAME_AVT, "ER_CANT_RESOLVE_NAME_AVT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_REQUIRES_ATTRIB, "ER_REQUIRES_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MUST_HAVE_TEST_ATTRIB, "ER_MUST_HAVE_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_BAD_VAL_ON_LEVEL_ATTRIB, "ER_BAD_VAL_ON_LEVEL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NEED_MATCH_ATTRIB, "ER_NEED_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NEED_NAME_OR_MATCH_ATTRIB, "ER_NEED_NAME_OR_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANT_RESOLVE_NSPREFIX, "ER_CANT_RESOLVE_NSPREFIX"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ILLEGAL_VALUE, "ER_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_OWNERDOC, "ER_NO_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ELEMTEMPLATEELEM_ERR, "ER_ELEMTEMPLATEELEM_ERR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NULL_CHILD, "ER_NULL_CHILD"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NEED_SELECT_ATTRIB, "ER_NEED_SELECT_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NEED_TEST_ATTRIB, "ER_NEED_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NEED_NAME_ATTRIB, "ER_NEED_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_CONTEXT_OWNERDOC, "ER_NO_CONTEXT_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources_sv::ER_COULD_NOT_CREATE_XML_PROC_LIAISON, "ER_COULD_NOT_CREATE_XML_PROC_LIAISON"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROCESS_NOT_SUCCESSFUL, "ER_PROCESS_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NOT_SUCCESSFUL, "ER_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ENCODING_NOT_SUPPORTED, "ER_ENCODING_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_COULD_NOT_CREATE_TRACELISTENER, "ER_COULD_NOT_CREATE_TRACELISTENER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_KEY_REQUIRES_NAME_ATTRIB, "ER_KEY_REQUIRES_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_KEY_REQUIRES_MATCH_ATTRIB, "ER_KEY_REQUIRES_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_KEY_REQUIRES_USE_ATTRIB, "ER_KEY_REQUIRES_USE_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_REQUIRES_ELEMENTS_ATTRIB, "ER_REQUIRES_ELEMENTS_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MISSING_PREFIX_ATTRIB, "ER_MISSING_PREFIX_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_BAD_STYLESHEET_URL, "ER_BAD_STYLESHEET_URL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FILE_NOT_FOUND, "ER_FILE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_sv::ER_IOEXCEPTION, "ER_IOEXCEPTION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_HREF_ATTRIB, "ER_NO_HREF_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_STYLESHEET_INCLUDES_ITSELF, "ER_STYLESHEET_INCLUDES_ITSELF"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROCESSINCLUDE_ERROR, "ER_PROCESSINCLUDE_ERROR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MISSING_LANG_ATTRIB, "ER_MISSING_LANG_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MISSING_CONTAINER_ELEMENT_COMPONENT, "ER_MISSING_CONTAINER_ELEMENT_COMPONENT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CAN_ONLY_OUTPUT_TO_ELEMENT, "ER_CAN_ONLY_OUTPUT_TO_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROCESS_ERROR, "ER_PROCESS_ERROR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_UNIMPLNODE_ERROR, "ER_UNIMPLNODE_ERROR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_SELECT_EXPRESSION, "ER_NO_SELECT_EXPRESSION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_SERIALIZE_XSLPROCESSOR, "ER_CANNOT_SERIALIZE_XSLPROCESSOR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_INPUT_STYLESHEET, "ER_NO_INPUT_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FAILED_PROCESS_STYLESHEET, "ER_FAILED_PROCESS_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_sv::ER_COULDNT_PARSE_DOC, "ER_COULDNT_PARSE_DOC"_s);
	$assignStatic(XSLTErrorResources_sv::ER_COULDNT_FIND_FRAGMENT, "ER_COULDNT_FIND_FRAGMENT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NODE_NOT_ELEMENT, "ER_NODE_NOT_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB, "ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB, "ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_CLONE_OF_DOCUMENT_FRAG, "ER_NO_CLONE_OF_DOCUMENT_FRAG"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANT_CREATE_ITEM, "ER_CANT_CREATE_ITEM"_s);
	$assignStatic(XSLTErrorResources_sv::ER_XMLSPACE_ILLEGAL_VALUE, "ER_XMLSPACE_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_XSLKEY_DECLARATION, "ER_NO_XSLKEY_DECLARATION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANT_CREATE_URL, "ER_CANT_CREATE_URL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_XSLFUNCTIONS_UNSUPPORTED, "ER_XSLFUNCTIONS_UNSUPPORTED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROCESSOR_ERROR, "ER_PROCESSOR_ERROR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NOT_ALLOWED_INSIDE_STYLESHEET, "ER_NOT_ALLOWED_INSIDE_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_sv::ER_RESULTNS_NOT_SUPPORTED, "ER_RESULTNS_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_DEFAULTSPACE_NOT_SUPPORTED, "ER_DEFAULTSPACE_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INDENTRESULT_NOT_SUPPORTED, "ER_INDENTRESULT_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ILLEGAL_ATTRIB, "ER_ILLEGAL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_UNKNOWN_XSL_ELEM, "ER_UNKNOWN_XSL_ELEM"_s);
	$assignStatic(XSLTErrorResources_sv::ER_BAD_XSLSORT_USE, "ER_BAD_XSLSORT_USE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MISPLACED_XSLWHEN, "ER_MISPLACED_XSLWHEN"_s);
	$assignStatic(XSLTErrorResources_sv::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MISPLACED_XSLOTHERWISE, "ER_MISPLACED_XSLOTHERWISE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NOT_ALLOWED_INSIDE_TEMPLATE, "ER_NOT_ALLOWED_INSIDE_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_UNKNOWN_EXT_NS_PREFIX, "ER_UNKNOWN_EXT_NS_PREFIX"_s);
	$assignStatic(XSLTErrorResources_sv::ER_IMPORTS_AS_FIRST_ELEM, "ER_IMPORTS_AS_FIRST_ELEM"_s);
	$assignStatic(XSLTErrorResources_sv::ER_IMPORTING_ITSELF, "ER_IMPORTING_ITSELF"_s);
	$assignStatic(XSLTErrorResources_sv::ER_XMLSPACE_ILLEGAL_VAL, "ER_XMLSPACE_ILLEGAL_VAL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL, "ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_SAX_EXCEPTION, "ER_SAX_EXCEPTION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_XSLT_ERROR, "ER_XSLT_ERROR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CURRENCY_SIGN_ILLEGAL, "ER_CURRENCY_SIGN_ILLEGAL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM, "ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER, "ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_REDIRECT_COULDNT_GET_FILENAME, "ER_REDIRECT_COULDNT_GET_FILENAME"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT, "ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX, "ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MISSING_NS_URI, "ER_MISSING_NS_URI"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MISSING_ARG_FOR_OPTION, "ER_MISSING_ARG_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_OPTION, "ER_INVALID_OPTION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MALFORMED_FORMAT_STRING, "ER_MALFORMED_FORMAT_STRING"_s);
	$assignStatic(XSLTErrorResources_sv::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB, "ER_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ILLEGAL_ATTRIBUTE_VALUE, "ER_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CHOOSE_REQUIRES_WHEN, "ER_CHOOSE_REQUIRES_WHEN"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_APPLY_IMPORT_IN_FOR_EACH, "ER_NO_APPLY_IMPORT_IN_FOR_EACH"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANT_USE_DTM_FOR_OUTPUT, "ER_CANT_USE_DTM_FOR_OUTPUT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANT_USE_DTM_FOR_INPUT, "ER_CANT_USE_DTM_FOR_INPUT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CALL_TO_EXT_FAILED, "ER_CALL_TO_EXT_FAILED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_XSLATTRSET_USED_ITSELF, "ER_XSLATTRSET_USED_ITSELF"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_MIX_XERCESDOM, "ER_CANNOT_MIX_XERCESDOM"_s);
	$assignStatic(XSLTErrorResources_sv::ER_TOO_MANY_LISTENERS, "ER_TOO_MANY_LISTENERS"_s);
	$assignStatic(XSLTErrorResources_sv::ER_IN_ELEMTEMPLATEELEM_READOBJECT, "ER_IN_ELEMTEMPLATEELEM_READOBJECT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_DUPLICATE_NAMED_TEMPLATE, "ER_DUPLICATE_NAMED_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_KEY_CALL, "ER_INVALID_KEY_CALL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_REFERENCING_ITSELF, "ER_REFERENCING_ITSELF"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ILLEGAL_DOMSOURCE_INPUT, "ER_ILLEGAL_DOMSOURCE_INPUT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CLASS_NOT_FOUND_FOR_OPTION, "ER_CLASS_NOT_FOUND_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_REQUIRED_ELEM_NOT_FOUND, "ER_REQUIRED_ELEM_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INPUT_CANNOT_BE_NULL, "ER_INPUT_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_URI_CANNOT_BE_NULL, "ER_URI_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FILE_CANNOT_BE_NULL, "ER_FILE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_SOURCE_CANNOT_BE_NULL, "ER_SOURCE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_INIT_BSFMGR, "ER_CANNOT_INIT_BSFMGR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_CMPL_EXTENSN, "ER_CANNOT_CMPL_EXTENSN"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_CREATE_EXTENSN, "ER_CANNOT_CREATE_EXTENSN"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INSTANCE_MTHD_CALL_REQUIRES, "ER_INSTANCE_MTHD_CALL_REQUIRES"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_ELEMENT_NAME, "ER_INVALID_ELEMENT_NAME"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ELEMENT_NAME_METHOD_STATIC, "ER_ELEMENT_NAME_METHOD_STATIC"_s);
	$assignStatic(XSLTErrorResources_sv::ER_EXTENSION_FUNC_UNKNOWN, "ER_EXTENSION_FUNC_UNKNOWN"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MORE_MATCH_CONSTRUCTOR, "ER_MORE_MATCH_CONSTRUCTOR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MORE_MATCH_METHOD, "ER_MORE_MATCH_METHOD"_s);
	$assignStatic(XSLTErrorResources_sv::ER_MORE_MATCH_ELEMENT, "ER_MORE_MATCH_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_CONTEXT_PASSED, "ER_INVALID_CONTEXT_PASSED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_POOL_EXISTS, "ER_POOL_EXISTS"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_DRIVER_NAME, "ER_NO_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_URL, "ER_NO_URL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_POOL_SIZE_LESSTHAN_ONE, "ER_POOL_SIZE_LESSTHAN_ONE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_DRIVER, "ER_INVALID_DRIVER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_STYLESHEETROOT, "ER_NO_STYLESHEETROOT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ILLEGAL_XMLSPACE_VALUE, "ER_ILLEGAL_XMLSPACE_VALUE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROCESSFROMNODE_FAILED, "ER_PROCESSFROMNODE_FAILED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XSLTErrorResources_sv::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XSLTErrorResources_sv::ER_UNKNOWN_ERROR_CALLING_EXTENSION, "ER_UNKNOWN_ERROR_CALLING_EXTENSION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_NAMESPACE_DECL, "ER_NO_NAMESPACE_DECL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ELEM_CONTENT_NOT_ALLOWED, "ER_ELEM_CONTENT_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_STYLESHEET_DIRECTED_TERMINATION, "ER_STYLESHEET_DIRECTED_TERMINATION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ONE_OR_TWO, "ER_ONE_OR_TWO"_s);
	$assignStatic(XSLTErrorResources_sv::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_INIT_DEFAULT_TEMPLATES, "ER_CANNOT_INIT_DEFAULT_TEMPLATES"_s);
	$assignStatic(XSLTErrorResources_sv::ER_RESULT_NULL, "ER_RESULT_NULL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_RESULT_COULD_NOT_BE_SET, "ER_RESULT_COULD_NOT_BE_SET"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_OUTPUT_SPECIFIED, "ER_NO_OUTPUT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE, "ER_CANNOT_TRANSFORM_TO_RESULT_TYPE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_TRANSFORM_SOURCE_TYPE, "ER_CANNOT_TRANSFORM_SOURCE_TYPE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NULL_CONTENT_HANDLER, "ER_NULL_CONTENT_HANDLER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_CALL_PARSE, "ER_CANNOT_CALL_PARSE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_PARENT_FOR_FILTER, "ER_NO_PARENT_FOR_FILTER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_STYLESHEET_IN_MEDIA, "ER_NO_STYLESHEET_IN_MEDIA"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_STYLESHEET_PI, "ER_NO_STYLESHEET_PI"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROPERTY_VALUE_BOOLEAN, "ER_PROPERTY_VALUE_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources_sv::ER_COULD_NOT_FIND_EXTERN_SCRIPT, "ER_COULD_NOT_FIND_EXTERN_SCRIPT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XSLTErrorResources_sv::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED, "ER_OUTPUT_PROPERTY_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FAILED_CREATING_ELEMLITRSLT, "ER_FAILED_CREATING_ELEMLITRSLT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_VALUE_SHOULD_BE_NUMBER, "ER_VALUE_SHOULD_BE_NUMBER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_VALUE_SHOULD_EQUAL, "ER_VALUE_SHOULD_EQUAL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FAILED_CALLING_METHOD, "ER_FAILED_CALLING_METHOD"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FAILED_CREATING_ELEMTMPL, "ER_FAILED_CREATING_ELEMTMPL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CHARS_NOT_ALLOWED, "ER_CHARS_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ATTR_NOT_ALLOWED, "ER_ATTR_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_BAD_VALUE, "ER_BAD_VALUE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ATTRIB_VALUE_NOT_FOUND, "ER_ATTRIB_VALUE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ATTRIB_VALUE_NOT_RECOGNIZED, "ER_ATTRIB_VALUE_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NULL_URI_NAMESPACE, "ER_NULL_URI_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NUMBER_TOO_BIG, "ER_NUMBER_TOO_BIG"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANNOT_FIND_SAX1_DRIVER, "ER_CANNOT_FIND_SAX1_DRIVER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_SAX1_DRIVER_NOT_LOADED, "ER_SAX1_DRIVER_NOT_LOADED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_SAX1_DRIVER_NOT_INSTANTIATED, "ER_SAX1_DRIVER_NOT_INSTANTIATED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER, "ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PARSER_PROPERTY_NOT_SPECIFIED, "ER_PARSER_PROPERTY_NOT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PARSER_ARG_CANNOT_BE_NULL, "ER_PARSER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FEATURE, "ER_FEATURE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_PROPERTY, "ER_PROPERTY"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NULL_ENTITY_RESOLVER, "ER_NULL_ENTITY_RESOLVER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NULL_DTD_HANDLER, "ER_NULL_DTD_HANDLER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_DRIVER_NAME_SPECIFIED, "ER_NO_DRIVER_NAME_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_URL_SPECIFIED, "ER_NO_URL_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_sv::ER_POOLSIZE_LESS_THAN_ONE, "ER_POOLSIZE_LESS_THAN_ONE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_DRIVER_NAME, "ER_INVALID_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ERRORLISTENER, "ER_ERRORLISTENER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ASSERT_NO_TEMPLATE_PARENT, "ER_ASSERT_NO_TEMPLATE_PARENT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR, "ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NOT_ALLOWED_IN_POSITION, "ER_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION, "ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE, "ER_NAMESPACE_CONTEXT_NULL_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NAMESPACE_CONTEXT_NULL_PREFIX, "ER_NAMESPACE_CONTEXT_NULL_PREFIX"_s);
	$assignStatic(XSLTErrorResources_sv::ER_XPATH_RESOLVER_NULL_QNAME, "ER_XPATH_RESOLVER_NULL_QNAME"_s);
	$assignStatic(XSLTErrorResources_sv::ER_XPATH_RESOLVER_NEGATIVE_ARITY, "ER_XPATH_RESOLVER_NEGATIVE_ARITY"_s);
	$assignStatic(XSLTErrorResources_sv::INVALID_TCHAR, "INVALID_TCHAR"_s);
	$assignStatic(XSLTErrorResources_sv::INVALID_QNAME, "INVALID_QNAME"_s);
	$assignStatic(XSLTErrorResources_sv::INVALID_ENUM, "INVALID_ENUM"_s);
	$assignStatic(XSLTErrorResources_sv::INVALID_NMTOKEN, "INVALID_NMTOKEN"_s);
	$assignStatic(XSLTErrorResources_sv::INVALID_NCNAME, "INVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_sv::INVALID_BOOLEAN, "INVALID_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources_sv::INVALID_NUMBER, "INVALID_NUMBER"_s);
	$assignStatic(XSLTErrorResources_sv::ER_ARG_LITERAL, "ER_ARG_LITERAL"_s);
	$assignStatic(XSLTErrorResources_sv::ER_DUPLICATE_GLOBAL_VAR, "ER_DUPLICATE_GLOBAL_VAR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_DUPLICATE_VAR, "ER_DUPLICATE_VAR"_s);
	$assignStatic(XSLTErrorResources_sv::ER_TEMPLATE_NAME_MATCH, "ER_TEMPLATE_NAME_MATCH"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_PREFIX, "ER_INVALID_PREFIX"_s);
	$assignStatic(XSLTErrorResources_sv::ER_NO_ATTRIB_SET, "ER_NO_ATTRIB_SET"_s);
	$assignStatic(XSLTErrorResources_sv::ER_FUNCTION_NOT_FOUND, "ER_FUNCTION_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_sv::ER_CANT_HAVE_CONTENT_AND_SELECT, "ER_CANT_HAVE_CONTENT_AND_SELECT"_s);
	$assignStatic(XSLTErrorResources_sv::ER_INVALID_SET_PARAM_VALUE, "ER_INVALID_SET_PARAM_VALUE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_SET_FEATURE_NULL_NAME, "ER_SET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources_sv::ER_GET_FEATURE_NULL_NAME, "ER_GET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources_sv::ER_UNSUPPORTED_FEATURE, "ER_UNSUPPORTED_FEATURE"_s);
	$assignStatic(XSLTErrorResources_sv::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING, "ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING"_s);
	$assignStatic(XSLTErrorResources_sv::WG_FOUND_CURLYBRACE, "WG_FOUND_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources_sv::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR, "WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR"_s);
	$assignStatic(XSLTErrorResources_sv::WG_EXPR_ATTRIB_CHANGED_TO_SELECT, "WG_EXPR_ATTRIB_CHANGED_TO_SELECT"_s);
	$assignStatic(XSLTErrorResources_sv::WG_NO_LOCALE_IN_FORMATNUMBER, "WG_NO_LOCALE_IN_FORMATNUMBER"_s);
	$assignStatic(XSLTErrorResources_sv::WG_LOCALE_NOT_FOUND, "WG_LOCALE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_sv::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XSLTErrorResources_sv::WG_CANNOT_LOAD_REQUESTED_DOC, "WG_CANNOT_LOAD_REQUESTED_DOC"_s);
	$assignStatic(XSLTErrorResources_sv::WG_CANNOT_FIND_COLLATOR, "WG_CANNOT_FIND_COLLATOR"_s);
	$assignStatic(XSLTErrorResources_sv::WG_FUNCTIONS_SHOULD_USE_URL, "WG_FUNCTIONS_SHOULD_USE_URL"_s);
	$assignStatic(XSLTErrorResources_sv::WG_ENCODING_NOT_SUPPORTED_USING_UTF8, "WG_ENCODING_NOT_SUPPORTED_USING_UTF8"_s);
	$assignStatic(XSLTErrorResources_sv::WG_ENCODING_NOT_SUPPORTED_USING_JAVA, "WG_ENCODING_NOT_SUPPORTED_USING_JAVA"_s);
	$assignStatic(XSLTErrorResources_sv::WG_SPECIFICITY_CONFLICTS, "WG_SPECIFICITY_CONFLICTS"_s);
	$assignStatic(XSLTErrorResources_sv::WG_PARSING_AND_PREPARING, "WG_PARSING_AND_PREPARING"_s);
	$assignStatic(XSLTErrorResources_sv::WG_ATTR_TEMPLATE, "WG_ATTR_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_sv::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE, "WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESP"_s);
	$assignStatic(XSLTErrorResources_sv::WG_ATTRIB_NOT_HANDLED, "WG_ATTRIB_NOT_HANDLED"_s);
	$assignStatic(XSLTErrorResources_sv::WG_NO_DECIMALFORMAT_DECLARATION, "WG_NO_DECIMALFORMAT_DECLARATION"_s);
	$assignStatic(XSLTErrorResources_sv::WG_OLD_XSLT_NS, "WG_OLD_XSLT_NS"_s);
	$assignStatic(XSLTErrorResources_sv::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED, "WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_sv::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE, "WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE"_s);
	$assignStatic(XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE, "WG_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources_sv::WG_COULD_NOT_RESOLVE_PREFIX, "WG_COULD_NOT_RESOLVE_PREFIX"_s);
	$assignStatic(XSLTErrorResources_sv::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB, "WG_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE_NAME, "WG_ILLEGAL_ATTRIBUTE_NAME"_s);
	$assignStatic(XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE_VALUE, "WG_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources_sv::WG_EMPTY_SECOND_ARG, "WG_EMPTY_SECOND_ARG"_s);
	$assignStatic(XSLTErrorResources_sv::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources_sv::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_sv::WG_ILLEGAL_ATTRIBUTE_POSITION, "WG_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XSLTErrorResources_sv::NO_MODIFICATION_ALLOWED_ERR, "NO_MODIFICATION_ALLOWED_ERR"_s);
	$assignStatic(XSLTErrorResources_sv::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XSLTErrorResources_sv::FORMAT_FAILED, "FORMAT_FAILED"_s);
}

$Class* XSLTErrorResources_sv::load$($String* name, bool initialize) {
	$loadClass(XSLTErrorResources_sv, name, initialize, &_XSLTErrorResources_sv_ClassInfo_, clinit$XSLTErrorResources_sv, allocate$XSLTErrorResources_sv);
	return class$;
}

$Class* XSLTErrorResources_sv::class$ = nullptr;

						} // res
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com