#include <com/sun/org/apache/xalan/internal/res/XSLTErrorResources_zh_TW.h>

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

$FieldInfo _XSLTErrorResources_zh_TW_FieldInfo_[] = {
	{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX)},
	{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT)},
	{"ER_NO_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_CURLYBRACE)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ILLEGAL_ATTRIBUTE)},
	{"ER_NULL_SOURCENODE_APPLYIMPORTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NULL_SOURCENODE_APPLYIMPORTS)},
	{"ER_CANNOT_ADD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_ADD)},
	{"ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES)},
	{"ER_NO_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_NAME_ATTRIB)},
	{"ER_TEMPLATE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_TEMPLATE_NOT_FOUND)},
	{"ER_CANT_RESOLVE_NAME_AVT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANT_RESOLVE_NAME_AVT)},
	{"ER_REQUIRES_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_REQUIRES_ATTRIB)},
	{"ER_MUST_HAVE_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MUST_HAVE_TEST_ATTRIB)},
	{"ER_BAD_VAL_ON_LEVEL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_BAD_VAL_ON_LEVEL_ATTRIB)},
	{"ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
	{"ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
	{"ER_NEED_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NEED_MATCH_ATTRIB)},
	{"ER_NEED_NAME_OR_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NEED_NAME_OR_MATCH_ATTRIB)},
	{"ER_CANT_RESOLVE_NSPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANT_RESOLVE_NSPREFIX)},
	{"ER_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ILLEGAL_VALUE)},
	{"ER_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_OWNERDOC)},
	{"ER_ELEMTEMPLATEELEM_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ELEMTEMPLATEELEM_ERR)},
	{"ER_NULL_CHILD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NULL_CHILD)},
	{"ER_NEED_SELECT_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NEED_SELECT_ATTRIB)},
	{"ER_NEED_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NEED_TEST_ATTRIB)},
	{"ER_NEED_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NEED_NAME_ATTRIB)},
	{"ER_NO_CONTEXT_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_CONTEXT_OWNERDOC)},
	{"ER_COULD_NOT_CREATE_XML_PROC_LIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_COULD_NOT_CREATE_XML_PROC_LIAISON)},
	{"ER_PROCESS_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROCESS_NOT_SUCCESSFUL)},
	{"ER_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NOT_SUCCESSFUL)},
	{"ER_ENCODING_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ENCODING_NOT_SUPPORTED)},
	{"ER_COULD_NOT_CREATE_TRACELISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_COULD_NOT_CREATE_TRACELISTENER)},
	{"ER_KEY_REQUIRES_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_KEY_REQUIRES_NAME_ATTRIB)},
	{"ER_KEY_REQUIRES_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_KEY_REQUIRES_MATCH_ATTRIB)},
	{"ER_KEY_REQUIRES_USE_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_KEY_REQUIRES_USE_ATTRIB)},
	{"ER_REQUIRES_ELEMENTS_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_REQUIRES_ELEMENTS_ATTRIB)},
	{"ER_MISSING_PREFIX_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MISSING_PREFIX_ATTRIB)},
	{"ER_BAD_STYLESHEET_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_BAD_STYLESHEET_URL)},
	{"ER_FILE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FILE_NOT_FOUND)},
	{"ER_IOEXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_IOEXCEPTION)},
	{"ER_NO_HREF_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_HREF_ATTRIB)},
	{"ER_STYLESHEET_INCLUDES_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_STYLESHEET_INCLUDES_ITSELF)},
	{"ER_PROCESSINCLUDE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROCESSINCLUDE_ERROR)},
	{"ER_MISSING_LANG_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MISSING_LANG_ATTRIB)},
	{"ER_MISSING_CONTAINER_ELEMENT_COMPONENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MISSING_CONTAINER_ELEMENT_COMPONENT)},
	{"ER_CAN_ONLY_OUTPUT_TO_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CAN_ONLY_OUTPUT_TO_ELEMENT)},
	{"ER_PROCESS_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROCESS_ERROR)},
	{"ER_UNIMPLNODE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_UNIMPLNODE_ERROR)},
	{"ER_NO_SELECT_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_SELECT_EXPRESSION)},
	{"ER_CANNOT_SERIALIZE_XSLPROCESSOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_SERIALIZE_XSLPROCESSOR)},
	{"ER_NO_INPUT_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_INPUT_STYLESHEET)},
	{"ER_FAILED_PROCESS_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FAILED_PROCESS_STYLESHEET)},
	{"ER_COULDNT_PARSE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_COULDNT_PARSE_DOC)},
	{"ER_COULDNT_FIND_FRAGMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_COULDNT_FIND_FRAGMENT)},
	{"ER_NODE_NOT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NODE_NOT_ELEMENT)},
	{"ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB)},
	{"ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB)},
	{"ER_NO_CLONE_OF_DOCUMENT_FRAG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_CLONE_OF_DOCUMENT_FRAG)},
	{"ER_CANT_CREATE_ITEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANT_CREATE_ITEM)},
	{"ER_XMLSPACE_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_XMLSPACE_ILLEGAL_VALUE)},
	{"ER_NO_XSLKEY_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_XSLKEY_DECLARATION)},
	{"ER_CANT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANT_CREATE_URL)},
	{"ER_XSLFUNCTIONS_UNSUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_XSLFUNCTIONS_UNSUPPORTED)},
	{"ER_PROCESSOR_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROCESSOR_ERROR)},
	{"ER_NOT_ALLOWED_INSIDE_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NOT_ALLOWED_INSIDE_STYLESHEET)},
	{"ER_RESULTNS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_RESULTNS_NOT_SUPPORTED)},
	{"ER_DEFAULTSPACE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_DEFAULTSPACE_NOT_SUPPORTED)},
	{"ER_INDENTRESULT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INDENTRESULT_NOT_SUPPORTED)},
	{"ER_ILLEGAL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ILLEGAL_ATTRIB)},
	{"ER_UNKNOWN_XSL_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_UNKNOWN_XSL_ELEM)},
	{"ER_BAD_XSLSORT_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_BAD_XSLSORT_USE)},
	{"ER_MISPLACED_XSLWHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MISPLACED_XSLWHEN)},
	{"ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE)},
	{"ER_MISPLACED_XSLOTHERWISE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MISPLACED_XSLOTHERWISE)},
	{"ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE)},
	{"ER_NOT_ALLOWED_INSIDE_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NOT_ALLOWED_INSIDE_TEMPLATE)},
	{"ER_UNKNOWN_EXT_NS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_UNKNOWN_EXT_NS_PREFIX)},
	{"ER_IMPORTS_AS_FIRST_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_IMPORTS_AS_FIRST_ELEM)},
	{"ER_IMPORTING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_IMPORTING_ITSELF)},
	{"ER_XMLSPACE_ILLEGAL_VAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_XMLSPACE_ILLEGAL_VAL)},
	{"ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL)},
	{"ER_SAX_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_SAX_EXCEPTION)},
	{"ER_XSLT_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_XSLT_ERROR)},
	{"ER_CURRENCY_SIGN_ILLEGAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CURRENCY_SIGN_ILLEGAL)},
	{"ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM)},
	{"ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER)},
	{"ER_REDIRECT_COULDNT_GET_FILENAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_REDIRECT_COULDNT_GET_FILENAME)},
	{"ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT)},
	{"ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX)},
	{"ER_MISSING_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MISSING_NS_URI)},
	{"ER_MISSING_ARG_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MISSING_ARG_FOR_OPTION)},
	{"ER_INVALID_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_OPTION)},
	{"ER_MALFORMED_FORMAT_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MALFORMED_FORMAT_STRING)},
	{"ER_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
	{"ER_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ILLEGAL_ATTRIBUTE_VALUE)},
	{"ER_CHOOSE_REQUIRES_WHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CHOOSE_REQUIRES_WHEN)},
	{"ER_NO_APPLY_IMPORT_IN_FOR_EACH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_APPLY_IMPORT_IN_FOR_EACH)},
	{"ER_CANT_USE_DTM_FOR_OUTPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANT_USE_DTM_FOR_OUTPUT)},
	{"ER_CANT_USE_DTM_FOR_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANT_USE_DTM_FOR_INPUT)},
	{"ER_CALL_TO_EXT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CALL_TO_EXT_FAILED)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PREFIX_MUST_RESOLVE)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_UTF16_SURROGATE)},
	{"ER_XSLATTRSET_USED_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_XSLATTRSET_USED_ITSELF)},
	{"ER_CANNOT_MIX_XERCESDOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_MIX_XERCESDOM)},
	{"ER_TOO_MANY_LISTENERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_TOO_MANY_LISTENERS)},
	{"ER_IN_ELEMTEMPLATEELEM_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_IN_ELEMTEMPLATEELEM_READOBJECT)},
	{"ER_DUPLICATE_NAMED_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_DUPLICATE_NAMED_TEMPLATE)},
	{"ER_INVALID_KEY_CALL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_KEY_CALL)},
	{"ER_REFERENCING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_REFERENCING_ITSELF)},
	{"ER_ILLEGAL_DOMSOURCE_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ILLEGAL_DOMSOURCE_INPUT)},
	{"ER_CLASS_NOT_FOUND_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CLASS_NOT_FOUND_FOR_OPTION)},
	{"ER_REQUIRED_ELEM_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_REQUIRED_ELEM_NOT_FOUND)},
	{"ER_INPUT_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INPUT_CANNOT_BE_NULL)},
	{"ER_URI_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_URI_CANNOT_BE_NULL)},
	{"ER_FILE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FILE_CANNOT_BE_NULL)},
	{"ER_SOURCE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_SOURCE_CANNOT_BE_NULL)},
	{"ER_CANNOT_INIT_BSFMGR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_INIT_BSFMGR)},
	{"ER_CANNOT_CMPL_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_CMPL_EXTENSN)},
	{"ER_CANNOT_CREATE_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_CREATE_EXTENSN)},
	{"ER_INSTANCE_MTHD_CALL_REQUIRES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INSTANCE_MTHD_CALL_REQUIRES)},
	{"ER_INVALID_ELEMENT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_ELEMENT_NAME)},
	{"ER_ELEMENT_NAME_METHOD_STATIC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ELEMENT_NAME_METHOD_STATIC)},
	{"ER_EXTENSION_FUNC_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_EXTENSION_FUNC_UNKNOWN)},
	{"ER_MORE_MATCH_CONSTRUCTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MORE_MATCH_CONSTRUCTOR)},
	{"ER_MORE_MATCH_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MORE_MATCH_METHOD)},
	{"ER_MORE_MATCH_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_MORE_MATCH_ELEMENT)},
	{"ER_INVALID_CONTEXT_PASSED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_CONTEXT_PASSED)},
	{"ER_POOL_EXISTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_POOL_EXISTS)},
	{"ER_NO_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_DRIVER_NAME)},
	{"ER_NO_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_URL)},
	{"ER_POOL_SIZE_LESSTHAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_POOL_SIZE_LESSTHAN_ONE)},
	{"ER_INVALID_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_DRIVER)},
	{"ER_NO_STYLESHEETROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_STYLESHEETROOT)},
	{"ER_ILLEGAL_XMLSPACE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ILLEGAL_XMLSPACE_VALUE)},
	{"ER_PROCESSFROMNODE_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROCESSFROMNODE_FAILED)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_UNKNOWN_ERROR_CALLING_EXTENSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_UNKNOWN_ERROR_CALLING_EXTENSION)},
	{"ER_NO_NAMESPACE_DECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_NAMESPACE_DECL)},
	{"ER_ELEM_CONTENT_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ELEM_CONTENT_NOT_ALLOWED)},
	{"ER_STYLESHEET_DIRECTED_TERMINATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_STYLESHEET_DIRECTED_TERMINATION)},
	{"ER_ONE_OR_TWO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ONE_OR_TWO)},
	{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_TWO_OR_THREE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_CANNOT_INIT_DEFAULT_TEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_INIT_DEFAULT_TEMPLATES)},
	{"ER_RESULT_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_RESULT_NULL)},
	{"ER_RESULT_COULD_NOT_BE_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_RESULT_COULD_NOT_BE_SET)},
	{"ER_NO_OUTPUT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_OUTPUT_SPECIFIED)},
	{"ER_CANNOT_TRANSFORM_TO_RESULT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_TRANSFORM_TO_RESULT_TYPE)},
	{"ER_CANNOT_TRANSFORM_SOURCE_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_TRANSFORM_SOURCE_TYPE)},
	{"ER_NULL_CONTENT_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NULL_CONTENT_HANDLER)},
	{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NULL_ERROR_HANDLER)},
	{"ER_CANNOT_CALL_PARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_CALL_PARSE)},
	{"ER_NO_PARENT_FOR_FILTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_PARENT_FOR_FILTER)},
	{"ER_NO_STYLESHEET_IN_MEDIA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_STYLESHEET_IN_MEDIA)},
	{"ER_NO_STYLESHEET_PI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_STYLESHEET_PI)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NOT_SUPPORTED)},
	{"ER_PROPERTY_VALUE_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROPERTY_VALUE_BOOLEAN)},
	{"ER_COULD_NOT_FIND_EXTERN_SCRIPT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_COULD_NOT_FIND_EXTERN_SCRIPT)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_OUTPUT_PROPERTY_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_OUTPUT_PROPERTY_NOT_RECOGNIZED)},
	{"ER_FAILED_CREATING_ELEMLITRSLT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FAILED_CREATING_ELEMLITRSLT)},
	{"ER_VALUE_SHOULD_BE_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_VALUE_SHOULD_BE_NUMBER)},
	{"ER_VALUE_SHOULD_EQUAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_VALUE_SHOULD_EQUAL)},
	{"ER_FAILED_CALLING_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FAILED_CALLING_METHOD)},
	{"ER_FAILED_CREATING_ELEMTMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FAILED_CREATING_ELEMTMPL)},
	{"ER_CHARS_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CHARS_NOT_ALLOWED)},
	{"ER_ATTR_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ATTR_NOT_ALLOWED)},
	{"ER_BAD_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_BAD_VALUE)},
	{"ER_ATTRIB_VALUE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ATTRIB_VALUE_NOT_FOUND)},
	{"ER_ATTRIB_VALUE_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ATTRIB_VALUE_NOT_RECOGNIZED)},
	{"ER_NULL_URI_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NULL_URI_NAMESPACE)},
	{"ER_NUMBER_TOO_BIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NUMBER_TOO_BIG)},
	{"ER_CANNOT_FIND_SAX1_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANNOT_FIND_SAX1_DRIVER)},
	{"ER_SAX1_DRIVER_NOT_LOADED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_SAX1_DRIVER_NOT_LOADED)},
	{"ER_SAX1_DRIVER_NOT_INSTANTIATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_SAX1_DRIVER_NOT_INSTANTIATED)},
	{"ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER)},
	{"ER_PARSER_PROPERTY_NOT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PARSER_PROPERTY_NOT_SPECIFIED)},
	{"ER_PARSER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PARSER_ARG_CANNOT_BE_NULL)},
	{"ER_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FEATURE)},
	{"ER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_PROPERTY)},
	{"ER_NULL_ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NULL_ENTITY_RESOLVER)},
	{"ER_NULL_DTD_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NULL_DTD_HANDLER)},
	{"ER_NO_DRIVER_NAME_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_DRIVER_NAME_SPECIFIED)},
	{"ER_NO_URL_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_URL_SPECIFIED)},
	{"ER_POOLSIZE_LESS_THAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_POOLSIZE_LESS_THAN_ONE)},
	{"ER_INVALID_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_DRIVER_NAME)},
	{"ER_ERRORLISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ERRORLISTENER)},
	{"ER_ASSERT_NO_TEMPLATE_PARENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ASSERT_NO_TEMPLATE_PARENT)},
	{"ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR)},
	{"ER_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NOT_ALLOWED_IN_POSITION)},
	{"ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION)},
	{"ER_NAMESPACE_CONTEXT_NULL_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NAMESPACE_CONTEXT_NULL_NAMESPACE)},
	{"ER_NAMESPACE_CONTEXT_NULL_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NAMESPACE_CONTEXT_NULL_PREFIX)},
	{"ER_XPATH_RESOLVER_NULL_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_XPATH_RESOLVER_NULL_QNAME)},
	{"ER_XPATH_RESOLVER_NEGATIVE_ARITY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_XPATH_RESOLVER_NEGATIVE_ARITY)},
	{"INVALID_TCHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, INVALID_TCHAR)},
	{"INVALID_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, INVALID_QNAME)},
	{"INVALID_ENUM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, INVALID_ENUM)},
	{"INVALID_NMTOKEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, INVALID_NMTOKEN)},
	{"INVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, INVALID_NCNAME)},
	{"INVALID_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, INVALID_BOOLEAN)},
	{"INVALID_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, INVALID_NUMBER)},
	{"ER_ARG_LITERAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_ARG_LITERAL)},
	{"ER_DUPLICATE_GLOBAL_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_DUPLICATE_GLOBAL_VAR)},
	{"ER_DUPLICATE_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_DUPLICATE_VAR)},
	{"ER_TEMPLATE_NAME_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_TEMPLATE_NAME_MATCH)},
	{"ER_INVALID_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_PREFIX)},
	{"ER_NO_ATTRIB_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_NO_ATTRIB_SET)},
	{"ER_FUNCTION_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_FUNCTION_NOT_FOUND)},
	{"ER_CANT_HAVE_CONTENT_AND_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_CANT_HAVE_CONTENT_AND_SELECT)},
	{"ER_INVALID_SET_PARAM_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_INVALID_SET_PARAM_VALUE)},
	{"ER_SET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_SET_FEATURE_NULL_NAME)},
	{"ER_GET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_GET_FEATURE_NULL_NAME)},
	{"ER_UNSUPPORTED_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_UNSUPPORTED_FEATURE)},
	{"ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING)},
	{"WG_FOUND_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_FOUND_CURLYBRACE)},
	{"WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR)},
	{"WG_EXPR_ATTRIB_CHANGED_TO_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_EXPR_ATTRIB_CHANGED_TO_SELECT)},
	{"WG_NO_LOCALE_IN_FORMATNUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_NO_LOCALE_IN_FORMATNUMBER)},
	{"WG_LOCALE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_LOCALE_NOT_FOUND)},
	{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_CANNOT_MAKE_URL_FROM)},
	{"WG_CANNOT_LOAD_REQUESTED_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_CANNOT_LOAD_REQUESTED_DOC)},
	{"WG_CANNOT_FIND_COLLATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_CANNOT_FIND_COLLATOR)},
	{"WG_FUNCTIONS_SHOULD_USE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_FUNCTIONS_SHOULD_USE_URL)},
	{"WG_ENCODING_NOT_SUPPORTED_USING_UTF8", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_ENCODING_NOT_SUPPORTED_USING_UTF8)},
	{"WG_ENCODING_NOT_SUPPORTED_USING_JAVA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_ENCODING_NOT_SUPPORTED_USING_JAVA)},
	{"WG_SPECIFICITY_CONFLICTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_SPECIFICITY_CONFLICTS)},
	{"WG_PARSING_AND_PREPARING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_PARSING_AND_PREPARING)},
	{"WG_ATTR_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_ATTR_TEMPLATE)},
	{"WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE)},
	{"WG_ATTRIB_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_ATTRIB_NOT_HANDLED)},
	{"WG_NO_DECIMALFORMAT_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_NO_DECIMALFORMAT_DECLARATION)},
	{"WG_OLD_XSLT_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_OLD_XSLT_NS)},
	{"WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED)},
	{"WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE)},
	{"WG_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_ILLEGAL_ATTRIBUTE)},
	{"WG_COULD_NOT_RESOLVE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_COULD_NOT_RESOLVE_PREFIX)},
	{"WG_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
	{"WG_ILLEGAL_ATTRIBUTE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_ILLEGAL_ATTRIBUTE_NAME)},
	{"WG_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_ILLEGAL_ATTRIBUTE_VALUE)},
	{"WG_EMPTY_SECOND_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_EMPTY_SECOND_ARG)},
	{"WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
	{"WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
	{"WG_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, WG_ILLEGAL_ATTRIBUTE_POSITION)},
	{"NO_MODIFICATION_ALLOWED_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, NO_MODIFICATION_ALLOWED_ERR)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_zh_TW, FORMAT_FAILED)},
	{}
};

$MethodInfo _XSLTErrorResources_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XSLTErrorResources_zh_TW::*)()>(&XSLTErrorResources_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XSLTErrorResources_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.res.XSLTErrorResources_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	_XSLTErrorResources_zh_TW_FieldInfo_,
	_XSLTErrorResources_zh_TW_MethodInfo_
};

$Object* allocate$XSLTErrorResources_zh_TW($Class* clazz) {
	return $of($alloc(XSLTErrorResources_zh_TW));
}

$String* XSLTErrorResources_zh_TW::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_CURLYBRACE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NULL_SOURCENODE_APPLYIMPORTS = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_ADD = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_TEMPLATE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANT_RESOLVE_NAME_AVT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_REQUIRES_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MUST_HAVE_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_BAD_VAL_ON_LEVEL_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NEED_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NEED_NAME_OR_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANT_RESOLVE_NSPREFIX = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_OWNERDOC = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ELEMTEMPLATEELEM_ERR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NULL_CHILD = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NEED_SELECT_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NEED_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NEED_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_CONTEXT_OWNERDOC = nullptr;
$String* XSLTErrorResources_zh_TW::ER_COULD_NOT_CREATE_XML_PROC_LIAISON = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROCESS_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ENCODING_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_COULD_NOT_CREATE_TRACELISTENER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_KEY_REQUIRES_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_KEY_REQUIRES_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_KEY_REQUIRES_USE_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_REQUIRES_ELEMENTS_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MISSING_PREFIX_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_BAD_STYLESHEET_URL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FILE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_zh_TW::ER_IOEXCEPTION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_HREF_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_STYLESHEET_INCLUDES_ITSELF = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROCESSINCLUDE_ERROR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MISSING_LANG_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MISSING_CONTAINER_ELEMENT_COMPONENT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CAN_ONLY_OUTPUT_TO_ELEMENT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROCESS_ERROR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_UNIMPLNODE_ERROR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_SELECT_EXPRESSION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_SERIALIZE_XSLPROCESSOR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_INPUT_STYLESHEET = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FAILED_PROCESS_STYLESHEET = nullptr;
$String* XSLTErrorResources_zh_TW::ER_COULDNT_PARSE_DOC = nullptr;
$String* XSLTErrorResources_zh_TW::ER_COULDNT_FIND_FRAGMENT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NODE_NOT_ELEMENT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_CLONE_OF_DOCUMENT_FRAG = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANT_CREATE_ITEM = nullptr;
$String* XSLTErrorResources_zh_TW::ER_XMLSPACE_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_XSLKEY_DECLARATION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANT_CREATE_URL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_XSLFUNCTIONS_UNSUPPORTED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROCESSOR_ERROR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NOT_ALLOWED_INSIDE_STYLESHEET = nullptr;
$String* XSLTErrorResources_zh_TW::ER_RESULTNS_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_DEFAULTSPACE_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INDENTRESULT_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ILLEGAL_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_UNKNOWN_XSL_ELEM = nullptr;
$String* XSLTErrorResources_zh_TW::ER_BAD_XSLSORT_USE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MISPLACED_XSLWHEN = nullptr;
$String* XSLTErrorResources_zh_TW::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MISPLACED_XSLOTHERWISE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NOT_ALLOWED_INSIDE_TEMPLATE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_UNKNOWN_EXT_NS_PREFIX = nullptr;
$String* XSLTErrorResources_zh_TW::ER_IMPORTS_AS_FIRST_ELEM = nullptr;
$String* XSLTErrorResources_zh_TW::ER_IMPORTING_ITSELF = nullptr;
$String* XSLTErrorResources_zh_TW::ER_XMLSPACE_ILLEGAL_VAL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_SAX_EXCEPTION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_XSLT_ERROR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CURRENCY_SIGN_ILLEGAL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_REDIRECT_COULDNT_GET_FILENAME = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MISSING_NS_URI = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MISSING_ARG_FOR_OPTION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_OPTION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MALFORMED_FORMAT_STRING = nullptr;
$String* XSLTErrorResources_zh_TW::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CHOOSE_REQUIRES_WHEN = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_APPLY_IMPORT_IN_FOR_EACH = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANT_USE_DTM_FOR_OUTPUT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANT_USE_DTM_FOR_INPUT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CALL_TO_EXT_FAILED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_XSLATTRSET_USED_ITSELF = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_MIX_XERCESDOM = nullptr;
$String* XSLTErrorResources_zh_TW::ER_TOO_MANY_LISTENERS = nullptr;
$String* XSLTErrorResources_zh_TW::ER_IN_ELEMTEMPLATEELEM_READOBJECT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_DUPLICATE_NAMED_TEMPLATE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_KEY_CALL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_REFERENCING_ITSELF = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ILLEGAL_DOMSOURCE_INPUT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CLASS_NOT_FOUND_FOR_OPTION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_REQUIRED_ELEM_NOT_FOUND = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INPUT_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_URI_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FILE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_SOURCE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_INIT_BSFMGR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_CMPL_EXTENSN = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_CREATE_EXTENSN = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INSTANCE_MTHD_CALL_REQUIRES = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_ELEMENT_NAME = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ELEMENT_NAME_METHOD_STATIC = nullptr;
$String* XSLTErrorResources_zh_TW::ER_EXTENSION_FUNC_UNKNOWN = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MORE_MATCH_CONSTRUCTOR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MORE_MATCH_METHOD = nullptr;
$String* XSLTErrorResources_zh_TW::ER_MORE_MATCH_ELEMENT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_CONTEXT_PASSED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_POOL_EXISTS = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_DRIVER_NAME = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_URL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_POOL_SIZE_LESSTHAN_ONE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_DRIVER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_STYLESHEETROOT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ILLEGAL_XMLSPACE_VALUE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROCESSFROMNODE_FAILED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XSLTErrorResources_zh_TW::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XSLTErrorResources_zh_TW::ER_UNKNOWN_ERROR_CALLING_EXTENSION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_NAMESPACE_DECL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ELEM_CONTENT_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_STYLESHEET_DIRECTED_TERMINATION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ONE_OR_TWO = nullptr;
$String* XSLTErrorResources_zh_TW::ER_TWO_OR_THREE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_INIT_DEFAULT_TEMPLATES = nullptr;
$String* XSLTErrorResources_zh_TW::ER_RESULT_NULL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_RESULT_COULD_NOT_BE_SET = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_OUTPUT_SPECIFIED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_TRANSFORM_SOURCE_TYPE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NULL_CONTENT_HANDLER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NULL_ERROR_HANDLER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_CALL_PARSE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_PARENT_FOR_FILTER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_STYLESHEET_IN_MEDIA = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_STYLESHEET_PI = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROPERTY_VALUE_BOOLEAN = nullptr;
$String* XSLTErrorResources_zh_TW::ER_COULD_NOT_FIND_EXTERN_SCRIPT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XSLTErrorResources_zh_TW::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FAILED_CREATING_ELEMLITRSLT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_VALUE_SHOULD_BE_NUMBER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_VALUE_SHOULD_EQUAL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FAILED_CALLING_METHOD = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FAILED_CREATING_ELEMTMPL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CHARS_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ATTR_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_BAD_VALUE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ATTRIB_VALUE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ATTRIB_VALUE_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NULL_URI_NAMESPACE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NUMBER_TOO_BIG = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANNOT_FIND_SAX1_DRIVER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_SAX1_DRIVER_NOT_LOADED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_SAX1_DRIVER_NOT_INSTANTIATED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PARSER_PROPERTY_NOT_SPECIFIED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PARSER_ARG_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FEATURE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_PROPERTY = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NULL_ENTITY_RESOLVER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NULL_DTD_HANDLER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_DRIVER_NAME_SPECIFIED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_URL_SPECIFIED = nullptr;
$String* XSLTErrorResources_zh_TW::ER_POOLSIZE_LESS_THAN_ONE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_DRIVER_NAME = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ERRORLISTENER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ASSERT_NO_TEMPLATE_PARENT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NAMESPACE_CONTEXT_NULL_PREFIX = nullptr;
$String* XSLTErrorResources_zh_TW::ER_XPATH_RESOLVER_NULL_QNAME = nullptr;
$String* XSLTErrorResources_zh_TW::ER_XPATH_RESOLVER_NEGATIVE_ARITY = nullptr;
$String* XSLTErrorResources_zh_TW::INVALID_TCHAR = nullptr;
$String* XSLTErrorResources_zh_TW::INVALID_QNAME = nullptr;
$String* XSLTErrorResources_zh_TW::INVALID_ENUM = nullptr;
$String* XSLTErrorResources_zh_TW::INVALID_NMTOKEN = nullptr;
$String* XSLTErrorResources_zh_TW::INVALID_NCNAME = nullptr;
$String* XSLTErrorResources_zh_TW::INVALID_BOOLEAN = nullptr;
$String* XSLTErrorResources_zh_TW::INVALID_NUMBER = nullptr;
$String* XSLTErrorResources_zh_TW::ER_ARG_LITERAL = nullptr;
$String* XSLTErrorResources_zh_TW::ER_DUPLICATE_GLOBAL_VAR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_DUPLICATE_VAR = nullptr;
$String* XSLTErrorResources_zh_TW::ER_TEMPLATE_NAME_MATCH = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_PREFIX = nullptr;
$String* XSLTErrorResources_zh_TW::ER_NO_ATTRIB_SET = nullptr;
$String* XSLTErrorResources_zh_TW::ER_FUNCTION_NOT_FOUND = nullptr;
$String* XSLTErrorResources_zh_TW::ER_CANT_HAVE_CONTENT_AND_SELECT = nullptr;
$String* XSLTErrorResources_zh_TW::ER_INVALID_SET_PARAM_VALUE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_SET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources_zh_TW::ER_GET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources_zh_TW::ER_UNSUPPORTED_FEATURE = nullptr;
$String* XSLTErrorResources_zh_TW::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING = nullptr;
$String* XSLTErrorResources_zh_TW::WG_FOUND_CURLYBRACE = nullptr;
$String* XSLTErrorResources_zh_TW::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR = nullptr;
$String* XSLTErrorResources_zh_TW::WG_EXPR_ATTRIB_CHANGED_TO_SELECT = nullptr;
$String* XSLTErrorResources_zh_TW::WG_NO_LOCALE_IN_FORMATNUMBER = nullptr;
$String* XSLTErrorResources_zh_TW::WG_LOCALE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_zh_TW::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XSLTErrorResources_zh_TW::WG_CANNOT_LOAD_REQUESTED_DOC = nullptr;
$String* XSLTErrorResources_zh_TW::WG_CANNOT_FIND_COLLATOR = nullptr;
$String* XSLTErrorResources_zh_TW::WG_FUNCTIONS_SHOULD_USE_URL = nullptr;
$String* XSLTErrorResources_zh_TW::WG_ENCODING_NOT_SUPPORTED_USING_UTF8 = nullptr;
$String* XSLTErrorResources_zh_TW::WG_ENCODING_NOT_SUPPORTED_USING_JAVA = nullptr;
$String* XSLTErrorResources_zh_TW::WG_SPECIFICITY_CONFLICTS = nullptr;
$String* XSLTErrorResources_zh_TW::WG_PARSING_AND_PREPARING = nullptr;
$String* XSLTErrorResources_zh_TW::WG_ATTR_TEMPLATE = nullptr;
$String* XSLTErrorResources_zh_TW::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE = nullptr;
$String* XSLTErrorResources_zh_TW::WG_ATTRIB_NOT_HANDLED = nullptr;
$String* XSLTErrorResources_zh_TW::WG_NO_DECIMALFORMAT_DECLARATION = nullptr;
$String* XSLTErrorResources_zh_TW::WG_OLD_XSLT_NS = nullptr;
$String* XSLTErrorResources_zh_TW::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED = nullptr;
$String* XSLTErrorResources_zh_TW::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE = nullptr;
$String* XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources_zh_TW::WG_COULD_NOT_RESOLVE_PREFIX = nullptr;
$String* XSLTErrorResources_zh_TW::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE_NAME = nullptr;
$String* XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources_zh_TW::WG_EMPTY_SECOND_ARG = nullptr;
$String* XSLTErrorResources_zh_TW::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources_zh_TW::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XSLTErrorResources_zh_TW::NO_MODIFICATION_ALLOWED_ERR = nullptr;

$String* XSLTErrorResources_zh_TW::BAD_CODE = nullptr;

$String* XSLTErrorResources_zh_TW::FORMAT_FAILED = nullptr;

void XSLTErrorResources_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XSLTErrorResources_zh_TW::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_CURLYBRACE),
			$of(u"\u932f\u8aa4: \u8868\u793a\u5f0f\u4e2d\u4e0d\u53ef\u6709 \'{\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ILLEGAL_ATTRIBUTE),
			$of(u"{0} \u5177\u6709\u7121\u6548\u5c6c\u6027: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NULL_SOURCENODE_APPLYIMPORTS),
			$of(u"sourceNode \u5728 xsl:apply-imports \u4e2d\u662f\u7a7a\u503c\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_ADD),
			$of(u"\u7121\u6cd5\u65b0\u589e {0} \u81f3 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES),
			$of(u"sourceNode \u5728 handleApplyTemplatesInstruction \u4e2d\u662f\u7a7a\u503c\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_NAME_ATTRIB),
			$of(u"{0} \u5fc5\u9808\u6709\u540d\u7a31\u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_TEMPLATE_NOT_FOUND),
			$of(u"\u627e\u4e0d\u5230\u4e0b\u5217\u540d\u7a31\u7684\u6a23\u677f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANT_RESOLVE_NAME_AVT),
			$of(u"\u7121\u6cd5\u89e3\u6790 xsl:call-template \u4e2d\u7684\u540d\u7a31 AVT\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_REQUIRES_ATTRIB),
			$of(u"{0} \u9700\u8981\u5c6c\u6027: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MUST_HAVE_TEST_ATTRIB),
			$of(u"{0} \u5fc5\u9808\u6709 \'\'test\'\' \u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_BAD_VAL_ON_LEVEL_ATTRIB),
			$of(u"\u932f\u8aa4\u7684\u503c\u4f4d\u65bc\u5c64\u6b21\u5c6c\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML),
			$of(u"processing-instruction \u540d\u7a31\u4e0d\u53ef\u70ba \'xml\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME),
			$of(u"processing-instruction \u540d\u7a31\u5fc5\u9808\u662f\u6709\u6548\u7684 NCName: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NEED_MATCH_ATTRIB),
			$of(u"{0} \u82e5\u5177\u6709\u6a21\u5f0f\uff0c\u5247\u5fc5\u9808\u6709\u914d\u5c0d\u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NEED_NAME_OR_MATCH_ATTRIB),
			$of(u"{0} \u9700\u8981\u540d\u7a31\u6216\u914d\u5c0d\u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANT_RESOLVE_NSPREFIX),
			$of(u"\u7121\u6cd5\u89e3\u6790\u547d\u540d\u7a7a\u9593\u524d\u7f6e\u78bc: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ILLEGAL_VALUE),
			$of(u"xml:space \u5177\u6709\u7121\u6548\u503c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_OWNERDOC),
			$of(u"\u5b50\u9805\u7bc0\u9ede\u4e0d\u5177\u6709\u64c1\u6709\u8005\u6587\u4ef6\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ELEMTEMPLATEELEM_ERR),
			$of(u"ElemTemplateElement \u932f\u8aa4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NULL_CHILD),
			$of(u"\u5617\u8a66\u65b0\u589e\u7a7a\u503c\u5b50\u9805\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NEED_SELECT_ATTRIB),
			$of(u"{0} \u9700\u8981\u9078\u53d6\u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NEED_TEST_ATTRIB),
			$of(u"xsl:when \u5fc5\u9808\u5177\u6709 \'test\' \u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NEED_NAME_ATTRIB),
			$of(u"xsl:with-param \u5fc5\u9808\u5177\u6709 \'name\' \u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_CONTEXT_OWNERDOC),
			$of(u"\u76f8\u95dc\u8cc7\u8a0a\u74b0\u5883\u4e0d\u5177\u6709\u64c1\u6709\u8005\u6587\u4ef6\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_COULD_NOT_CREATE_XML_PROC_LIAISON),
			$of(u"\u7121\u6cd5\u5efa\u7acb XML TransformerFactory Liaison: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROCESS_NOT_SUCCESSFUL),
			$of(u"Xalan: \u8655\u7406\u4f5c\u696d\u5931\u6557\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NOT_SUCCESSFUL),
			$of(u"Xalan: \u5931\u6557\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ENCODING_NOT_SUPPORTED),
			$of(u"\u4e0d\u652f\u63f4\u7de8\u78bc: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_COULD_NOT_CREATE_TRACELISTENER),
			$of(u"\u7121\u6cd5\u5efa\u7acb TraceListener: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_KEY_REQUIRES_NAME_ATTRIB),
			$of(u"xsl:key \u9700\u8981 \'name\' \u5c6c\u6027\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_KEY_REQUIRES_MATCH_ATTRIB),
			$of(u"xsl:key \u9700\u8981 \'match\' \u5c6c\u6027\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_KEY_REQUIRES_USE_ATTRIB),
			$of(u"xsl:key \u9700\u8981 \'use\' \u5c6c\u6027\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_REQUIRES_ELEMENTS_ATTRIB),
			$of(u"(StylesheetHandler) {0} \u9700\u8981 \'\'elements\'\' \u5c6c\u6027\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MISSING_PREFIX_ATTRIB),
			$of(u"(StylesheetHandler) \u907a\u6f0f {0} \u5c6c\u6027 \'\'prefix\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_BAD_STYLESHEET_URL),
			$of(u"\u6a23\u5f0f\u8868 URL \u932f\u8aa4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FILE_NOT_FOUND),
			$of(u"\u627e\u4e0d\u5230\u6a23\u5f0f\u8868\u6a94\u6848: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_IOEXCEPTION),
			$of(u"\u6a23\u5f0f\u8868\u6a94\u6848\u767c\u751f IO \u7570\u5e38\u72c0\u6cc1: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_HREF_ATTRIB),
			$of(u"(StylesheetHandler) \u627e\u4e0d\u5230 {0} \u7684 href \u5c6c\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_STYLESHEET_INCLUDES_ITSELF),
			$of(u"(StylesheetHandler) {0} \u76f4\u63a5\u6216\u9593\u63a5\u5730\u5305\u542b\u672c\u8eab\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROCESSINCLUDE_ERROR),
			$of(u"StylesheetHandler.processInclude \u932f\u8aa4\uff0c{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MISSING_LANG_ATTRIB),
			$of(u"(StylesheetHandler) \u907a\u6f0f {0} \u5c6c\u6027 \'\'lang\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MISSING_CONTAINER_ELEMENT_COMPONENT),
			$of(u"(StylesheetHandler) {0} \u5143\u7d20\u7684\u4f4d\u7f6e\u932f\u8aa4\uff1f\u907a\u6f0f\u5bb9\u5668\u5143\u7d20 \'\'component\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CAN_ONLY_OUTPUT_TO_ELEMENT),
			$of(u"\u53ea\u80fd\u8f38\u51fa\u81f3 Element\u3001DocumentFragment\u3001Document \u6216 PrintWriter\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROCESS_ERROR),
			$of(u"StylesheetRoot.process \u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_UNIMPLNODE_ERROR),
			$of(u"UnImplNode \u932f\u8aa4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_SELECT_EXPRESSION),
			$of(u"\u932f\u8aa4\uff01\u627e\u4e0d\u5230 xpath \u9078\u53d6\u8868\u793a\u5f0f (-select)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_SERIALIZE_XSLPROCESSOR),
			$of(u"\u7121\u6cd5\u5e8f\u5217\u5316 XSLProcessor\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_INPUT_STYLESHEET),
			$of(u"\u672a\u6307\u5b9a\u6a23\u5f0f\u8868\u8f38\u5165\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FAILED_PROCESS_STYLESHEET),
			$of(u"\u7121\u6cd5\u8655\u7406\u6a23\u5f0f\u8868\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_COULDNT_PARSE_DOC),
			$of(u"\u7121\u6cd5\u5256\u6790 {0} \u6587\u4ef6\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_COULDNT_FIND_FRAGMENT),
			$of(u"\u627e\u4e0d\u5230\u7247\u6bb5: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NODE_NOT_ELEMENT),
			$of(u"\u7247\u6bb5 ID \u6307\u5411\u7684\u7bc0\u9ede\u4e0d\u662f\u5143\u7d20: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB),
			$of(u"for-each \u5fc5\u9808\u6709\u914d\u5c0d\u6216\u540d\u7a31\u5c6c\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB),
			$of(u"\u6a23\u677f\u5fc5\u9808\u6709\u914d\u5c0d\u6216\u540d\u7a31\u5c6c\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_CLONE_OF_DOCUMENT_FRAG),
			$of(u"\u6c92\u6709\u6587\u4ef6\u7247\u6bb5\u7684\u8907\u88fd\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANT_CREATE_ITEM),
			$of(u"\u7121\u6cd5\u5728\u7d50\u679c\u6a39\u72c0\u7d50\u69cb\u4e2d\u5efa\u7acb\u9805\u76ee: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_XMLSPACE_ILLEGAL_VALUE),
			$of(u"\u4f86\u6e90 XML \u4e2d\u7684 xml:space \u5177\u6709\u7121\u6548\u503c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_XSLKEY_DECLARATION),
			$of(u"{0} \u6c92\u6709 xsl:key \u5ba3\u544a\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANT_CREATE_URL),
			$of(u"\u932f\u8aa4\uff01\u7121\u6cd5\u70ba {0} \u5efa\u7acb url"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_XSLFUNCTIONS_UNSUPPORTED),
			$of(u"\u4e0d\u652f\u63f4 xsl:functions"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROCESSOR_ERROR),
			$of(u"XSLT TransformerFactory \u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NOT_ALLOWED_INSIDE_STYLESHEET),
			$of(u"(StylesheetHandler) \u6a23\u5f0f\u8868\u5167\u4e0d\u5141\u8a31 {0}\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_RESULTNS_NOT_SUPPORTED),
			$of(u"\u4e0d\u518d\u652f\u63f4 result-ns\uff01\u8acb\u6539\u7528 xsl:output\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_DEFAULTSPACE_NOT_SUPPORTED),
			$of(u"\u4e0d\u518d\u652f\u63f4 default-space\uff01\u8acb\u6539\u7528 xsl:strip-space \u6216 xsl:preserve-space\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INDENTRESULT_NOT_SUPPORTED),
			$of(u"\u4e0d\u518d\u652f\u63f4 indent-result\uff01\u8acb\u6539\u7528 xsl:output\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ILLEGAL_ATTRIB),
			$of(u"(StylesheetHandler) {0} \u5177\u6709\u7121\u6548\u5c6c\u6027: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_UNKNOWN_XSL_ELEM),
			$of(u"\u4e0d\u660e\u7684 XSL \u5143\u7d20: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_BAD_XSLSORT_USE),
			$of(u"(StylesheetHandler) xsl:sort \u53ea\u80fd\u8207 xsl:apply-templates \u6216 xsl:for-each \u4e00\u8d77\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MISPLACED_XSLWHEN),
			$of(u"(StylesheetHandler) xsl:when \u4f4d\u7f6e\u932f\u8aa4\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE),
			$of(u"(StylesheetHandler) xsl:when \u7684\u7236\u9805\u4e0d\u662f xsl:choose\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MISPLACED_XSLOTHERWISE),
			$of(u"(StylesheetHandler) xsl:otherwise \u4f4d\u7f6e\u932f\u8aa4\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE),
			$of(u"(StylesheetHandler) xsl:otherwise \u7684\u7236\u9805\u4e0d\u662f xsl:choose\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NOT_ALLOWED_INSIDE_TEMPLATE),
			$of(u"(StylesheetHandler) \u6a23\u677f\u5167\u4e0d\u5141\u8a31 {0}\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_UNKNOWN_EXT_NS_PREFIX),
			$of(u"(StylesheetHandler) \u4e0d\u660e\u7684 {0} \u64f4\u5145\u5957\u4ef6\u547d\u540d\u7a7a\u9593\u524d\u7f6e\u78bc {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_IMPORTS_AS_FIRST_ELEM),
			$of(u"(StylesheetHandler) \u532f\u5165\u53ea\u80fd\u767c\u751f\u65bc\u6a23\u5f0f\u8868\u4e2d\u7684\u7b2c\u4e00\u500b\u5143\u7d20\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_IMPORTING_ITSELF),
			$of(u"(StylesheetHandler) {0} \u76f4\u63a5\u6216\u9593\u63a5\u5730\u532f\u5165\u672c\u8eab\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_XMLSPACE_ILLEGAL_VAL),
			$of(u"(StylesheetHandler) xml:space \u5177\u6709\u7121\u6548\u503c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL),
			$of(u"processStylesheet \u5931\u6557\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_SAX_EXCEPTION),
			$of(u"SAX \u7570\u5e38\u72c0\u6cc1"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"\u4e0d\u652f\u63f4\u51fd\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_XSLT_ERROR),
			$of(u"XSLT \u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CURRENCY_SIGN_ILLEGAL),
			$of(u"\u683c\u5f0f\u6a23\u5f0f\u5b57\u4e32\u4e2d\u4e0d\u5141\u8a31\u8ca8\u5e63\u7b26\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM),
			$of(u"Stylesheet DOM \u4e2d\u4e0d\u652f\u63f4\u6587\u4ef6\u51fd\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER),
			$of(u"\u7121\u6cd5\u89e3\u6790\u975e\u524d\u7f6e\u78bc\u89e3\u6790\u5668\u7684\u524d\u7f6e\u78bc\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_REDIRECT_COULDNT_GET_FILENAME),
			$of(u"\u91cd\u5c0e\u64f4\u5145\u5957\u4ef6: \u7121\u6cd5\u53d6\u5f97\u6a94\u6848\u540d\u7a31 - \u6a94\u6848\u6216\u9078\u53d6\u5c6c\u6027\u5fc5\u9808\u50b3\u56de\u6709\u6548\u5b57\u4e32\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT),
			$of(u"\u7121\u6cd5\u5728\u91cd\u5c0e\u64f4\u5145\u5957\u4ef6\u4e2d\u5efa\u7acb FormatterListener\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX),
			$of(u"exclude-result-prefixes \u4e2d\u7684\u524d\u7f6e\u78bc\u7121\u6548: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MISSING_NS_URI),
			$of(u"\u907a\u6f0f\u6307\u5b9a\u524d\u7f6e\u78bc\u7684\u547d\u540d\u7a7a\u9593 URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MISSING_ARG_FOR_OPTION),
			$of(u"\u907a\u6f0f\u9078\u9805\u7684\u5f15\u6578: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_OPTION),
			$of(u"\u7121\u6548\u7684\u9078\u9805: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MALFORMED_FORMAT_STRING),
			$of(u"\u683c\u5f0f\u932f\u8aa4\u7684\u683c\u5f0f\u5b57\u4e32: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB),
			$of(u"xsl:stylesheet \u9700\u8981 \'version\' \u5c6c\u6027\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ILLEGAL_ATTRIBUTE_VALUE),
			$of(u"\u5c6c\u6027: {0} \u5177\u6709\u7121\u6548\u503c: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CHOOSE_REQUIRES_WHEN),
			$of(u"xsl:choose \u9700\u8981 xsl:when"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_APPLY_IMPORT_IN_FOR_EACH),
			$of(u"xsl:for-each \u4e2d\u4e0d\u5141\u8a31 xsl:apply-imports"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANT_USE_DTM_FOR_OUTPUT),
			$of(u"DTMLiaison \u7121\u6cd5\u7528\u65bc\u8f38\u51fa DOM \u7bc0\u9ede\u3002\u8acb\u6539\u70ba\u50b3\u9001 com.sun.org.apache.xpath.internal.DOM2Helper\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANT_USE_DTM_FOR_INPUT),
			$of(u"DTMLiaison \u7121\u6cd5\u7528\u65bc\u8f38\u5165 DOM \u7bc0\u9ede\u3002\u8acb\u6539\u70ba\u50b3\u9001 com.sun.org.apache.xpath.internal.DOM2Helper\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CALL_TO_EXT_FAILED),
			$of(u"\u547c\u53eb\u64f4\u5145\u5957\u4ef6\u5143\u7d20\u5931\u6557: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PREFIX_MUST_RESOLVE),
			$of(u"\u524d\u7f6e\u78bc\u5fc5\u9808\u89e3\u6790\u70ba\u547d\u540d\u7a7a\u9593: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u5075\u6e2c\u5230\u7121\u6548\u7684 UTF-16 \u4ee3\u7406: {0}\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_XSLATTRSET_USED_ITSELF),
			$of(u"xsl:attribute-set {0} \u4f7f\u7528\u672c\u8eab\uff0c\u5982\u6b64\u5c07\u9020\u6210\u7121\u9650\u8ff4\u5708\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_MIX_XERCESDOM),
			$of(u"\u7121\u6cd5\u6df7\u5408\u975e Xerces-DOM \u8f38\u5165\u8207 Xerces-DOM \u8f38\u51fa\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_TOO_MANY_LISTENERS),
			$of("addTraceListenersToStylesheet - TooManyListenersException"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_IN_ELEMTEMPLATEELEM_READOBJECT),
			$of(u"\u5728 ElemTemplateElement.readObject \u4e2d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_DUPLICATE_NAMED_TEMPLATE),
			$of(u"\u627e\u5230\u8d85\u904e\u4e00\u500b\u4e0b\u5217\u540d\u7a31\u7684\u6a23\u677f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_KEY_CALL),
			$of(u"\u7121\u6548\u7684\u51fd\u6578\u547c\u53eb: \u4e0d\u5141\u8a31\u905e\u8ff4 key() \u547c\u53eb"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_REFERENCING_ITSELF),
			$of(u"\u8b8a\u6578 {0} \u76f4\u63a5\u6216\u9593\u63a5\u5730\u53c3\u7167\u672c\u8eab\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ILLEGAL_DOMSOURCE_INPUT),
			$of(u"newTemplates \u4e4b DOMSource \u7684\u8f38\u5165\u7bc0\u9ede\u4e0d\u53ef\u70ba\u7a7a\u503c\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CLASS_NOT_FOUND_FOR_OPTION),
			$of(u"\u627e\u4e0d\u5230\u9078\u9805 {0} \u7684\u985e\u5225\u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_REQUIRED_ELEM_NOT_FOUND),
			$of(u"\u627e\u4e0d\u5230\u9700\u8981\u7684\u5143\u7d20: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INPUT_CANNOT_BE_NULL),
			$of(u"InputStream \u4e0d\u53ef\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_URI_CANNOT_BE_NULL),
			$of(u"URI \u4e0d\u53ef\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FILE_CANNOT_BE_NULL),
			$of(u"File \u4e0d\u53ef\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_SOURCE_CANNOT_BE_NULL),
			$of(u"InputSource \u4e0d\u53ef\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_INIT_BSFMGR),
			$of(u"\u7121\u6cd5\u8d77\u59cb BSF \u7ba1\u7406\u7a0b\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_CMPL_EXTENSN),
			$of(u"\u7121\u6cd5\u7de8\u8b6f\u64f4\u5145\u5957\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_CREATE_EXTENSN),
			$of(u"\u7121\u6cd5\u5efa\u7acb\u64f4\u5145\u5957\u4ef6: {0}\uff0c\u56e0\u70ba: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INSTANCE_MTHD_CALL_REQUIRES),
			$of(u"\u57f7\u884c\u8655\u7406\u65b9\u6cd5\u547c\u53eb\u65b9\u6cd5 {0} \u6642\uff0c\u9700\u8981 Object \u57f7\u884c\u8655\u7406\u4f5c\u70ba\u7b2c\u4e00\u500b\u5f15\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_ELEMENT_NAME),
			$of(u"\u6307\u5b9a\u4e86\u7121\u6548\u7684\u5143\u7d20\u540d\u7a31 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ELEMENT_NAME_METHOD_STATIC),
			$of(u"\u5143\u7d20\u540d\u7a31\u65b9\u6cd5\u5fc5\u9808\u662f\u975c\u614b {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_EXTENSION_FUNC_UNKNOWN),
			$of(u"\u64f4\u5145\u5957\u4ef6\u51fd\u6578 {0} : {1} \u4e0d\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MORE_MATCH_CONSTRUCTOR),
			$of(u"{0} \u7684\u5efa\u69cb\u5b50\u6709\u8d85\u904e\u4e00\u500b\u4ee5\u4e0a\u7684\u6700\u4f73\u914d\u5c0d"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MORE_MATCH_METHOD),
			$of(u"\u65b9\u6cd5 {0} \u6709\u8d85\u904e\u4e00\u500b\u4ee5\u4e0a\u7684\u6700\u4f73\u914d\u5c0d"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_MORE_MATCH_ELEMENT),
			$of(u"\u5143\u7d20\u65b9\u6cd5 {0} \u6709\u8d85\u904e\u4e00\u500b\u4ee5\u4e0a\u7684\u6700\u4f73\u914d\u5c0d"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_CONTEXT_PASSED),
			$of(u"\u50b3\u9001\u4e86\u7121\u6548\u7684\u76f8\u95dc\u8cc7\u8a0a\u74b0\u5883\u4f86\u8a55\u4f30 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_POOL_EXISTS),
			$of(u"\u96c6\u5340\u5df2\u7d93\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_DRIVER_NAME),
			$of(u"\u672a\u6307\u5b9a\u9a45\u52d5\u7a0b\u5f0f\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_URL),
			$of(u"\u672a\u6307\u5b9a URL"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_POOL_SIZE_LESSTHAN_ONE),
			$of(u"\u96c6\u5340\u5927\u5c0f\u5c0f\u65bc\u4e00\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_DRIVER),
			$of(u"\u6307\u5b9a\u4e86\u7121\u6548\u7684\u9a45\u52d5\u7a0b\u5f0f\u540d\u7a31\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_STYLESHEETROOT),
			$of(u"\u627e\u4e0d\u5230\u6a23\u5f0f\u8868\u6839\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ILLEGAL_XMLSPACE_VALUE),
			$of(u"xml:space \u7684\u503c\u7121\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROCESSFROMNODE_FAILED),
			$of(u"processFromNode \u5931\u6557"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"\u7121\u6cd5\u8f09\u5165\u8cc7\u6e90 [ {0} ]: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"\u7de9\u885d\u5340\u5927\u5c0f <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_UNKNOWN_ERROR_CALLING_EXTENSION),
			$of(u"\u547c\u53eb\u64f4\u5145\u5957\u4ef6\u6642\uff0c\u767c\u751f\u4e0d\u660e\u7684\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_NAMESPACE_DECL),
			$of(u"\u524d\u7f6e\u78bc {0} \u6c92\u6709\u5c0d\u61c9\u7684\u547d\u540d\u7a7a\u9593\u5ba3\u544a"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ELEM_CONTENT_NOT_ALLOWED),
			$of(u"\u5143\u7d20\u5167\u5bb9\u4e0d\u5141\u8a31 lang=javaclass {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_STYLESHEET_DIRECTED_TERMINATION),
			$of(u"\u6a23\u5f0f\u8868\u5c0e\u5411\u7684\u7d42\u6b62"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ONE_OR_TWO),
			$of(u"1 \u6216 2"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_TWO_OR_THREE),
			$of(u"2 \u6216 3"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"\u7121\u6cd5\u8f09\u5165 {0} (\u6aa2\u67e5 CLASSPATH)\uff0c\u76ee\u524d\u53ea\u4f7f\u7528\u9810\u8a2d\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_INIT_DEFAULT_TEMPLATES),
			$of(u"\u7121\u6cd5\u8d77\u59cb\u9810\u8a2d\u6a23\u677f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_RESULT_NULL),
			$of(u"\u7d50\u679c\u4e0d\u61c9\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_RESULT_COULD_NOT_BE_SET),
			$of(u"\u7121\u6cd5\u8a2d\u5b9a\u7d50\u679c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_OUTPUT_SPECIFIED),
			$of(u"\u672a\u6307\u5b9a\u8f38\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE),
			$of(u"\u7121\u6cd5\u8f49\u63db\u70ba\u985e\u578b {0} \u7684\u7d50\u679c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_TRANSFORM_SOURCE_TYPE),
			$of(u"\u7121\u6cd5\u8f49\u63db\u985e\u578b {0} \u7684\u4f86\u6e90"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NULL_CONTENT_HANDLER),
			$of(u"\u7a7a\u503c\u5167\u5bb9\u8655\u7406\u7a0b\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NULL_ERROR_HANDLER),
			$of(u"\u7a7a\u503c\u932f\u8aa4\u8655\u7406\u7a0b\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_CALL_PARSE),
			$of(u"\u82e5\u672a\u8a2d\u5b9a ContentHandler\uff0c\u5247\u7121\u6cd5\u547c\u53eb\u5256\u6790"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_PARENT_FOR_FILTER),
			$of(u"\u7be9\u9078\u6c92\u6709\u7236\u9805"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_STYLESHEET_IN_MEDIA),
			$of(u"\u5728 {0} \u4e2d\u627e\u4e0d\u5230\u6a23\u5f0f\u8868\uff0c\u5a92\u9ad4 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_STYLESHEET_PI),
			$of(u"\u5728 {0} \u4e2d\u627e\u4e0d\u5230 xml-stylesheet PI"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NOT_SUPPORTED),
			$of(u"\u4e0d\u652f\u63f4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROPERTY_VALUE_BOOLEAN),
			$of(u"\u5c6c\u6027 {0} \u7684\u503c\u61c9\u70ba\u5e03\u6797\u57f7\u884c\u8655\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_COULD_NOT_FIND_EXTERN_SCRIPT),
			$of(u"\u7121\u6cd5\u5728 {0} \u53d6\u5f97\u5916\u90e8\u547d\u4ee4\u6a94"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"\u627e\u4e0d\u5230\u8cc7\u6e90 [ {0} ]\u3002\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED),
			$of(u"\u7121\u6cd5\u8fa8\u8b58\u7684\u8f38\u51fa\u5c6c\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FAILED_CREATING_ELEMLITRSLT),
			$of(u"\u7121\u6cd5\u5efa\u7acb ElemLiteralResult \u57f7\u884c\u8655\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_VALUE_SHOULD_BE_NUMBER),
			$of(u"{0} \u7684\u503c\u61c9\u5305\u542b\u53ef\u5256\u6790\u7684\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_VALUE_SHOULD_EQUAL),
			$of(u"{0} \u7684\u503c\u61c9\u7b49\u65bc yes \u6216 no"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FAILED_CALLING_METHOD),
			$of(u"\u7121\u6cd5\u547c\u53eb {0} \u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FAILED_CREATING_ELEMTMPL),
			$of(u"\u7121\u6cd5\u5efa\u7acb ElemTemplateElement \u57f7\u884c\u8655\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CHARS_NOT_ALLOWED),
			$of(u"\u6587\u4ef6\u6b64\u8655\u4e0d\u5141\u8a31\u5b57\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ATTR_NOT_ALLOWED),
			$of(u"{1} \u5143\u7d20\u4e0d\u5141\u8a31 \"{0}\" \u5c6c\u6027\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_BAD_VALUE),
			$of(u"{0} \u7121\u6548\u503c {1} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ATTRIB_VALUE_NOT_FOUND),
			$of(u"\u627e\u4e0d\u5230 {0} \u5c6c\u6027\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ATTRIB_VALUE_NOT_RECOGNIZED),
			$of(u"{0} \u5c6c\u6027\u503c\u7121\u6cd5\u8fa8\u8b58 "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NULL_URI_NAMESPACE),
			$of(u"\u5617\u8a66\u4ee5\u7a7a\u503c URI \u7522\u751f\u547d\u540d\u7a7a\u9593\u524d\u7f6e\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NUMBER_TOO_BIG),
			$of(u"\u5617\u8a66\u683c\u5f0f\u5316\u5927\u65bc\u6700\u5927\u9577\u6574\u6578\u7684\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANNOT_FIND_SAX1_DRIVER),
			$of(u"\u627e\u4e0d\u5230 SAX1 \u9a45\u52d5\u7a0b\u5f0f\u985e\u5225 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_SAX1_DRIVER_NOT_LOADED),
			$of(u"\u627e\u5230 SAX1 \u9a45\u52d5\u7a0b\u5f0f\u985e\u5225 {0}\uff0c\u4f46\u7121\u6cd5\u8f09\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_SAX1_DRIVER_NOT_INSTANTIATED),
			$of(u"\u5df2\u8f09\u5165 SAX1 \u9a45\u52d5\u7a0b\u5f0f\u985e\u5225 {0}\uff0c\u4f46\u7121\u6cd5\u5efa\u7acb"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER),
			$of(u"SAX1 \u9a45\u52d5\u7a0b\u5f0f\u985e\u5225 {0} \u672a\u5be6\u884c org.xml.sax.Parser"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PARSER_PROPERTY_NOT_SPECIFIED),
			$of(u"\u672a\u6307\u5b9a\u7cfb\u7d71\u5c6c\u6027 org.xml.sax.parser"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PARSER_ARG_CANNOT_BE_NULL),
			$of(u"\u5256\u6790\u5668\u5f15\u6578\u4e0d\u53ef\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FEATURE),
			$of(u"\u529f\u80fd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_PROPERTY),
			$of(u"\u5c6c\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NULL_ENTITY_RESOLVER),
			$of(u"\u7a7a\u503c\u5be6\u9ad4\u89e3\u6790\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NULL_DTD_HANDLER),
			$of(u"\u7a7a\u503c DTD \u8655\u7406\u7a0b\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_DRIVER_NAME_SPECIFIED),
			$of(u"\u672a\u6307\u5b9a\u9a45\u52d5\u7a0b\u5f0f\u540d\u7a31\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_URL_SPECIFIED),
			$of(u"\u672a\u6307\u5b9a URL\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_POOLSIZE_LESS_THAN_ONE),
			$of(u"\u96c6\u5340\u5927\u5c0f\u5c0f\u65bc 1\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_DRIVER_NAME),
			$of(u"\u6307\u5b9a\u4e86\u7121\u6548\u7684\u9a45\u52d5\u7a0b\u5f0f\u540d\u7a31\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ERRORLISTENER),
			$of("ErrorListener"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ASSERT_NO_TEMPLATE_PARENT),
			$of(u"\u7a0b\u5f0f\u8a2d\u8a08\u4eba\u54e1\u7684\u932f\u8aa4\uff01\u8868\u793a\u5f0f\u6c92\u6709 ElemTemplateElement \u7236\u9805\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR),
			$of(u"\u7a0b\u5f0f\u8a2d\u8a08\u4eba\u54e1\u5728 RedundentExprEliminator \u4e2d\u7684\u5ba3\u544a: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NOT_ALLOWED_IN_POSITION),
			$of(u"\u6a23\u5f0f\u8868\u6b64\u4f4d\u7f6e\u4e0d\u5141\u8a31 {0}\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION),
			$of(u"\u6a23\u5f0f\u8868\u6b64\u4f4d\u7f6e\u4e0d\u5141\u8a31\u975e\u7a7a\u683c\u6587\u5b57\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::INVALID_TCHAR),
			$of(u"\u7121\u6548\u503c: {1} \u7528\u65bc CHAR \u5c6c\u6027: {0}\u3002\u985e\u578b CHAR \u7684\u5c6c\u6027\u5fc5\u9808\u50c5\u70ba 1 \u500b\u5b57\u5143\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::INVALID_QNAME),
			$of(u"\u7121\u6548\u503c: {1} \u7528\u65bc QNAME \u5c6c\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::INVALID_ENUM),
			$of(u"\u7121\u6548\u503c: {1} \u7528\u65bc ENUM \u5c6c\u6027: {0}\u3002\u6709\u6548\u503c\u70ba: {2}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::INVALID_NMTOKEN),
			$of(u"\u7121\u6548\u503c: {1} \u7528\u65bc NMTOKEN \u5c6c\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::INVALID_NCNAME),
			$of(u"\u7121\u6548\u503c: {1} \u7528\u65bc NCNAME \u5c6c\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::INVALID_BOOLEAN),
			$of(u"\u7121\u6548\u503c: {1} \u7528\u65bc\u5e03\u6797\u5c6c\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::INVALID_NUMBER),
			$of(u"\u7121\u6548\u503c: {1} \u7528\u65bc\u6578\u5b57\u5c6c\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_ARG_LITERAL),
			$of(u"\u914d\u5c0d\u6a23\u5f0f\u4e2d {0} \u7684\u5f15\u6578\u5fc5\u9808\u662f\u6587\u5b57\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_DUPLICATE_GLOBAL_VAR),
			$of(u"\u91cd\u8907\u7684\u5168\u57df\u8b8a\u6578\u5ba3\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_DUPLICATE_VAR),
			$of(u"\u91cd\u8907\u7684\u8b8a\u6578\u5ba3\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_TEMPLATE_NAME_MATCH),
			$of(u"xsl:template \u5fc5\u9808\u6709\u540d\u7a31\u6216\u914d\u5c0d\u5c6c\u6027 (\u6216\u5177\u6709\u5169\u8005)"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_PREFIX),
			$of(u"exclude-result-prefixes \u4e2d\u7684\u524d\u7f6e\u78bc\u7121\u6548: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NO_ATTRIB_SET),
			$of(u"\u4e0d\u5b58\u5728\u540d\u7a31\u70ba {0} \u7684 attribute-set"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_FUNCTION_NOT_FOUND),
			$of(u"\u4e0d\u5b58\u5728\u540d\u7a31\u70ba {0} \u7684\u51fd\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_CANT_HAVE_CONTENT_AND_SELECT),
			$of(u"{0} \u5143\u7d20\u4e0d\u53ef\u540c\u6642\u5177\u6709\u5167\u5bb9\u8207\u9078\u53d6\u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_SET_PARAM_VALUE),
			$of(u"\u53c3\u6578 {0} \u7684\u503c\u5fc5\u9808\u662f\u6709\u6548\u7684 Java \u7269\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT),
			$of(u"xsl:namespace-alias \u5143\u7d20\u7684 result-prefix \u5c6c\u6027\u5177\u6709\u503c \'#default\'\uff0c\u4f46\u662f\u5143\u7d20\u7bc4\u570d\u4e2d\u6c92\u6709\u9810\u8a2d\u547d\u540d\u7a7a\u9593\u7684\u5ba3\u544a"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX),
			$of(u"xsl:namespace-alias \u5143\u7d20\u7684 result-prefix \u5c6c\u6027\u5177\u6709\u503c \'\'{0}\'\'\uff0c\u4f46\u662f\u5143\u7d20\u7bc4\u570d\u4e2d\u6c92\u6709\u524d\u7f6e\u78bc \'\'{0}\'\' \u7684\u547d\u540d\u7a7a\u9593\u5ba3\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_SET_FEATURE_NULL_NAME),
			$of(u"TransformerFactory.setFeature(\u5b57\u4e32\u540d\u7a31, \u5e03\u6797\u503c) \u4e2d\u7684\u529f\u80fd\u540d\u7a31\u4e0d\u53ef\u70ba\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_GET_FEATURE_NULL_NAME),
			$of(u"TransformerFactory.getFeature(\u5b57\u4e32\u540d\u7a31) \u4e2d\u7684\u529f\u80fd\u540d\u7a31\u4e0d\u53ef\u70ba\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_UNSUPPORTED_FEATURE),
			$of(u"\u7121\u6cd5\u5728\u6b64 TransformerFactory \u4e0a\u8a2d\u5b9a\u529f\u80fd \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING),
			$of(u"\u7576\u5b89\u5168\u8655\u7406\u529f\u80fd\u8a2d\u70ba\u771f\u6642\uff0c\u4e0d\u5141\u8a31\u4f7f\u7528\u64f4\u5145\u5957\u4ef6\u5143\u7d20 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE),
			$of(u"\u7121\u6cd5\u53d6\u5f97\u7a7a\u503c\u547d\u540d\u7a7a\u9593 uri \u7684\u524d\u7f6e\u78bc\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_NAMESPACE_CONTEXT_NULL_PREFIX),
			$of(u"\u7121\u6cd5\u53d6\u5f97\u7a7a\u503c\u524d\u7f6e\u78bc\u7684\u547d\u540d\u7a7a\u9593 uri\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_XPATH_RESOLVER_NULL_QNAME),
			$of(u"\u51fd\u6578\u540d\u7a31\u4e0d\u53ef\u70ba\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::ER_XPATH_RESOLVER_NEGATIVE_ARITY),
			$of(u"Arity \u4e0d\u53ef\u70ba\u8ca0\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_FOUND_CURLYBRACE),
			$of(u"\u627e\u5230 \'}\'\uff0c\u4f46\u6c92\u6709\u958b\u555f\u7684\u5c6c\u6027\u6a23\u677f\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR),
			$of(u"\u8b66\u544a: \u8a08\u6578\u5c6c\u6027\u4e0d\u7b26\u5408 xsl:number \u4e2d\u7684\u7956\u7cfb\uff01\u76ee\u6a19 = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_EXPR_ATTRIB_CHANGED_TO_SELECT),
			$of(u"\u820a\u8a9e\u6cd5: \'expr\' \u5c6c\u6027\u7684\u540d\u7a31\u5df2\u8b8a\u66f4\u70ba \'select\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_NO_LOCALE_IN_FORMATNUMBER),
			$of(u"Xalan \u5c1a\u672a\u8655\u7406 format-number \u51fd\u6578\u4e2d\u7684\u5730\u5340\u8a2d\u5b9a\u540d\u7a31\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_LOCALE_NOT_FOUND),
			$of(u"\u8b66\u544a: \u627e\u4e0d\u5230 xml:lang={0} \u7684\u5730\u5340\u8a2d\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_CANNOT_MAKE_URL_FROM),
			$of(u"\u7121\u6cd5\u5f9e {0} \u5efa\u7acb URL"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_CANNOT_LOAD_REQUESTED_DOC),
			$of(u"\u7121\u6cd5\u8f09\u5165\u8981\u6c42\u7684\u6587\u4ef6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_CANNOT_FIND_COLLATOR),
			$of(u"\u627e\u4e0d\u5230 <sort xml:lang={0} \u7684 Collator"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_FUNCTIONS_SHOULD_USE_URL),
			$of(u"\u820a\u8a9e\u6cd5: \u51fd\u6578\u6307\u793a\u61c9\u4f7f\u7528 {0} \u7684 url"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_ENCODING_NOT_SUPPORTED_USING_UTF8),
			$of(u"\u4e0d\u652f\u63f4\u7de8\u78bc: {0}\uff0c\u4f7f\u7528 UTF-8"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_ENCODING_NOT_SUPPORTED_USING_JAVA),
			$of(u"\u4e0d\u652f\u63f4\u7de8\u78bc: {0}\uff0c\u4f7f\u7528 Java {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_SPECIFICITY_CONFLICTS),
			$of(u"\u767c\u73fe\u6307\u5b9a\u885d\u7a81: {0} \u5c07\u4f7f\u7528\u6a23\u5f0f\u8868\u4e2d\u6700\u5f8c\u627e\u5230\u7684\u9805\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_PARSING_AND_PREPARING),
			$of(u"========= \u5256\u6790\u8207\u6e96\u5099 {0} =========="_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_ATTR_TEMPLATE),
			$of(u"\u5c6c\u6027\u6a23\u677f\uff0c{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE),
			$of(u"xsl:strip-space \u8207 xsl:preserve-space \u4e4b\u9593\u914d\u5c0d\u885d\u7a81"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_ATTRIB_NOT_HANDLED),
			$of(u"Xalan \u5c1a\u672a\u8655\u7406 {0} \u5c6c\u6027\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_NO_DECIMALFORMAT_DECLARATION),
			$of(u"\u627e\u4e0d\u5230\u5341\u9032\u4f4d\u683c\u5f0f\u7684\u5ba3\u544a: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_OLD_XSLT_NS),
			$of(u"\u907a\u6f0f\u6216\u4e0d\u6b63\u78ba\u7684 XSLT \u547d\u540d\u7a7a\u9593\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED),
			$of(u"\u53ea\u5141\u8a31\u4e00\u500b\u9810\u8a2d\u7684 xsl:decimal-format \u5ba3\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE),
			$of(u"xsl:decimal-format \u540d\u7a31\u5fc5\u9808\u662f\u552f\u4e00\u7684\u540d\u7a31\u3002\u540d\u7a31 \"{0}\" \u91cd\u8907\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE),
			$of(u"{0} \u5177\u6709\u7121\u6548\u5c6c\u6027: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_COULD_NOT_RESOLVE_PREFIX),
			$of(u"\u7121\u6cd5\u89e3\u6790\u547d\u540d\u7a7a\u9593\u524d\u7f6e\u78bc: {0}\u3002\u5c07\u5ffd\u7565\u6b64\u7bc0\u9ede\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB),
			$of(u"xsl:stylesheet \u9700\u8981 \'version\' \u5c6c\u6027\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE_NAME),
			$of(u"\u7121\u6548\u7684\u5c6c\u6027\u540d\u7a31: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE_VALUE),
			$of(u"\u7528\u65bc\u5c6c\u6027 {0} \u7684\u7121\u6548\u503c: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_EMPTY_SECOND_ARG),
			$of(u"\u6587\u4ef6\u51fd\u6578\u7b2c\u4e8c\u500b\u5f15\u6578\u7522\u751f\u7684\u7bc0\u9ede\u96c6\u70ba\u7a7a\u767d\u3002\u50b3\u56de\u7a7a\u767d\u7684 node-set\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML),
			$of(u"xsl:processing-instruction \u540d\u7a31\u7684 \'name\' \u5c6c\u6027\u503c\u4e0d\u53ef\u70ba \'xml\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME),
			$of(u"xsl:processing-instruction \u7684 \'\'name\'\' \u5c6c\u6027\u503c\u5fc5\u9808\u662f\u6709\u6548\u7684 NCName: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"\u5728\u7522\u751f\u5b50\u9805\u7bc0\u9ede\u4e4b\u5f8c\uff0c\u6216\u5728\u7522\u751f\u5143\u7d20\u4e4b\u524d\uff0c\u4e0d\u53ef\u65b0\u589e\u5c6c\u6027 {0}\u3002\u5c6c\u6027\u6703\u88ab\u5ffd\u7565\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_zh_TW::NO_MODIFICATION_ALLOWED_ERR),
			$of(u"\u5617\u8a66\u4fee\u6539\u4e0d\u5141\u8a31\u4fee\u6539\u7684\u7269\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("tw"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("tw"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("tw"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"createMessage \u7684\u53c3\u6578\u8d85\u51fa\u7bc4\u570d"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"messageFormat \u547c\u53eb\u671f\u9593\u767c\u751f\u7570\u5e38\u72c0\u6cc1"_s)
		}),
		$$new($ObjectArray, {
			$of("version"_s),
			$of(u">>>>>>> Xalan \u7248\u672c "_s)
		}),
		$$new($ObjectArray, {
			$of("version2"_s),
			$of("<<<<<<<"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"\u662f"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"\u884c\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"\u8cc7\u6599\u6b04\u7de8\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("xsldone"_s),
			$of(u"XSLProcessor: \u5b8c\u6210"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_option"_s),
			$of(u"Xalan-J \u547d\u4ee4\u884c\u8655\u7406\u4f5c\u696d\u985e\u5225\u9078\u9805:"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_option"_s),
			$of(u"Xalan-J \u547d\u4ee4\u884c\u8655\u7406\u4f5c\u696d\u985e\u5225\u9078\u9805:"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_invalid_xsltc_option"_s),
			$of(u"XSLTC \u6a21\u5f0f\u4e2d\u4e0d\u652f\u63f4\u9078\u9805 {0}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_invalid_xalan_option"_s),
			$of(u"\u9078\u9805 {0} \u53ea\u80fd\u8207 -XSLTC \u4e00\u8d77\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_no_input"_s),
			$of(u"\u932f\u8aa4: \u672a\u6307\u5b9a\u6a23\u5f0f\u8868\u6216\u8f38\u5165 xml\u3002\u4e0d\u4f7f\u7528\u4efb\u4f55\u9078\u9805\u4f86\u57f7\u884c\u6b64\u547d\u4ee4\uff0c\u53ef\u53d6\u5f97\u7528\u6cd5\u6307\u793a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_common_options"_s),
			$of(u"-\u4e00\u822c\u9078\u9805-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_xalan_options"_s),
			$of(u"-Xalan \u7684\u9078\u9805-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_xsltc_options"_s),
			$of(u"-XSLTC \u7684\u9078\u9805-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_return_to_continue"_s),
			$of(u"(\u6309 <return> \u4ee5\u7e7c\u7e8c)"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXSLTC"_s),
			$of(u"   [-XSLTC (\u4f7f\u7528 XSLTC \u9032\u884c\u8f49\u63db)]"_s)
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
			$of(u"   [-PARSER \u5256\u6790\u5668\u806f\u7d61\u7684\u5b8c\u6574\u985e\u5225\u540d\u7a31]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionE"_s),
			$of(u"   [-E (\u52ff\u5c55\u958b\u5be6\u9ad4\u53c3\u7167)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionV"_s),
			$of(u"   [-E (\u52ff\u5c55\u958b\u5be6\u9ad4\u53c3\u7167)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionQC"_s),
			$of(u"   [-QC (\u975c\u97f3\u6a23\u5f0f\u885d\u7a81\u8b66\u544a)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionQ"_s),
			$of(u"   [-Q  (\u975c\u97f3\u6a21\u5f0f)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLF"_s),
			$of(u"   [-LF (\u8f38\u51fa\u4e0a\u50c5\u4f7f\u7528\u63db\u884c\u5b57\u5143 {\u9810\u8a2d\u70ba CR/LF})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionCR"_s),
			$of(u"   [-CR (\u8f38\u51fa\u4e0a\u50c5\u4f7f\u7528\u6b78\u4f4d\u5b57\u5143 {\u9810\u8a2d\u70ba CR/LF})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionESCAPE"_s),
			$of(u"   [-ESCAPE (\u8981\u9041\u96e2\u7684\u5b57\u5143 {\u9810\u8a2d\u70ba <>&\"\'\\r\\n}]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionINDENT"_s),
			$of(u"   [-INDENT (\u63a7\u5236\u8981\u7e2e\u6392\u7684\u7a7a\u9593 {\u9810\u8a2d\u70ba 0})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTT"_s),
			$of(u"   [-TT (\u8ffd\u8e64\u547c\u53eb\u7684\u6a23\u677f\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTG"_s),
			$of(u"   [-TG (\u8ffd\u8e64\u6bcf\u500b\u7522\u751f\u4e8b\u4ef6\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTS"_s),
			$of(u"   [-TS (\u8ffd\u8e64\u6bcf\u500b\u9078\u53d6\u4e8b\u4ef6\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTTC"_s),
			$of(u"   [-TTC (\u8ffd\u8e64\u8655\u7406\u7684\u6a23\u677f\u5b50\u9805\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTCLASS"_s),
			$of(u"   [-TCLASS (\u8ffd\u8e64\u64f4\u5145\u5957\u4ef6\u7684 TraceListener \u985e\u5225\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionVALIDATE"_s),
			$of(u"   [-VALIDATE (\u8a2d\u5b9a\u662f\u5426\u57f7\u884c\u9a57\u8b49\u3002\u9810\u8a2d\u4e0d\u6703\u57f7\u884c\u9a57\u8b49\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionEDUMP"_s),
			$of(u"   [-EDUMP {\u9078\u64c7\u6027\u6a94\u6848\u540d\u7a31} (\u767c\u751f\u932f\u8aa4\u6642\u6703\u57f7\u884c\u5806\u758a\u50be\u5370\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXML"_s),
			$of(u"   [-XML (\u4f7f\u7528 XML \u683c\u5f0f\u5668\u4e26\u65b0\u589e XML \u6a19\u982d\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTEXT"_s),
			$of(u"   [-TEXT (\u4f7f\u7528\u7c21\u55ae Text \u683c\u5f0f\u5668\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionHTML"_s),
			$of(u"   [-HTML (\u4f7f\u7528 HTML \u683c\u5f0f\u5668\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionPARAM"_s),
			$of(u"   [-PARAM \u540d\u7a31\u8868\u793a\u5f0f (\u8a2d\u5b9a\u6a23\u5f0f\u8868\u53c3\u6578)]"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg1"_s),
			$of(u"XSL \u8655\u7406\u4f5c\u696d\u5931\u6557\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg2"_s),
			$of(u"** \u627e\u4e0d\u5230\u5256\u6790\u5668 **"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg3"_s),
			$of(u"\u8acb\u6aa2\u67e5\u985e\u5225\u8def\u5f91\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg4"_s),
			$of(u"\u82e5\u7121 IBM \u7684 XML Parser for Java\uff0c\u53ef\u4e0b\u8f09\u81ea"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg5"_s),
			$of(u"IBM \u7684 AlphaWorks: http://www.alphaworks.ibm.com/formula/xml"_s)
		}),
		$$new($ObjectArray, {
			$of("optionURIRESOLVER"_s),
			$of(u"   [-URIRESOLVER \u5b8c\u6574\u985e\u5225\u540d\u7a31 (\u7528\u4f86\u89e3\u6790 URI \u7684 URIResolver)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionENTITYRESOLVER"_s),
			$of(u"   [-ENTITYRESOLVER \u5b8c\u6574\u985e\u5225\u540d\u7a31 (\u7528\u4f86\u89e3\u6790\u5be6\u9ad4\u7684 EntityResolver )]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionCONTENTHANDLER"_s),
			$of(u"   [-CONTENTHANDLER \u5b8c\u6574\u985e\u5225\u540d\u7a31 (\u7528\u4f86\u5e8f\u5217\u5316\u8f38\u51fa\u7684 ContentHandler)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLINENUMBERS"_s),
			$of(u"   [-L \u4f7f\u7528\u884c\u865f\u65bc\u4f86\u6e90\u6587\u4ef6]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionSECUREPROCESSING"_s),
			$of(u"   [-SECURE (\u5c07\u5b89\u5168\u8655\u7406\u529f\u80fd\u8a2d\u70ba\u771f\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionMEDIA"_s),
			$of(u"   [-MEDIA mediaType (\u4f7f\u7528\u5a92\u9ad4\u5c6c\u6027\u4f86\u5c0b\u627e\u8207\u6587\u4ef6\u95dc\u806f\u7684\u6a23\u5f0f\u8868\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionFLAVOR"_s),
			$of(u"   [-FLAVOR flavorName (\u660e\u78ba\u4f7f\u7528 s2s=SAX \u6216 d2d=DOM \u4f86\u57f7\u884c\u8f49\u63db\u3002)] "_s)
		}),
		$$new($ObjectArray, {
			$of("optionDIAG"_s),
			$of(u"   [-DIAG (\u5217\u5370\u8f49\u63db\u6240\u9700\u8981\u7684\u5168\u90e8\u6beb\u79d2\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionINCREMENTAL"_s),
			$of(u"   [-INCREMENTAL (\u8a2d\u5b9a http://xml.apache.org/xalan/features/incremental \u70ba\u771f\uff0c\u4ee5\u8981\u6c42\u6f38\u9032 DTM \u5efa\u69cb\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionNOOPTIMIMIZE"_s),
			$of(u"   [-NOOPTIMIMIZE (\u8a2d\u5b9a http://xml.apache.org/xalan/features/optimize \u70ba\u507d\uff0c\u4ee5\u8981\u6c42\u7121\u6a23\u5f0f\u8868\u6700\u4f73\u5316\u8655\u7406\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionRL"_s),
			$of(u"   [-RL recursionlimit (\u5ba3\u544a\u6a23\u5f0f\u8868\u905e\u8ff4\u6df1\u5ea6\u7684\u6578\u5b57\u9650\u5236\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXO"_s),
			$of(u"   [-XO [transletName] (\u6307\u6d3e\u6240\u7522\u751f translet \u7684\u540d\u7a31)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXD"_s),
			$of(u"   [-XD destinationDirectory (\u6307\u5b9a translet \u7684\u76ee\u7684\u5730\u76ee\u9304)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXJ"_s),
			$of(u"   [-XJ jarfile (\u5c01\u88dd translet \u985e\u5225\u6210\u70ba\u540d\u7a31\u70ba <jarfile> \u7684 jar \u6a94\u6848)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXP"_s),
			$of(u"   [-XP \u5957\u88dd\u7a0b\u5f0f (\u6307\u5b9a\u6240\u6709\u7522\u751f\u7684 translet \u985e\u5225\u7684\u5957\u88dd\u7a0b\u5f0f\u540d\u7a31\u524d\u7f6e\u78bc)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXN"_s),
			$of(u"   [-XN (\u555f\u7528\u6a23\u677f\u5167\u5d4c)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXX"_s),
			$of(u"   [-XX (\u958b\u555f\u984d\u5916\u7684\u9664\u932f\u8a0a\u606f\u8f38\u51fa)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXT"_s),
			$of(u"   [-XT (\u82e5\u6709\u53ef\u80fd\uff0c\u4f7f\u7528 translet \u4f86\u8f49\u63db)]"_s)
		}),
		$$new($ObjectArray, {
			$of("diagTiming"_s),
			$of(u" --------- \u7d93\u7531 {1} \u7684 {0} \u8f49\u63db\u6b77\u6642 {2} \u6beb\u79d2"_s)
		}),
		$$new($ObjectArray, {
			$of("recursionTooDeep"_s),
			$of(u"\u6a23\u677f\u5de2\u72c0\u7d50\u69cb\u904e\u6df1\u3002\u5de2\u72c0\u7d50\u69cb = {0}\uff0c\u6a23\u677f {1} {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("nameIs"_s),
			$of(u"\u540d\u7a31\u70ba"_s)
		}),
		$$new($ObjectArray, {
			$of("matchPatternIs"_s),
			$of(u"\u914d\u5c0d\u6a23\u5f0f\u70ba"_s)
		})
	});
}

XSLTErrorResources_zh_TW::XSLTErrorResources_zh_TW() {
}

void clinit$XSLTErrorResources_zh_TW($Class* class$) {
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX, "ER_INVALID_SET_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT, "ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_CURLYBRACE, "ER_NO_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ILLEGAL_ATTRIBUTE, "ER_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NULL_SOURCENODE_APPLYIMPORTS, "ER_NULL_SOURCENODE_APPLYIMPORTS"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_ADD, "ER_CANNOT_ADD"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES, "ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_NAME_ATTRIB, "ER_NO_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_TEMPLATE_NOT_FOUND, "ER_TEMPLATE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANT_RESOLVE_NAME_AVT, "ER_CANT_RESOLVE_NAME_AVT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_REQUIRES_ATTRIB, "ER_REQUIRES_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MUST_HAVE_TEST_ATTRIB, "ER_MUST_HAVE_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_BAD_VAL_ON_LEVEL_ATTRIB, "ER_BAD_VAL_ON_LEVEL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NEED_MATCH_ATTRIB, "ER_NEED_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NEED_NAME_OR_MATCH_ATTRIB, "ER_NEED_NAME_OR_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANT_RESOLVE_NSPREFIX, "ER_CANT_RESOLVE_NSPREFIX"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ILLEGAL_VALUE, "ER_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_OWNERDOC, "ER_NO_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ELEMTEMPLATEELEM_ERR, "ER_ELEMTEMPLATEELEM_ERR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NULL_CHILD, "ER_NULL_CHILD"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NEED_SELECT_ATTRIB, "ER_NEED_SELECT_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NEED_TEST_ATTRIB, "ER_NEED_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NEED_NAME_ATTRIB, "ER_NEED_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_CONTEXT_OWNERDOC, "ER_NO_CONTEXT_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_COULD_NOT_CREATE_XML_PROC_LIAISON, "ER_COULD_NOT_CREATE_XML_PROC_LIAISON"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROCESS_NOT_SUCCESSFUL, "ER_PROCESS_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NOT_SUCCESSFUL, "ER_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ENCODING_NOT_SUPPORTED, "ER_ENCODING_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_COULD_NOT_CREATE_TRACELISTENER, "ER_COULD_NOT_CREATE_TRACELISTENER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_KEY_REQUIRES_NAME_ATTRIB, "ER_KEY_REQUIRES_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_KEY_REQUIRES_MATCH_ATTRIB, "ER_KEY_REQUIRES_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_KEY_REQUIRES_USE_ATTRIB, "ER_KEY_REQUIRES_USE_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_REQUIRES_ELEMENTS_ATTRIB, "ER_REQUIRES_ELEMENTS_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MISSING_PREFIX_ATTRIB, "ER_MISSING_PREFIX_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_BAD_STYLESHEET_URL, "ER_BAD_STYLESHEET_URL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FILE_NOT_FOUND, "ER_FILE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_IOEXCEPTION, "ER_IOEXCEPTION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_HREF_ATTRIB, "ER_NO_HREF_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_STYLESHEET_INCLUDES_ITSELF, "ER_STYLESHEET_INCLUDES_ITSELF"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROCESSINCLUDE_ERROR, "ER_PROCESSINCLUDE_ERROR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MISSING_LANG_ATTRIB, "ER_MISSING_LANG_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MISSING_CONTAINER_ELEMENT_COMPONENT, "ER_MISSING_CONTAINER_ELEMENT_COMPONENT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CAN_ONLY_OUTPUT_TO_ELEMENT, "ER_CAN_ONLY_OUTPUT_TO_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROCESS_ERROR, "ER_PROCESS_ERROR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_UNIMPLNODE_ERROR, "ER_UNIMPLNODE_ERROR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_SELECT_EXPRESSION, "ER_NO_SELECT_EXPRESSION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_SERIALIZE_XSLPROCESSOR, "ER_CANNOT_SERIALIZE_XSLPROCESSOR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_INPUT_STYLESHEET, "ER_NO_INPUT_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FAILED_PROCESS_STYLESHEET, "ER_FAILED_PROCESS_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_COULDNT_PARSE_DOC, "ER_COULDNT_PARSE_DOC"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_COULDNT_FIND_FRAGMENT, "ER_COULDNT_FIND_FRAGMENT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NODE_NOT_ELEMENT, "ER_NODE_NOT_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB, "ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB, "ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_CLONE_OF_DOCUMENT_FRAG, "ER_NO_CLONE_OF_DOCUMENT_FRAG"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANT_CREATE_ITEM, "ER_CANT_CREATE_ITEM"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_XMLSPACE_ILLEGAL_VALUE, "ER_XMLSPACE_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_XSLKEY_DECLARATION, "ER_NO_XSLKEY_DECLARATION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANT_CREATE_URL, "ER_CANT_CREATE_URL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_XSLFUNCTIONS_UNSUPPORTED, "ER_XSLFUNCTIONS_UNSUPPORTED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROCESSOR_ERROR, "ER_PROCESSOR_ERROR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NOT_ALLOWED_INSIDE_STYLESHEET, "ER_NOT_ALLOWED_INSIDE_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_RESULTNS_NOT_SUPPORTED, "ER_RESULTNS_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_DEFAULTSPACE_NOT_SUPPORTED, "ER_DEFAULTSPACE_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INDENTRESULT_NOT_SUPPORTED, "ER_INDENTRESULT_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ILLEGAL_ATTRIB, "ER_ILLEGAL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_UNKNOWN_XSL_ELEM, "ER_UNKNOWN_XSL_ELEM"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_BAD_XSLSORT_USE, "ER_BAD_XSLSORT_USE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MISPLACED_XSLWHEN, "ER_MISPLACED_XSLWHEN"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MISPLACED_XSLOTHERWISE, "ER_MISPLACED_XSLOTHERWISE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NOT_ALLOWED_INSIDE_TEMPLATE, "ER_NOT_ALLOWED_INSIDE_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_UNKNOWN_EXT_NS_PREFIX, "ER_UNKNOWN_EXT_NS_PREFIX"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_IMPORTS_AS_FIRST_ELEM, "ER_IMPORTS_AS_FIRST_ELEM"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_IMPORTING_ITSELF, "ER_IMPORTING_ITSELF"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_XMLSPACE_ILLEGAL_VAL, "ER_XMLSPACE_ILLEGAL_VAL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL, "ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_SAX_EXCEPTION, "ER_SAX_EXCEPTION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_XSLT_ERROR, "ER_XSLT_ERROR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CURRENCY_SIGN_ILLEGAL, "ER_CURRENCY_SIGN_ILLEGAL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM, "ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER, "ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_REDIRECT_COULDNT_GET_FILENAME, "ER_REDIRECT_COULDNT_GET_FILENAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT, "ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX, "ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MISSING_NS_URI, "ER_MISSING_NS_URI"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MISSING_ARG_FOR_OPTION, "ER_MISSING_ARG_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_OPTION, "ER_INVALID_OPTION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MALFORMED_FORMAT_STRING, "ER_MALFORMED_FORMAT_STRING"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB, "ER_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ILLEGAL_ATTRIBUTE_VALUE, "ER_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CHOOSE_REQUIRES_WHEN, "ER_CHOOSE_REQUIRES_WHEN"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_APPLY_IMPORT_IN_FOR_EACH, "ER_NO_APPLY_IMPORT_IN_FOR_EACH"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANT_USE_DTM_FOR_OUTPUT, "ER_CANT_USE_DTM_FOR_OUTPUT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANT_USE_DTM_FOR_INPUT, "ER_CANT_USE_DTM_FOR_INPUT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CALL_TO_EXT_FAILED, "ER_CALL_TO_EXT_FAILED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_XSLATTRSET_USED_ITSELF, "ER_XSLATTRSET_USED_ITSELF"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_MIX_XERCESDOM, "ER_CANNOT_MIX_XERCESDOM"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_TOO_MANY_LISTENERS, "ER_TOO_MANY_LISTENERS"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_IN_ELEMTEMPLATEELEM_READOBJECT, "ER_IN_ELEMTEMPLATEELEM_READOBJECT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_DUPLICATE_NAMED_TEMPLATE, "ER_DUPLICATE_NAMED_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_KEY_CALL, "ER_INVALID_KEY_CALL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_REFERENCING_ITSELF, "ER_REFERENCING_ITSELF"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ILLEGAL_DOMSOURCE_INPUT, "ER_ILLEGAL_DOMSOURCE_INPUT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CLASS_NOT_FOUND_FOR_OPTION, "ER_CLASS_NOT_FOUND_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_REQUIRED_ELEM_NOT_FOUND, "ER_REQUIRED_ELEM_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INPUT_CANNOT_BE_NULL, "ER_INPUT_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_URI_CANNOT_BE_NULL, "ER_URI_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FILE_CANNOT_BE_NULL, "ER_FILE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_SOURCE_CANNOT_BE_NULL, "ER_SOURCE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_INIT_BSFMGR, "ER_CANNOT_INIT_BSFMGR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_CMPL_EXTENSN, "ER_CANNOT_CMPL_EXTENSN"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_CREATE_EXTENSN, "ER_CANNOT_CREATE_EXTENSN"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INSTANCE_MTHD_CALL_REQUIRES, "ER_INSTANCE_MTHD_CALL_REQUIRES"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_ELEMENT_NAME, "ER_INVALID_ELEMENT_NAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ELEMENT_NAME_METHOD_STATIC, "ER_ELEMENT_NAME_METHOD_STATIC"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_EXTENSION_FUNC_UNKNOWN, "ER_EXTENSION_FUNC_UNKNOWN"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MORE_MATCH_CONSTRUCTOR, "ER_MORE_MATCH_CONSTRUCTOR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MORE_MATCH_METHOD, "ER_MORE_MATCH_METHOD"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_MORE_MATCH_ELEMENT, "ER_MORE_MATCH_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_CONTEXT_PASSED, "ER_INVALID_CONTEXT_PASSED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_POOL_EXISTS, "ER_POOL_EXISTS"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_DRIVER_NAME, "ER_NO_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_URL, "ER_NO_URL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_POOL_SIZE_LESSTHAN_ONE, "ER_POOL_SIZE_LESSTHAN_ONE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_DRIVER, "ER_INVALID_DRIVER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_STYLESHEETROOT, "ER_NO_STYLESHEETROOT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ILLEGAL_XMLSPACE_VALUE, "ER_ILLEGAL_XMLSPACE_VALUE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROCESSFROMNODE_FAILED, "ER_PROCESSFROMNODE_FAILED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_UNKNOWN_ERROR_CALLING_EXTENSION, "ER_UNKNOWN_ERROR_CALLING_EXTENSION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_NAMESPACE_DECL, "ER_NO_NAMESPACE_DECL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ELEM_CONTENT_NOT_ALLOWED, "ER_ELEM_CONTENT_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_STYLESHEET_DIRECTED_TERMINATION, "ER_STYLESHEET_DIRECTED_TERMINATION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ONE_OR_TWO, "ER_ONE_OR_TWO"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_INIT_DEFAULT_TEMPLATES, "ER_CANNOT_INIT_DEFAULT_TEMPLATES"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_RESULT_NULL, "ER_RESULT_NULL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_RESULT_COULD_NOT_BE_SET, "ER_RESULT_COULD_NOT_BE_SET"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_OUTPUT_SPECIFIED, "ER_NO_OUTPUT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE, "ER_CANNOT_TRANSFORM_TO_RESULT_TYPE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_TRANSFORM_SOURCE_TYPE, "ER_CANNOT_TRANSFORM_SOURCE_TYPE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NULL_CONTENT_HANDLER, "ER_NULL_CONTENT_HANDLER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_CALL_PARSE, "ER_CANNOT_CALL_PARSE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_PARENT_FOR_FILTER, "ER_NO_PARENT_FOR_FILTER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_STYLESHEET_IN_MEDIA, "ER_NO_STYLESHEET_IN_MEDIA"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_STYLESHEET_PI, "ER_NO_STYLESHEET_PI"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROPERTY_VALUE_BOOLEAN, "ER_PROPERTY_VALUE_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_COULD_NOT_FIND_EXTERN_SCRIPT, "ER_COULD_NOT_FIND_EXTERN_SCRIPT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED, "ER_OUTPUT_PROPERTY_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FAILED_CREATING_ELEMLITRSLT, "ER_FAILED_CREATING_ELEMLITRSLT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_VALUE_SHOULD_BE_NUMBER, "ER_VALUE_SHOULD_BE_NUMBER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_VALUE_SHOULD_EQUAL, "ER_VALUE_SHOULD_EQUAL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FAILED_CALLING_METHOD, "ER_FAILED_CALLING_METHOD"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FAILED_CREATING_ELEMTMPL, "ER_FAILED_CREATING_ELEMTMPL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CHARS_NOT_ALLOWED, "ER_CHARS_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ATTR_NOT_ALLOWED, "ER_ATTR_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_BAD_VALUE, "ER_BAD_VALUE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ATTRIB_VALUE_NOT_FOUND, "ER_ATTRIB_VALUE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ATTRIB_VALUE_NOT_RECOGNIZED, "ER_ATTRIB_VALUE_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NULL_URI_NAMESPACE, "ER_NULL_URI_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NUMBER_TOO_BIG, "ER_NUMBER_TOO_BIG"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANNOT_FIND_SAX1_DRIVER, "ER_CANNOT_FIND_SAX1_DRIVER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_SAX1_DRIVER_NOT_LOADED, "ER_SAX1_DRIVER_NOT_LOADED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_SAX1_DRIVER_NOT_INSTANTIATED, "ER_SAX1_DRIVER_NOT_INSTANTIATED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER, "ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PARSER_PROPERTY_NOT_SPECIFIED, "ER_PARSER_PROPERTY_NOT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PARSER_ARG_CANNOT_BE_NULL, "ER_PARSER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FEATURE, "ER_FEATURE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_PROPERTY, "ER_PROPERTY"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NULL_ENTITY_RESOLVER, "ER_NULL_ENTITY_RESOLVER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NULL_DTD_HANDLER, "ER_NULL_DTD_HANDLER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_DRIVER_NAME_SPECIFIED, "ER_NO_DRIVER_NAME_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_URL_SPECIFIED, "ER_NO_URL_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_POOLSIZE_LESS_THAN_ONE, "ER_POOLSIZE_LESS_THAN_ONE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_DRIVER_NAME, "ER_INVALID_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ERRORLISTENER, "ER_ERRORLISTENER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ASSERT_NO_TEMPLATE_PARENT, "ER_ASSERT_NO_TEMPLATE_PARENT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR, "ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NOT_ALLOWED_IN_POSITION, "ER_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION, "ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE, "ER_NAMESPACE_CONTEXT_NULL_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NAMESPACE_CONTEXT_NULL_PREFIX, "ER_NAMESPACE_CONTEXT_NULL_PREFIX"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_XPATH_RESOLVER_NULL_QNAME, "ER_XPATH_RESOLVER_NULL_QNAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_XPATH_RESOLVER_NEGATIVE_ARITY, "ER_XPATH_RESOLVER_NEGATIVE_ARITY"_s);
	$assignStatic(XSLTErrorResources_zh_TW::INVALID_TCHAR, "INVALID_TCHAR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::INVALID_QNAME, "INVALID_QNAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::INVALID_ENUM, "INVALID_ENUM"_s);
	$assignStatic(XSLTErrorResources_zh_TW::INVALID_NMTOKEN, "INVALID_NMTOKEN"_s);
	$assignStatic(XSLTErrorResources_zh_TW::INVALID_NCNAME, "INVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::INVALID_BOOLEAN, "INVALID_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources_zh_TW::INVALID_NUMBER, "INVALID_NUMBER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_ARG_LITERAL, "ER_ARG_LITERAL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_DUPLICATE_GLOBAL_VAR, "ER_DUPLICATE_GLOBAL_VAR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_DUPLICATE_VAR, "ER_DUPLICATE_VAR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_TEMPLATE_NAME_MATCH, "ER_TEMPLATE_NAME_MATCH"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_PREFIX, "ER_INVALID_PREFIX"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_NO_ATTRIB_SET, "ER_NO_ATTRIB_SET"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_FUNCTION_NOT_FOUND, "ER_FUNCTION_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_CANT_HAVE_CONTENT_AND_SELECT, "ER_CANT_HAVE_CONTENT_AND_SELECT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_INVALID_SET_PARAM_VALUE, "ER_INVALID_SET_PARAM_VALUE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_SET_FEATURE_NULL_NAME, "ER_SET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_GET_FEATURE_NULL_NAME, "ER_GET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_UNSUPPORTED_FEATURE, "ER_UNSUPPORTED_FEATURE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING, "ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_FOUND_CURLYBRACE, "WG_FOUND_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR, "WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_EXPR_ATTRIB_CHANGED_TO_SELECT, "WG_EXPR_ATTRIB_CHANGED_TO_SELECT"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_NO_LOCALE_IN_FORMATNUMBER, "WG_NO_LOCALE_IN_FORMATNUMBER"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_LOCALE_NOT_FOUND, "WG_LOCALE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_CANNOT_LOAD_REQUESTED_DOC, "WG_CANNOT_LOAD_REQUESTED_DOC"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_CANNOT_FIND_COLLATOR, "WG_CANNOT_FIND_COLLATOR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_FUNCTIONS_SHOULD_USE_URL, "WG_FUNCTIONS_SHOULD_USE_URL"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_ENCODING_NOT_SUPPORTED_USING_UTF8, "WG_ENCODING_NOT_SUPPORTED_USING_UTF8"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_ENCODING_NOT_SUPPORTED_USING_JAVA, "WG_ENCODING_NOT_SUPPORTED_USING_JAVA"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_SPECIFICITY_CONFLICTS, "WG_SPECIFICITY_CONFLICTS"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_PARSING_AND_PREPARING, "WG_PARSING_AND_PREPARING"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_ATTR_TEMPLATE, "WG_ATTR_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE, "WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESP"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_ATTRIB_NOT_HANDLED, "WG_ATTRIB_NOT_HANDLED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_NO_DECIMALFORMAT_DECLARATION, "WG_NO_DECIMALFORMAT_DECLARATION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_OLD_XSLT_NS, "WG_OLD_XSLT_NS"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED, "WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE, "WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE, "WG_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_COULD_NOT_RESOLVE_PREFIX, "WG_COULD_NOT_RESOLVE_PREFIX"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB, "WG_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE_NAME, "WG_ILLEGAL_ATTRIBUTE_NAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE_VALUE, "WG_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_EMPTY_SECOND_ARG, "WG_EMPTY_SECOND_ARG"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_zh_TW::WG_ILLEGAL_ATTRIBUTE_POSITION, "WG_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XSLTErrorResources_zh_TW::NO_MODIFICATION_ALLOWED_ERR, "NO_MODIFICATION_ALLOWED_ERR"_s);
	$assignStatic(XSLTErrorResources_zh_TW::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XSLTErrorResources_zh_TW::FORMAT_FAILED, "FORMAT_FAILED"_s);
}

$Class* XSLTErrorResources_zh_TW::load$($String* name, bool initialize) {
	$loadClass(XSLTErrorResources_zh_TW, name, initialize, &_XSLTErrorResources_zh_TW_ClassInfo_, clinit$XSLTErrorResources_zh_TW, allocate$XSLTErrorResources_zh_TW);
	return class$;
}

$Class* XSLTErrorResources_zh_TW::class$ = nullptr;

						} // res
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com