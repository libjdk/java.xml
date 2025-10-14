#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources_zh_TW.h>

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
#undef ERROR_HEADER
#undef ERROR_RESOURCES
#undef ERROR_STRING
#undef ER_ARG_CANNOT_BE_NULL
#undef ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_AXES_NOT_ALLOWED
#undef ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL
#undef ER_CANNOT_CALL_SETSHOULDCACHENODE
#undef ER_CANNOT_CREATE_URL
#undef ER_CANNOT_DEAL_XPATH_TYPE
#undef ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL
#undef ER_CANT_CONVERT_TO_BOOLEAN
#undef ER_CANT_CONVERT_TO_MUTABLENODELIST
#undef ER_CANT_CONVERT_TO_NODELIST
#undef ER_CANT_CONVERT_TO_NUMBER
#undef ER_CANT_CONVERT_TO_SINGLENODE
#undef ER_CANT_CONVERT_TO_STRING
#undef ER_CANT_CONVERT_TO_TYPE
#undef ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER
#undef ER_CANT_GET_SNAPSHOT_LENGTH
#undef ER_CONTEXT_CAN_NOT_BE_NULL
#undef ER_CONTEXT_HAS_NO_OWNERDOC
#undef ER_COULDNOT_BE_FORMATTED_TO_NUMBER
#undef ER_COULDNOT_CREATE_XMLPROCESSORLIAISON
#undef ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH
#undef ER_COULDNOT_FIND_FUNCTION
#undef ER_COULDNOT_GET_VAR_NAMED
#undef ER_COULD_NOT_FIND_VAR
#undef ER_COUNT_TAKES_1_ARG
#undef ER_CURRENT_NOT_ALLOWED_IN_MATCH
#undef ER_CURRENT_TAKES_NO_ARGS
#undef ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_DIDNOT_FIND_XPATH_SELECT_EXP
#undef ER_DOCUMENT_REPLACED
#undef ER_DOC_MUTATED
#undef ER_DTM_CANNOT_HANDLE_NODES
#undef ER_EMPTY_EXPRESSION
#undef ER_EMPTY_XPATH_RESULT
#undef ER_ERROR_OCCURED
#undef ER_EXPECTED_BUT_FOUND
#undef ER_EXPECTED_DOUBLE_QUOTE
#undef ER_EXPECTED_LOC_PATH
#undef ER_EXPECTED_LOC_PATH_AT_END_EXPR
#undef ER_EXPECTED_LOC_STEP
#undef ER_EXPECTED_MATCH_PATTERN
#undef ER_EXPECTED_NODE_TEST
#undef ER_EXPECTED_REL_LOC_PATH
#undef ER_EXPECTED_REL_PATH_PATTERN
#undef ER_EXPECTED_SINGLE_QUOTE
#undef ER_EXPECTED_STEP_PATTERN
#undef ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED
#undef ER_EXTRA_ILLEGAL_TOKENS
#undef ER_FASTSTRINGBUFFER_CANNOT_BE_NULL
#undef ER_FEATURE_NAME_NULL
#undef ER_FEATURE_UNKNOWN
#undef ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG
#undef ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG
#undef ER_FSB_CANNOT_TAKE_STRING
#undef ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS
#undef ER_FUNCTION_TOKEN_NOT_FOUND
#undef ER_GETTING_NULL_FEATURE
#undef ER_GETTING_UNKNOWN_FEATURE
#undef ER_IGNORABLE_WHITESPACE_NOT_HANDLED
#undef ER_ILLEGAL_AXIS_NAME
#undef ER_ILLEGAL_VARIABLE_REFERENCE
#undef ER_INCOMPATIBLE_TYPES
#undef ER_INCORRECT_ARG_LENGTH
#undef ER_INCORRECT_PROGRAMMER_ASSERTION
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_INVALID_XPATH_TYPE
#undef ER_KEY_HAS_TOO_MANY_ARGS
#undef ER_LOCALNAME_HAS_TOO_MANY_ARGS
#undef ER_NAMESPACEAXIS_NOT_IMPLEMENTED
#undef ER_NAMESPACEURI_HAS_TOO_MANY_ARGS
#undef ER_NAME_HAS_TOO_MANY_ARGS
#undef ER_NODESETDTM_CANNOT_INDEX
#undef ER_NODESETDTM_CANNOT_ITERATE
#undef ER_NODESETDTM_NOT_MUTABLE
#undef ER_NODESET_CANNOT_INDEX
#undef ER_NODESET_CANNOT_ITERATE
#undef ER_NODESET_NOT_MUTABLE
#undef ER_NON_ITERATOR_TYPE
#undef ER_NON_SNAPSHOT_TYPE
#undef ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS
#undef ER_NULL_ERROR_HANDLER
#undef ER_NULL_RESOLVER
#undef ER_NULL_XPATH_FUNCTION_RESOLVER
#undef ER_NULL_XPATH_VARIABLE_RESOLVER
#undef ER_NUMBER_HAS_TOO_MANY_ARGS
#undef ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_OBJECT_MODEL_EMPTY
#undef ER_OBJECT_MODEL_NULL
#undef ER_OIERROR
#undef ER_ONLY_ALLOWS
#undef ER_PARSE_NOT_SUPPORTED
#undef ER_PATTERN_LITERAL_NEEDS_BE_QUOTED
#undef ER_PREDICATE_ILLEGAL_SYNTAX
#undef ER_PREFIX_MUST_RESOLVE
#undef ER_PROBLEM_IN_DTM_NEXTSIBLING
#undef ER_PROG_ASSERT_UNKNOWN_OPCODE
#undef ER_RESOLVE_VARIABLE_RETURNS_NULL
#undef ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_SAX_API_NOT_HANDLED
#undef ER_SECUREPROCESSING_FEATURE
#undef ER_SETDOMFACTORY_NOT_SUPPORTED
#undef ER_SETTING_WALKER_ROOT_TO_NULL
#undef ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL
#undef ER_STRINGLENGTH_HAS_TOO_MANY_ARGS
#undef ER_STRING_HAS_TOO_MANY_ARGS
#undef ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_TRANSLATE_TAKES_3_ARGS
#undef ER_TWO_OR_THREE
#undef ER_UNKNOWN_AXIS
#undef ER_UNKNOWN_MATCH_OPERATION
#undef ER_UNKNOWN_NODETYPE
#undef ER_UNKNOWN_OPCODE
#undef ER_UNKNOWN_STEP
#undef ER_UNPARSEDENTITYURI_TAKES_1_ARG
#undef ER_UNSUPPORTED_ENCODING
#undef ER_UNSUPPORTED_RETURN_TYPE
#undef ER_VARIABLE_ACCESSED_BEFORE_BIND
#undef ER_VAR_NOT_RESOLVABLE
#undef ER_WRONG_DOCUMENT
#undef ER_WRONG_NODETYPE
#undef ER_XERCES_CANNOT_HANDLE_NODES
#undef ER_XERCES_PARSE_ERROR
#undef ER_XERCES_PARSE_ERROR_DETAILS
#undef ER_XPATH_ERROR
#undef ER_XPATH_READOBJECT
#undef ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING
#undef ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_ZERO_OR_ONE
#undef FORMAT_FAILED
#undef QUERY_HEADER
#undef WARNING_HEADER
#undef WG_CANNOT_MAKE_URL_FROM
#undef WG_COULDNOT_FIND_FUNCTION
#undef WG_DONT_DO_ANYTHING_WITH_NS
#undef WG_EXPAND_ENTITIES_NOT_SUPPORTED
#undef WG_FUNCTION_TOKEN_NOT_FOUND
#undef WG_ILLEGAL_VARIABLE_REFERENCE
#undef WG_LOCALE_NAME_NOT_HANDLED
#undef WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST
#undef WG_PROPERTY_NOT_SUPPORTED
#undef WG_QUO_NO_LONGER_DEFINED
#undef WG_SECURITY_EXCEPTION
#undef WG_UNSUPPORTED_ENCODING
#undef XML_HEADER
#undef XSL_HEADER

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace res {

$FieldInfo _XPATHErrorResources_zh_TW_FieldInfo_[] = {
	{"ERROR0000", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ERROR0000)},
	{"ER_CURRENT_NOT_ALLOWED_IN_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CURRENT_NOT_ALLOWED_IN_MATCH)},
	{"ER_CURRENT_TAKES_NO_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CURRENT_TAKES_NO_ARGS)},
	{"ER_DOCUMENT_REPLACED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_DOCUMENT_REPLACED)},
	{"ER_CONTEXT_CAN_NOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CONTEXT_CAN_NOT_BE_NULL)},
	{"ER_CONTEXT_HAS_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CONTEXT_HAS_NO_OWNERDOC)},
	{"ER_LOCALNAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_LOCALNAME_HAS_TOO_MANY_ARGS)},
	{"ER_NAMESPACEURI_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NAMESPACEURI_HAS_TOO_MANY_ARGS)},
	{"ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS)},
	{"ER_NUMBER_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NUMBER_HAS_TOO_MANY_ARGS)},
	{"ER_NAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NAME_HAS_TOO_MANY_ARGS)},
	{"ER_STRING_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_STRING_HAS_TOO_MANY_ARGS)},
	{"ER_STRINGLENGTH_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_STRINGLENGTH_HAS_TOO_MANY_ARGS)},
	{"ER_TRANSLATE_TAKES_3_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_TRANSLATE_TAKES_3_ARGS)},
	{"ER_UNPARSEDENTITYURI_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_UNPARSEDENTITYURI_TAKES_1_ARG)},
	{"ER_NAMESPACEAXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NAMESPACEAXIS_NOT_IMPLEMENTED)},
	{"ER_UNKNOWN_AXIS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_UNKNOWN_AXIS)},
	{"ER_UNKNOWN_MATCH_OPERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_UNKNOWN_MATCH_OPERATION)},
	{"ER_INCORRECT_ARG_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_INCORRECT_ARG_LENGTH)},
	{"ER_CANT_CONVERT_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANT_CONVERT_TO_NUMBER)},
	{"ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER)},
	{"ER_CANT_CONVERT_TO_NODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANT_CONVERT_TO_NODELIST)},
	{"ER_CANT_CONVERT_TO_MUTABLENODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANT_CONVERT_TO_MUTABLENODELIST)},
	{"ER_CANT_CONVERT_TO_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANT_CONVERT_TO_TYPE)},
	{"ER_EXPECTED_MATCH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_MATCH_PATTERN)},
	{"ER_COULDNOT_GET_VAR_NAMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_COULDNOT_GET_VAR_NAMED)},
	{"ER_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_UNKNOWN_OPCODE)},
	{"ER_EXTRA_ILLEGAL_TOKENS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXTRA_ILLEGAL_TOKENS)},
	{"ER_EXPECTED_DOUBLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_DOUBLE_QUOTE)},
	{"ER_EXPECTED_SINGLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_SINGLE_QUOTE)},
	{"ER_EMPTY_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EMPTY_EXPRESSION)},
	{"ER_EXPECTED_BUT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_BUT_FOUND)},
	{"ER_INCORRECT_PROGRAMMER_ASSERTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_INCORRECT_PROGRAMMER_ASSERTION)},
	{"ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL)},
	{"ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG)},
	{"ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG)},
	{"ER_PREDICATE_ILLEGAL_SYNTAX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_PREDICATE_ILLEGAL_SYNTAX)},
	{"ER_ILLEGAL_AXIS_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_ILLEGAL_AXIS_NAME)},
	{"ER_UNKNOWN_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_UNKNOWN_NODETYPE)},
	{"ER_PATTERN_LITERAL_NEEDS_BE_QUOTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_PATTERN_LITERAL_NEEDS_BE_QUOTED)},
	{"ER_COULDNOT_BE_FORMATTED_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_COULDNOT_BE_FORMATTED_TO_NUMBER)},
	{"ER_COULDNOT_CREATE_XMLPROCESSORLIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_COULDNOT_CREATE_XMLPROCESSORLIAISON)},
	{"ER_DIDNOT_FIND_XPATH_SELECT_EXP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_DIDNOT_FIND_XPATH_SELECT_EXP)},
	{"ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH)},
	{"ER_ERROR_OCCURED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_ERROR_OCCURED)},
	{"ER_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_ILLEGAL_VARIABLE_REFERENCE)},
	{"ER_AXES_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_AXES_NOT_ALLOWED)},
	{"ER_KEY_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_KEY_HAS_TOO_MANY_ARGS)},
	{"ER_COUNT_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_COUNT_TAKES_1_ARG)},
	{"ER_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_COULDNOT_FIND_FUNCTION)},
	{"ER_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_UNSUPPORTED_ENCODING)},
	{"ER_PROBLEM_IN_DTM_NEXTSIBLING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_PROBLEM_IN_DTM_NEXTSIBLING)},
	{"ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL)},
	{"ER_SETDOMFACTORY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_SETDOMFACTORY_NOT_SUPPORTED)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_PREFIX_MUST_RESOLVE)},
	{"ER_PARSE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_PARSE_NOT_SUPPORTED)},
	{"ER_SAX_API_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_SAX_API_NOT_HANDLED)},
	{"ER_IGNORABLE_WHITESPACE_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_IGNORABLE_WHITESPACE_NOT_HANDLED)},
	{"ER_DTM_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_DTM_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_XERCES_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_PARSE_ERROR_DETAILS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_XERCES_PARSE_ERROR_DETAILS)},
	{"ER_XERCES_PARSE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_XERCES_PARSE_ERROR)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_OIERROR)},
	{"ER_CANNOT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANNOT_CREATE_URL)},
	{"ER_XPATH_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_XPATH_READOBJECT)},
	{"ER_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_FUNCTION_TOKEN_NOT_FOUND)},
	{"ER_CANNOT_DEAL_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANNOT_DEAL_XPATH_TYPE)},
	{"ER_NODESET_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NODESET_NOT_MUTABLE)},
	{"ER_NODESETDTM_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NODESETDTM_NOT_MUTABLE)},
	{"ER_VAR_NOT_RESOLVABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_VAR_NOT_RESOLVABLE)},
	{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NULL_ERROR_HANDLER)},
	{"ER_PROG_ASSERT_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_PROG_ASSERT_UNKNOWN_OPCODE)},
	{"ER_ZERO_OR_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_ZERO_OR_ONE)},
	{"ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS)},
	{"ER_COULD_NOT_FIND_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_COULD_NOT_FIND_VAR)},
	{"ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING)},
	{"ER_FASTSTRINGBUFFER_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_FASTSTRINGBUFFER_CANNOT_BE_NULL)},
	{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_TWO_OR_THREE)},
	{"ER_VARIABLE_ACCESSED_BEFORE_BIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_VARIABLE_ACCESSED_BEFORE_BIND)},
	{"ER_FSB_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_FSB_CANNOT_TAKE_STRING)},
	{"ER_SETTING_WALKER_ROOT_TO_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_SETTING_WALKER_ROOT_TO_NULL)},
	{"ER_NODESETDTM_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NODESETDTM_CANNOT_ITERATE)},
	{"ER_NODESET_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NODESET_CANNOT_ITERATE)},
	{"ER_NODESETDTM_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NODESETDTM_CANNOT_INDEX)},
	{"ER_NODESET_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NODESET_CANNOT_INDEX)},
	{"ER_CANNOT_CALL_SETSHOULDCACHENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANNOT_CALL_SETSHOULDCACHENODE)},
	{"ER_ONLY_ALLOWS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_ONLY_ALLOWS)},
	{"ER_UNKNOWN_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_UNKNOWN_STEP)},
	{"ER_EXPECTED_REL_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_REL_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH_AT_END_EXPR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_LOC_PATH_AT_END_EXPR)},
	{"ER_EXPECTED_LOC_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_LOC_STEP)},
	{"ER_EXPECTED_NODE_TEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_NODE_TEST)},
	{"ER_EXPECTED_STEP_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_STEP_PATTERN)},
	{"ER_EXPECTED_REL_PATH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXPECTED_REL_PATH_PATTERN)},
	{"ER_CANT_CONVERT_TO_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANT_CONVERT_TO_BOOLEAN)},
	{"ER_CANT_CONVERT_TO_SINGLENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANT_CONVERT_TO_SINGLENODE)},
	{"ER_CANT_GET_SNAPSHOT_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANT_GET_SNAPSHOT_LENGTH)},
	{"ER_NON_ITERATOR_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NON_ITERATOR_TYPE)},
	{"ER_DOC_MUTATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_DOC_MUTATED)},
	{"ER_INVALID_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_INVALID_XPATH_TYPE)},
	{"ER_EMPTY_XPATH_RESULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EMPTY_XPATH_RESULT)},
	{"ER_INCOMPATIBLE_TYPES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_INCOMPATIBLE_TYPES)},
	{"ER_NULL_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NULL_RESOLVER)},
	{"ER_CANT_CONVERT_TO_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_CANT_CONVERT_TO_STRING)},
	{"ER_NON_SNAPSHOT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NON_SNAPSHOT_TYPE)},
	{"ER_WRONG_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_WRONG_DOCUMENT)},
	{"ER_WRONG_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_WRONG_NODETYPE)},
	{"ER_XPATH_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_XPATH_ERROR)},
	{"ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED)},
	{"ER_RESOLVE_VARIABLE_RETURNS_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_RESOLVE_VARIABLE_RETURNS_NULL)},
	{"ER_UNSUPPORTED_RETURN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_UNSUPPORTED_RETURN_TYPE)},
	{"ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL)},
	{"ER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_ARG_CANNOT_BE_NULL)},
	{"ER_OBJECT_MODEL_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_OBJECT_MODEL_NULL)},
	{"ER_OBJECT_MODEL_EMPTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_OBJECT_MODEL_EMPTY)},
	{"ER_FEATURE_NAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_FEATURE_NAME_NULL)},
	{"ER_FEATURE_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_FEATURE_UNKNOWN)},
	{"ER_GETTING_NULL_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_GETTING_NULL_FEATURE)},
	{"ER_GETTING_UNKNOWN_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_GETTING_UNKNOWN_FEATURE)},
	{"ER_SECUREPROCESSING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_SECUREPROCESSING_FEATURE)},
	{"ER_NULL_XPATH_FUNCTION_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NULL_XPATH_FUNCTION_RESOLVER)},
	{"ER_NULL_XPATH_VARIABLE_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NULL_XPATH_VARIABLE_RESOLVER)},
	{"WG_LOCALE_NAME_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_LOCALE_NAME_NOT_HANDLED)},
	{"WG_PROPERTY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_PROPERTY_NOT_SUPPORTED)},
	{"WG_DONT_DO_ANYTHING_WITH_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_DONT_DO_ANYTHING_WITH_NS)},
	{"WG_SECURITY_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_SECURITY_EXCEPTION)},
	{"WG_QUO_NO_LONGER_DEFINED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_QUO_NO_LONGER_DEFINED)},
	{"WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST)},
	{"WG_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_FUNCTION_TOKEN_NOT_FOUND)},
	{"WG_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_COULDNOT_FIND_FUNCTION)},
	{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_CANNOT_MAKE_URL_FROM)},
	{"WG_EXPAND_ENTITIES_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_EXPAND_ENTITIES_NOT_SUPPORTED)},
	{"WG_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_ILLEGAL_VARIABLE_REFERENCE)},
	{"WG_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WG_UNSUPPORTED_ENCODING)},
	{"ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, _contents)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, FORMAT_FAILED)},
	{"ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ERROR_RESOURCES)},
	{"ERROR_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ERROR_STRING)},
	{"ERROR_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, ERROR_HEADER)},
	{"WARNING_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, WARNING_HEADER)},
	{"XSL_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, XSL_HEADER)},
	{"XML_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, XML_HEADER)},
	{"QUERY_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_zh_TW, QUERY_HEADER)},
	{}
};

$MethodInfo _XPATHErrorResources_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPATHErrorResources_zh_TW::*)()>(&XPATHErrorResources_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPATHErrorResources_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.res.XPATHErrorResources_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	_XPATHErrorResources_zh_TW_FieldInfo_,
	_XPATHErrorResources_zh_TW_MethodInfo_
};

$Object* allocate$XPATHErrorResources_zh_TW($Class* clazz) {
	return $of($alloc(XPATHErrorResources_zh_TW));
}

$String* XPATHErrorResources_zh_TW::ERROR0000 = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CURRENT_NOT_ALLOWED_IN_MATCH = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CURRENT_TAKES_NO_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_DOCUMENT_REPLACED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CONTEXT_CAN_NOT_BE_NULL = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CONTEXT_HAS_NO_OWNERDOC = nullptr;
$String* XPATHErrorResources_zh_TW::ER_LOCALNAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NUMBER_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_STRING_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_TRANSLATE_TAKES_3_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_UNPARSEDENTITYURI_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NAMESPACEAXIS_NOT_IMPLEMENTED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_UNKNOWN_AXIS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_UNKNOWN_MATCH_OPERATION = nullptr;
$String* XPATHErrorResources_zh_TW::ER_INCORRECT_ARG_LENGTH = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_NUMBER = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_NODELIST = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_MUTABLENODELIST = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_TYPE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_EXPECTED_MATCH_PATTERN = nullptr;
$String* XPATHErrorResources_zh_TW::ER_COULDNOT_GET_VAR_NAMED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_UNKNOWN_OPCODE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_EXTRA_ILLEGAL_TOKENS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_EXPECTED_DOUBLE_QUOTE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_EXPECTED_SINGLE_QUOTE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_EMPTY_EXPRESSION = nullptr;
$String* XPATHErrorResources_zh_TW::ER_EXPECTED_BUT_FOUND = nullptr;
$String* XPATHErrorResources_zh_TW::ER_INCORRECT_PROGRAMMER_ASSERTION = nullptr;
$String* XPATHErrorResources_zh_TW::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL = nullptr;
$String* XPATHErrorResources_zh_TW::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG = nullptr;
$String* XPATHErrorResources_zh_TW::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG = nullptr;
$String* XPATHErrorResources_zh_TW::ER_PREDICATE_ILLEGAL_SYNTAX = nullptr;
$String* XPATHErrorResources_zh_TW::ER_ILLEGAL_AXIS_NAME = nullptr;
$String* XPATHErrorResources_zh_TW::ER_UNKNOWN_NODETYPE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_COULDNOT_BE_FORMATTED_TO_NUMBER = nullptr;
$String* XPATHErrorResources_zh_TW::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON = nullptr;
$String* XPATHErrorResources_zh_TW::ER_DIDNOT_FIND_XPATH_SELECT_EXP = nullptr;
$String* XPATHErrorResources_zh_TW::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH = nullptr;
$String* XPATHErrorResources_zh_TW::ER_ERROR_OCCURED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_AXES_NOT_ALLOWED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_KEY_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_COUNT_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_zh_TW::ER_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_zh_TW::ER_UNSUPPORTED_ENCODING = nullptr;
$String* XPATHErrorResources_zh_TW::ER_PROBLEM_IN_DTM_NEXTSIBLING = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL = nullptr;
$String* XPATHErrorResources_zh_TW::ER_SETDOMFACTORY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_PARSE_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_SAX_API_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_IGNORABLE_WHITESPACE_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_DTM_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_zh_TW::ER_XERCES_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_zh_TW::ER_XERCES_PARSE_ERROR_DETAILS = nullptr;
$String* XPATHErrorResources_zh_TW::ER_XERCES_PARSE_ERROR = nullptr;
$String* XPATHErrorResources_zh_TW::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_OIERROR = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CANNOT_CREATE_URL = nullptr;
$String* XPATHErrorResources_zh_TW::ER_XPATH_READOBJECT = nullptr;
$String* XPATHErrorResources_zh_TW::ER_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CANNOT_DEAL_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NODESET_NOT_MUTABLE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NODESETDTM_NOT_MUTABLE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_VAR_NOT_RESOLVABLE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_NULL_ERROR_HANDLER = nullptr;

$String* XPATHErrorResources_zh_TW::ER_PROG_ASSERT_UNKNOWN_OPCODE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_ZERO_OR_ONE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_zh_TW::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_zh_TW::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS = nullptr;

$String* XPATHErrorResources_zh_TW::ER_COULD_NOT_FIND_VAR = nullptr;

$String* XPATHErrorResources_zh_TW::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING = nullptr;

$String* XPATHErrorResources_zh_TW::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL = nullptr;

$String* XPATHErrorResources_zh_TW::ER_TWO_OR_THREE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_VARIABLE_ACCESSED_BEFORE_BIND = nullptr;

$String* XPATHErrorResources_zh_TW::ER_FSB_CANNOT_TAKE_STRING = nullptr;

$String* XPATHErrorResources_zh_TW::ER_SETTING_WALKER_ROOT_TO_NULL = nullptr;

$String* XPATHErrorResources_zh_TW::ER_NODESETDTM_CANNOT_ITERATE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_NODESET_CANNOT_ITERATE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_NODESETDTM_CANNOT_INDEX = nullptr;

$String* XPATHErrorResources_zh_TW::ER_NODESET_CANNOT_INDEX = nullptr;

$String* XPATHErrorResources_zh_TW::ER_CANNOT_CALL_SETSHOULDCACHENODE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_ONLY_ALLOWS = nullptr;

$String* XPATHErrorResources_zh_TW::ER_UNKNOWN_STEP = nullptr;

$String* XPATHErrorResources_zh_TW::ER_EXPECTED_REL_LOC_PATH = nullptr;

$String* XPATHErrorResources_zh_TW::ER_EXPECTED_LOC_PATH = nullptr;
$String* XPATHErrorResources_zh_TW::ER_EXPECTED_LOC_PATH_AT_END_EXPR = nullptr;

$String* XPATHErrorResources_zh_TW::ER_EXPECTED_LOC_STEP = nullptr;

$String* XPATHErrorResources_zh_TW::ER_EXPECTED_NODE_TEST = nullptr;

$String* XPATHErrorResources_zh_TW::ER_EXPECTED_STEP_PATTERN = nullptr;

$String* XPATHErrorResources_zh_TW::ER_EXPECTED_REL_PATH_PATTERN = nullptr;

$String* XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_BOOLEAN = nullptr;

$String* XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_SINGLENODE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_CANT_GET_SNAPSHOT_LENGTH = nullptr;

$String* XPATHErrorResources_zh_TW::ER_NON_ITERATOR_TYPE = nullptr;

$String* XPATHErrorResources_zh_TW::ER_DOC_MUTATED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_INVALID_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_EMPTY_XPATH_RESULT = nullptr;
$String* XPATHErrorResources_zh_TW::ER_INCOMPATIBLE_TYPES = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NULL_RESOLVER = nullptr;
$String* XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_STRING = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NON_SNAPSHOT_TYPE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_WRONG_DOCUMENT = nullptr;

$String* XPATHErrorResources_zh_TW::ER_WRONG_NODETYPE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_XPATH_ERROR = nullptr;
$String* XPATHErrorResources_zh_TW::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED = nullptr;
$String* XPATHErrorResources_zh_TW::ER_RESOLVE_VARIABLE_RETURNS_NULL = nullptr;
$String* XPATHErrorResources_zh_TW::ER_UNSUPPORTED_RETURN_TYPE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_zh_TW::ER_ARG_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_zh_TW::ER_OBJECT_MODEL_NULL = nullptr;
$String* XPATHErrorResources_zh_TW::ER_OBJECT_MODEL_EMPTY = nullptr;
$String* XPATHErrorResources_zh_TW::ER_FEATURE_NAME_NULL = nullptr;
$String* XPATHErrorResources_zh_TW::ER_FEATURE_UNKNOWN = nullptr;
$String* XPATHErrorResources_zh_TW::ER_GETTING_NULL_FEATURE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_GETTING_UNKNOWN_FEATURE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_SECUREPROCESSING_FEATURE = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NULL_XPATH_FUNCTION_RESOLVER = nullptr;
$String* XPATHErrorResources_zh_TW::ER_NULL_XPATH_VARIABLE_RESOLVER = nullptr;
$String* XPATHErrorResources_zh_TW::WG_LOCALE_NAME_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_zh_TW::WG_PROPERTY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_zh_TW::WG_DONT_DO_ANYTHING_WITH_NS = nullptr;
$String* XPATHErrorResources_zh_TW::WG_SECURITY_EXCEPTION = nullptr;
$String* XPATHErrorResources_zh_TW::WG_QUO_NO_LONGER_DEFINED = nullptr;
$String* XPATHErrorResources_zh_TW::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST = nullptr;
$String* XPATHErrorResources_zh_TW::WG_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_zh_TW::WG_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_zh_TW::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XPATHErrorResources_zh_TW::WG_EXPAND_ENTITIES_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_zh_TW::WG_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_zh_TW::WG_UNSUPPORTED_ENCODING = nullptr;

$String* XPATHErrorResources_zh_TW::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_zh_TW::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_zh_TW::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_zh_TW::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$ObjectArray2* XPATHErrorResources_zh_TW::_contents = nullptr;

$String* XPATHErrorResources_zh_TW::BAD_CODE = nullptr;

$String* XPATHErrorResources_zh_TW::FORMAT_FAILED = nullptr;

$String* XPATHErrorResources_zh_TW::ERROR_RESOURCES = nullptr;

$String* XPATHErrorResources_zh_TW::ERROR_STRING = nullptr;

$String* XPATHErrorResources_zh_TW::ERROR_HEADER = nullptr;

$String* XPATHErrorResources_zh_TW::WARNING_HEADER = nullptr;

$String* XPATHErrorResources_zh_TW::XSL_HEADER = nullptr;

$String* XPATHErrorResources_zh_TW::XML_HEADER = nullptr;

$String* XPATHErrorResources_zh_TW::QUERY_HEADER = nullptr;

void XPATHErrorResources_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XPATHErrorResources_zh_TW::getContents() {
	return XPATHErrorResources_zh_TW::_contents;
}

void clinit$XPATHErrorResources_zh_TW($Class* class$) {
	$assignStatic(XPATHErrorResources_zh_TW::ERROR0000, "ERROR0000"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CURRENT_NOT_ALLOWED_IN_MATCH, "ER_CURRENT_NOT_ALLOWED_IN_MATCH"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CURRENT_TAKES_NO_ARGS, "ER_CURRENT_TAKES_NO_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_DOCUMENT_REPLACED, "ER_DOCUMENT_REPLACED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CONTEXT_CAN_NOT_BE_NULL, "ER_CONTEXT_CAN_NOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CONTEXT_HAS_NO_OWNERDOC, "ER_CONTEXT_HAS_NO_OWNERDOC"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_LOCALNAME_HAS_TOO_MANY_ARGS, "ER_LOCALNAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS, "ER_NAMESPACEURI_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS, "ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NUMBER_HAS_TOO_MANY_ARGS, "ER_NUMBER_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NAME_HAS_TOO_MANY_ARGS, "ER_NAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_STRING_HAS_TOO_MANY_ARGS, "ER_STRING_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS, "ER_STRINGLENGTH_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_TRANSLATE_TAKES_3_ARGS, "ER_TRANSLATE_TAKES_3_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_UNPARSEDENTITYURI_TAKES_1_ARG, "ER_UNPARSEDENTITYURI_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NAMESPACEAXIS_NOT_IMPLEMENTED, "ER_NAMESPACEAXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_UNKNOWN_AXIS, "ER_UNKNOWN_AXIS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_UNKNOWN_MATCH_OPERATION, "ER_UNKNOWN_MATCH_OPERATION"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_INCORRECT_ARG_LENGTH, "ER_INCORRECT_ARG_LENGTH"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_NUMBER, "ER_CANT_CONVERT_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER, "ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_NODELIST, "ER_CANT_CONVERT_TO_NODELIST"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_MUTABLENODELIST, "ER_CANT_CONVERT_TO_MUTABLENODELIST"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_TYPE, "ER_CANT_CONVERT_TO_TYPE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_MATCH_PATTERN, "ER_EXPECTED_MATCH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_COULDNOT_GET_VAR_NAMED, "ER_COULDNOT_GET_VAR_NAMED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_UNKNOWN_OPCODE, "ER_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXTRA_ILLEGAL_TOKENS, "ER_EXTRA_ILLEGAL_TOKENS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_DOUBLE_QUOTE, "ER_EXPECTED_DOUBLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_SINGLE_QUOTE, "ER_EXPECTED_SINGLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EMPTY_EXPRESSION, "ER_EMPTY_EXPRESSION"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_BUT_FOUND, "ER_EXPECTED_BUT_FOUND"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_INCORRECT_PROGRAMMER_ASSERTION, "ER_INCORRECT_PROGRAMMER_ASSERTION"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL, "ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG, "ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG, "ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_PREDICATE_ILLEGAL_SYNTAX, "ER_PREDICATE_ILLEGAL_SYNTAX"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_ILLEGAL_AXIS_NAME, "ER_ILLEGAL_AXIS_NAME"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_UNKNOWN_NODETYPE, "ER_UNKNOWN_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED, "ER_PATTERN_LITERAL_NEEDS_BE_QUOTED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_COULDNOT_BE_FORMATTED_TO_NUMBER, "ER_COULDNOT_BE_FORMATTED_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON, "ER_COULDNOT_CREATE_XMLPROCESSORLIAISON"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_DIDNOT_FIND_XPATH_SELECT_EXP, "ER_DIDNOT_FIND_XPATH_SELECT_EXP"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH, "ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_ERROR_OCCURED, "ER_ERROR_OCCURED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_ILLEGAL_VARIABLE_REFERENCE, "ER_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_AXES_NOT_ALLOWED, "ER_AXES_NOT_ALLOWED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_KEY_HAS_TOO_MANY_ARGS, "ER_KEY_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_COUNT_TAKES_1_ARG, "ER_COUNT_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_COULDNOT_FIND_FUNCTION, "ER_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_UNSUPPORTED_ENCODING, "ER_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_PROBLEM_IN_DTM_NEXTSIBLING, "ER_PROBLEM_IN_DTM_NEXTSIBLING"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL, "ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_SETDOMFACTORY_NOT_SUPPORTED, "ER_SETDOMFACTORY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_PARSE_NOT_SUPPORTED, "ER_PARSE_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_SAX_API_NOT_HANDLED, "ER_SAX_API_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_IGNORABLE_WHITESPACE_NOT_HANDLED, "ER_IGNORABLE_WHITESPACE_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_DTM_CANNOT_HANDLE_NODES, "ER_DTM_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_XERCES_CANNOT_HANDLE_NODES, "ER_XERCES_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_XERCES_PARSE_ERROR_DETAILS, "ER_XERCES_PARSE_ERROR_DETAILS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_XERCES_PARSE_ERROR, "ER_XERCES_PARSE_ERROR"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANNOT_CREATE_URL, "ER_CANNOT_CREATE_URL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_XPATH_READOBJECT, "ER_XPATH_READOBJECT"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_FUNCTION_TOKEN_NOT_FOUND, "ER_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANNOT_DEAL_XPATH_TYPE, "ER_CANNOT_DEAL_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NODESET_NOT_MUTABLE, "ER_NODESET_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NODESETDTM_NOT_MUTABLE, "ER_NODESETDTM_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_VAR_NOT_RESOLVABLE, "ER_VAR_NOT_RESOLVABLE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_PROG_ASSERT_UNKNOWN_OPCODE, "ER_PROG_ASSERT_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_ZERO_OR_ONE, "ER_ZERO_OR_ONE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS, "ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_COULD_NOT_FIND_VAR, "ER_COULD_NOT_FIND_VAR"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING, "ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL, "ER_FASTSTRINGBUFFER_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_VARIABLE_ACCESSED_BEFORE_BIND, "ER_VARIABLE_ACCESSED_BEFORE_BIND"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_FSB_CANNOT_TAKE_STRING, "ER_FSB_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_SETTING_WALKER_ROOT_TO_NULL, "ER_SETTING_WALKER_ROOT_TO_NULL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NODESETDTM_CANNOT_ITERATE, "ER_NODESETDTM_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NODESET_CANNOT_ITERATE, "ER_NODESET_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NODESETDTM_CANNOT_INDEX, "ER_NODESETDTM_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NODESET_CANNOT_INDEX, "ER_NODESET_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANNOT_CALL_SETSHOULDCACHENODE, "ER_CANNOT_CALL_SETSHOULDCACHENODE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_ONLY_ALLOWS, "ER_ONLY_ALLOWS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_UNKNOWN_STEP, "ER_UNKNOWN_STEP"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_REL_LOC_PATH, "ER_EXPECTED_REL_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_LOC_PATH, "ER_EXPECTED_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_LOC_PATH_AT_END_EXPR, "ER_EXPECTED_LOC_PATH_AT_END_EXPR"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_LOC_STEP, "ER_EXPECTED_LOC_STEP"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_NODE_TEST, "ER_EXPECTED_NODE_TEST"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_STEP_PATTERN, "ER_EXPECTED_STEP_PATTERN"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXPECTED_REL_PATH_PATTERN, "ER_EXPECTED_REL_PATH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_BOOLEAN, "ER_CANT_CONVERT_TO_BOOLEAN"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_SINGLENODE, "ER_CANT_CONVERT_TO_SINGLENODE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANT_GET_SNAPSHOT_LENGTH, "ER_CANT_GET_SNAPSHOT_LENGTH"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NON_ITERATOR_TYPE, "ER_NON_ITERATOR_TYPE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_DOC_MUTATED, "ER_DOC_MUTATED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_INVALID_XPATH_TYPE, "ER_INVALID_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EMPTY_XPATH_RESULT, "ER_EMPTY_XPATH_RESULT"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_INCOMPATIBLE_TYPES, "ER_INCOMPATIBLE_TYPES"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NULL_RESOLVER, "ER_NULL_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_STRING, "ER_CANT_CONVERT_TO_STRING"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NON_SNAPSHOT_TYPE, "ER_NON_SNAPSHOT_TYPE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_WRONG_DOCUMENT, "ER_WRONG_DOCUMENT"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_WRONG_NODETYPE, "ER_WRONG_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_XPATH_ERROR, "ER_XPATH_ERROR"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED, "ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_RESOLVE_VARIABLE_RETURNS_NULL, "ER_RESOLVE_VARIABLE_RETURNS_NULL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_UNSUPPORTED_RETURN_TYPE, "ER_UNSUPPORTED_RETURN_TYPE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL, "ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_ARG_CANNOT_BE_NULL, "ER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_OBJECT_MODEL_NULL, "ER_OBJECT_MODEL_NULL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_OBJECT_MODEL_EMPTY, "ER_OBJECT_MODEL_EMPTY"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_FEATURE_NAME_NULL, "ER_FEATURE_NAME_NULL"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_FEATURE_UNKNOWN, "ER_FEATURE_UNKNOWN"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_GETTING_NULL_FEATURE, "ER_GETTING_NULL_FEATURE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_GETTING_UNKNOWN_FEATURE, "ER_GETTING_UNKNOWN_FEATURE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_SECUREPROCESSING_FEATURE, "ER_SECUREPROCESSING_FEATURE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NULL_XPATH_FUNCTION_RESOLVER, "ER_NULL_XPATH_FUNCTION_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NULL_XPATH_VARIABLE_RESOLVER, "ER_NULL_XPATH_VARIABLE_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_LOCALE_NAME_NOT_HANDLED, "WG_LOCALE_NAME_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_PROPERTY_NOT_SUPPORTED, "WG_PROPERTY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_DONT_DO_ANYTHING_WITH_NS, "WG_DONT_DO_ANYTHING_WITH_NS"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_SECURITY_EXCEPTION, "WG_SECURITY_EXCEPTION"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_QUO_NO_LONGER_DEFINED, "WG_QUO_NO_LONGER_DEFINED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST, "WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_FUNCTION_TOKEN_NOT_FOUND, "WG_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_COULDNOT_FIND_FUNCTION, "WG_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_EXPAND_ENTITIES_NOT_SUPPORTED, "WG_EXPAND_ENTITIES_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_ILLEGAL_VARIABLE_REFERENCE, "WG_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::WG_UNSUPPORTED_ENCODING, "WG_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_zh_TW::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XPATHErrorResources_zh_TW::FORMAT_FAILED, "FORMAT_FAILED"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ERROR_RESOURCES, "com.sun.org.apache.xpath.internal.res.XPATHErrorResources"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ERROR_STRING, "#error"_s);
	$assignStatic(XPATHErrorResources_zh_TW::ERROR_HEADER, "Error: "_s);
	$assignStatic(XPATHErrorResources_zh_TW::WARNING_HEADER, "Warning: "_s);
	$assignStatic(XPATHErrorResources_zh_TW::XSL_HEADER, "XSL "_s);
	$assignStatic(XPATHErrorResources_zh_TW::XML_HEADER, "XML "_s);
	$assignStatic(XPATHErrorResources_zh_TW::QUERY_HEADER, "PATTERN "_s);
	$assignStatic(XPATHErrorResources_zh_TW::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ERROR0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CURRENT_NOT_ALLOWED_IN_MATCH),
			$of(u"\u914d\u5c0d\u6a23\u5f0f\u4e2d\u4e0d\u5141\u8a31 current() \u51fd\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CURRENT_TAKES_NO_ARGS),
			$of(u"current() \u51fd\u6578\u4e0d\u63a5\u53d7\u5f15\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_DOCUMENT_REPLACED),
			$of(u"document() \u51fd\u6578\u5be6\u884c\u5df2\u7531 com.sun.org.apache.xalan.internal.xslt.FuncDocument \u53d6\u4ee3\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CONTEXT_CAN_NOT_BE_NULL),
			$of(u"\u5982\u679c\u4f5c\u696d\u8207\u76f8\u95dc\u8cc7\u8a0a\u74b0\u5883\u76f8\u4f9d\uff0c\u5247\u76f8\u95dc\u8cc7\u8a0a\u74b0\u5883\u4e0d\u53ef\u4ee5\u662f\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CONTEXT_HAS_NO_OWNERDOC),
			$of(u"\u76f8\u95dc\u8cc7\u8a0a\u74b0\u5883\u4e0d\u5177\u6709\u64c1\u6709\u8005\u6587\u4ef6\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_LOCALNAME_HAS_TOO_MANY_ARGS),
			$of(u"local-name() \u5177\u6709\u904e\u591a\u7684\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS),
			$of(u"namespace-uri() \u5177\u6709\u904e\u591a\u7684\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS),
			$of(u"normalize-space() \u5177\u6709\u904e\u591a\u7684\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NUMBER_HAS_TOO_MANY_ARGS),
			$of(u"number() \u5177\u6709\u904e\u591a\u7684\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NAME_HAS_TOO_MANY_ARGS),
			$of(u"name() \u5177\u6709\u904e\u591a\u7684\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_STRING_HAS_TOO_MANY_ARGS),
			$of(u"string() \u5177\u6709\u904e\u591a\u7684\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS),
			$of(u"string-length() \u5177\u6709\u904e\u591a\u7684\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_TRANSLATE_TAKES_3_ARGS),
			$of(u"translate() \u51fd\u6578\u63a5\u53d7\u4e09\u500b\u5f15\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_UNPARSEDENTITYURI_TAKES_1_ARG),
			$of(u"unparsed-entity-uri \u51fd\u6578\u61c9\u63a5\u53d7\u4e00\u500b\u5f15\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NAMESPACEAXIS_NOT_IMPLEMENTED),
			$of(u"\u5c1a\u672a\u5be6\u884c\u547d\u540d\u7a7a\u9593\u8ef8\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_UNKNOWN_AXIS),
			$of(u"\u4e0d\u660e\u7684\u8ef8: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_UNKNOWN_MATCH_OPERATION),
			$of(u"\u4e0d\u660e\u7684\u914d\u5c0d\u4f5c\u696d\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_INCORRECT_ARG_LENGTH),
			$of(u"processing-instruction() \u7bc0\u9ede\u7684\u5f15\u6578\u9577\u5ea6\u4e0d\u6b63\u78ba\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_NUMBER),
			$of(u"\u7121\u6cd5\u8f49\u63db {0} \u70ba\u6578\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_NODELIST),
			$of(u"\u7121\u6cd5\u8f49\u63db {0} \u70ba NodeList\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_MUTABLENODELIST),
			$of(u"\u7121\u6cd5\u8f49\u63db {0} \u70ba NodeSetDTM\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_TYPE),
			$of(u"\u7121\u6cd5\u8f49\u63db {0} \u70ba type#{1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_MATCH_PATTERN),
			$of(u"\u5728 getMatchScore \u4e2d\u9810\u671f\u914d\u5c0d\u6a23\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_COULDNOT_GET_VAR_NAMED),
			$of(u"\u7121\u6cd5\u53d6\u5f97\u540d\u7a31\u70ba {0} \u7684\u8b8a\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_UNKNOWN_OPCODE),
			$of(u"\u932f\u8aa4\uff01\u4e0d\u660e\u7684\u4f5c\u696d\u4ee3\u78bc: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXTRA_ILLEGAL_TOKENS),
			$of(u"\u984d\u5916\u7684\u7121\u6548\u8a18\u865f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_DOUBLE_QUOTE),
			$of(u"\u5f15\u865f\u932f\u8aa4\u7684\u6587\u5b57... \u9810\u671f\u96d9\u5f15\u865f\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_SINGLE_QUOTE),
			$of(u"\u5f15\u865f\u932f\u8aa4\u7684\u6587\u5b57... \u9810\u671f\u55ae\u5f15\u865f\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EMPTY_EXPRESSION),
			$of(u"\u7a7a\u767d\u8868\u793a\u5f0f\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_BUT_FOUND),
			$of(u"\u9810\u671f {0}\uff0c\u4f46\u627e\u5230: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_INCORRECT_PROGRAMMER_ASSERTION),
			$of(u"\u7a0b\u5f0f\u8a2d\u8a08\u4eba\u54e1\u5ba3\u544a\u4e0d\u6b63\u78ba\uff01- {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL),
			$of(u"\u6839\u64da 19990709 XPath \u8349\u6848\uff0cboolean(...) \u4e0d\u518d\u662f\u9078\u64c7\u6027\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG),
			$of(u"\u627e\u5230 \',\' \u4f46\u6c92\u6709\u5148\u524d\u7684\u5f15\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG),
			$of(u"\u627e\u5230 \',\' \u4f46\u6c92\u6709\u5f8c\u7e8c\u7684\u5f15\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_PREDICATE_ILLEGAL_SYNTAX),
			$of(u"\'..[predicate]\' \u6216 \'.[predicate]\' \u662f\u7121\u6548\u7684\u8a9e\u6cd5\u3002\u8acb\u6539\u7528 \'self::node()[predicate]\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_ILLEGAL_AXIS_NAME),
			$of(u"\u7121\u6548\u7684\u8ef8\u540d\u7a31: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_UNKNOWN_NODETYPE),
			$of(u"\u4e0d\u660e\u7684 nodetype: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED),
			$of(u"\u6a23\u5f0f\u6587\u5b57 ({0}) \u9700\u8981\u52a0\u4e0a\u5f15\u865f\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_COULDNOT_BE_FORMATTED_TO_NUMBER),
			$of(u"{0} \u7121\u6cd5\u683c\u5f0f\u5316\u70ba\u6578\u5b57\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON),
			$of(u"\u7121\u6cd5\u5efa\u7acb XML TransformerFactory Liaison: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_DIDNOT_FIND_XPATH_SELECT_EXP),
			$of(u"\u932f\u8aa4\uff01\u627e\u4e0d\u5230 xpath \u9078\u53d6\u8868\u793a\u5f0f (-select)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH),
			$of(u"\u932f\u8aa4\uff01\u5728 OP_LOCATIONPATH \u4e4b\u5f8c\u627e\u4e0d\u5230 ENDOP"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_ERROR_OCCURED),
			$of(u"\u767c\u751f\u932f\u8aa4\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_ILLEGAL_VARIABLE_REFERENCE),
			$of(u"\u70ba\u8b8a\u6578\u6307\u5b9a\u7684 VariableReference \u8d85\u51fa\u76f8\u95dc\u8cc7\u8a0a\u74b0\u5883\u6216\u6c92\u6709\u5b9a\u7fa9\uff01\u540d\u7a31 = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_AXES_NOT_ALLOWED),
			$of(u"\u914d\u5c0d\u6a23\u5f0f\u4e2d\u50c5\u5141\u8a31 child:: \u8207 attribute:: \u8ef8\uff01\u9055\u53cd\u7684\u8ef8 = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_KEY_HAS_TOO_MANY_ARGS),
			$of(u"key() \u5177\u6709\u4e0d\u6b63\u78ba\u7684\u5f15\u6578\u6578\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_COUNT_TAKES_1_ARG),
			$of(u"count \u51fd\u6578\u61c9\u63a5\u53d7\u4e00\u500b\u5f15\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_COULDNOT_FIND_FUNCTION),
			$of(u"\u627e\u4e0d\u5230\u51fd\u6578: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_UNSUPPORTED_ENCODING),
			$of(u"\u4e0d\u652f\u63f4\u7684\u7de8\u78bc: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_PROBLEM_IN_DTM_NEXTSIBLING),
			$of(u"\u5728 getNextSibling \u7684 DTM \u4e2d\u767c\u751f\u554f\u984c... \u6b63\u5728\u5617\u8a66\u5fa9\u539f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL),
			$of(u"\u7a0b\u5f0f\u8a2d\u8a08\u4eba\u54e1\u932f\u8aa4: \u7121\u6cd5\u5beb\u5165 EmptyNodeList\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_SETDOMFACTORY_NOT_SUPPORTED),
			$of(u"XPathContext \u4e0d\u652f\u63f4 setDOMFactory\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_PREFIX_MUST_RESOLVE),
			$of(u"\u524d\u7f6e\u78bc\u5fc5\u9808\u89e3\u6790\u70ba\u547d\u540d\u7a7a\u9593: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_PARSE_NOT_SUPPORTED),
			$of(u"XPathContext \u4e2d\u4e0d\u652f\u63f4 parse (InputSource \u4f86\u6e90)\u3002\u7121\u6cd5\u958b\u555f {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_SAX_API_NOT_HANDLED),
			$of(u"SAX API characters(char ch[]... \u4e26\u975e\u7531 DTM \u8655\u7406\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_IGNORABLE_WHITESPACE_NOT_HANDLED),
			$of(u"ignorableWhitespace(char ch[]... \u4e26\u975e\u7531 DTM \u8655\u7406\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_DTM_CANNOT_HANDLE_NODES),
			$of(u"DTMLiaison \u7121\u6cd5\u8655\u7406\u985e\u578b {0} \u7684\u63a7\u5236\u4ee3\u78bc\u7bc0\u9ede"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_XERCES_CANNOT_HANDLE_NODES),
			$of(u"DOM2Helper \u7121\u6cd5\u8655\u7406\u985e\u578b {0} \u7684\u63a7\u5236\u4ee3\u78bc\u7bc0\u9ede"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_XERCES_PARSE_ERROR_DETAILS),
			$of(u"DOM2Helper.parse \u932f\u8aa4: SystemID - {0} \u884c - {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_XERCES_PARSE_ERROR),
			$of(u"DOM2Helper.parse \u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u5075\u6e2c\u5230\u7121\u6548\u7684 UTF-16 \u4ee3\u7406: {0}\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_OIERROR),
			$of(u"IO \u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANNOT_CREATE_URL),
			$of(u"\u7121\u6cd5\u70ba {0} \u5efa\u7acb url"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_XPATH_READOBJECT),
			$of(u"\u5728 XPath.readObject \u4e2d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_FUNCTION_TOKEN_NOT_FOUND),
			$of(u"\u627e\u4e0d\u5230\u51fd\u6578\u8a18\u865f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANNOT_DEAL_XPATH_TYPE),
			$of(u"\u7121\u6cd5\u8655\u7406 XPath \u985e\u578b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NODESET_NOT_MUTABLE),
			$of(u"\u6b64 NodeSet \u4e0d\u53ef\u8b8a\u66f4"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NODESETDTM_NOT_MUTABLE),
			$of(u"\u6b64 NodeSetDTM \u4e0d\u53ef\u8b8a\u66f4"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_VAR_NOT_RESOLVABLE),
			$of(u"\u8b8a\u6578\u7121\u6cd5\u89e3\u6790: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NULL_ERROR_HANDLER),
			$of(u"\u7a7a\u503c\u932f\u8aa4\u8655\u7406\u7a0b\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_PROG_ASSERT_UNKNOWN_OPCODE),
			$of(u"\u7a0b\u5f0f\u8a2d\u8a08\u4eba\u54e1\u5ba3\u544a: \u4e0d\u660e\u7684 opcode: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_ZERO_OR_ONE),
			$of(u"0 \u6216 1"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper \u4e0d\u652f\u63f4 rtf()"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper \u4e0d\u652f\u63f4 asNodeIterator()"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper \u4e0d\u652f\u63f4 detach()"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper \u4e0d\u652f\u63f4 num()"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper \u4e0d\u652f\u63f4 xstr()"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper \u4e0d\u652f\u63f4 str()"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS),
			$of(u"XStringForChars \u4e0d\u652f\u63f4 fsb()"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_COULD_NOT_FIND_VAR),
			$of(u"\u627e\u4e0d\u5230\u540d\u7a31\u70ba {0} \u7684\u8b8a\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING),
			$of(u"XStringForChars \u7121\u6cd5\u63a5\u53d7\u5b57\u4e32\u4f5c\u70ba\u5f15\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL),
			$of(u"FastStringBuffer \u5f15\u6578\u4e0d\u53ef\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_TWO_OR_THREE),
			$of(u"2 \u6216 3"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_VARIABLE_ACCESSED_BEFORE_BIND),
			$of(u"\u8b8a\u6578\u9023\u7d50\u4e4b\u524d\u4fbf\u9032\u884c\u5b58\u53d6\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_FSB_CANNOT_TAKE_STRING),
			$of(u"XStringForFSB \u7121\u6cd5\u63a5\u53d7\u5b57\u4e32\u4f5c\u70ba\u5f15\u6578\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_SETTING_WALKER_ROOT_TO_NULL),
			$of(u"\n \u932f\u8aa4\uff01\u5c07\u8490\u96c6\u7a0b\u5f0f\u7684\u6839\u8a2d\u5b9a\u70ba\u7a7a\u503c\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NODESETDTM_CANNOT_ITERATE),
			$of(u"\u6b64 NodeSetDTM \u7121\u6cd5\u91cd\u8907\u5148\u524d\u7684\u7bc0\u9ede\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NODESET_CANNOT_ITERATE),
			$of(u"\u6b64 NodeSet \u7121\u6cd5\u91cd\u8907\u5148\u524d\u7684\u7bc0\u9ede\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NODESETDTM_CANNOT_INDEX),
			$of(u"\u6b64 NodeSetDTM \u7121\u6cd5\u57f7\u884c\u88fd\u4f5c\u7d22\u5f15\u6216\u8a08\u6578\u529f\u80fd\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NODESET_CANNOT_INDEX),
			$of(u"\u6b64 NodeSet \u7121\u6cd5\u57f7\u884c\u88fd\u4f5c\u7d22\u5f15\u6216\u8a08\u6578\u529f\u80fd\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANNOT_CALL_SETSHOULDCACHENODE),
			$of(u"\u547c\u53eb nextNode \u4e4b\u5f8c\uff0c\u7121\u6cd5\u547c\u53eb setShouldCacheNodes\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_ONLY_ALLOWS),
			$of(u"{0} \u50c5\u5141\u8a31 {1} \u500b\u5f15\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_UNKNOWN_STEP),
			$of(u"\u5728 getNextStepPos \u4e2d\u7a0b\u5f0f\u8a2d\u8a08\u4eba\u54e1\u7684\u5ba3\u544a: \u4e0d\u660e\u7684 stepType: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_REL_LOC_PATH),
			$of(u"\'/\' \u6216 \'//\' \u8a18\u865f\u4e4b\u5f8c\uff0c\u9810\u671f\u76f8\u5c0d\u4f4d\u7f6e\u8def\u5f91\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_LOC_PATH),
			$of(u"\u9810\u671f\u4f4d\u7f6e\u8def\u5f91\uff0c\u4f46\u51fa\u73fe\u4e0b\u5217\u8a18\u865f:  {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_LOC_PATH_AT_END_EXPR),
			$of(u"\u9810\u671f\u4f4d\u7f6e\u8def\u5f91\uff0c\u4f46\u51fa\u73fe XPath \u8868\u793a\u5f0f\u7684\u7d50\u5c3e\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_LOC_STEP),
			$of(u"\'/\' \u6216 \'//\' \u8a18\u865f\u4e4b\u5f8c\uff0c\u9810\u671f\u4f4d\u7f6e\u6b65\u9a5f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_NODE_TEST),
			$of(u"\u9810\u671f\u7b26\u5408 NCName:* \u6216 QName \u7684\u7bc0\u9ede\u6e2c\u8a66\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_STEP_PATTERN),
			$of(u"\u9810\u671f\u6b65\u9a5f\u6a23\u5f0f\uff0c\u4f46\u51fa\u73fe \'/\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXPECTED_REL_PATH_PATTERN),
			$of(u"\u9810\u671f\u76f8\u5c0d\u8def\u5f91\u6a23\u5f0f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_BOOLEAN),
			$of(u"XPath \u8868\u793a\u5f0f \'\'{0}\'\' \u7684 XPathResult \u5177\u6709 XPathResultType \u7684 {1}\uff0c\u5b83\u7121\u6cd5\u8f49\u63db\u70ba\u5e03\u6797\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_SINGLENODE),
			$of(u"XPath \u8868\u793a\u5f0f \'\'{0}\'\' \u7684 XPathResult \u5177\u6709 XPathResultType \u7684 {1}\uff0c\u5b83\u7121\u6cd5\u8f49\u63db\u70ba\u55ae\u4e00\u7bc0\u9ede\u3002\u65b9\u6cd5 getSingleNodeValue \u50c5\u9069\u7528\u65bc\u985e\u578b ANY_UNORDERED_NODE_TYPE \u8207 FIRST_ORDERED_NODE_TYPE\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANT_GET_SNAPSHOT_LENGTH),
			$of(u"\u7121\u6cd5\u5728 XPath \u8868\u793a\u5f0f \'\'{0}\'\' \u7684 XPathResult \u4e0a\u547c\u53eb\u65b9\u6cd5 getSnapshotLength\uff0c\u56e0\u70ba\u5b83\u7684 XPathResultType \u662f {1}\u3002\u6b64\u65b9\u6cd5\u50c5\u9069\u7528\u65bc\u985e\u578b UNORDERED_NODE_SNAPSHOT_TYPE \u8207 ORDERED_NODE_SNAPSHOT_TYPE\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NON_ITERATOR_TYPE),
			$of(u"\u7121\u6cd5\u5728 XPath \u8868\u793a\u5f0f \'\'{0}\'\' \u7684 XPathResult \u4e0a\u547c\u53eb\u65b9\u6cd5 iterateNext\uff0c\u56e0\u70ba\u5b83\u7684 XPathResultType \u662f {1}\u3002\u6b64\u65b9\u6cd5\u50c5\u9069\u7528\u65bc\u985e\u578b UNORDERED_NODE_ITERATOR_TYPE \u8207 ORDERED_NODE_ITERATOR_TYPE\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_DOC_MUTATED),
			$of(u"\u7d50\u679c\u50b3\u56de\u5f8c\u6587\u4ef6\u5df2\u8b8a\u66f4\u3002\u91cd\u8907\u7a0b\u5f0f\u7121\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_INVALID_XPATH_TYPE),
			$of(u"\u7121\u6548\u7684 XPath \u985e\u578b\u5f15\u6578: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EMPTY_XPATH_RESULT),
			$of(u"\u7a7a\u767d\u7684 XPath \u7d50\u679c\u7269\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_INCOMPATIBLE_TYPES),
			$of(u"XPath \u8868\u793a\u5f0f \'\'{0}\'\' \u7684 XPathResult \u5177\u6709 XPathResultType \u7684 {1}\uff0c\u5b83\u7121\u6cd5\u5f37\u5236\u8f49\u6210 {2} \u6307\u5b9a\u7684 XPathResultType\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NULL_RESOLVER),
			$of(u"\u7121\u6cd5\u4ee5\u7a7a\u503c\u524d\u7f6e\u78bc\u89e3\u6790\u5668\u4f86\u89e3\u6790\u524d\u7f6e\u78bc\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_TO_STRING),
			$of(u"XPath \u8868\u793a\u5f0f \'\'{0}\'\' \u7684 XPathResult \u5177\u6709 XPathResultType \u7684 {1}\uff0c\u5b83\u7121\u6cd5\u8f49\u63db\u70ba\u5b57\u4e32\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NON_SNAPSHOT_TYPE),
			$of(u"\u7121\u6cd5\u5728 XPath \u8868\u793a\u5f0f \'\'{0}\'\' \u7684 XPathResult \u4e0a\u547c\u53eb\u65b9\u6cd5 snapshotItem\uff0c\u56e0\u70ba\u5b83\u7684 XPathResultType \u662f {1}\u3002\u6b64\u65b9\u6cd5\u50c5\u9069\u7528\u65bc\u985e\u578b UNORDERED_NODE_SNAPSHOT_TYPE \u8207 ORDERED_NODE_SNAPSHOT_TYPE\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_WRONG_DOCUMENT),
			$of(u"\u76f8\u95dc\u8cc7\u8a0a\u74b0\u5883\u7bc0\u9ede\u4e0d\u5c6c\u65bc\u9023\u7d50\u81f3\u6b64 XPathEvaluator \u7684\u6587\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_WRONG_NODETYPE),
			$of(u"\u4e0d\u652f\u63f4\u76f8\u95dc\u8cc7\u8a0a\u74b0\u5883\u7bc0\u9ede\u985e\u578b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_XPATH_ERROR),
			$of(u"XPath \u767c\u751f\u4e0d\u660e\u7684\u932f\u8aa4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER),
			$of(u"XPath \u8868\u793a\u5f0f \'\'{0}\'\' \u7684 XPathResult \u5177\u6709 XPathResultType \u7684 {1}\uff0c\u5b83\u7121\u6cd5\u8f49\u63db\u70ba\u6578\u5b57\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED),
			$of(u"\u7576 XMLConstants.FEATURE_SECURE_PROCESSING \u529f\u80fd\u8a2d\u70ba\u771f\u6642\uff0c\u7121\u6cd5\u547c\u53eb\u64f4\u5145\u51fd\u6578: \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_RESOLVE_VARIABLE_RETURNS_NULL),
			$of(u"\u8b8a\u6578 {0} \u7684 resolveVariable \u50b3\u56de\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_UNSUPPORTED_RETURN_TYPE),
			$of(u"\u4e0d\u652f\u63f4\u7684\u50b3\u56de\u985e\u578b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of(u"\u4f86\u6e90\u548c (\u6216) \u50b3\u56de\u985e\u578b\u4e0d\u53ef\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of(u"\u4f86\u6e90\u548c (\u6216) \u50b3\u56de\u985e\u578b\u4e0d\u53ef\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_ARG_CANNOT_BE_NULL),
			$of(u"{0} \u5f15\u6578\u4e0d\u53ef\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_OBJECT_MODEL_NULL),
			$of(u"{0}#isObjectModelSupported( String objectModel ) \u7121\u6cd5\u4f7f\u7528 objectModel == null \u4f86\u547c\u53eb"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_OBJECT_MODEL_EMPTY),
			$of(u"{0}#isObjectModelSupported( String objectModel ) \u7121\u6cd5\u4f7f\u7528 objectModel == \"\" \u4f86\u547c\u53eb"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_FEATURE_NAME_NULL),
			$of(u"\u5617\u8a66\u4ee5\u7a7a\u503c\u540d\u7a31\u8a2d\u5b9a\u529f\u80fd: {0}#setFeature( null, {1})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_FEATURE_UNKNOWN),
			$of(u"\u5617\u8a66\u8a2d\u5b9a\u4e0d\u660e\u7684\u529f\u80fd \"{0}\":{1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_GETTING_NULL_FEATURE),
			$of(u"\u5617\u8a66\u4ee5\u7a7a\u503c\u540d\u7a31\u53d6\u5f97\u529f\u80fd: {0}#getFeature(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_GETTING_UNKNOWN_FEATURE),
			$of(u"\u5617\u8a66\u53d6\u5f97\u4e0d\u660e\u7684\u529f\u80fd \"{0}\":{1}#getFeature({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: \u5b89\u5168\u7ba1\u7406\u7a0b\u5f0f\u5b58\u5728\u6642\uff0c\u7121\u6cd5\u5c07\u529f\u80fd\u8a2d\u70ba\u507d: {1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NULL_XPATH_FUNCTION_RESOLVER),
			$of(u"\u5617\u8a66\u8a2d\u5b9a\u7a7a\u503c XPathFunctionResolver:{0}#setXPathFunctionResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::ER_NULL_XPATH_VARIABLE_RESOLVER),
			$of(u"\u5617\u8a66\u8a2d\u5b9a\u7a7a\u503c XPathVariableResolver:{0}#setXPathVariableResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_LOCALE_NAME_NOT_HANDLED),
			$of(u"\u5c1a\u672a\u8655\u7406 format-number \u51fd\u6578\u4e2d\u7684\u5730\u5340\u8a2d\u5b9a\u540d\u7a31\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_PROPERTY_NOT_SUPPORTED),
			$of(u"\u4e0d\u652f\u63f4 XSL \u5c6c\u6027: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_DONT_DO_ANYTHING_WITH_NS),
			$of(u"\u76ee\u524d\u4e0d\u6703\u8655\u7406\u5c6c\u6027\u4e2d\u7684\u547d\u540d\u7a7a\u9593 {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_SECURITY_EXCEPTION),
			$of(u"\u5617\u8a66\u5b58\u53d6 XSL \u7cfb\u7d71\u5c6c\u6027\u6642\u767c\u751f SecurityException: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_QUO_NO_LONGER_DEFINED),
			$of(u"\u820a\u8a9e\u6cd5: XPath \u4e2d\u4e0d\u518d\u5b9a\u7fa9 quo(...)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST),
			$of(u"XPath \u9700\u8981\u884d\u751f\u7684\u7269\u4ef6\u4f86\u5be6\u884c nodeTest\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_FUNCTION_TOKEN_NOT_FOUND),
			$of(u"\u627e\u4e0d\u5230\u51fd\u6578\u8a18\u865f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_COULDNOT_FIND_FUNCTION),
			$of(u"\u627e\u4e0d\u5230\u51fd\u6578: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_CANNOT_MAKE_URL_FROM),
			$of(u"\u7121\u6cd5\u5f9e {0} \u5efa\u7acb URL"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_EXPAND_ENTITIES_NOT_SUPPORTED),
			$of(u"DTM \u5256\u6790\u5668\u4e0d\u652f\u63f4 -E \u9078\u9805"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_ILLEGAL_VARIABLE_REFERENCE),
			$of(u"\u70ba\u8b8a\u6578\u6307\u5b9a\u7684 VariableReference \u8d85\u51fa\u76f8\u95dc\u8cc7\u8a0a\u74b0\u5883\u6216\u6c92\u6709\u5b9a\u7fa9\uff01\u540d\u7a31 = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_zh_TW::WG_UNSUPPORTED_ENCODING),
			$of(u"\u4e0d\u652f\u63f4\u7684\u7de8\u78bc: {0}"_s)
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
			$of("xpath_option"_s),
			$of(u"xpath \u9078\u9805: "_s)
		}),
		$$new($ObjectArray, {
			$of("optionIN"_s),
			$of("   [-in inputXMLURL]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionSelect"_s),
			$of(u"   [-select xpath \u8868\u793a\u5f0f]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionMatch"_s),
			$of(u"   [-match \u914d\u5c0d\u6a23\u5f0f (\u91dd\u5c0d\u914d\u5c0d\u8a3a\u65b7)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionAnyExpr"_s),
			$of(u"\u6216\u8005\uff0c\u53ea\u6709 xpath \u8868\u793a\u5f0f\u6642\u5c07\u9032\u884c\u8a3a\u65b7\u50be\u5370"_s)
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
			$of("gtone"_s),
			$of(">1"_s)
		}),
		$$new($ObjectArray, {
			$of("zero"_s),
			$of("0"_s)
		}),
		$$new($ObjectArray, {
			$of("one"_s),
			$of("1"_s)
		}),
		$$new($ObjectArray, {
			$of("two"_s),
			$of("2"_s)
		}),
		$$new($ObjectArray, {
			$of("three"_s),
			$of("3"_s)
		})
	}));
}

XPATHErrorResources_zh_TW::XPATHErrorResources_zh_TW() {
}

$Class* XPATHErrorResources_zh_TW::load$($String* name, bool initialize) {
	$loadClass(XPATHErrorResources_zh_TW, name, initialize, &_XPATHErrorResources_zh_TW_ClassInfo_, clinit$XPATHErrorResources_zh_TW, allocate$XPATHErrorResources_zh_TW);
	return class$;
}

$Class* XPATHErrorResources_zh_TW::class$ = nullptr;

						} // res
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com