#include <com/sun/org/apache/xalan/internal/res/XSLTErrorResources_ja.h>

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

$FieldInfo _XSLTErrorResources_ja_FieldInfo_[] = {
	{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX)},
	{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT)},
	{"ER_NO_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_CURLYBRACE)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ILLEGAL_ATTRIBUTE)},
	{"ER_NULL_SOURCENODE_APPLYIMPORTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NULL_SOURCENODE_APPLYIMPORTS)},
	{"ER_CANNOT_ADD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_ADD)},
	{"ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES)},
	{"ER_NO_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_NAME_ATTRIB)},
	{"ER_TEMPLATE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_TEMPLATE_NOT_FOUND)},
	{"ER_CANT_RESOLVE_NAME_AVT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANT_RESOLVE_NAME_AVT)},
	{"ER_REQUIRES_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_REQUIRES_ATTRIB)},
	{"ER_MUST_HAVE_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MUST_HAVE_TEST_ATTRIB)},
	{"ER_BAD_VAL_ON_LEVEL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_BAD_VAL_ON_LEVEL_ATTRIB)},
	{"ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
	{"ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
	{"ER_NEED_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NEED_MATCH_ATTRIB)},
	{"ER_NEED_NAME_OR_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NEED_NAME_OR_MATCH_ATTRIB)},
	{"ER_CANT_RESOLVE_NSPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANT_RESOLVE_NSPREFIX)},
	{"ER_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ILLEGAL_VALUE)},
	{"ER_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_OWNERDOC)},
	{"ER_ELEMTEMPLATEELEM_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ELEMTEMPLATEELEM_ERR)},
	{"ER_NULL_CHILD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NULL_CHILD)},
	{"ER_NEED_SELECT_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NEED_SELECT_ATTRIB)},
	{"ER_NEED_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NEED_TEST_ATTRIB)},
	{"ER_NEED_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NEED_NAME_ATTRIB)},
	{"ER_NO_CONTEXT_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_CONTEXT_OWNERDOC)},
	{"ER_COULD_NOT_CREATE_XML_PROC_LIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_COULD_NOT_CREATE_XML_PROC_LIAISON)},
	{"ER_PROCESS_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROCESS_NOT_SUCCESSFUL)},
	{"ER_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NOT_SUCCESSFUL)},
	{"ER_ENCODING_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ENCODING_NOT_SUPPORTED)},
	{"ER_COULD_NOT_CREATE_TRACELISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_COULD_NOT_CREATE_TRACELISTENER)},
	{"ER_KEY_REQUIRES_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_KEY_REQUIRES_NAME_ATTRIB)},
	{"ER_KEY_REQUIRES_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_KEY_REQUIRES_MATCH_ATTRIB)},
	{"ER_KEY_REQUIRES_USE_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_KEY_REQUIRES_USE_ATTRIB)},
	{"ER_REQUIRES_ELEMENTS_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_REQUIRES_ELEMENTS_ATTRIB)},
	{"ER_MISSING_PREFIX_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MISSING_PREFIX_ATTRIB)},
	{"ER_BAD_STYLESHEET_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_BAD_STYLESHEET_URL)},
	{"ER_FILE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FILE_NOT_FOUND)},
	{"ER_IOEXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_IOEXCEPTION)},
	{"ER_NO_HREF_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_HREF_ATTRIB)},
	{"ER_STYLESHEET_INCLUDES_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_STYLESHEET_INCLUDES_ITSELF)},
	{"ER_PROCESSINCLUDE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROCESSINCLUDE_ERROR)},
	{"ER_MISSING_LANG_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MISSING_LANG_ATTRIB)},
	{"ER_MISSING_CONTAINER_ELEMENT_COMPONENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MISSING_CONTAINER_ELEMENT_COMPONENT)},
	{"ER_CAN_ONLY_OUTPUT_TO_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CAN_ONLY_OUTPUT_TO_ELEMENT)},
	{"ER_PROCESS_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROCESS_ERROR)},
	{"ER_UNIMPLNODE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_UNIMPLNODE_ERROR)},
	{"ER_NO_SELECT_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_SELECT_EXPRESSION)},
	{"ER_CANNOT_SERIALIZE_XSLPROCESSOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_SERIALIZE_XSLPROCESSOR)},
	{"ER_NO_INPUT_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_INPUT_STYLESHEET)},
	{"ER_FAILED_PROCESS_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FAILED_PROCESS_STYLESHEET)},
	{"ER_COULDNT_PARSE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_COULDNT_PARSE_DOC)},
	{"ER_COULDNT_FIND_FRAGMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_COULDNT_FIND_FRAGMENT)},
	{"ER_NODE_NOT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NODE_NOT_ELEMENT)},
	{"ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB)},
	{"ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB)},
	{"ER_NO_CLONE_OF_DOCUMENT_FRAG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_CLONE_OF_DOCUMENT_FRAG)},
	{"ER_CANT_CREATE_ITEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANT_CREATE_ITEM)},
	{"ER_XMLSPACE_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_XMLSPACE_ILLEGAL_VALUE)},
	{"ER_NO_XSLKEY_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_XSLKEY_DECLARATION)},
	{"ER_CANT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANT_CREATE_URL)},
	{"ER_XSLFUNCTIONS_UNSUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_XSLFUNCTIONS_UNSUPPORTED)},
	{"ER_PROCESSOR_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROCESSOR_ERROR)},
	{"ER_NOT_ALLOWED_INSIDE_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NOT_ALLOWED_INSIDE_STYLESHEET)},
	{"ER_RESULTNS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_RESULTNS_NOT_SUPPORTED)},
	{"ER_DEFAULTSPACE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_DEFAULTSPACE_NOT_SUPPORTED)},
	{"ER_INDENTRESULT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INDENTRESULT_NOT_SUPPORTED)},
	{"ER_ILLEGAL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ILLEGAL_ATTRIB)},
	{"ER_UNKNOWN_XSL_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_UNKNOWN_XSL_ELEM)},
	{"ER_BAD_XSLSORT_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_BAD_XSLSORT_USE)},
	{"ER_MISPLACED_XSLWHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MISPLACED_XSLWHEN)},
	{"ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE)},
	{"ER_MISPLACED_XSLOTHERWISE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MISPLACED_XSLOTHERWISE)},
	{"ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE)},
	{"ER_NOT_ALLOWED_INSIDE_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NOT_ALLOWED_INSIDE_TEMPLATE)},
	{"ER_UNKNOWN_EXT_NS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_UNKNOWN_EXT_NS_PREFIX)},
	{"ER_IMPORTS_AS_FIRST_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_IMPORTS_AS_FIRST_ELEM)},
	{"ER_IMPORTING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_IMPORTING_ITSELF)},
	{"ER_XMLSPACE_ILLEGAL_VAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_XMLSPACE_ILLEGAL_VAL)},
	{"ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL)},
	{"ER_SAX_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_SAX_EXCEPTION)},
	{"ER_XSLT_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_XSLT_ERROR)},
	{"ER_CURRENCY_SIGN_ILLEGAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CURRENCY_SIGN_ILLEGAL)},
	{"ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM)},
	{"ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER)},
	{"ER_REDIRECT_COULDNT_GET_FILENAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_REDIRECT_COULDNT_GET_FILENAME)},
	{"ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT)},
	{"ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX)},
	{"ER_MISSING_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MISSING_NS_URI)},
	{"ER_MISSING_ARG_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MISSING_ARG_FOR_OPTION)},
	{"ER_INVALID_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_OPTION)},
	{"ER_MALFORMED_FORMAT_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MALFORMED_FORMAT_STRING)},
	{"ER_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
	{"ER_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ILLEGAL_ATTRIBUTE_VALUE)},
	{"ER_CHOOSE_REQUIRES_WHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CHOOSE_REQUIRES_WHEN)},
	{"ER_NO_APPLY_IMPORT_IN_FOR_EACH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_APPLY_IMPORT_IN_FOR_EACH)},
	{"ER_CANT_USE_DTM_FOR_OUTPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANT_USE_DTM_FOR_OUTPUT)},
	{"ER_CANT_USE_DTM_FOR_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANT_USE_DTM_FOR_INPUT)},
	{"ER_CALL_TO_EXT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CALL_TO_EXT_FAILED)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PREFIX_MUST_RESOLVE)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_UTF16_SURROGATE)},
	{"ER_XSLATTRSET_USED_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_XSLATTRSET_USED_ITSELF)},
	{"ER_CANNOT_MIX_XERCESDOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_MIX_XERCESDOM)},
	{"ER_TOO_MANY_LISTENERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_TOO_MANY_LISTENERS)},
	{"ER_IN_ELEMTEMPLATEELEM_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_IN_ELEMTEMPLATEELEM_READOBJECT)},
	{"ER_DUPLICATE_NAMED_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_DUPLICATE_NAMED_TEMPLATE)},
	{"ER_INVALID_KEY_CALL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_KEY_CALL)},
	{"ER_REFERENCING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_REFERENCING_ITSELF)},
	{"ER_ILLEGAL_DOMSOURCE_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ILLEGAL_DOMSOURCE_INPUT)},
	{"ER_CLASS_NOT_FOUND_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CLASS_NOT_FOUND_FOR_OPTION)},
	{"ER_REQUIRED_ELEM_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_REQUIRED_ELEM_NOT_FOUND)},
	{"ER_INPUT_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INPUT_CANNOT_BE_NULL)},
	{"ER_URI_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_URI_CANNOT_BE_NULL)},
	{"ER_FILE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FILE_CANNOT_BE_NULL)},
	{"ER_SOURCE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_SOURCE_CANNOT_BE_NULL)},
	{"ER_CANNOT_INIT_BSFMGR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_INIT_BSFMGR)},
	{"ER_CANNOT_CMPL_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_CMPL_EXTENSN)},
	{"ER_CANNOT_CREATE_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_CREATE_EXTENSN)},
	{"ER_INSTANCE_MTHD_CALL_REQUIRES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INSTANCE_MTHD_CALL_REQUIRES)},
	{"ER_INVALID_ELEMENT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_ELEMENT_NAME)},
	{"ER_ELEMENT_NAME_METHOD_STATIC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ELEMENT_NAME_METHOD_STATIC)},
	{"ER_EXTENSION_FUNC_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_EXTENSION_FUNC_UNKNOWN)},
	{"ER_MORE_MATCH_CONSTRUCTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MORE_MATCH_CONSTRUCTOR)},
	{"ER_MORE_MATCH_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MORE_MATCH_METHOD)},
	{"ER_MORE_MATCH_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_MORE_MATCH_ELEMENT)},
	{"ER_INVALID_CONTEXT_PASSED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_CONTEXT_PASSED)},
	{"ER_POOL_EXISTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_POOL_EXISTS)},
	{"ER_NO_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_DRIVER_NAME)},
	{"ER_NO_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_URL)},
	{"ER_POOL_SIZE_LESSTHAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_POOL_SIZE_LESSTHAN_ONE)},
	{"ER_INVALID_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_DRIVER)},
	{"ER_NO_STYLESHEETROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_STYLESHEETROOT)},
	{"ER_ILLEGAL_XMLSPACE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ILLEGAL_XMLSPACE_VALUE)},
	{"ER_PROCESSFROMNODE_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROCESSFROMNODE_FAILED)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_UNKNOWN_ERROR_CALLING_EXTENSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_UNKNOWN_ERROR_CALLING_EXTENSION)},
	{"ER_NO_NAMESPACE_DECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_NAMESPACE_DECL)},
	{"ER_ELEM_CONTENT_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ELEM_CONTENT_NOT_ALLOWED)},
	{"ER_STYLESHEET_DIRECTED_TERMINATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_STYLESHEET_DIRECTED_TERMINATION)},
	{"ER_ONE_OR_TWO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ONE_OR_TWO)},
	{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_TWO_OR_THREE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_CANNOT_INIT_DEFAULT_TEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_INIT_DEFAULT_TEMPLATES)},
	{"ER_RESULT_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_RESULT_NULL)},
	{"ER_RESULT_COULD_NOT_BE_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_RESULT_COULD_NOT_BE_SET)},
	{"ER_NO_OUTPUT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_OUTPUT_SPECIFIED)},
	{"ER_CANNOT_TRANSFORM_TO_RESULT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_TRANSFORM_TO_RESULT_TYPE)},
	{"ER_CANNOT_TRANSFORM_SOURCE_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_TRANSFORM_SOURCE_TYPE)},
	{"ER_NULL_CONTENT_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NULL_CONTENT_HANDLER)},
	{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NULL_ERROR_HANDLER)},
	{"ER_CANNOT_CALL_PARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_CALL_PARSE)},
	{"ER_NO_PARENT_FOR_FILTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_PARENT_FOR_FILTER)},
	{"ER_NO_STYLESHEET_IN_MEDIA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_STYLESHEET_IN_MEDIA)},
	{"ER_NO_STYLESHEET_PI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_STYLESHEET_PI)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NOT_SUPPORTED)},
	{"ER_PROPERTY_VALUE_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROPERTY_VALUE_BOOLEAN)},
	{"ER_COULD_NOT_FIND_EXTERN_SCRIPT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_COULD_NOT_FIND_EXTERN_SCRIPT)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_OUTPUT_PROPERTY_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_OUTPUT_PROPERTY_NOT_RECOGNIZED)},
	{"ER_FAILED_CREATING_ELEMLITRSLT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FAILED_CREATING_ELEMLITRSLT)},
	{"ER_VALUE_SHOULD_BE_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_VALUE_SHOULD_BE_NUMBER)},
	{"ER_VALUE_SHOULD_EQUAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_VALUE_SHOULD_EQUAL)},
	{"ER_FAILED_CALLING_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FAILED_CALLING_METHOD)},
	{"ER_FAILED_CREATING_ELEMTMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FAILED_CREATING_ELEMTMPL)},
	{"ER_CHARS_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CHARS_NOT_ALLOWED)},
	{"ER_ATTR_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ATTR_NOT_ALLOWED)},
	{"ER_BAD_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_BAD_VALUE)},
	{"ER_ATTRIB_VALUE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ATTRIB_VALUE_NOT_FOUND)},
	{"ER_ATTRIB_VALUE_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ATTRIB_VALUE_NOT_RECOGNIZED)},
	{"ER_NULL_URI_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NULL_URI_NAMESPACE)},
	{"ER_NUMBER_TOO_BIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NUMBER_TOO_BIG)},
	{"ER_CANNOT_FIND_SAX1_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANNOT_FIND_SAX1_DRIVER)},
	{"ER_SAX1_DRIVER_NOT_LOADED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_SAX1_DRIVER_NOT_LOADED)},
	{"ER_SAX1_DRIVER_NOT_INSTANTIATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_SAX1_DRIVER_NOT_INSTANTIATED)},
	{"ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER)},
	{"ER_PARSER_PROPERTY_NOT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PARSER_PROPERTY_NOT_SPECIFIED)},
	{"ER_PARSER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PARSER_ARG_CANNOT_BE_NULL)},
	{"ER_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FEATURE)},
	{"ER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_PROPERTY)},
	{"ER_NULL_ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NULL_ENTITY_RESOLVER)},
	{"ER_NULL_DTD_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NULL_DTD_HANDLER)},
	{"ER_NO_DRIVER_NAME_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_DRIVER_NAME_SPECIFIED)},
	{"ER_NO_URL_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_URL_SPECIFIED)},
	{"ER_POOLSIZE_LESS_THAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_POOLSIZE_LESS_THAN_ONE)},
	{"ER_INVALID_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_DRIVER_NAME)},
	{"ER_ERRORLISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ERRORLISTENER)},
	{"ER_ASSERT_NO_TEMPLATE_PARENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ASSERT_NO_TEMPLATE_PARENT)},
	{"ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR)},
	{"ER_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NOT_ALLOWED_IN_POSITION)},
	{"ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION)},
	{"ER_NAMESPACE_CONTEXT_NULL_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NAMESPACE_CONTEXT_NULL_NAMESPACE)},
	{"ER_NAMESPACE_CONTEXT_NULL_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NAMESPACE_CONTEXT_NULL_PREFIX)},
	{"ER_XPATH_RESOLVER_NULL_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_XPATH_RESOLVER_NULL_QNAME)},
	{"ER_XPATH_RESOLVER_NEGATIVE_ARITY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_XPATH_RESOLVER_NEGATIVE_ARITY)},
	{"INVALID_TCHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, INVALID_TCHAR)},
	{"INVALID_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, INVALID_QNAME)},
	{"INVALID_ENUM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, INVALID_ENUM)},
	{"INVALID_NMTOKEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, INVALID_NMTOKEN)},
	{"INVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, INVALID_NCNAME)},
	{"INVALID_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, INVALID_BOOLEAN)},
	{"INVALID_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, INVALID_NUMBER)},
	{"ER_ARG_LITERAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_ARG_LITERAL)},
	{"ER_DUPLICATE_GLOBAL_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_DUPLICATE_GLOBAL_VAR)},
	{"ER_DUPLICATE_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_DUPLICATE_VAR)},
	{"ER_TEMPLATE_NAME_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_TEMPLATE_NAME_MATCH)},
	{"ER_INVALID_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_PREFIX)},
	{"ER_NO_ATTRIB_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_NO_ATTRIB_SET)},
	{"ER_FUNCTION_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_FUNCTION_NOT_FOUND)},
	{"ER_CANT_HAVE_CONTENT_AND_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_CANT_HAVE_CONTENT_AND_SELECT)},
	{"ER_INVALID_SET_PARAM_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_INVALID_SET_PARAM_VALUE)},
	{"ER_SET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_SET_FEATURE_NULL_NAME)},
	{"ER_GET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_GET_FEATURE_NULL_NAME)},
	{"ER_UNSUPPORTED_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_UNSUPPORTED_FEATURE)},
	{"ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING)},
	{"WG_FOUND_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_FOUND_CURLYBRACE)},
	{"WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR)},
	{"WG_EXPR_ATTRIB_CHANGED_TO_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_EXPR_ATTRIB_CHANGED_TO_SELECT)},
	{"WG_NO_LOCALE_IN_FORMATNUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_NO_LOCALE_IN_FORMATNUMBER)},
	{"WG_LOCALE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_LOCALE_NOT_FOUND)},
	{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_CANNOT_MAKE_URL_FROM)},
	{"WG_CANNOT_LOAD_REQUESTED_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_CANNOT_LOAD_REQUESTED_DOC)},
	{"WG_CANNOT_FIND_COLLATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_CANNOT_FIND_COLLATOR)},
	{"WG_FUNCTIONS_SHOULD_USE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_FUNCTIONS_SHOULD_USE_URL)},
	{"WG_ENCODING_NOT_SUPPORTED_USING_UTF8", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_ENCODING_NOT_SUPPORTED_USING_UTF8)},
	{"WG_ENCODING_NOT_SUPPORTED_USING_JAVA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_ENCODING_NOT_SUPPORTED_USING_JAVA)},
	{"WG_SPECIFICITY_CONFLICTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_SPECIFICITY_CONFLICTS)},
	{"WG_PARSING_AND_PREPARING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_PARSING_AND_PREPARING)},
	{"WG_ATTR_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_ATTR_TEMPLATE)},
	{"WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE)},
	{"WG_ATTRIB_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_ATTRIB_NOT_HANDLED)},
	{"WG_NO_DECIMALFORMAT_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_NO_DECIMALFORMAT_DECLARATION)},
	{"WG_OLD_XSLT_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_OLD_XSLT_NS)},
	{"WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED)},
	{"WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE)},
	{"WG_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_ILLEGAL_ATTRIBUTE)},
	{"WG_COULD_NOT_RESOLVE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_COULD_NOT_RESOLVE_PREFIX)},
	{"WG_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
	{"WG_ILLEGAL_ATTRIBUTE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_ILLEGAL_ATTRIBUTE_NAME)},
	{"WG_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_ILLEGAL_ATTRIBUTE_VALUE)},
	{"WG_EMPTY_SECOND_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_EMPTY_SECOND_ARG)},
	{"WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
	{"WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
	{"WG_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, WG_ILLEGAL_ATTRIBUTE_POSITION)},
	{"NO_MODIFICATION_ALLOWED_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, NO_MODIFICATION_ALLOWED_ERR)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_ja, FORMAT_FAILED)},
	{}
};

$MethodInfo _XSLTErrorResources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XSLTErrorResources_ja::*)()>(&XSLTErrorResources_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XSLTErrorResources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.res.XSLTErrorResources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_XSLTErrorResources_ja_FieldInfo_,
	_XSLTErrorResources_ja_MethodInfo_
};

$Object* allocate$XSLTErrorResources_ja($Class* clazz) {
	return $of($alloc(XSLTErrorResources_ja));
}

$String* XSLTErrorResources_ja::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT = nullptr;
$String* XSLTErrorResources_ja::ER_NO_CURLYBRACE = nullptr;
$String* XSLTErrorResources_ja::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_ja::ER_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources_ja::ER_NULL_SOURCENODE_APPLYIMPORTS = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_ADD = nullptr;
$String* XSLTErrorResources_ja::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES = nullptr;
$String* XSLTErrorResources_ja::ER_NO_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_TEMPLATE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_ja::ER_CANT_RESOLVE_NAME_AVT = nullptr;
$String* XSLTErrorResources_ja::ER_REQUIRES_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_MUST_HAVE_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_BAD_VAL_ON_LEVEL_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources_ja::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources_ja::ER_NEED_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_NEED_NAME_OR_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_CANT_RESOLVE_NSPREFIX = nullptr;
$String* XSLTErrorResources_ja::ER_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources_ja::ER_NO_OWNERDOC = nullptr;
$String* XSLTErrorResources_ja::ER_ELEMTEMPLATEELEM_ERR = nullptr;
$String* XSLTErrorResources_ja::ER_NULL_CHILD = nullptr;
$String* XSLTErrorResources_ja::ER_NEED_SELECT_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_NEED_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_NEED_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_NO_CONTEXT_OWNERDOC = nullptr;
$String* XSLTErrorResources_ja::ER_COULD_NOT_CREATE_XML_PROC_LIAISON = nullptr;
$String* XSLTErrorResources_ja::ER_PROCESS_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_ja::ER_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_ja::ER_ENCODING_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_ja::ER_COULD_NOT_CREATE_TRACELISTENER = nullptr;
$String* XSLTErrorResources_ja::ER_KEY_REQUIRES_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_KEY_REQUIRES_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_KEY_REQUIRES_USE_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_REQUIRES_ELEMENTS_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_MISSING_PREFIX_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_BAD_STYLESHEET_URL = nullptr;
$String* XSLTErrorResources_ja::ER_FILE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_ja::ER_IOEXCEPTION = nullptr;
$String* XSLTErrorResources_ja::ER_NO_HREF_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_STYLESHEET_INCLUDES_ITSELF = nullptr;
$String* XSLTErrorResources_ja::ER_PROCESSINCLUDE_ERROR = nullptr;
$String* XSLTErrorResources_ja::ER_MISSING_LANG_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_MISSING_CONTAINER_ELEMENT_COMPONENT = nullptr;
$String* XSLTErrorResources_ja::ER_CAN_ONLY_OUTPUT_TO_ELEMENT = nullptr;
$String* XSLTErrorResources_ja::ER_PROCESS_ERROR = nullptr;
$String* XSLTErrorResources_ja::ER_UNIMPLNODE_ERROR = nullptr;
$String* XSLTErrorResources_ja::ER_NO_SELECT_EXPRESSION = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_SERIALIZE_XSLPROCESSOR = nullptr;
$String* XSLTErrorResources_ja::ER_NO_INPUT_STYLESHEET = nullptr;
$String* XSLTErrorResources_ja::ER_FAILED_PROCESS_STYLESHEET = nullptr;
$String* XSLTErrorResources_ja::ER_COULDNT_PARSE_DOC = nullptr;
$String* XSLTErrorResources_ja::ER_COULDNT_FIND_FRAGMENT = nullptr;
$String* XSLTErrorResources_ja::ER_NODE_NOT_ELEMENT = nullptr;
$String* XSLTErrorResources_ja::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_NO_CLONE_OF_DOCUMENT_FRAG = nullptr;
$String* XSLTErrorResources_ja::ER_CANT_CREATE_ITEM = nullptr;
$String* XSLTErrorResources_ja::ER_XMLSPACE_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources_ja::ER_NO_XSLKEY_DECLARATION = nullptr;
$String* XSLTErrorResources_ja::ER_CANT_CREATE_URL = nullptr;
$String* XSLTErrorResources_ja::ER_XSLFUNCTIONS_UNSUPPORTED = nullptr;
$String* XSLTErrorResources_ja::ER_PROCESSOR_ERROR = nullptr;
$String* XSLTErrorResources_ja::ER_NOT_ALLOWED_INSIDE_STYLESHEET = nullptr;
$String* XSLTErrorResources_ja::ER_RESULTNS_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_ja::ER_DEFAULTSPACE_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_ja::ER_INDENTRESULT_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_ja::ER_ILLEGAL_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_UNKNOWN_XSL_ELEM = nullptr;
$String* XSLTErrorResources_ja::ER_BAD_XSLSORT_USE = nullptr;
$String* XSLTErrorResources_ja::ER_MISPLACED_XSLWHEN = nullptr;
$String* XSLTErrorResources_ja::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources_ja::ER_MISPLACED_XSLOTHERWISE = nullptr;
$String* XSLTErrorResources_ja::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources_ja::ER_NOT_ALLOWED_INSIDE_TEMPLATE = nullptr;
$String* XSLTErrorResources_ja::ER_UNKNOWN_EXT_NS_PREFIX = nullptr;
$String* XSLTErrorResources_ja::ER_IMPORTS_AS_FIRST_ELEM = nullptr;
$String* XSLTErrorResources_ja::ER_IMPORTING_ITSELF = nullptr;
$String* XSLTErrorResources_ja::ER_XMLSPACE_ILLEGAL_VAL = nullptr;
$String* XSLTErrorResources_ja::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_ja::ER_SAX_EXCEPTION = nullptr;
$String* XSLTErrorResources_ja::ER_XSLT_ERROR = nullptr;
$String* XSLTErrorResources_ja::ER_CURRENCY_SIGN_ILLEGAL = nullptr;
$String* XSLTErrorResources_ja::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM = nullptr;
$String* XSLTErrorResources_ja::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER = nullptr;
$String* XSLTErrorResources_ja::ER_REDIRECT_COULDNT_GET_FILENAME = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX = nullptr;
$String* XSLTErrorResources_ja::ER_MISSING_NS_URI = nullptr;
$String* XSLTErrorResources_ja::ER_MISSING_ARG_FOR_OPTION = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_OPTION = nullptr;
$String* XSLTErrorResources_ja::ER_MALFORMED_FORMAT_STRING = nullptr;
$String* XSLTErrorResources_ja::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::ER_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources_ja::ER_CHOOSE_REQUIRES_WHEN = nullptr;
$String* XSLTErrorResources_ja::ER_NO_APPLY_IMPORT_IN_FOR_EACH = nullptr;
$String* XSLTErrorResources_ja::ER_CANT_USE_DTM_FOR_OUTPUT = nullptr;
$String* XSLTErrorResources_ja::ER_CANT_USE_DTM_FOR_INPUT = nullptr;
$String* XSLTErrorResources_ja::ER_CALL_TO_EXT_FAILED = nullptr;
$String* XSLTErrorResources_ja::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XSLTErrorResources_ja::ER_XSLATTRSET_USED_ITSELF = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_MIX_XERCESDOM = nullptr;
$String* XSLTErrorResources_ja::ER_TOO_MANY_LISTENERS = nullptr;
$String* XSLTErrorResources_ja::ER_IN_ELEMTEMPLATEELEM_READOBJECT = nullptr;
$String* XSLTErrorResources_ja::ER_DUPLICATE_NAMED_TEMPLATE = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_KEY_CALL = nullptr;
$String* XSLTErrorResources_ja::ER_REFERENCING_ITSELF = nullptr;
$String* XSLTErrorResources_ja::ER_ILLEGAL_DOMSOURCE_INPUT = nullptr;
$String* XSLTErrorResources_ja::ER_CLASS_NOT_FOUND_FOR_OPTION = nullptr;
$String* XSLTErrorResources_ja::ER_REQUIRED_ELEM_NOT_FOUND = nullptr;
$String* XSLTErrorResources_ja::ER_INPUT_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_ja::ER_URI_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_ja::ER_FILE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_ja::ER_SOURCE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_INIT_BSFMGR = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_CMPL_EXTENSN = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_CREATE_EXTENSN = nullptr;
$String* XSLTErrorResources_ja::ER_INSTANCE_MTHD_CALL_REQUIRES = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_ELEMENT_NAME = nullptr;
$String* XSLTErrorResources_ja::ER_ELEMENT_NAME_METHOD_STATIC = nullptr;
$String* XSLTErrorResources_ja::ER_EXTENSION_FUNC_UNKNOWN = nullptr;
$String* XSLTErrorResources_ja::ER_MORE_MATCH_CONSTRUCTOR = nullptr;
$String* XSLTErrorResources_ja::ER_MORE_MATCH_METHOD = nullptr;
$String* XSLTErrorResources_ja::ER_MORE_MATCH_ELEMENT = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_CONTEXT_PASSED = nullptr;
$String* XSLTErrorResources_ja::ER_POOL_EXISTS = nullptr;
$String* XSLTErrorResources_ja::ER_NO_DRIVER_NAME = nullptr;
$String* XSLTErrorResources_ja::ER_NO_URL = nullptr;
$String* XSLTErrorResources_ja::ER_POOL_SIZE_LESSTHAN_ONE = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_DRIVER = nullptr;
$String* XSLTErrorResources_ja::ER_NO_STYLESHEETROOT = nullptr;
$String* XSLTErrorResources_ja::ER_ILLEGAL_XMLSPACE_VALUE = nullptr;
$String* XSLTErrorResources_ja::ER_PROCESSFROMNODE_FAILED = nullptr;
$String* XSLTErrorResources_ja::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XSLTErrorResources_ja::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XSLTErrorResources_ja::ER_UNKNOWN_ERROR_CALLING_EXTENSION = nullptr;
$String* XSLTErrorResources_ja::ER_NO_NAMESPACE_DECL = nullptr;
$String* XSLTErrorResources_ja::ER_ELEM_CONTENT_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_ja::ER_STYLESHEET_DIRECTED_TERMINATION = nullptr;
$String* XSLTErrorResources_ja::ER_ONE_OR_TWO = nullptr;
$String* XSLTErrorResources_ja::ER_TWO_OR_THREE = nullptr;
$String* XSLTErrorResources_ja::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_INIT_DEFAULT_TEMPLATES = nullptr;
$String* XSLTErrorResources_ja::ER_RESULT_NULL = nullptr;
$String* XSLTErrorResources_ja::ER_RESULT_COULD_NOT_BE_SET = nullptr;
$String* XSLTErrorResources_ja::ER_NO_OUTPUT_SPECIFIED = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_TRANSFORM_SOURCE_TYPE = nullptr;
$String* XSLTErrorResources_ja::ER_NULL_CONTENT_HANDLER = nullptr;
$String* XSLTErrorResources_ja::ER_NULL_ERROR_HANDLER = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_CALL_PARSE = nullptr;
$String* XSLTErrorResources_ja::ER_NO_PARENT_FOR_FILTER = nullptr;
$String* XSLTErrorResources_ja::ER_NO_STYLESHEET_IN_MEDIA = nullptr;
$String* XSLTErrorResources_ja::ER_NO_STYLESHEET_PI = nullptr;
$String* XSLTErrorResources_ja::ER_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_ja::ER_PROPERTY_VALUE_BOOLEAN = nullptr;
$String* XSLTErrorResources_ja::ER_COULD_NOT_FIND_EXTERN_SCRIPT = nullptr;
$String* XSLTErrorResources_ja::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XSLTErrorResources_ja::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources_ja::ER_FAILED_CREATING_ELEMLITRSLT = nullptr;
$String* XSLTErrorResources_ja::ER_VALUE_SHOULD_BE_NUMBER = nullptr;
$String* XSLTErrorResources_ja::ER_VALUE_SHOULD_EQUAL = nullptr;
$String* XSLTErrorResources_ja::ER_FAILED_CALLING_METHOD = nullptr;
$String* XSLTErrorResources_ja::ER_FAILED_CREATING_ELEMTMPL = nullptr;
$String* XSLTErrorResources_ja::ER_CHARS_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_ja::ER_ATTR_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_ja::ER_BAD_VALUE = nullptr;
$String* XSLTErrorResources_ja::ER_ATTRIB_VALUE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_ja::ER_ATTRIB_VALUE_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources_ja::ER_NULL_URI_NAMESPACE = nullptr;
$String* XSLTErrorResources_ja::ER_NUMBER_TOO_BIG = nullptr;
$String* XSLTErrorResources_ja::ER_CANNOT_FIND_SAX1_DRIVER = nullptr;
$String* XSLTErrorResources_ja::ER_SAX1_DRIVER_NOT_LOADED = nullptr;
$String* XSLTErrorResources_ja::ER_SAX1_DRIVER_NOT_INSTANTIATED = nullptr;
$String* XSLTErrorResources_ja::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER = nullptr;
$String* XSLTErrorResources_ja::ER_PARSER_PROPERTY_NOT_SPECIFIED = nullptr;
$String* XSLTErrorResources_ja::ER_PARSER_ARG_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_ja::ER_FEATURE = nullptr;
$String* XSLTErrorResources_ja::ER_PROPERTY = nullptr;
$String* XSLTErrorResources_ja::ER_NULL_ENTITY_RESOLVER = nullptr;
$String* XSLTErrorResources_ja::ER_NULL_DTD_HANDLER = nullptr;
$String* XSLTErrorResources_ja::ER_NO_DRIVER_NAME_SPECIFIED = nullptr;
$String* XSLTErrorResources_ja::ER_NO_URL_SPECIFIED = nullptr;
$String* XSLTErrorResources_ja::ER_POOLSIZE_LESS_THAN_ONE = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_DRIVER_NAME = nullptr;
$String* XSLTErrorResources_ja::ER_ERRORLISTENER = nullptr;
$String* XSLTErrorResources_ja::ER_ASSERT_NO_TEMPLATE_PARENT = nullptr;
$String* XSLTErrorResources_ja::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR = nullptr;
$String* XSLTErrorResources_ja::ER_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources_ja::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources_ja::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE = nullptr;
$String* XSLTErrorResources_ja::ER_NAMESPACE_CONTEXT_NULL_PREFIX = nullptr;
$String* XSLTErrorResources_ja::ER_XPATH_RESOLVER_NULL_QNAME = nullptr;
$String* XSLTErrorResources_ja::ER_XPATH_RESOLVER_NEGATIVE_ARITY = nullptr;
$String* XSLTErrorResources_ja::INVALID_TCHAR = nullptr;
$String* XSLTErrorResources_ja::INVALID_QNAME = nullptr;
$String* XSLTErrorResources_ja::INVALID_ENUM = nullptr;
$String* XSLTErrorResources_ja::INVALID_NMTOKEN = nullptr;
$String* XSLTErrorResources_ja::INVALID_NCNAME = nullptr;
$String* XSLTErrorResources_ja::INVALID_BOOLEAN = nullptr;
$String* XSLTErrorResources_ja::INVALID_NUMBER = nullptr;
$String* XSLTErrorResources_ja::ER_ARG_LITERAL = nullptr;
$String* XSLTErrorResources_ja::ER_DUPLICATE_GLOBAL_VAR = nullptr;
$String* XSLTErrorResources_ja::ER_DUPLICATE_VAR = nullptr;
$String* XSLTErrorResources_ja::ER_TEMPLATE_NAME_MATCH = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_PREFIX = nullptr;
$String* XSLTErrorResources_ja::ER_NO_ATTRIB_SET = nullptr;
$String* XSLTErrorResources_ja::ER_FUNCTION_NOT_FOUND = nullptr;
$String* XSLTErrorResources_ja::ER_CANT_HAVE_CONTENT_AND_SELECT = nullptr;
$String* XSLTErrorResources_ja::ER_INVALID_SET_PARAM_VALUE = nullptr;
$String* XSLTErrorResources_ja::ER_SET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources_ja::ER_GET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources_ja::ER_UNSUPPORTED_FEATURE = nullptr;
$String* XSLTErrorResources_ja::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING = nullptr;
$String* XSLTErrorResources_ja::WG_FOUND_CURLYBRACE = nullptr;
$String* XSLTErrorResources_ja::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR = nullptr;
$String* XSLTErrorResources_ja::WG_EXPR_ATTRIB_CHANGED_TO_SELECT = nullptr;
$String* XSLTErrorResources_ja::WG_NO_LOCALE_IN_FORMATNUMBER = nullptr;
$String* XSLTErrorResources_ja::WG_LOCALE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_ja::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XSLTErrorResources_ja::WG_CANNOT_LOAD_REQUESTED_DOC = nullptr;
$String* XSLTErrorResources_ja::WG_CANNOT_FIND_COLLATOR = nullptr;
$String* XSLTErrorResources_ja::WG_FUNCTIONS_SHOULD_USE_URL = nullptr;
$String* XSLTErrorResources_ja::WG_ENCODING_NOT_SUPPORTED_USING_UTF8 = nullptr;
$String* XSLTErrorResources_ja::WG_ENCODING_NOT_SUPPORTED_USING_JAVA = nullptr;
$String* XSLTErrorResources_ja::WG_SPECIFICITY_CONFLICTS = nullptr;
$String* XSLTErrorResources_ja::WG_PARSING_AND_PREPARING = nullptr;
$String* XSLTErrorResources_ja::WG_ATTR_TEMPLATE = nullptr;
$String* XSLTErrorResources_ja::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE = nullptr;
$String* XSLTErrorResources_ja::WG_ATTRIB_NOT_HANDLED = nullptr;
$String* XSLTErrorResources_ja::WG_NO_DECIMALFORMAT_DECLARATION = nullptr;
$String* XSLTErrorResources_ja::WG_OLD_XSLT_NS = nullptr;
$String* XSLTErrorResources_ja::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED = nullptr;
$String* XSLTErrorResources_ja::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE = nullptr;
$String* XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources_ja::WG_COULD_NOT_RESOLVE_PREFIX = nullptr;
$String* XSLTErrorResources_ja::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE_NAME = nullptr;
$String* XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources_ja::WG_EMPTY_SECOND_ARG = nullptr;
$String* XSLTErrorResources_ja::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources_ja::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XSLTErrorResources_ja::NO_MODIFICATION_ALLOWED_ERR = nullptr;

$String* XSLTErrorResources_ja::BAD_CODE = nullptr;

$String* XSLTErrorResources_ja::FORMAT_FAILED = nullptr;

void XSLTErrorResources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XSLTErrorResources_ja::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_CURLYBRACE),
			$of(u"\u30a8\u30e9\u30fc: \u5f0f\u5185\u306b\'{\'\u3092\u6301\u3064\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ILLEGAL_ATTRIBUTE),
			$of(u"{0}\u306b\u4e0d\u6b63\u306a\u5c5e\u6027\u304c\u3042\u308a\u307e\u3059: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NULL_SOURCENODE_APPLYIMPORTS),
			$of(u"sourceNode\u306fxsl:apply-imports\u5185\u3067null\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_ADD),
			$of(u"{0}\u3092{1}\u306b\u8ffd\u52a0\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES),
			$of(u"sourceNode\u306fhandleApplyTemplatesInstruction\u5185\u3067null\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_NAME_ATTRIB),
			$of(u"{0}\u306b\u306fname\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_TEMPLATE_NOT_FOUND),
			$of(u"\u540d\u524d{0}\u306e\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANT_RESOLVE_NAME_AVT),
			$of(u"xsl:call-template\u306e\u540d\u524dAVT\u3092\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_REQUIRES_ATTRIB),
			$of(u"{0}\u306f\u5c5e\u6027{1}\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MUST_HAVE_TEST_ATTRIB),
			$of(u"{0}\u306f\'\'test\'\'\u5c5e\u6027\u3092\u6301\u3064\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_BAD_VAL_ON_LEVEL_ATTRIB),
			$of(u"level\u5c5e\u6027\u306e\u5024\u304c\u4e0d\u6b63\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML),
			$of(u"processing-instruction\u540d\u306f\'xml\'\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME),
			$of(u"processing-instruction\u540d\u306f\u6709\u52b9\u306aNCName\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NEED_MATCH_ATTRIB),
			$of(u"\u30e2\u30fc\u30c9\u304c\u3042\u308b\u5834\u5408\u3001{0}\u306b\u306fmatch\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NEED_NAME_OR_MATCH_ATTRIB),
			$of(u"{0}\u306b\u306fname\u307e\u305f\u306fmatch\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANT_RESOLVE_NSPREFIX),
			$of(u"\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306e\u63a5\u982d\u8f9e\u3092\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ILLEGAL_VALUE),
			$of(u"xml:space\u306e\u5024\u304c\u4e0d\u6b63\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_OWNERDOC),
			$of(u"\u5b50\u30ce\u30fc\u30c9\u306b\u6240\u6709\u8005\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ELEMTEMPLATEELEM_ERR),
			$of(u"ElemTemplateElement\u30a8\u30e9\u30fc: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NULL_CHILD),
			$of(u"null\u306e\u5b50\u3092\u8ffd\u52a0\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NEED_SELECT_ATTRIB),
			$of(u"{0}\u306b\u306fselect\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NEED_TEST_ATTRIB),
			$of(u"xsl:when\u306b\u306f\'test\'\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NEED_NAME_ATTRIB),
			$of(u"xsl:with-param\u306b\u306f\'name\'\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_CONTEXT_OWNERDOC),
			$of(u"\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u306b\u6240\u6709\u8005\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_COULD_NOT_CREATE_XML_PROC_LIAISON),
			$of(u"XML TransformerFactory Liaison\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROCESS_NOT_SUCCESSFUL),
			$of(u"Xalan: \u30d7\u30ed\u30bb\u30b9\u306f\u6210\u529f\u3057\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NOT_SUCCESSFUL),
			$of(u"Xalan: \u306f\u6210\u529f\u3057\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ENCODING_NOT_SUPPORTED),
			$of(u"\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0{0}\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_COULD_NOT_CREATE_TRACELISTENER),
			$of(u"TraceListener\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_KEY_REQUIRES_NAME_ATTRIB),
			$of(u"xsl:key\u306b\u306f\'name\'\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_KEY_REQUIRES_MATCH_ATTRIB),
			$of(u"xsl:key\u306b\u306f\'match\'\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_KEY_REQUIRES_USE_ATTRIB),
			$of(u"xsl:key\u306b\u306f\'use\'\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_REQUIRES_ELEMENTS_ATTRIB),
			$of(u"(StylesheetHandler) {0}\u306b\u306f\'\'elements\'\'\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MISSING_PREFIX_ATTRIB),
			$of(u"(StylesheetHandler) {0}\u5c5e\u6027\'\'prefix\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_BAD_STYLESHEET_URL),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8URL\u304c\u4e0d\u6b63\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FILE_NOT_FOUND),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u30fb\u30d5\u30a1\u30a4\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_IOEXCEPTION),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u30fb\u30d5\u30a1\u30a4\u30eb\u306b\u5165\u51fa\u529b\u4f8b\u5916\u304c\u3042\u308a\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_HREF_ATTRIB),
			$of(u"(StylesheetHandler) {0}\u306ehref\u5c5e\u6027\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_STYLESHEET_INCLUDES_ITSELF),
			$of(u"(StylesheetHandler) {0}\u306f\u305d\u308c\u81ea\u4f53\u3092\u76f4\u63a5\u7684\u307e\u305f\u306f\u9593\u63a5\u7684\u306b\u542b\u3093\u3067\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROCESSINCLUDE_ERROR),
			$of(u"StylesheetHandler.processInclude\u30a8\u30e9\u30fc\u3001{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MISSING_LANG_ATTRIB),
			$of(u"(StylesheetHandler) {0}\u5c5e\u6027\'\'lang\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MISSING_CONTAINER_ELEMENT_COMPONENT),
			$of(u"(StylesheetHandler) {0}\u8981\u7d20\u306e\u914d\u7f6e\u304c\u4e0d\u6b63\u3067\u3059\u3002\u30b3\u30f3\u30c6\u30ca\u8981\u7d20\'\'component\'\'\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CAN_ONLY_OUTPUT_TO_ELEMENT),
			$of(u"Element\u3001DocumentFragment\u3001Document\u307e\u305f\u306fPrintWriter\u306b\u306e\u307f\u51fa\u529b\u3067\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROCESS_ERROR),
			$of(u"StylesheetRoot.process\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_UNIMPLNODE_ERROR),
			$of(u"UnImplNode\u30a8\u30e9\u30fc: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_SELECT_EXPRESSION),
			$of(u"\u30a8\u30e9\u30fc\u3002xpath\u9078\u629e\u5f0f(-select)\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_SERIALIZE_XSLPROCESSOR),
			$of(u"XSLProcessor\u3092\u30b7\u30ea\u30a2\u30e9\u30a4\u30ba\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_INPUT_STYLESHEET),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u5165\u529b\u304c\u6307\u5b9a\u3055\u308c\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FAILED_PROCESS_STYLESHEET),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u306e\u51e6\u7406\u306b\u5931\u6557\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_COULDNT_PARSE_DOC),
			$of(u"{0}\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u3092\u89e3\u6790\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_COULDNT_FIND_FRAGMENT),
			$of(u"\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NODE_NOT_ELEMENT),
			$of(u"\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u8b58\u5225\u5b50\u306b\u3088\u3063\u3066\u6307\u793a\u3055\u308c\u305f\u30ce\u30fc\u30c9\u306f\u8981\u7d20\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3067\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB),
			$of(u"for-each\u306fmatch\u307e\u305f\u306fname\u5c5e\u6027\u3092\u6301\u3064\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB),
			$of(u"\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u306fmatch\u307e\u305f\u306fname\u5c5e\u6027\u3092\u6301\u3064\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_CLONE_OF_DOCUMENT_FRAG),
			$of(u"\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u30fb\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306e\u30af\u30ed\u30fc\u30f3\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANT_CREATE_ITEM),
			$of(u"\u7d50\u679c\u30c4\u30ea\u30fc\u306b\u9805\u76ee\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_XMLSPACE_ILLEGAL_VALUE),
			$of(u"\u30bd\u30fc\u30b9XML\u306exml:space\u306e\u5024\u304c\u4e0d\u6b63\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_XSLKEY_DECLARATION),
			$of(u"{0}\u306exsl:key\u5ba3\u8a00\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANT_CREATE_URL),
			$of(u"\u30a8\u30e9\u30fc\u3002{0}\u306eURL\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_XSLFUNCTIONS_UNSUPPORTED),
			$of(u"xsl:functions\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROCESSOR_ERROR),
			$of(u"XSLT TransformerFactory\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NOT_ALLOWED_INSIDE_STYLESHEET),
			$of(u"(StylesheetHandler) {0}\u306f\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u5185\u3067\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_RESULTNS_NOT_SUPPORTED),
			$of(u"result-ns\u306f\u73fe\u5728\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002\u304b\u308f\u308a\u306bxsl:output\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_DEFAULTSPACE_NOT_SUPPORTED),
			$of(u"default-space\u306f\u73fe\u5728\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002\u304b\u308f\u308a\u306bxsl:strip-space\u307e\u305f\u306fxsl:preserve-space\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INDENTRESULT_NOT_SUPPORTED),
			$of(u"indent-result\u306f\u73fe\u5728\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002\u304b\u308f\u308a\u306bxsl:output\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ILLEGAL_ATTRIB),
			$of(u"(StylesheetHandler) {0}\u306b\u306f\u4e0d\u6b63\u306a\u5c5e\u6027\u304c\u3042\u308a\u307e\u3059: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_UNKNOWN_XSL_ELEM),
			$of(u"\u4e0d\u660e\u306aXSL\u8981\u7d20: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_BAD_XSLSORT_USE),
			$of(u"(StylesheetHandler) xsl:sort\u306f\u3001xsl:apply-templates\u307e\u305f\u306fxsl:for-each\u3068\u3068\u3082\u306b\u306e\u307f\u4f7f\u7528\u3067\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MISPLACED_XSLWHEN),
			$of(u"(StylesheetHandler) xsl:when\u306e\u914d\u7f6e\u304c\u4e0d\u6b63\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE),
			$of(u"(StylesheetHandler) xsl:when\u306e\u89aa\u304cxsl:choose\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MISPLACED_XSLOTHERWISE),
			$of(u"(StylesheetHandler) xsl:otherwise\u306e\u914d\u7f6e\u304c\u4e0d\u6b63\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE),
			$of(u"(StylesheetHandler) xsl:otherwise\u306e\u89aa\u304cxsl:choose\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NOT_ALLOWED_INSIDE_TEMPLATE),
			$of(u"(StylesheetHandler) {0}\u306f\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u5185\u3067\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_UNKNOWN_EXT_NS_PREFIX),
			$of(u"(StylesheetHandler) \u4e0d\u660e\u306a{0}\u62e1\u5f35\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306e\u63a5\u982d\u8f9e{1}\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_IMPORTS_AS_FIRST_ELEM),
			$of(u"(StylesheetHandler) \u30a4\u30f3\u30dd\u30fc\u30c8\u306f\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u306e\u6700\u521d\u306e\u8981\u7d20\u3068\u3057\u3066\u306e\u307f\u4f7f\u7528\u3067\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_IMPORTING_ITSELF),
			$of(u"(StylesheetHandler) {0}\u306f\u305d\u308c\u81ea\u4f53\u3092\u76f4\u63a5\u307e\u305f\u306f\u9593\u63a5\u7684\u306b\u30a4\u30f3\u30dd\u30fc\u30c8\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_XMLSPACE_ILLEGAL_VAL),
			$of(u"(StylesheetHandler) xml:space\u306e\u5024\u304c\u4e0d\u6b63\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL),
			$of(u"processStylesheet\u306f\u5931\u6557\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_SAX_EXCEPTION),
			$of(u"SAX\u4f8b\u5916"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"\u95a2\u6570\u304c\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_XSLT_ERROR),
			$of(u"XSLT\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CURRENCY_SIGN_ILLEGAL),
			$of(u"\u901a\u8ca8\u8a18\u53f7\u306f\u30d5\u30a9\u30fc\u30de\u30c3\u30c8\u30fb\u30d1\u30bf\u30fc\u30f3\u6587\u5b57\u5217\u5185\u3067\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM),
			$of(u"\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u95a2\u6570\u306f\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8DOM\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER),
			$of(u"\u975e\u63a5\u982d\u8f9e\u30ea\u30be\u30eb\u30d0\u306e\u63a5\u982d\u8f9e\u3092\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_REDIRECT_COULDNT_GET_FILENAME),
			$of(u"\u30ea\u30c0\u30a4\u30ec\u30af\u30c8\u62e1\u5f35: \u30d5\u30a1\u30a4\u30eb\u540d\u3092\u53d6\u5f97\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f - file\u307e\u305f\u306fselect\u5c5e\u6027\u304c\u6709\u52b9\u306a\u6587\u5b57\u5217\u3092\u8fd4\u3059\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT),
			$of(u"\u30ea\u30c0\u30a4\u30ec\u30af\u30c8\u62e1\u5f35\u3067FormatterListener\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX),
			$of(u"exclude-result-prefixes\u306e\u63a5\u982d\u8f9e\u304c\u7121\u52b9\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MISSING_NS_URI),
			$of(u"\u6307\u5b9a\u3057\u305f\u63a5\u982d\u8f9e\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9URI\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MISSING_ARG_FOR_OPTION),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306e\u5f15\u6570\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_OPTION),
			$of(u"\u7121\u52b9\u306a\u30aa\u30d7\u30b7\u30e7\u30f3: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MALFORMED_FORMAT_STRING),
			$of(u"\u4e0d\u6b63\u306a\u30d5\u30a9\u30fc\u30de\u30c3\u30c8\u306e\u6587\u5b57\u5217\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB),
			$of(u"xsl:stylesheet\u306f\'version\'\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ILLEGAL_ATTRIBUTE_VALUE),
			$of(u"\u5c5e\u6027{0}\u306e\u5024\u304c\u4e0d\u6b63\u3067\u3059: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CHOOSE_REQUIRES_WHEN),
			$of(u"xsl:choose\u306fxsl:when\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_APPLY_IMPORT_IN_FOR_EACH),
			$of(u"xsl:apply-imports\u306fxsl:for-each\u5185\u3067\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANT_USE_DTM_FOR_OUTPUT),
			$of(u"\u51fa\u529bDOM\u30ce\u30fc\u30c9\u306bDTMLiaison\u3092\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093...\u304b\u308f\u308a\u306bcom.sun.org.apache.xpath.internal.DOM2Helper\u3092\u6e21\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANT_USE_DTM_FOR_INPUT),
			$of(u"\u5165\u529bDOM\u30ce\u30fc\u30c9\u306bDTMLiaison\u3092\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093...\u304b\u308f\u308a\u306bcom.sun.org.apache.xpath.internal.DOM2Helper\u3092\u6e21\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CALL_TO_EXT_FAILED),
			$of(u"\u62e1\u5f35\u8981\u7d20\u306e\u547c\u51fa\u3057\u304c\u5931\u6557\u3057\u307e\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PREFIX_MUST_RESOLVE),
			$of(u"\u63a5\u982d\u8f9e\u306f\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306b\u89e3\u6c7a\u3055\u308c\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u7121\u52b9\u306aUTF-16\u30b5\u30ed\u30b2\u30fc\u30c8\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f: {0}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_XSLATTRSET_USED_ITSELF),
			$of(u"xsl:attribute-set {0}\u304c\u305d\u308c\u81ea\u4f53\u3092\u4f7f\u7528\u3057\u3001\u7121\u9650\u30eb\u30fc\u30d7\u304c\u767a\u751f\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_MIX_XERCESDOM),
			$of(u"\u975eXerces-DOM\u5165\u529b\u3068Xerces-DOM\u51fa\u529b\u3092\u540c\u6642\u306b\u4f7f\u7528\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_TOO_MANY_LISTENERS),
			$of("addTraceListenersToStylesheet - TooManyListenersException"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_IN_ELEMTEMPLATEELEM_READOBJECT),
			$of(u"ElemTemplateElement.readObject\u5185: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_DUPLICATE_NAMED_TEMPLATE),
			$of(u"\u540d\u524d{0}\u306e\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u304c\u8907\u6570\u898b\u3064\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_KEY_CALL),
			$of(u"\u7121\u52b9\u306a\u95a2\u6570\u547c\u51fa\u3057: \u518d\u5e30\u7684\u306akey()\u306e\u547c\u51fa\u3057\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_REFERENCING_ITSELF),
			$of(u"\u5909\u6570{0}\u306f\u305d\u308c\u81ea\u4f53\u3092\u76f4\u63a5\u307e\u305f\u306f\u9593\u63a5\u7684\u306b\u53c2\u7167\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ILLEGAL_DOMSOURCE_INPUT),
			$of(u"newTemplates\u306eDOMSource\u306b\u3064\u3044\u3066\u5165\u529b\u30ce\u30fc\u30c9\u3092null\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CLASS_NOT_FOUND_FOR_OPTION),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306b\u3064\u3044\u3066\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_REQUIRED_ELEM_NOT_FOUND),
			$of(u"\u5fc5\u9808\u8981\u7d20\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INPUT_CANNOT_BE_NULL),
			$of(u"InputStream\u3092null\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_URI_CANNOT_BE_NULL),
			$of(u"URI\u3092null\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FILE_CANNOT_BE_NULL),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u3092null\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_SOURCE_CANNOT_BE_NULL),
			$of(u"InputSource\u3092null\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_INIT_BSFMGR),
			$of(u"BSF\u30de\u30cd\u30fc\u30b8\u30e3\u3092\u521d\u671f\u5316\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_CMPL_EXTENSN),
			$of(u"\u62e1\u5f35\u3092\u30b3\u30f3\u30d1\u30a4\u30eb\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_CREATE_EXTENSN),
			$of(u"{1}\u304c\u539f\u56e0\u3067\u62e1\u5f35{0}\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INSTANCE_MTHD_CALL_REQUIRES),
			$of(u"\u30e1\u30bd\u30c3\u30c9{0}\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u30fb\u30e1\u30bd\u30c3\u30c9\u547c\u51fa\u3057\u3067\u306f\u3001\u6700\u521d\u306e\u5f15\u6570\u3068\u3057\u3066\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u30fb\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_ELEMENT_NAME),
			$of(u"\u7121\u52b9\u306a\u8981\u7d20\u540d\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ELEMENT_NAME_METHOD_STATIC),
			$of(u"\u8981\u7d20\u540d\u30e1\u30bd\u30c3\u30c9\u306fstatic {0}\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_EXTENSION_FUNC_UNKNOWN),
			$of(u"\u62e1\u5f35\u95a2\u6570{0} : {1}\u304c\u4e0d\u660e\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MORE_MATCH_CONSTRUCTOR),
			$of(u"{0}\u306e\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\u306b\u8907\u6570\u306e\u6700\u9069\u4e00\u81f4\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MORE_MATCH_METHOD),
			$of(u"\u30e1\u30bd\u30c3\u30c9{0}\u306b\u8907\u6570\u306e\u6700\u9069\u4e00\u81f4\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_MORE_MATCH_ELEMENT),
			$of(u"\u8981\u7d20\u30e1\u30bd\u30c3\u30c9{0}\u306b\u8907\u6570\u306e\u6700\u9069\u4e00\u81f4\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_CONTEXT_PASSED),
			$of(u"{0}\u3092\u8a55\u4fa1\u3059\u308b\u305f\u3081\u306b\u7121\u52b9\u306a\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u304c\u6e21\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_POOL_EXISTS),
			$of(u"\u30d7\u30fc\u30eb\u306f\u3059\u3067\u306b\u5b58\u5728\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_DRIVER_NAME),
			$of(u"\u30c9\u30e9\u30a4\u30d0\u540d\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_URL),
			$of(u"URL\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_POOL_SIZE_LESSTHAN_ONE),
			$of(u"\u30d7\u30fc\u30eb\u30fb\u30b5\u30a4\u30ba\u304c1\u3088\u308a\u5c0f\u3055\u3044\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_DRIVER),
			$of(u"\u7121\u52b9\u306a\u30c9\u30e9\u30a4\u30d0\u540d\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_STYLESHEETROOT),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u30fb\u30eb\u30fc\u30c8\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ILLEGAL_XMLSPACE_VALUE),
			$of(u"xml:space\u306e\u5024\u304c\u4e0d\u6b63\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROCESSFROMNODE_FAILED),
			$of(u"processFromNode\u304c\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"\u30ea\u30bd\u30fc\u30b9[ {0} ]\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"\u30d0\u30c3\u30d5\u30a1\u30fb\u30b5\u30a4\u30ba<=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_UNKNOWN_ERROR_CALLING_EXTENSION),
			$of(u"\u62e1\u5f35\u3092\u547c\u3073\u51fa\u3059\u3068\u304d\u306b\u4e0d\u660e\u306a\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_NAMESPACE_DECL),
			$of(u"\u63a5\u982d\u8f9e{0}\u306b\u306f\u3001\u5bfe\u5fdc\u3059\u308b\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u5ba3\u8a00\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ELEM_CONTENT_NOT_ALLOWED),
			$of(u"\u8981\u7d20\u306e\u5185\u5bb9\u306flang=javaclass {0}\u306b\u3064\u3044\u3066\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_STYLESHEET_DIRECTED_TERMINATION),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u306b\u3088\u308a\u7d42\u4e86\u304c\u6307\u793a\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ONE_OR_TWO),
			$of(u"1\u307e\u305f\u306f2"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_TWO_OR_THREE),
			$of(u"2\u307e\u305f\u306f3"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"{0}\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f(CLASSPATH\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044)\u3002\u73fe\u5728\u306f\u5358\u306b\u30c7\u30d5\u30a9\u30eb\u30c8\u3092\u4f7f\u7528\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_INIT_DEFAULT_TEMPLATES),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u30fb\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u3092\u521d\u671f\u5316\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_RESULT_NULL),
			$of(u"\u7d50\u679c\u306fnull\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_RESULT_COULD_NOT_BE_SET),
			$of(u"\u7d50\u679c\u3092\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_OUTPUT_SPECIFIED),
			$of(u"\u51fa\u529b\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE),
			$of(u"\u30bf\u30a4\u30d7{0}\u306e\u7d50\u679c\u306b\u5909\u63db\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_TRANSFORM_SOURCE_TYPE),
			$of(u"\u30bf\u30a4\u30d7{0}\u306e\u30bd\u30fc\u30b9\u306b\u5909\u63db\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NULL_CONTENT_HANDLER),
			$of(u"Null\u306e\u30b3\u30f3\u30c6\u30f3\u30c4\u30fb\u30cf\u30f3\u30c9\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NULL_ERROR_HANDLER),
			$of(u"Null\u306e\u30a8\u30e9\u30fc\u30fb\u30cf\u30f3\u30c9\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_CALL_PARSE),
			$of(u"ContentHandler\u304c\u8a2d\u5b9a\u3055\u308c\u3066\u3044\u306a\u3044\u5834\u5408\u3001\u89e3\u6790\u3092\u547c\u3073\u51fa\u3059\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_PARENT_FOR_FILTER),
			$of(u"\u30d5\u30a3\u30eb\u30bf\u306e\u89aa\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_STYLESHEET_IN_MEDIA),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u304c{0}\u306b\u3042\u308a\u307e\u305b\u3093\u3002\u30e1\u30c7\u30a3\u30a2= {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_STYLESHEET_PI),
			$of(u"xml-stylesheet PI\u304c{0}\u306b\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NOT_SUPPORTED),
			$of(u"\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROPERTY_VALUE_BOOLEAN),
			$of(u"\u30d7\u30ed\u30d1\u30c6\u30a3{0}\u306e\u5024\u306fBoolean\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_COULD_NOT_FIND_EXTERN_SCRIPT),
			$of(u"{0}\u306e\u5916\u90e8\u30b9\u30af\u30ea\u30d7\u30c8\u306b\u5230\u9054\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"\u30ea\u30bd\u30fc\u30b9[ {0} ]\u306f\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f\u3002\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED),
			$of(u"\u51fa\u529b\u30d7\u30ed\u30d1\u30c6\u30a3\u304c\u8a8d\u8b58\u3055\u308c\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FAILED_CREATING_ELEMLITRSLT),
			$of(u"ElemLiteralResult\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u306e\u4f5c\u6210\u306b\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_VALUE_SHOULD_BE_NUMBER),
			$of(u"{0}\u306e\u5024\u306b\u306f\u89e3\u6790\u53ef\u80fd\u306a\u6570\u5024\u304c\u542b\u307e\u308c\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_VALUE_SHOULD_EQUAL),
			$of(u"{0}\u306e\u5024\u306fyes\u307e\u305f\u306fno\u306b\u7b49\u3057\u3044\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FAILED_CALLING_METHOD),
			$of(u"{0}\u30e1\u30bd\u30c3\u30c9\u306e\u547c\u51fa\u3057\u306b\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FAILED_CREATING_ELEMTMPL),
			$of(u"ElemTemplateElement\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u306e\u4f5c\u6210\u306b\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CHARS_NOT_ALLOWED),
			$of(u"\u6587\u5b57\u306f\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u306e\u3053\u306e\u30dd\u30a4\u30f3\u30c8\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ATTR_NOT_ALLOWED),
			$of(u"\"{0}\"\u5c5e\u6027\u306f{1}\u8981\u7d20\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_BAD_VALUE),
			$of(u"{0}\u306e\u4e0d\u6b63\u306a\u5024{1} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ATTRIB_VALUE_NOT_FOUND),
			$of(u"{0}\u5c5e\u6027\u5024\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093 "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ATTRIB_VALUE_NOT_RECOGNIZED),
			$of(u"{0}\u5c5e\u6027\u5024\u304c\u8a8d\u8b58\u3055\u308c\u307e\u305b\u3093 "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NULL_URI_NAMESPACE),
			$of(u"null\u306eURI\u3092\u6301\u3064\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306e\u63a5\u982d\u8f9e\u3092\u751f\u6210\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NUMBER_TOO_BIG),
			$of(u"\u6700\u5927\u306eLong\u6574\u6570\u3088\u308a\u3082\u5927\u304d\u3044\u6570\u5024\u3092\u30d5\u30a9\u30fc\u30de\u30c3\u30c8\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANNOT_FIND_SAX1_DRIVER),
			$of(u"SAX1\u30c9\u30e9\u30a4\u30d0\u30fb\u30af\u30e9\u30b9{0}\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_SAX1_DRIVER_NOT_LOADED),
			$of(u"SAX1\u30c9\u30e9\u30a4\u30d0\u30fb\u30af\u30e9\u30b9{0}\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u304c\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_SAX1_DRIVER_NOT_INSTANTIATED),
			$of(u"SAX1\u30c9\u30e9\u30a4\u30d0\u30fb\u30af\u30e9\u30b9{0}\u304c\u30ed\u30fc\u30c9\u3055\u308c\u307e\u3057\u305f\u304c\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u5316\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER),
			$of(u"SAX1\u30c9\u30e9\u30a4\u30d0\u30fb\u30af\u30e9\u30b9{0}\u306forg.xml.sax.Parser\u3092\u5b9f\u88c5\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PARSER_PROPERTY_NOT_SPECIFIED),
			$of(u"\u30b7\u30b9\u30c6\u30e0\u30fb\u30d7\u30ed\u30d1\u30c6\u30a3org.xml.sax.parser\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PARSER_ARG_CANNOT_BE_NULL),
			$of(u"\u30d1\u30fc\u30b5\u30fc\u5f15\u6570\u306fnull\u3067\u306a\u3044\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FEATURE),
			$of(u"\u6a5f\u80fd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_PROPERTY),
			$of(u"\u30d7\u30ed\u30d1\u30c6\u30a3: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NULL_ENTITY_RESOLVER),
			$of(u"Null\u30a8\u30f3\u30c6\u30a3\u30c6\u30a3\u30fb\u30ea\u30be\u30eb\u30d0"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NULL_DTD_HANDLER),
			$of(u"Null DTD\u30cf\u30f3\u30c9\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_DRIVER_NAME_SPECIFIED),
			$of(u"\u30c9\u30e9\u30a4\u30d0\u540d\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_URL_SPECIFIED),
			$of(u"URL\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_POOLSIZE_LESS_THAN_ONE),
			$of(u"\u30d7\u30fc\u30eb\u30fb\u30b5\u30a4\u30ba\u304c1\u3088\u308a\u5c0f\u3055\u3044\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_DRIVER_NAME),
			$of(u"\u7121\u52b9\u306a\u30c9\u30e9\u30a4\u30d0\u540d\u304c\u6307\u5b9a\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ERRORLISTENER),
			$of("ErrorListener"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ASSERT_NO_TEMPLATE_PARENT),
			$of(u"\u30d7\u30ed\u30b0\u30e9\u30de\u306e\u30a8\u30e9\u30fc\u3002\u5f0f\u306bElemTemplateElement\u306e\u89aa\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR),
			$of(u"RedundentExprEliminator\u3067\u306e\u30d7\u30ed\u30b0\u30e9\u30de\u306e\u30a2\u30b5\u30fc\u30b7\u30e7\u30f3: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NOT_ALLOWED_IN_POSITION),
			$of(u"{0}\u306f\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u306e\u3053\u306e\u4f4d\u7f6e\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION),
			$of(u"\u7a7a\u767d\u4ee5\u5916\u306e\u30c6\u30ad\u30b9\u30c8\u306f\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u306e\u3053\u306e\u4f4d\u7f6e\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::INVALID_TCHAR),
			$of(u"\u4e0d\u6b63\u306a\u5024: {1}\u304cCHAR\u5c5e\u6027{0}\u306b\u4f7f\u7528\u3055\u308c\u307e\u3057\u305f\u3002CHAR\u578b\u306e\u5c5e\u6027\u306f1\u6587\u5b57\u306e\u307f\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::INVALID_QNAME),
			$of(u"\u4e0d\u6b63\u306a\u5024: {1}\u304cQNAME\u5c5e\u6027{0}\u306b\u4f7f\u7528\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::INVALID_ENUM),
			$of(u"\u4e0d\u6b63\u306a\u5024: {1}\u304cENUM\u5c5e\u6027{0}\u306b\u4f7f\u7528\u3055\u308c\u307e\u3057\u305f\u3002\u6709\u52b9\u306a\u5024\u306f{2}\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::INVALID_NMTOKEN),
			$of(u"\u4e0d\u6b63\u306a\u5024: {1}\u304cNMTOKEN\u5c5e\u6027{0}\u306b\u4f7f\u7528\u3055\u308c\u307e\u3057\u305f "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::INVALID_NCNAME),
			$of(u"\u4e0d\u6b63\u306a\u5024: {1}\u304cNCNAME\u5c5e\u6027{0}\u306b\u4f7f\u7528\u3055\u308c\u307e\u3057\u305f "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::INVALID_BOOLEAN),
			$of(u"\u4e0d\u6b63\u306a\u5024: {1}\u304cboolean\u5c5e\u6027{0}\u306b\u4f7f\u7528\u3055\u308c\u307e\u3057\u305f "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::INVALID_NUMBER),
			$of(u"\u4e0d\u6b63\u306a\u5024: {1}\u304c\u6570\u5024\u5c5e\u6027{0}\u306b\u4f7f\u7528\u3055\u308c\u307e\u3057\u305f "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_ARG_LITERAL),
			$of(u"\u4e00\u81f4\u30d1\u30bf\u30fc\u30f3\u306b\u304a\u3051\u308b{0}\u306e\u5f15\u6570\u306f\u30ea\u30c6\u30e9\u30eb\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_DUPLICATE_GLOBAL_VAR),
			$of(u"\u30b0\u30ed\u30fc\u30d0\u30eb\u5909\u6570\u5ba3\u8a00\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_DUPLICATE_VAR),
			$of(u"\u5909\u6570\u5ba3\u8a00\u304c\u91cd\u8907\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_TEMPLATE_NAME_MATCH),
			$of(u"xsl:template\u306b\u306fname\u5c5e\u6027\u307e\u305f\u306fmatch\u5c5e\u6027(\u3042\u308b\u3044\u306f\u4e21\u65b9)\u304c\u5fc5\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_PREFIX),
			$of(u"exclude-result-prefixes\u306e\u63a5\u982d\u8f9e\u304c\u7121\u52b9\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NO_ATTRIB_SET),
			$of(u"{0}\u3068\u3044\u3046\u540d\u524d\u306eattribute-set\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_FUNCTION_NOT_FOUND),
			$of(u"{0}\u3068\u3044\u3046\u540d\u524d\u306e\u6a5f\u80fd\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_CANT_HAVE_CONTENT_AND_SELECT),
			$of(u"{0}\u8981\u7d20\u306b\u306f\u30b3\u30f3\u30c6\u30f3\u30c4\u3068select\u5c5e\u6027\u306e\u4e21\u65b9\u3092\u542b\u3081\u306a\u3044\u3067\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_SET_PARAM_VALUE),
			$of(u"\u30d1\u30e9\u30e1\u30fc\u30bf{0}\u306f\u6709\u52b9\u306aJava\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT),
			$of(u"xsl:namespace-alias\u8981\u7d20\u306eresult-prefix\u5c5e\u6027\u306b\u5024\'#default\'\u304c\u3042\u308a\u307e\u3059\u304c\u3001\u8981\u7d20\u306e\u30b9\u30b3\u30fc\u30d7\u5185\u306b\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306e\u5ba3\u8a00\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX),
			$of(u"xsl:namespace-alias\u8981\u7d20\u306eresult-prefix\u5c5e\u6027\u306b\u5024\'\'{0}\'\'\u304c\u3042\u308a\u307e\u3059\u304c\u3001\u8981\u7d20\u306e\u30b9\u30b3\u30fc\u30d7\u5185\u306b\u63a5\u982d\u8f9e\'\'{0}\'\'\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u5ba3\u8a00\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_SET_FEATURE_NULL_NAME),
			$of(u"\u6a5f\u80fd\u540d\u306fTransformerFactory.setFeature(String name, boolean value)\u5185\u3067null\u306b\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_GET_FEATURE_NULL_NAME),
			$of(u"\u6a5f\u80fd\u540d\u306fTransformerFactory.getFeature(String name)\u5185\u3067null\u306b\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_UNSUPPORTED_FEATURE),
			$of(u"\u6a5f\u80fd\'\'{0}\'\'\u3092\u3053\u306eTransformerFactory\u306b\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING),
			$of(u"\u30bb\u30ad\u30e5\u30a2\u51e6\u7406\u6a5f\u80fd\u304ctrue\u306b\u8a2d\u5b9a\u3055\u308c\u3066\u3044\u308b\u3068\u304d\u3001\u62e1\u5f35\u8981\u7d20\'\'{0}\'\'\u306e\u4f7f\u7528\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE),
			$of(u"null\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9URI\u306b\u3064\u3044\u3066\u63a5\u982d\u8f9e\u3092\u53d6\u5f97\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_NAMESPACE_CONTEXT_NULL_PREFIX),
			$of(u"null\u306e\u63a5\u982d\u8f9e\u306b\u3064\u3044\u3066\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9URI\u3092\u53d6\u5f97\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_XPATH_RESOLVER_NULL_QNAME),
			$of(u"\u6a5f\u80fd\u540d\u3092null\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::ER_XPATH_RESOLVER_NEGATIVE_ARITY),
			$of(u"arity\u3092\u8ca0\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_FOUND_CURLYBRACE),
			$of(u"\'}\'\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u304c\u5c5e\u6027\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u304c\u958b\u3044\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR),
			$of(u"\u8b66\u544a: count\u5c5e\u6027\u304cxsl:number\u5185\u306e\u7956\u5148\u3068\u4e00\u81f4\u3057\u307e\u305b\u3093\u3002\u30bf\u30fc\u30b2\u30c3\u30c8= {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_EXPR_ATTRIB_CHANGED_TO_SELECT),
			$of(u"\u53e4\u3044\u69cb\u6587: \'expr\'\u5c5e\u6027\u306e\u540d\u524d\u304c\'select\'\u306b\u5909\u66f4\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_NO_LOCALE_IN_FORMATNUMBER),
			$of(u"Xalan\u306fformat-number\u95a2\u6570\u5185\u306e\u30ed\u30b1\u30fc\u30eb\u540d\u3092\u307e\u3060\u51e6\u7406\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_LOCALE_NOT_FOUND),
			$of(u"\u8b66\u544a: xml:lang={0}\u306e\u30ed\u30b1\u30fc\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_CANNOT_MAKE_URL_FROM),
			$of(u"{0}\u304b\u3089URL\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_CANNOT_LOAD_REQUESTED_DOC),
			$of(u"\u30ea\u30af\u30a8\u30b9\u30c8\u3055\u308c\u305f\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8{0}\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_CANNOT_FIND_COLLATOR),
			$of(u"<sort xml:lang={0}\u306e\u30b3\u30ec\u30fc\u30bf\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_FUNCTIONS_SHOULD_USE_URL),
			$of(u"\u53e4\u3044\u69cb\u6587: \u95a2\u6570\u547d\u4ee4\u306f{0}\u306eURL\u3092\u4f7f\u7528\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_ENCODING_NOT_SUPPORTED_USING_UTF8),
			$of(u"\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0{0}\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002UTF-8\u3092\u4f7f\u7528\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_ENCODING_NOT_SUPPORTED_USING_JAVA),
			$of(u"\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0{0}\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002Java {1}\u3092\u4f7f\u7528\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_SPECIFICITY_CONFLICTS),
			$of(u"\u7279\u7570\u6027\u306e\u7af6\u5408\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f: {0}\u3002\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u5185\u3067\u6700\u5f8c\u306b\u898b\u3064\u304b\u3063\u305f\u3082\u306e\u304c\u4f7f\u7528\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_PARSING_AND_PREPARING),
			$of(u"========= {0}\u306e\u89e3\u6790\u304a\u3088\u3073\u6e96\u5099\u4e2d =========="_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_ATTR_TEMPLATE),
			$of(u"\u5c5e\u6027\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u3001{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE),
			$of(u"xsl:strip-space\u3068xsl:preserve-space\u306e\u9593\u3067\u4e00\u81f4\u304c\u7af6\u5408\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_ATTRIB_NOT_HANDLED),
			$of(u"Xalan\u306f{0}\u5c5e\u6027\u3092\u307e\u3060\u51e6\u7406\u3057\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_NO_DECIMALFORMAT_DECLARATION),
			$of(u"10\u9032\u6570\u30d5\u30a9\u30fc\u30de\u30c3\u30c8{0}\u306e\u5ba3\u8a00\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_OLD_XSLT_NS),
			$of(u"XSLT\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u304c\u306a\u3044\u304b\u4e0d\u6b63\u3067\u3059\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u306exsl:decimal-format\u5ba3\u8a00\u306f1\u3064\u306e\u307f\u8a31\u53ef\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE),
			$of(u"xsl:decimal-format\u540d\u306f\u56fa\u6709\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002\u540d\u524d\"{0}\"\u306f\u91cd\u8907\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE),
			$of(u"{0}\u306b\u4e0d\u6b63\u306a\u5c5e\u6027\u304c\u3042\u308a\u307e\u3059: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_COULD_NOT_RESOLVE_PREFIX),
			$of(u"\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306e\u63a5\u982d\u8f9e{0}\u3092\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002\u30ce\u30fc\u30c9\u306f\u7121\u8996\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB),
			$of(u"xsl:stylesheet\u306f\'version\'\u5c5e\u6027\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE_NAME),
			$of(u"\u4e0d\u6b63\u306a\u5c5e\u6027\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE_VALUE),
			$of(u"\u7121\u52b9\u306a\u5024\u304c\u5c5e\u6027{0}\u306b\u4f7f\u7528\u3055\u308c\u307e\u3057\u305f: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_EMPTY_SECOND_ARG),
			$of(u"\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u95a2\u6570\u306e2\u756a\u76ee\u306e\u5f15\u6570\u304b\u3089\u306e\u7d50\u679c\u30ce\u30fc\u30c9\u30bb\u30c3\u30c8\u304c\u7a7a\u3067\u3059\u3002\u7a7a\u306e\u30ce\u30fc\u30c9\u30bb\u30c3\u30c8\u3092\u8fd4\u3057\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML),
			$of(u"xsl:processing-instruction\u540d\u306e\'name\'\u5c5e\u6027\u306e\u5024\u306f\'xml\'\u3067\u306a\u3044\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME),
			$of(u"xsl:processing-instruction\u306e\'\'name\'\'\u5c5e\u6027\u306e\u5024\u306f\u6709\u52b9\u306aNCName\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"\u5b50\u30ce\u30fc\u30c9\u306e\u5f8c\u307e\u305f\u306f\u8981\u7d20\u304c\u751f\u6210\u3055\u308c\u308b\u524d\u306b\u5c5e\u6027{0}\u3092\u8ffd\u52a0\u3067\u304d\u307e\u305b\u3093\u3002\u5c5e\u6027\u306f\u7121\u8996\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_ja::NO_MODIFICATION_ALLOWED_ERR),
			$of(u"\u5909\u66f4\u304c\u8a31\u53ef\u3055\u308c\u3066\u3044\u306a\u3044\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u3092\u5909\u66f4\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("ja"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("ja"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("ja"_s)
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
			$of("version"_s),
			$of(u">>>>>>> Xalan\u30d0\u30fc\u30b8\u30e7\u30f3 "_s)
		}),
		$$new($ObjectArray, {
			$of("version2"_s),
			$of("<<<<<<<"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of("yes"_s)
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
			$of("xsldone"_s),
			$of(u"XSLProcessor: \u5b8c\u4e86\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_option"_s),
			$of(u"Xalan-J\u30b3\u30de\u30f3\u30c9\u884c\u30d7\u30ed\u30bb\u30b9\u30fb\u30af\u30e9\u30b9\u306e\u30aa\u30d7\u30b7\u30e7\u30f3:"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_option"_s),
			$of(u"Xalan-J\u30b3\u30de\u30f3\u30c9\u884c\u30d7\u30ed\u30bb\u30b9\u30fb\u30af\u30e9\u30b9\u306e\u30aa\u30d7\u30b7\u30e7\u30f3:"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_invalid_xsltc_option"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306fXSLTC\u30e2\u30fc\u30c9\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_invalid_xalan_option"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306f-XSLTC\u3068\u3068\u3082\u306b\u306e\u307f\u4f7f\u7528\u3067\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_no_input"_s),
			$of(u"\u30a8\u30e9\u30fc: \u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u307e\u305f\u306f\u5165\u529bxml\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002\u4f7f\u7528\u65b9\u6cd5\u306e\u6307\u793a\u306b\u3064\u3044\u3066\u306f\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u4ed8\u3051\u305a\u306b\u3053\u306e\u30b3\u30de\u30f3\u30c9\u3092\u5b9f\u884c\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_common_options"_s),
			$of(u"-\u5171\u901a\u30aa\u30d7\u30b7\u30e7\u30f3-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_xalan_options"_s),
			$of(u"-Xalan\u7528\u30aa\u30d7\u30b7\u30e7\u30f3-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_xsltc_options"_s),
			$of(u"-XSLTC\u7528\u30aa\u30d7\u30b7\u30e7\u30f3-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_return_to_continue"_s),
			$of(u"(\u7d9a\u884c\u3059\u308b\u306b\u306f<return>\u3092\u62bc\u3057\u3066\u304f\u3060\u3055\u3044)"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXSLTC"_s),
			$of(u"   [-XSLTC (\u5909\u63db\u306bXSLTC\u3092\u4f7f\u7528)]"_s)
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
			$of(u"   [-PARSER \u30d1\u30fc\u30b5\u30fc\u30fb\u30ea\u30a8\u30be\u30f3\u306e\u5b8c\u5168\u4fee\u98fe\u30af\u30e9\u30b9\u540d]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionE"_s),
			$of(u"   [-E (\u5b9f\u4f53\u53c2\u7167\u3092\u62e1\u5f35\u3057\u306a\u3044)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionV"_s),
			$of(u"   [-E (\u5b9f\u4f53\u53c2\u7167\u3092\u62e1\u5f35\u3057\u306a\u3044)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionQC"_s),
			$of(u"   [-QC (\u6291\u5236\u30d1\u30bf\u30fc\u30f3\u7af6\u5408\u306e\u8b66\u544a)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionQ"_s),
			$of(u"   [-Q  (\u6291\u5236\u30e2\u30fc\u30c9)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLF"_s),
			$of(u"   [-LF (\u51fa\u529b\u3067\u306e\u307f\u6539\u884c\u3092\u4f7f\u7528{\u30c7\u30d5\u30a9\u30eb\u30c8\u306fCR/LF})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionCR"_s),
			$of(u"   [-CR (\u51fa\u529b\u3067\u306e\u307f\u6539\u884c\u3092\u4f7f\u7528{\u30c7\u30d5\u30a9\u30eb\u30c8\u306fCR/LF})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionESCAPE"_s),
			$of(u"   [-ESCAPE (\u30a8\u30b9\u30b1\u30fc\u30d7\u3059\u308b\u6587\u5b57{\u30c7\u30d5\u30a9\u30eb\u30c8\u306f<>&\"\'\\r\\n}]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionINDENT"_s),
			$of(u"   [-INDENT (\u30a4\u30f3\u30c7\u30f3\u30c8\u3059\u308b\u7a7a\u767d\u6587\u5b57\u6570\u3092\u5236\u5fa1{\u30c7\u30d5\u30a9\u30eb\u30c8\u306f0})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTT"_s),
			$of(u"   [-TT (\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u304c\u547c\u3073\u51fa\u3055\u308c\u305f\u3068\u304d\u306b\u30c8\u30ec\u30fc\u30b9\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTG"_s),
			$of(u"   [-TG (\u5404\u751f\u6210\u30a4\u30d9\u30f3\u30c8\u3092\u30c8\u30ec\u30fc\u30b9\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTS"_s),
			$of(u"   [-TS (\u5404\u9078\u629e\u30a4\u30d9\u30f3\u30c8\u3092\u30c8\u30ec\u30fc\u30b9\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTTC"_s),
			$of(u"   [-TTC (\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u306e\u5b50\u304c\u51e6\u7406\u3055\u308c\u308b\u3068\u304d\u306b\u30c8\u30ec\u30fc\u30b9\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTCLASS"_s),
			$of(u"   [-TCLASS (\u30c8\u30ec\u30fc\u30b9\u62e1\u5f35\u7528\u306eTraceListener\u30af\u30e9\u30b9\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionVALIDATE"_s),
			$of(u"   [-VALIDATE (\u691c\u8a3c\u3092\u5b9f\u884c\u3059\u308b\u304b\u3069\u3046\u304b\u3092\u8a2d\u5b9a\u3059\u308b\u3002\u691c\u8a3c\u306f\u30c7\u30d5\u30a9\u30eb\u30c8\u3067\u306f\u30aa\u30d5\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionEDUMP"_s),
			$of(u"   [-EDUMP {optional filename} (\u30a8\u30e9\u30fc\u6642\u306bstackdump\u3092\u5b9f\u884c\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXML"_s),
			$of(u"   [-XML (XML\u30d5\u30a9\u30fc\u30de\u30c3\u30bf\u3092\u4f7f\u7528\u3057\u3066XML\u30d8\u30c3\u30c0\u30fc\u3092\u8ffd\u52a0\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTEXT"_s),
			$of(u"   [-TEXT (\u30b7\u30f3\u30d7\u30eb\u30fb\u30c6\u30ad\u30b9\u30c8\u30fb\u30d5\u30a9\u30fc\u30de\u30c3\u30bf\u3092\u4f7f\u7528\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionHTML"_s),
			$of(u"   [-HTML (HTML\u30d5\u30a9\u30fc\u30de\u30c3\u30bf\u3092\u4f7f\u7528\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionPARAM"_s),
			$of(u"   [-PARAM name expression (\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u30fb\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u8a2d\u5b9a\u3059\u308b)]"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg1"_s),
			$of(u"XSL\u30d7\u30ed\u30bb\u30b9\u306f\u6210\u529f\u3057\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg2"_s),
			$of(u"** \u30d1\u30fc\u30b5\u30fc\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f **"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg3"_s),
			$of(u"\u30af\u30e9\u30b9\u30d1\u30b9\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg4"_s),
			$of(u"IBM\u306eJava\u7528XML\u30d1\u30fc\u30b5\u30fc\u304c\u306a\u3044\u5834\u5408\u3001\u6b21\u306e\u30b5\u30a4\u30c8\u304b\u3089\u30c0\u30a6\u30f3\u30ed\u30fc\u30c9\u3067\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg5"_s),
			$of(u"IBM\u306eAlphaWorks: http://www.alphaworks.ibm.com/formula/xml"_s)
		}),
		$$new($ObjectArray, {
			$of("optionURIRESOLVER"_s),
			$of(u"   [-URIRESOLVER full class name (URI\u306e\u89e3\u6c7a\u306b\u4f7f\u7528\u3055\u308c\u308bURIResolver)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionENTITYRESOLVER"_s),
			$of(u"   [-ENTITYRESOLVER full class name (\u30a8\u30f3\u30c6\u30a3\u30c6\u30a3\u306e\u89e3\u6c7a\u306b\u4f7f\u7528\u3055\u308c\u308bEntityResolver)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionCONTENTHANDLER"_s),
			$of(u"   [-CONTENTHANDLER full class name (\u51fa\u529b\u306e\u30b7\u30ea\u30a2\u30e9\u30a4\u30ba\u306b\u4f7f\u7528\u3055\u308c\u308bContentHandler)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLINENUMBERS"_s),
			$of(u"   [-L \u30bd\u30fc\u30b9\u30fb\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u306e\u884c\u756a\u53f7\u3092\u4f7f\u7528]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionSECUREPROCESSING"_s),
			$of(u"   [-SECURE (\u30bb\u30ad\u30e5\u30a2\u51e6\u7406\u6a5f\u80fd\u3092true\u306b\u8a2d\u5b9a\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionMEDIA"_s),
			$of(u"   [-MEDIA mediaType (\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u306b\u95a2\u9023\u4ed8\u3051\u3089\u308c\u305f\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u3092\u898b\u3064\u3051\u308b\u305f\u3081\u306b\u30e1\u30c7\u30a3\u30a2\u5c5e\u6027\u3092\u4f7f\u7528\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionFLAVOR"_s),
			$of(u"   [-FLAVOR flavorName (\u5909\u63db\u3092\u884c\u3046\u305f\u3081\u306bs2s=SAX\u307e\u305f\u306fd2d=DOM\u3092\u660e\u793a\u7684\u306b\u4f7f\u7528\u3059\u308b\u3002)] "_s)
		}),
		$$new($ObjectArray, {
			$of("optionDIAG"_s),
			$of(u"   [-DIAG (\u5909\u63db\u306b\u304b\u304b\u3063\u305f\u5408\u8a08\u30df\u30ea\u79d2\u6570\u3092\u51fa\u529b\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionINCREMENTAL"_s),
			$of(u"   [-INCREMENTAL (http://xml.apache.org/xalan/features/incremental\u3092true\u306b\u8a2d\u5b9a\u3059\u308b\u3053\u3068\u306b\u3088\u3063\u3066\u5897\u5206DTM\u69cb\u7bc9\u3092\u30ea\u30af\u30a8\u30b9\u30c8\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionNOOPTIMIMIZE"_s),
			$of(u"   [-NOOPTIMIMIZE (http://xml.apache.org/xalan/features/optimize\u3092false\u306b\u8a2d\u5b9a\u3059\u308b\u3053\u3068\u306b\u3088\u3063\u3066\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u6700\u9069\u5316\u51e6\u7406\u3092\u30ea\u30af\u30a8\u30b9\u30c8\u3057\u306a\u3044\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionRL"_s),
			$of(u"   [-RL recursionlimit (\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u306e\u518d\u5e30\u306e\u6df1\u3055\u306b\u3064\u3044\u3066\u6570\u5024\u4e0a\u306e\u5236\u9650\u3092\u30a2\u30b5\u30fc\u30c8\u3059\u308b\u3002)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXO"_s),
			$of(u"   [-XO [transletName] (\u751f\u6210\u6e08translet\u306b\u540d\u524d\u3092\u5272\u308a\u5f53\u3066\u308b)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXD"_s),
			$of(u"   [-XD destinationDirectory (translet\u306e\u5b9b\u5148\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u3092\u6307\u5b9a\u3059\u308b)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXJ"_s),
			$of(u"   [-XJ jarfile (translet\u30af\u30e9\u30b9\u3092\u540d\u524d<jarfile>\u306ejar\u30d5\u30a1\u30a4\u30eb\u306b\u30d1\u30c3\u30b1\u30fc\u30b8\u3059\u308b)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXP"_s),
			$of(u"   [-XP package (\u3059\u3079\u3066\u306e\u751f\u6210\u6e08translet\u30af\u30e9\u30b9\u7528\u306b\u30d1\u30c3\u30b1\u30fc\u30b8\u540d\u63a5\u982d\u8f9e\u3092\u6307\u5b9a\u3059\u308b)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXN"_s),
			$of(u"   [-XN (\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u306e\u30a4\u30f3\u30e9\u30a4\u30f3\u5316\u3092\u6709\u52b9\u306b\u3059\u308b)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXX"_s),
			$of(u"   [-XX (\u8ffd\u52a0\u306e\u30c7\u30d0\u30c3\u30b0\u30fb\u30e1\u30c3\u30bb\u30fc\u30b8\u51fa\u529b\u3092\u30aa\u30f3\u306b\u3059\u308b)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXT"_s),
			$of(u"   [-XT (\u53ef\u80fd\u306a\u5834\u5408\u306f\u5909\u63db\u306e\u305f\u3081\u306btranslet\u3092\u4f7f\u7528\u3059\u308b)]"_s)
		}),
		$$new($ObjectArray, {
			$of("diagTiming"_s),
			$of(u" --------- {1}\u306b\u3088\u308b{0}\u306e\u5909\u63db\u306b{2}\u30df\u30ea\u79d2\u304b\u304b\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("recursionTooDeep"_s),
			$of(u"\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u306e\u30cd\u30b9\u30c8\u304c\u6df1\u3059\u304e\u307e\u3059\u3002\u30cd\u30b9\u30c8= {0}\u3001\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8{1} {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("nameIs"_s),
			$of(u"\u540d\u524d:"_s)
		}),
		$$new($ObjectArray, {
			$of("matchPatternIs"_s),
			$of(u"\u4e00\u81f4\u30d1\u30bf\u30fc\u30f3:"_s)
		})
	});
}

XSLTErrorResources_ja::XSLTErrorResources_ja() {
}

void clinit$XSLTErrorResources_ja($Class* class$) {
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX, "ER_INVALID_SET_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT, "ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_CURLYBRACE, "ER_NO_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ILLEGAL_ATTRIBUTE, "ER_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NULL_SOURCENODE_APPLYIMPORTS, "ER_NULL_SOURCENODE_APPLYIMPORTS"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_ADD, "ER_CANNOT_ADD"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES, "ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_NAME_ATTRIB, "ER_NO_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_TEMPLATE_NOT_FOUND, "ER_TEMPLATE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANT_RESOLVE_NAME_AVT, "ER_CANT_RESOLVE_NAME_AVT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_REQUIRES_ATTRIB, "ER_REQUIRES_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MUST_HAVE_TEST_ATTRIB, "ER_MUST_HAVE_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_BAD_VAL_ON_LEVEL_ATTRIB, "ER_BAD_VAL_ON_LEVEL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NEED_MATCH_ATTRIB, "ER_NEED_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NEED_NAME_OR_MATCH_ATTRIB, "ER_NEED_NAME_OR_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANT_RESOLVE_NSPREFIX, "ER_CANT_RESOLVE_NSPREFIX"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ILLEGAL_VALUE, "ER_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_OWNERDOC, "ER_NO_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ELEMTEMPLATEELEM_ERR, "ER_ELEMTEMPLATEELEM_ERR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NULL_CHILD, "ER_NULL_CHILD"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NEED_SELECT_ATTRIB, "ER_NEED_SELECT_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NEED_TEST_ATTRIB, "ER_NEED_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NEED_NAME_ATTRIB, "ER_NEED_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_CONTEXT_OWNERDOC, "ER_NO_CONTEXT_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources_ja::ER_COULD_NOT_CREATE_XML_PROC_LIAISON, "ER_COULD_NOT_CREATE_XML_PROC_LIAISON"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROCESS_NOT_SUCCESSFUL, "ER_PROCESS_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NOT_SUCCESSFUL, "ER_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ENCODING_NOT_SUPPORTED, "ER_ENCODING_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_COULD_NOT_CREATE_TRACELISTENER, "ER_COULD_NOT_CREATE_TRACELISTENER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_KEY_REQUIRES_NAME_ATTRIB, "ER_KEY_REQUIRES_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_KEY_REQUIRES_MATCH_ATTRIB, "ER_KEY_REQUIRES_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_KEY_REQUIRES_USE_ATTRIB, "ER_KEY_REQUIRES_USE_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_REQUIRES_ELEMENTS_ATTRIB, "ER_REQUIRES_ELEMENTS_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MISSING_PREFIX_ATTRIB, "ER_MISSING_PREFIX_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_BAD_STYLESHEET_URL, "ER_BAD_STYLESHEET_URL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FILE_NOT_FOUND, "ER_FILE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_ja::ER_IOEXCEPTION, "ER_IOEXCEPTION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_HREF_ATTRIB, "ER_NO_HREF_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_STYLESHEET_INCLUDES_ITSELF, "ER_STYLESHEET_INCLUDES_ITSELF"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROCESSINCLUDE_ERROR, "ER_PROCESSINCLUDE_ERROR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MISSING_LANG_ATTRIB, "ER_MISSING_LANG_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MISSING_CONTAINER_ELEMENT_COMPONENT, "ER_MISSING_CONTAINER_ELEMENT_COMPONENT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CAN_ONLY_OUTPUT_TO_ELEMENT, "ER_CAN_ONLY_OUTPUT_TO_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROCESS_ERROR, "ER_PROCESS_ERROR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_UNIMPLNODE_ERROR, "ER_UNIMPLNODE_ERROR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_SELECT_EXPRESSION, "ER_NO_SELECT_EXPRESSION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_SERIALIZE_XSLPROCESSOR, "ER_CANNOT_SERIALIZE_XSLPROCESSOR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_INPUT_STYLESHEET, "ER_NO_INPUT_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FAILED_PROCESS_STYLESHEET, "ER_FAILED_PROCESS_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_ja::ER_COULDNT_PARSE_DOC, "ER_COULDNT_PARSE_DOC"_s);
	$assignStatic(XSLTErrorResources_ja::ER_COULDNT_FIND_FRAGMENT, "ER_COULDNT_FIND_FRAGMENT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NODE_NOT_ELEMENT, "ER_NODE_NOT_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB, "ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB, "ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_CLONE_OF_DOCUMENT_FRAG, "ER_NO_CLONE_OF_DOCUMENT_FRAG"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANT_CREATE_ITEM, "ER_CANT_CREATE_ITEM"_s);
	$assignStatic(XSLTErrorResources_ja::ER_XMLSPACE_ILLEGAL_VALUE, "ER_XMLSPACE_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_XSLKEY_DECLARATION, "ER_NO_XSLKEY_DECLARATION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANT_CREATE_URL, "ER_CANT_CREATE_URL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_XSLFUNCTIONS_UNSUPPORTED, "ER_XSLFUNCTIONS_UNSUPPORTED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROCESSOR_ERROR, "ER_PROCESSOR_ERROR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NOT_ALLOWED_INSIDE_STYLESHEET, "ER_NOT_ALLOWED_INSIDE_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_ja::ER_RESULTNS_NOT_SUPPORTED, "ER_RESULTNS_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_DEFAULTSPACE_NOT_SUPPORTED, "ER_DEFAULTSPACE_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INDENTRESULT_NOT_SUPPORTED, "ER_INDENTRESULT_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ILLEGAL_ATTRIB, "ER_ILLEGAL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_UNKNOWN_XSL_ELEM, "ER_UNKNOWN_XSL_ELEM"_s);
	$assignStatic(XSLTErrorResources_ja::ER_BAD_XSLSORT_USE, "ER_BAD_XSLSORT_USE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MISPLACED_XSLWHEN, "ER_MISPLACED_XSLWHEN"_s);
	$assignStatic(XSLTErrorResources_ja::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MISPLACED_XSLOTHERWISE, "ER_MISPLACED_XSLOTHERWISE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NOT_ALLOWED_INSIDE_TEMPLATE, "ER_NOT_ALLOWED_INSIDE_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_UNKNOWN_EXT_NS_PREFIX, "ER_UNKNOWN_EXT_NS_PREFIX"_s);
	$assignStatic(XSLTErrorResources_ja::ER_IMPORTS_AS_FIRST_ELEM, "ER_IMPORTS_AS_FIRST_ELEM"_s);
	$assignStatic(XSLTErrorResources_ja::ER_IMPORTING_ITSELF, "ER_IMPORTING_ITSELF"_s);
	$assignStatic(XSLTErrorResources_ja::ER_XMLSPACE_ILLEGAL_VAL, "ER_XMLSPACE_ILLEGAL_VAL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL, "ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_SAX_EXCEPTION, "ER_SAX_EXCEPTION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_XSLT_ERROR, "ER_XSLT_ERROR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CURRENCY_SIGN_ILLEGAL, "ER_CURRENCY_SIGN_ILLEGAL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM, "ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER, "ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_REDIRECT_COULDNT_GET_FILENAME, "ER_REDIRECT_COULDNT_GET_FILENAME"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT, "ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX, "ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MISSING_NS_URI, "ER_MISSING_NS_URI"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MISSING_ARG_FOR_OPTION, "ER_MISSING_ARG_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_OPTION, "ER_INVALID_OPTION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MALFORMED_FORMAT_STRING, "ER_MALFORMED_FORMAT_STRING"_s);
	$assignStatic(XSLTErrorResources_ja::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB, "ER_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ILLEGAL_ATTRIBUTE_VALUE, "ER_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CHOOSE_REQUIRES_WHEN, "ER_CHOOSE_REQUIRES_WHEN"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_APPLY_IMPORT_IN_FOR_EACH, "ER_NO_APPLY_IMPORT_IN_FOR_EACH"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANT_USE_DTM_FOR_OUTPUT, "ER_CANT_USE_DTM_FOR_OUTPUT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANT_USE_DTM_FOR_INPUT, "ER_CANT_USE_DTM_FOR_INPUT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CALL_TO_EXT_FAILED, "ER_CALL_TO_EXT_FAILED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_XSLATTRSET_USED_ITSELF, "ER_XSLATTRSET_USED_ITSELF"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_MIX_XERCESDOM, "ER_CANNOT_MIX_XERCESDOM"_s);
	$assignStatic(XSLTErrorResources_ja::ER_TOO_MANY_LISTENERS, "ER_TOO_MANY_LISTENERS"_s);
	$assignStatic(XSLTErrorResources_ja::ER_IN_ELEMTEMPLATEELEM_READOBJECT, "ER_IN_ELEMTEMPLATEELEM_READOBJECT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_DUPLICATE_NAMED_TEMPLATE, "ER_DUPLICATE_NAMED_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_KEY_CALL, "ER_INVALID_KEY_CALL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_REFERENCING_ITSELF, "ER_REFERENCING_ITSELF"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ILLEGAL_DOMSOURCE_INPUT, "ER_ILLEGAL_DOMSOURCE_INPUT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CLASS_NOT_FOUND_FOR_OPTION, "ER_CLASS_NOT_FOUND_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_REQUIRED_ELEM_NOT_FOUND, "ER_REQUIRED_ELEM_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INPUT_CANNOT_BE_NULL, "ER_INPUT_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_URI_CANNOT_BE_NULL, "ER_URI_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FILE_CANNOT_BE_NULL, "ER_FILE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_SOURCE_CANNOT_BE_NULL, "ER_SOURCE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_INIT_BSFMGR, "ER_CANNOT_INIT_BSFMGR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_CMPL_EXTENSN, "ER_CANNOT_CMPL_EXTENSN"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_CREATE_EXTENSN, "ER_CANNOT_CREATE_EXTENSN"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INSTANCE_MTHD_CALL_REQUIRES, "ER_INSTANCE_MTHD_CALL_REQUIRES"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_ELEMENT_NAME, "ER_INVALID_ELEMENT_NAME"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ELEMENT_NAME_METHOD_STATIC, "ER_ELEMENT_NAME_METHOD_STATIC"_s);
	$assignStatic(XSLTErrorResources_ja::ER_EXTENSION_FUNC_UNKNOWN, "ER_EXTENSION_FUNC_UNKNOWN"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MORE_MATCH_CONSTRUCTOR, "ER_MORE_MATCH_CONSTRUCTOR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MORE_MATCH_METHOD, "ER_MORE_MATCH_METHOD"_s);
	$assignStatic(XSLTErrorResources_ja::ER_MORE_MATCH_ELEMENT, "ER_MORE_MATCH_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_CONTEXT_PASSED, "ER_INVALID_CONTEXT_PASSED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_POOL_EXISTS, "ER_POOL_EXISTS"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_DRIVER_NAME, "ER_NO_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_URL, "ER_NO_URL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_POOL_SIZE_LESSTHAN_ONE, "ER_POOL_SIZE_LESSTHAN_ONE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_DRIVER, "ER_INVALID_DRIVER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_STYLESHEETROOT, "ER_NO_STYLESHEETROOT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ILLEGAL_XMLSPACE_VALUE, "ER_ILLEGAL_XMLSPACE_VALUE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROCESSFROMNODE_FAILED, "ER_PROCESSFROMNODE_FAILED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XSLTErrorResources_ja::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XSLTErrorResources_ja::ER_UNKNOWN_ERROR_CALLING_EXTENSION, "ER_UNKNOWN_ERROR_CALLING_EXTENSION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_NAMESPACE_DECL, "ER_NO_NAMESPACE_DECL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ELEM_CONTENT_NOT_ALLOWED, "ER_ELEM_CONTENT_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_STYLESHEET_DIRECTED_TERMINATION, "ER_STYLESHEET_DIRECTED_TERMINATION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ONE_OR_TWO, "ER_ONE_OR_TWO"_s);
	$assignStatic(XSLTErrorResources_ja::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_INIT_DEFAULT_TEMPLATES, "ER_CANNOT_INIT_DEFAULT_TEMPLATES"_s);
	$assignStatic(XSLTErrorResources_ja::ER_RESULT_NULL, "ER_RESULT_NULL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_RESULT_COULD_NOT_BE_SET, "ER_RESULT_COULD_NOT_BE_SET"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_OUTPUT_SPECIFIED, "ER_NO_OUTPUT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE, "ER_CANNOT_TRANSFORM_TO_RESULT_TYPE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_TRANSFORM_SOURCE_TYPE, "ER_CANNOT_TRANSFORM_SOURCE_TYPE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NULL_CONTENT_HANDLER, "ER_NULL_CONTENT_HANDLER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_CALL_PARSE, "ER_CANNOT_CALL_PARSE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_PARENT_FOR_FILTER, "ER_NO_PARENT_FOR_FILTER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_STYLESHEET_IN_MEDIA, "ER_NO_STYLESHEET_IN_MEDIA"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_STYLESHEET_PI, "ER_NO_STYLESHEET_PI"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROPERTY_VALUE_BOOLEAN, "ER_PROPERTY_VALUE_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources_ja::ER_COULD_NOT_FIND_EXTERN_SCRIPT, "ER_COULD_NOT_FIND_EXTERN_SCRIPT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XSLTErrorResources_ja::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED, "ER_OUTPUT_PROPERTY_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FAILED_CREATING_ELEMLITRSLT, "ER_FAILED_CREATING_ELEMLITRSLT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_VALUE_SHOULD_BE_NUMBER, "ER_VALUE_SHOULD_BE_NUMBER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_VALUE_SHOULD_EQUAL, "ER_VALUE_SHOULD_EQUAL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FAILED_CALLING_METHOD, "ER_FAILED_CALLING_METHOD"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FAILED_CREATING_ELEMTMPL, "ER_FAILED_CREATING_ELEMTMPL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CHARS_NOT_ALLOWED, "ER_CHARS_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ATTR_NOT_ALLOWED, "ER_ATTR_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_BAD_VALUE, "ER_BAD_VALUE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ATTRIB_VALUE_NOT_FOUND, "ER_ATTRIB_VALUE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ATTRIB_VALUE_NOT_RECOGNIZED, "ER_ATTRIB_VALUE_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NULL_URI_NAMESPACE, "ER_NULL_URI_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NUMBER_TOO_BIG, "ER_NUMBER_TOO_BIG"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANNOT_FIND_SAX1_DRIVER, "ER_CANNOT_FIND_SAX1_DRIVER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_SAX1_DRIVER_NOT_LOADED, "ER_SAX1_DRIVER_NOT_LOADED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_SAX1_DRIVER_NOT_INSTANTIATED, "ER_SAX1_DRIVER_NOT_INSTANTIATED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER, "ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PARSER_PROPERTY_NOT_SPECIFIED, "ER_PARSER_PROPERTY_NOT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PARSER_ARG_CANNOT_BE_NULL, "ER_PARSER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FEATURE, "ER_FEATURE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_PROPERTY, "ER_PROPERTY"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NULL_ENTITY_RESOLVER, "ER_NULL_ENTITY_RESOLVER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NULL_DTD_HANDLER, "ER_NULL_DTD_HANDLER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_DRIVER_NAME_SPECIFIED, "ER_NO_DRIVER_NAME_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_URL_SPECIFIED, "ER_NO_URL_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_ja::ER_POOLSIZE_LESS_THAN_ONE, "ER_POOLSIZE_LESS_THAN_ONE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_DRIVER_NAME, "ER_INVALID_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ERRORLISTENER, "ER_ERRORLISTENER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ASSERT_NO_TEMPLATE_PARENT, "ER_ASSERT_NO_TEMPLATE_PARENT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR, "ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NOT_ALLOWED_IN_POSITION, "ER_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION, "ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE, "ER_NAMESPACE_CONTEXT_NULL_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NAMESPACE_CONTEXT_NULL_PREFIX, "ER_NAMESPACE_CONTEXT_NULL_PREFIX"_s);
	$assignStatic(XSLTErrorResources_ja::ER_XPATH_RESOLVER_NULL_QNAME, "ER_XPATH_RESOLVER_NULL_QNAME"_s);
	$assignStatic(XSLTErrorResources_ja::ER_XPATH_RESOLVER_NEGATIVE_ARITY, "ER_XPATH_RESOLVER_NEGATIVE_ARITY"_s);
	$assignStatic(XSLTErrorResources_ja::INVALID_TCHAR, "INVALID_TCHAR"_s);
	$assignStatic(XSLTErrorResources_ja::INVALID_QNAME, "INVALID_QNAME"_s);
	$assignStatic(XSLTErrorResources_ja::INVALID_ENUM, "INVALID_ENUM"_s);
	$assignStatic(XSLTErrorResources_ja::INVALID_NMTOKEN, "INVALID_NMTOKEN"_s);
	$assignStatic(XSLTErrorResources_ja::INVALID_NCNAME, "INVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_ja::INVALID_BOOLEAN, "INVALID_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources_ja::INVALID_NUMBER, "INVALID_NUMBER"_s);
	$assignStatic(XSLTErrorResources_ja::ER_ARG_LITERAL, "ER_ARG_LITERAL"_s);
	$assignStatic(XSLTErrorResources_ja::ER_DUPLICATE_GLOBAL_VAR, "ER_DUPLICATE_GLOBAL_VAR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_DUPLICATE_VAR, "ER_DUPLICATE_VAR"_s);
	$assignStatic(XSLTErrorResources_ja::ER_TEMPLATE_NAME_MATCH, "ER_TEMPLATE_NAME_MATCH"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_PREFIX, "ER_INVALID_PREFIX"_s);
	$assignStatic(XSLTErrorResources_ja::ER_NO_ATTRIB_SET, "ER_NO_ATTRIB_SET"_s);
	$assignStatic(XSLTErrorResources_ja::ER_FUNCTION_NOT_FOUND, "ER_FUNCTION_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_ja::ER_CANT_HAVE_CONTENT_AND_SELECT, "ER_CANT_HAVE_CONTENT_AND_SELECT"_s);
	$assignStatic(XSLTErrorResources_ja::ER_INVALID_SET_PARAM_VALUE, "ER_INVALID_SET_PARAM_VALUE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_SET_FEATURE_NULL_NAME, "ER_SET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources_ja::ER_GET_FEATURE_NULL_NAME, "ER_GET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources_ja::ER_UNSUPPORTED_FEATURE, "ER_UNSUPPORTED_FEATURE"_s);
	$assignStatic(XSLTErrorResources_ja::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING, "ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING"_s);
	$assignStatic(XSLTErrorResources_ja::WG_FOUND_CURLYBRACE, "WG_FOUND_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources_ja::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR, "WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR"_s);
	$assignStatic(XSLTErrorResources_ja::WG_EXPR_ATTRIB_CHANGED_TO_SELECT, "WG_EXPR_ATTRIB_CHANGED_TO_SELECT"_s);
	$assignStatic(XSLTErrorResources_ja::WG_NO_LOCALE_IN_FORMATNUMBER, "WG_NO_LOCALE_IN_FORMATNUMBER"_s);
	$assignStatic(XSLTErrorResources_ja::WG_LOCALE_NOT_FOUND, "WG_LOCALE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_ja::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XSLTErrorResources_ja::WG_CANNOT_LOAD_REQUESTED_DOC, "WG_CANNOT_LOAD_REQUESTED_DOC"_s);
	$assignStatic(XSLTErrorResources_ja::WG_CANNOT_FIND_COLLATOR, "WG_CANNOT_FIND_COLLATOR"_s);
	$assignStatic(XSLTErrorResources_ja::WG_FUNCTIONS_SHOULD_USE_URL, "WG_FUNCTIONS_SHOULD_USE_URL"_s);
	$assignStatic(XSLTErrorResources_ja::WG_ENCODING_NOT_SUPPORTED_USING_UTF8, "WG_ENCODING_NOT_SUPPORTED_USING_UTF8"_s);
	$assignStatic(XSLTErrorResources_ja::WG_ENCODING_NOT_SUPPORTED_USING_JAVA, "WG_ENCODING_NOT_SUPPORTED_USING_JAVA"_s);
	$assignStatic(XSLTErrorResources_ja::WG_SPECIFICITY_CONFLICTS, "WG_SPECIFICITY_CONFLICTS"_s);
	$assignStatic(XSLTErrorResources_ja::WG_PARSING_AND_PREPARING, "WG_PARSING_AND_PREPARING"_s);
	$assignStatic(XSLTErrorResources_ja::WG_ATTR_TEMPLATE, "WG_ATTR_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_ja::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE, "WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESP"_s);
	$assignStatic(XSLTErrorResources_ja::WG_ATTRIB_NOT_HANDLED, "WG_ATTRIB_NOT_HANDLED"_s);
	$assignStatic(XSLTErrorResources_ja::WG_NO_DECIMALFORMAT_DECLARATION, "WG_NO_DECIMALFORMAT_DECLARATION"_s);
	$assignStatic(XSLTErrorResources_ja::WG_OLD_XSLT_NS, "WG_OLD_XSLT_NS"_s);
	$assignStatic(XSLTErrorResources_ja::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED, "WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_ja::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE, "WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE"_s);
	$assignStatic(XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE, "WG_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources_ja::WG_COULD_NOT_RESOLVE_PREFIX, "WG_COULD_NOT_RESOLVE_PREFIX"_s);
	$assignStatic(XSLTErrorResources_ja::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB, "WG_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE_NAME, "WG_ILLEGAL_ATTRIBUTE_NAME"_s);
	$assignStatic(XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE_VALUE, "WG_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources_ja::WG_EMPTY_SECOND_ARG, "WG_EMPTY_SECOND_ARG"_s);
	$assignStatic(XSLTErrorResources_ja::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources_ja::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_ja::WG_ILLEGAL_ATTRIBUTE_POSITION, "WG_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XSLTErrorResources_ja::NO_MODIFICATION_ALLOWED_ERR, "NO_MODIFICATION_ALLOWED_ERR"_s);
	$assignStatic(XSLTErrorResources_ja::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XSLTErrorResources_ja::FORMAT_FAILED, "FORMAT_FAILED"_s);
}

$Class* XSLTErrorResources_ja::load$($String* name, bool initialize) {
	$loadClass(XSLTErrorResources_ja, name, initialize, &_XSLTErrorResources_ja_ClassInfo_, clinit$XSLTErrorResources_ja, allocate$XSLTErrorResources_ja);
	return class$;
}

$Class* XSLTErrorResources_ja::class$ = nullptr;

						} // res
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com