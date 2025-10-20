#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources_ko.h>

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

$FieldInfo _XPATHErrorResources_ko_FieldInfo_[] = {
	{"ERROR0000", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ERROR0000)},
	{"ER_CURRENT_NOT_ALLOWED_IN_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CURRENT_NOT_ALLOWED_IN_MATCH)},
	{"ER_CURRENT_TAKES_NO_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CURRENT_TAKES_NO_ARGS)},
	{"ER_DOCUMENT_REPLACED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_DOCUMENT_REPLACED)},
	{"ER_CONTEXT_CAN_NOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CONTEXT_CAN_NOT_BE_NULL)},
	{"ER_CONTEXT_HAS_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CONTEXT_HAS_NO_OWNERDOC)},
	{"ER_LOCALNAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_LOCALNAME_HAS_TOO_MANY_ARGS)},
	{"ER_NAMESPACEURI_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NAMESPACEURI_HAS_TOO_MANY_ARGS)},
	{"ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS)},
	{"ER_NUMBER_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NUMBER_HAS_TOO_MANY_ARGS)},
	{"ER_NAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NAME_HAS_TOO_MANY_ARGS)},
	{"ER_STRING_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_STRING_HAS_TOO_MANY_ARGS)},
	{"ER_STRINGLENGTH_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_STRINGLENGTH_HAS_TOO_MANY_ARGS)},
	{"ER_TRANSLATE_TAKES_3_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_TRANSLATE_TAKES_3_ARGS)},
	{"ER_UNPARSEDENTITYURI_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_UNPARSEDENTITYURI_TAKES_1_ARG)},
	{"ER_NAMESPACEAXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NAMESPACEAXIS_NOT_IMPLEMENTED)},
	{"ER_UNKNOWN_AXIS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_UNKNOWN_AXIS)},
	{"ER_UNKNOWN_MATCH_OPERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_UNKNOWN_MATCH_OPERATION)},
	{"ER_INCORRECT_ARG_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_INCORRECT_ARG_LENGTH)},
	{"ER_CANT_CONVERT_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANT_CONVERT_TO_NUMBER)},
	{"ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER)},
	{"ER_CANT_CONVERT_TO_NODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANT_CONVERT_TO_NODELIST)},
	{"ER_CANT_CONVERT_TO_MUTABLENODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANT_CONVERT_TO_MUTABLENODELIST)},
	{"ER_CANT_CONVERT_TO_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANT_CONVERT_TO_TYPE)},
	{"ER_EXPECTED_MATCH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_MATCH_PATTERN)},
	{"ER_COULDNOT_GET_VAR_NAMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_COULDNOT_GET_VAR_NAMED)},
	{"ER_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_UNKNOWN_OPCODE)},
	{"ER_EXTRA_ILLEGAL_TOKENS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXTRA_ILLEGAL_TOKENS)},
	{"ER_EXPECTED_DOUBLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_DOUBLE_QUOTE)},
	{"ER_EXPECTED_SINGLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_SINGLE_QUOTE)},
	{"ER_EMPTY_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EMPTY_EXPRESSION)},
	{"ER_EXPECTED_BUT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_BUT_FOUND)},
	{"ER_INCORRECT_PROGRAMMER_ASSERTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_INCORRECT_PROGRAMMER_ASSERTION)},
	{"ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL)},
	{"ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG)},
	{"ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG)},
	{"ER_PREDICATE_ILLEGAL_SYNTAX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_PREDICATE_ILLEGAL_SYNTAX)},
	{"ER_ILLEGAL_AXIS_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_ILLEGAL_AXIS_NAME)},
	{"ER_UNKNOWN_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_UNKNOWN_NODETYPE)},
	{"ER_PATTERN_LITERAL_NEEDS_BE_QUOTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_PATTERN_LITERAL_NEEDS_BE_QUOTED)},
	{"ER_COULDNOT_BE_FORMATTED_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_COULDNOT_BE_FORMATTED_TO_NUMBER)},
	{"ER_COULDNOT_CREATE_XMLPROCESSORLIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_COULDNOT_CREATE_XMLPROCESSORLIAISON)},
	{"ER_DIDNOT_FIND_XPATH_SELECT_EXP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_DIDNOT_FIND_XPATH_SELECT_EXP)},
	{"ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH)},
	{"ER_ERROR_OCCURED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_ERROR_OCCURED)},
	{"ER_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_ILLEGAL_VARIABLE_REFERENCE)},
	{"ER_AXES_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_AXES_NOT_ALLOWED)},
	{"ER_KEY_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_KEY_HAS_TOO_MANY_ARGS)},
	{"ER_COUNT_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_COUNT_TAKES_1_ARG)},
	{"ER_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_COULDNOT_FIND_FUNCTION)},
	{"ER_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_UNSUPPORTED_ENCODING)},
	{"ER_PROBLEM_IN_DTM_NEXTSIBLING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_PROBLEM_IN_DTM_NEXTSIBLING)},
	{"ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL)},
	{"ER_SETDOMFACTORY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_SETDOMFACTORY_NOT_SUPPORTED)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_PREFIX_MUST_RESOLVE)},
	{"ER_PARSE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_PARSE_NOT_SUPPORTED)},
	{"ER_SAX_API_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_SAX_API_NOT_HANDLED)},
	{"ER_IGNORABLE_WHITESPACE_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_IGNORABLE_WHITESPACE_NOT_HANDLED)},
	{"ER_DTM_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_DTM_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_XERCES_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_PARSE_ERROR_DETAILS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_XERCES_PARSE_ERROR_DETAILS)},
	{"ER_XERCES_PARSE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_XERCES_PARSE_ERROR)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_OIERROR)},
	{"ER_CANNOT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANNOT_CREATE_URL)},
	{"ER_XPATH_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_XPATH_READOBJECT)},
	{"ER_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_FUNCTION_TOKEN_NOT_FOUND)},
	{"ER_CANNOT_DEAL_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANNOT_DEAL_XPATH_TYPE)},
	{"ER_NODESET_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NODESET_NOT_MUTABLE)},
	{"ER_NODESETDTM_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NODESETDTM_NOT_MUTABLE)},
	{"ER_VAR_NOT_RESOLVABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_VAR_NOT_RESOLVABLE)},
	{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NULL_ERROR_HANDLER)},
	{"ER_PROG_ASSERT_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_PROG_ASSERT_UNKNOWN_OPCODE)},
	{"ER_ZERO_OR_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_ZERO_OR_ONE)},
	{"ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS)},
	{"ER_COULD_NOT_FIND_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_COULD_NOT_FIND_VAR)},
	{"ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING)},
	{"ER_FASTSTRINGBUFFER_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_FASTSTRINGBUFFER_CANNOT_BE_NULL)},
	{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_TWO_OR_THREE)},
	{"ER_VARIABLE_ACCESSED_BEFORE_BIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_VARIABLE_ACCESSED_BEFORE_BIND)},
	{"ER_FSB_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_FSB_CANNOT_TAKE_STRING)},
	{"ER_SETTING_WALKER_ROOT_TO_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_SETTING_WALKER_ROOT_TO_NULL)},
	{"ER_NODESETDTM_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NODESETDTM_CANNOT_ITERATE)},
	{"ER_NODESET_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NODESET_CANNOT_ITERATE)},
	{"ER_NODESETDTM_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NODESETDTM_CANNOT_INDEX)},
	{"ER_NODESET_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NODESET_CANNOT_INDEX)},
	{"ER_CANNOT_CALL_SETSHOULDCACHENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANNOT_CALL_SETSHOULDCACHENODE)},
	{"ER_ONLY_ALLOWS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_ONLY_ALLOWS)},
	{"ER_UNKNOWN_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_UNKNOWN_STEP)},
	{"ER_EXPECTED_REL_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_REL_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH_AT_END_EXPR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_LOC_PATH_AT_END_EXPR)},
	{"ER_EXPECTED_LOC_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_LOC_STEP)},
	{"ER_EXPECTED_NODE_TEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_NODE_TEST)},
	{"ER_EXPECTED_STEP_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_STEP_PATTERN)},
	{"ER_EXPECTED_REL_PATH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXPECTED_REL_PATH_PATTERN)},
	{"ER_CANT_CONVERT_TO_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANT_CONVERT_TO_BOOLEAN)},
	{"ER_CANT_CONVERT_TO_SINGLENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANT_CONVERT_TO_SINGLENODE)},
	{"ER_CANT_GET_SNAPSHOT_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANT_GET_SNAPSHOT_LENGTH)},
	{"ER_NON_ITERATOR_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NON_ITERATOR_TYPE)},
	{"ER_DOC_MUTATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_DOC_MUTATED)},
	{"ER_INVALID_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_INVALID_XPATH_TYPE)},
	{"ER_EMPTY_XPATH_RESULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EMPTY_XPATH_RESULT)},
	{"ER_INCOMPATIBLE_TYPES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_INCOMPATIBLE_TYPES)},
	{"ER_NULL_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NULL_RESOLVER)},
	{"ER_CANT_CONVERT_TO_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_CANT_CONVERT_TO_STRING)},
	{"ER_NON_SNAPSHOT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NON_SNAPSHOT_TYPE)},
	{"ER_WRONG_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_WRONG_DOCUMENT)},
	{"ER_WRONG_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_WRONG_NODETYPE)},
	{"ER_XPATH_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_XPATH_ERROR)},
	{"ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED)},
	{"ER_RESOLVE_VARIABLE_RETURNS_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_RESOLVE_VARIABLE_RETURNS_NULL)},
	{"ER_UNSUPPORTED_RETURN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_UNSUPPORTED_RETURN_TYPE)},
	{"ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL)},
	{"ER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_ARG_CANNOT_BE_NULL)},
	{"ER_OBJECT_MODEL_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_OBJECT_MODEL_NULL)},
	{"ER_OBJECT_MODEL_EMPTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_OBJECT_MODEL_EMPTY)},
	{"ER_FEATURE_NAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_FEATURE_NAME_NULL)},
	{"ER_FEATURE_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_FEATURE_UNKNOWN)},
	{"ER_GETTING_NULL_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_GETTING_NULL_FEATURE)},
	{"ER_GETTING_UNKNOWN_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_GETTING_UNKNOWN_FEATURE)},
	{"ER_SECUREPROCESSING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_SECUREPROCESSING_FEATURE)},
	{"ER_NULL_XPATH_FUNCTION_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NULL_XPATH_FUNCTION_RESOLVER)},
	{"ER_NULL_XPATH_VARIABLE_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NULL_XPATH_VARIABLE_RESOLVER)},
	{"WG_LOCALE_NAME_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_LOCALE_NAME_NOT_HANDLED)},
	{"WG_PROPERTY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_PROPERTY_NOT_SUPPORTED)},
	{"WG_DONT_DO_ANYTHING_WITH_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_DONT_DO_ANYTHING_WITH_NS)},
	{"WG_SECURITY_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_SECURITY_EXCEPTION)},
	{"WG_QUO_NO_LONGER_DEFINED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_QUO_NO_LONGER_DEFINED)},
	{"WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST)},
	{"WG_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_FUNCTION_TOKEN_NOT_FOUND)},
	{"WG_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_COULDNOT_FIND_FUNCTION)},
	{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_CANNOT_MAKE_URL_FROM)},
	{"WG_EXPAND_ENTITIES_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_EXPAND_ENTITIES_NOT_SUPPORTED)},
	{"WG_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_ILLEGAL_VARIABLE_REFERENCE)},
	{"WG_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WG_UNSUPPORTED_ENCODING)},
	{"ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, _contents)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, FORMAT_FAILED)},
	{"ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ERROR_RESOURCES)},
	{"ERROR_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ERROR_STRING)},
	{"ERROR_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, ERROR_HEADER)},
	{"WARNING_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, WARNING_HEADER)},
	{"XSL_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, XSL_HEADER)},
	{"XML_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, XML_HEADER)},
	{"QUERY_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ko, QUERY_HEADER)},
	{}
};

$MethodInfo _XPATHErrorResources_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPATHErrorResources_ko::*)()>(&XPATHErrorResources_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPATHErrorResources_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.res.XPATHErrorResources_ko",
	"java.util.ListResourceBundle",
	nullptr,
	_XPATHErrorResources_ko_FieldInfo_,
	_XPATHErrorResources_ko_MethodInfo_
};

$Object* allocate$XPATHErrorResources_ko($Class* clazz) {
	return $of($alloc(XPATHErrorResources_ko));
}

$String* XPATHErrorResources_ko::ERROR0000 = nullptr;
$String* XPATHErrorResources_ko::ER_CURRENT_NOT_ALLOWED_IN_MATCH = nullptr;
$String* XPATHErrorResources_ko::ER_CURRENT_TAKES_NO_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_DOCUMENT_REPLACED = nullptr;
$String* XPATHErrorResources_ko::ER_CONTEXT_CAN_NOT_BE_NULL = nullptr;
$String* XPATHErrorResources_ko::ER_CONTEXT_HAS_NO_OWNERDOC = nullptr;
$String* XPATHErrorResources_ko::ER_LOCALNAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_NUMBER_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_NAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_STRING_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_TRANSLATE_TAKES_3_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_UNPARSEDENTITYURI_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_ko::ER_NAMESPACEAXIS_NOT_IMPLEMENTED = nullptr;
$String* XPATHErrorResources_ko::ER_UNKNOWN_AXIS = nullptr;
$String* XPATHErrorResources_ko::ER_UNKNOWN_MATCH_OPERATION = nullptr;
$String* XPATHErrorResources_ko::ER_INCORRECT_ARG_LENGTH = nullptr;
$String* XPATHErrorResources_ko::ER_CANT_CONVERT_TO_NUMBER = nullptr;
$String* XPATHErrorResources_ko::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER = nullptr;
$String* XPATHErrorResources_ko::ER_CANT_CONVERT_TO_NODELIST = nullptr;
$String* XPATHErrorResources_ko::ER_CANT_CONVERT_TO_MUTABLENODELIST = nullptr;
$String* XPATHErrorResources_ko::ER_CANT_CONVERT_TO_TYPE = nullptr;
$String* XPATHErrorResources_ko::ER_EXPECTED_MATCH_PATTERN = nullptr;
$String* XPATHErrorResources_ko::ER_COULDNOT_GET_VAR_NAMED = nullptr;
$String* XPATHErrorResources_ko::ER_UNKNOWN_OPCODE = nullptr;
$String* XPATHErrorResources_ko::ER_EXTRA_ILLEGAL_TOKENS = nullptr;
$String* XPATHErrorResources_ko::ER_EXPECTED_DOUBLE_QUOTE = nullptr;
$String* XPATHErrorResources_ko::ER_EXPECTED_SINGLE_QUOTE = nullptr;
$String* XPATHErrorResources_ko::ER_EMPTY_EXPRESSION = nullptr;
$String* XPATHErrorResources_ko::ER_EXPECTED_BUT_FOUND = nullptr;
$String* XPATHErrorResources_ko::ER_INCORRECT_PROGRAMMER_ASSERTION = nullptr;
$String* XPATHErrorResources_ko::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL = nullptr;
$String* XPATHErrorResources_ko::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG = nullptr;
$String* XPATHErrorResources_ko::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG = nullptr;
$String* XPATHErrorResources_ko::ER_PREDICATE_ILLEGAL_SYNTAX = nullptr;
$String* XPATHErrorResources_ko::ER_ILLEGAL_AXIS_NAME = nullptr;
$String* XPATHErrorResources_ko::ER_UNKNOWN_NODETYPE = nullptr;
$String* XPATHErrorResources_ko::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED = nullptr;
$String* XPATHErrorResources_ko::ER_COULDNOT_BE_FORMATTED_TO_NUMBER = nullptr;
$String* XPATHErrorResources_ko::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON = nullptr;
$String* XPATHErrorResources_ko::ER_DIDNOT_FIND_XPATH_SELECT_EXP = nullptr;
$String* XPATHErrorResources_ko::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH = nullptr;
$String* XPATHErrorResources_ko::ER_ERROR_OCCURED = nullptr;
$String* XPATHErrorResources_ko::ER_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_ko::ER_AXES_NOT_ALLOWED = nullptr;
$String* XPATHErrorResources_ko::ER_KEY_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ko::ER_COUNT_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_ko::ER_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_ko::ER_UNSUPPORTED_ENCODING = nullptr;
$String* XPATHErrorResources_ko::ER_PROBLEM_IN_DTM_NEXTSIBLING = nullptr;
$String* XPATHErrorResources_ko::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL = nullptr;
$String* XPATHErrorResources_ko::ER_SETDOMFACTORY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_ko::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XPATHErrorResources_ko::ER_PARSE_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_ko::ER_SAX_API_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_ko::ER_IGNORABLE_WHITESPACE_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_ko::ER_DTM_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_ko::ER_XERCES_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_ko::ER_XERCES_PARSE_ERROR_DETAILS = nullptr;
$String* XPATHErrorResources_ko::ER_XERCES_PARSE_ERROR = nullptr;
$String* XPATHErrorResources_ko::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XPATHErrorResources_ko::ER_OIERROR = nullptr;
$String* XPATHErrorResources_ko::ER_CANNOT_CREATE_URL = nullptr;
$String* XPATHErrorResources_ko::ER_XPATH_READOBJECT = nullptr;
$String* XPATHErrorResources_ko::ER_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_ko::ER_CANNOT_DEAL_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_ko::ER_NODESET_NOT_MUTABLE = nullptr;
$String* XPATHErrorResources_ko::ER_NODESETDTM_NOT_MUTABLE = nullptr;

$String* XPATHErrorResources_ko::ER_VAR_NOT_RESOLVABLE = nullptr;

$String* XPATHErrorResources_ko::ER_NULL_ERROR_HANDLER = nullptr;

$String* XPATHErrorResources_ko::ER_PROG_ASSERT_UNKNOWN_OPCODE = nullptr;

$String* XPATHErrorResources_ko::ER_ZERO_OR_ONE = nullptr;

$String* XPATHErrorResources_ko::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ko::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ko::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS = nullptr;

$String* XPATHErrorResources_ko::ER_COULD_NOT_FIND_VAR = nullptr;

$String* XPATHErrorResources_ko::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING = nullptr;

$String* XPATHErrorResources_ko::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL = nullptr;

$String* XPATHErrorResources_ko::ER_TWO_OR_THREE = nullptr;

$String* XPATHErrorResources_ko::ER_VARIABLE_ACCESSED_BEFORE_BIND = nullptr;

$String* XPATHErrorResources_ko::ER_FSB_CANNOT_TAKE_STRING = nullptr;

$String* XPATHErrorResources_ko::ER_SETTING_WALKER_ROOT_TO_NULL = nullptr;

$String* XPATHErrorResources_ko::ER_NODESETDTM_CANNOT_ITERATE = nullptr;

$String* XPATHErrorResources_ko::ER_NODESET_CANNOT_ITERATE = nullptr;

$String* XPATHErrorResources_ko::ER_NODESETDTM_CANNOT_INDEX = nullptr;

$String* XPATHErrorResources_ko::ER_NODESET_CANNOT_INDEX = nullptr;

$String* XPATHErrorResources_ko::ER_CANNOT_CALL_SETSHOULDCACHENODE = nullptr;

$String* XPATHErrorResources_ko::ER_ONLY_ALLOWS = nullptr;

$String* XPATHErrorResources_ko::ER_UNKNOWN_STEP = nullptr;

$String* XPATHErrorResources_ko::ER_EXPECTED_REL_LOC_PATH = nullptr;

$String* XPATHErrorResources_ko::ER_EXPECTED_LOC_PATH = nullptr;
$String* XPATHErrorResources_ko::ER_EXPECTED_LOC_PATH_AT_END_EXPR = nullptr;

$String* XPATHErrorResources_ko::ER_EXPECTED_LOC_STEP = nullptr;

$String* XPATHErrorResources_ko::ER_EXPECTED_NODE_TEST = nullptr;

$String* XPATHErrorResources_ko::ER_EXPECTED_STEP_PATTERN = nullptr;

$String* XPATHErrorResources_ko::ER_EXPECTED_REL_PATH_PATTERN = nullptr;

$String* XPATHErrorResources_ko::ER_CANT_CONVERT_TO_BOOLEAN = nullptr;

$String* XPATHErrorResources_ko::ER_CANT_CONVERT_TO_SINGLENODE = nullptr;

$String* XPATHErrorResources_ko::ER_CANT_GET_SNAPSHOT_LENGTH = nullptr;

$String* XPATHErrorResources_ko::ER_NON_ITERATOR_TYPE = nullptr;

$String* XPATHErrorResources_ko::ER_DOC_MUTATED = nullptr;
$String* XPATHErrorResources_ko::ER_INVALID_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_ko::ER_EMPTY_XPATH_RESULT = nullptr;
$String* XPATHErrorResources_ko::ER_INCOMPATIBLE_TYPES = nullptr;
$String* XPATHErrorResources_ko::ER_NULL_RESOLVER = nullptr;
$String* XPATHErrorResources_ko::ER_CANT_CONVERT_TO_STRING = nullptr;
$String* XPATHErrorResources_ko::ER_NON_SNAPSHOT_TYPE = nullptr;
$String* XPATHErrorResources_ko::ER_WRONG_DOCUMENT = nullptr;

$String* XPATHErrorResources_ko::ER_WRONG_NODETYPE = nullptr;
$String* XPATHErrorResources_ko::ER_XPATH_ERROR = nullptr;
$String* XPATHErrorResources_ko::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED = nullptr;
$String* XPATHErrorResources_ko::ER_RESOLVE_VARIABLE_RETURNS_NULL = nullptr;
$String* XPATHErrorResources_ko::ER_UNSUPPORTED_RETURN_TYPE = nullptr;
$String* XPATHErrorResources_ko::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_ko::ER_ARG_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_ko::ER_OBJECT_MODEL_NULL = nullptr;
$String* XPATHErrorResources_ko::ER_OBJECT_MODEL_EMPTY = nullptr;
$String* XPATHErrorResources_ko::ER_FEATURE_NAME_NULL = nullptr;
$String* XPATHErrorResources_ko::ER_FEATURE_UNKNOWN = nullptr;
$String* XPATHErrorResources_ko::ER_GETTING_NULL_FEATURE = nullptr;
$String* XPATHErrorResources_ko::ER_GETTING_UNKNOWN_FEATURE = nullptr;
$String* XPATHErrorResources_ko::ER_SECUREPROCESSING_FEATURE = nullptr;
$String* XPATHErrorResources_ko::ER_NULL_XPATH_FUNCTION_RESOLVER = nullptr;
$String* XPATHErrorResources_ko::ER_NULL_XPATH_VARIABLE_RESOLVER = nullptr;
$String* XPATHErrorResources_ko::WG_LOCALE_NAME_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_ko::WG_PROPERTY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_ko::WG_DONT_DO_ANYTHING_WITH_NS = nullptr;
$String* XPATHErrorResources_ko::WG_SECURITY_EXCEPTION = nullptr;
$String* XPATHErrorResources_ko::WG_QUO_NO_LONGER_DEFINED = nullptr;
$String* XPATHErrorResources_ko::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST = nullptr;
$String* XPATHErrorResources_ko::WG_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_ko::WG_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_ko::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XPATHErrorResources_ko::WG_EXPAND_ENTITIES_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_ko::WG_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_ko::WG_UNSUPPORTED_ENCODING = nullptr;

$String* XPATHErrorResources_ko::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ko::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ko::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ko::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$ObjectArray2* XPATHErrorResources_ko::_contents = nullptr;

$String* XPATHErrorResources_ko::BAD_CODE = nullptr;

$String* XPATHErrorResources_ko::FORMAT_FAILED = nullptr;

$String* XPATHErrorResources_ko::ERROR_RESOURCES = nullptr;

$String* XPATHErrorResources_ko::ERROR_STRING = nullptr;

$String* XPATHErrorResources_ko::ERROR_HEADER = nullptr;

$String* XPATHErrorResources_ko::WARNING_HEADER = nullptr;

$String* XPATHErrorResources_ko::XSL_HEADER = nullptr;

$String* XPATHErrorResources_ko::XML_HEADER = nullptr;

$String* XPATHErrorResources_ko::QUERY_HEADER = nullptr;

void XPATHErrorResources_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XPATHErrorResources_ko::getContents() {
	return XPATHErrorResources_ko::_contents;
}

void clinit$XPATHErrorResources_ko($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XPATHErrorResources_ko::ERROR0000, "ERROR0000"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CURRENT_NOT_ALLOWED_IN_MATCH, "ER_CURRENT_NOT_ALLOWED_IN_MATCH"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CURRENT_TAKES_NO_ARGS, "ER_CURRENT_TAKES_NO_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_DOCUMENT_REPLACED, "ER_DOCUMENT_REPLACED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CONTEXT_CAN_NOT_BE_NULL, "ER_CONTEXT_CAN_NOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CONTEXT_HAS_NO_OWNERDOC, "ER_CONTEXT_HAS_NO_OWNERDOC"_s);
	$assignStatic(XPATHErrorResources_ko::ER_LOCALNAME_HAS_TOO_MANY_ARGS, "ER_LOCALNAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS, "ER_NAMESPACEURI_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS, "ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NUMBER_HAS_TOO_MANY_ARGS, "ER_NUMBER_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NAME_HAS_TOO_MANY_ARGS, "ER_NAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_STRING_HAS_TOO_MANY_ARGS, "ER_STRING_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS, "ER_STRINGLENGTH_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_TRANSLATE_TAKES_3_ARGS, "ER_TRANSLATE_TAKES_3_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_UNPARSEDENTITYURI_TAKES_1_ARG, "ER_UNPARSEDENTITYURI_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NAMESPACEAXIS_NOT_IMPLEMENTED, "ER_NAMESPACEAXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_UNKNOWN_AXIS, "ER_UNKNOWN_AXIS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_UNKNOWN_MATCH_OPERATION, "ER_UNKNOWN_MATCH_OPERATION"_s);
	$assignStatic(XPATHErrorResources_ko::ER_INCORRECT_ARG_LENGTH, "ER_INCORRECT_ARG_LENGTH"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_NUMBER, "ER_CANT_CONVERT_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER, "ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_NODELIST, "ER_CANT_CONVERT_TO_NODELIST"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_MUTABLENODELIST, "ER_CANT_CONVERT_TO_MUTABLENODELIST"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_TYPE, "ER_CANT_CONVERT_TO_TYPE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_MATCH_PATTERN, "ER_EXPECTED_MATCH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_ko::ER_COULDNOT_GET_VAR_NAMED, "ER_COULDNOT_GET_VAR_NAMED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_UNKNOWN_OPCODE, "ER_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXTRA_ILLEGAL_TOKENS, "ER_EXTRA_ILLEGAL_TOKENS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_DOUBLE_QUOTE, "ER_EXPECTED_DOUBLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_SINGLE_QUOTE, "ER_EXPECTED_SINGLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EMPTY_EXPRESSION, "ER_EMPTY_EXPRESSION"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_BUT_FOUND, "ER_EXPECTED_BUT_FOUND"_s);
	$assignStatic(XPATHErrorResources_ko::ER_INCORRECT_PROGRAMMER_ASSERTION, "ER_INCORRECT_PROGRAMMER_ASSERTION"_s);
	$assignStatic(XPATHErrorResources_ko::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL, "ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG, "ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG"_s);
	$assignStatic(XPATHErrorResources_ko::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG, "ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG"_s);
	$assignStatic(XPATHErrorResources_ko::ER_PREDICATE_ILLEGAL_SYNTAX, "ER_PREDICATE_ILLEGAL_SYNTAX"_s);
	$assignStatic(XPATHErrorResources_ko::ER_ILLEGAL_AXIS_NAME, "ER_ILLEGAL_AXIS_NAME"_s);
	$assignStatic(XPATHErrorResources_ko::ER_UNKNOWN_NODETYPE, "ER_UNKNOWN_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED, "ER_PATTERN_LITERAL_NEEDS_BE_QUOTED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_COULDNOT_BE_FORMATTED_TO_NUMBER, "ER_COULDNOT_BE_FORMATTED_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON, "ER_COULDNOT_CREATE_XMLPROCESSORLIAISON"_s);
	$assignStatic(XPATHErrorResources_ko::ER_DIDNOT_FIND_XPATH_SELECT_EXP, "ER_DIDNOT_FIND_XPATH_SELECT_EXP"_s);
	$assignStatic(XPATHErrorResources_ko::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH, "ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH"_s);
	$assignStatic(XPATHErrorResources_ko::ER_ERROR_OCCURED, "ER_ERROR_OCCURED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_ILLEGAL_VARIABLE_REFERENCE, "ER_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_AXES_NOT_ALLOWED, "ER_AXES_NOT_ALLOWED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_KEY_HAS_TOO_MANY_ARGS, "ER_KEY_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_COUNT_TAKES_1_ARG, "ER_COUNT_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_ko::ER_COULDNOT_FIND_FUNCTION, "ER_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_ko::ER_UNSUPPORTED_ENCODING, "ER_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_ko::ER_PROBLEM_IN_DTM_NEXTSIBLING, "ER_PROBLEM_IN_DTM_NEXTSIBLING"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL, "ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_SETDOMFACTORY_NOT_SUPPORTED, "ER_SETDOMFACTORY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_PARSE_NOT_SUPPORTED, "ER_PARSE_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_SAX_API_NOT_HANDLED, "ER_SAX_API_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_IGNORABLE_WHITESPACE_NOT_HANDLED, "ER_IGNORABLE_WHITESPACE_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_DTM_CANNOT_HANDLE_NODES, "ER_DTM_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_ko::ER_XERCES_CANNOT_HANDLE_NODES, "ER_XERCES_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_ko::ER_XERCES_PARSE_ERROR_DETAILS, "ER_XERCES_PARSE_ERROR_DETAILS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_XERCES_PARSE_ERROR, "ER_XERCES_PARSE_ERROR"_s);
	$assignStatic(XPATHErrorResources_ko::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANNOT_CREATE_URL, "ER_CANNOT_CREATE_URL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_XPATH_READOBJECT, "ER_XPATH_READOBJECT"_s);
	$assignStatic(XPATHErrorResources_ko::ER_FUNCTION_TOKEN_NOT_FOUND, "ER_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANNOT_DEAL_XPATH_TYPE, "ER_CANNOT_DEAL_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NODESET_NOT_MUTABLE, "ER_NODESET_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NODESETDTM_NOT_MUTABLE, "ER_NODESETDTM_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_VAR_NOT_RESOLVABLE, "ER_VAR_NOT_RESOLVABLE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_PROG_ASSERT_UNKNOWN_OPCODE, "ER_PROG_ASSERT_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_ZERO_OR_ONE, "ER_ZERO_OR_ONE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS, "ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_COULD_NOT_FIND_VAR, "ER_COULD_NOT_FIND_VAR"_s);
	$assignStatic(XPATHErrorResources_ko::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING, "ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_ko::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL, "ER_FASTSTRINGBUFFER_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_VARIABLE_ACCESSED_BEFORE_BIND, "ER_VARIABLE_ACCESSED_BEFORE_BIND"_s);
	$assignStatic(XPATHErrorResources_ko::ER_FSB_CANNOT_TAKE_STRING, "ER_FSB_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_ko::ER_SETTING_WALKER_ROOT_TO_NULL, "ER_SETTING_WALKER_ROOT_TO_NULL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NODESETDTM_CANNOT_ITERATE, "ER_NODESETDTM_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NODESET_CANNOT_ITERATE, "ER_NODESET_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NODESETDTM_CANNOT_INDEX, "ER_NODESETDTM_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NODESET_CANNOT_INDEX, "ER_NODESET_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANNOT_CALL_SETSHOULDCACHENODE, "ER_CANNOT_CALL_SETSHOULDCACHENODE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_ONLY_ALLOWS, "ER_ONLY_ALLOWS"_s);
	$assignStatic(XPATHErrorResources_ko::ER_UNKNOWN_STEP, "ER_UNKNOWN_STEP"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_REL_LOC_PATH, "ER_EXPECTED_REL_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_LOC_PATH, "ER_EXPECTED_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_LOC_PATH_AT_END_EXPR, "ER_EXPECTED_LOC_PATH_AT_END_EXPR"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_LOC_STEP, "ER_EXPECTED_LOC_STEP"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_NODE_TEST, "ER_EXPECTED_NODE_TEST"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_STEP_PATTERN, "ER_EXPECTED_STEP_PATTERN"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXPECTED_REL_PATH_PATTERN, "ER_EXPECTED_REL_PATH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_BOOLEAN, "ER_CANT_CONVERT_TO_BOOLEAN"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_SINGLENODE, "ER_CANT_CONVERT_TO_SINGLENODE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANT_GET_SNAPSHOT_LENGTH, "ER_CANT_GET_SNAPSHOT_LENGTH"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NON_ITERATOR_TYPE, "ER_NON_ITERATOR_TYPE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_DOC_MUTATED, "ER_DOC_MUTATED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_INVALID_XPATH_TYPE, "ER_INVALID_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EMPTY_XPATH_RESULT, "ER_EMPTY_XPATH_RESULT"_s);
	$assignStatic(XPATHErrorResources_ko::ER_INCOMPATIBLE_TYPES, "ER_INCOMPATIBLE_TYPES"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NULL_RESOLVER, "ER_NULL_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_STRING, "ER_CANT_CONVERT_TO_STRING"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NON_SNAPSHOT_TYPE, "ER_NON_SNAPSHOT_TYPE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_WRONG_DOCUMENT, "ER_WRONG_DOCUMENT"_s);
	$assignStatic(XPATHErrorResources_ko::ER_WRONG_NODETYPE, "ER_WRONG_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_XPATH_ERROR, "ER_XPATH_ERROR"_s);
	$assignStatic(XPATHErrorResources_ko::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED, "ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED"_s);
	$assignStatic(XPATHErrorResources_ko::ER_RESOLVE_VARIABLE_RETURNS_NULL, "ER_RESOLVE_VARIABLE_RETURNS_NULL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_UNSUPPORTED_RETURN_TYPE, "ER_UNSUPPORTED_RETURN_TYPE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL, "ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_ARG_CANNOT_BE_NULL, "ER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_OBJECT_MODEL_NULL, "ER_OBJECT_MODEL_NULL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_OBJECT_MODEL_EMPTY, "ER_OBJECT_MODEL_EMPTY"_s);
	$assignStatic(XPATHErrorResources_ko::ER_FEATURE_NAME_NULL, "ER_FEATURE_NAME_NULL"_s);
	$assignStatic(XPATHErrorResources_ko::ER_FEATURE_UNKNOWN, "ER_FEATURE_UNKNOWN"_s);
	$assignStatic(XPATHErrorResources_ko::ER_GETTING_NULL_FEATURE, "ER_GETTING_NULL_FEATURE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_GETTING_UNKNOWN_FEATURE, "ER_GETTING_UNKNOWN_FEATURE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_SECUREPROCESSING_FEATURE, "ER_SECUREPROCESSING_FEATURE"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NULL_XPATH_FUNCTION_RESOLVER, "ER_NULL_XPATH_FUNCTION_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NULL_XPATH_VARIABLE_RESOLVER, "ER_NULL_XPATH_VARIABLE_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_ko::WG_LOCALE_NAME_NOT_HANDLED, "WG_LOCALE_NAME_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_ko::WG_PROPERTY_NOT_SUPPORTED, "WG_PROPERTY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_ko::WG_DONT_DO_ANYTHING_WITH_NS, "WG_DONT_DO_ANYTHING_WITH_NS"_s);
	$assignStatic(XPATHErrorResources_ko::WG_SECURITY_EXCEPTION, "WG_SECURITY_EXCEPTION"_s);
	$assignStatic(XPATHErrorResources_ko::WG_QUO_NO_LONGER_DEFINED, "WG_QUO_NO_LONGER_DEFINED"_s);
	$assignStatic(XPATHErrorResources_ko::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST, "WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST"_s);
	$assignStatic(XPATHErrorResources_ko::WG_FUNCTION_TOKEN_NOT_FOUND, "WG_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_ko::WG_COULDNOT_FIND_FUNCTION, "WG_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_ko::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XPATHErrorResources_ko::WG_EXPAND_ENTITIES_NOT_SUPPORTED, "WG_EXPAND_ENTITIES_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_ko::WG_ILLEGAL_VARIABLE_REFERENCE, "WG_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_ko::WG_UNSUPPORTED_ENCODING, "WG_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_ko::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ko::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ko::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XPATHErrorResources_ko::FORMAT_FAILED, "FORMAT_FAILED"_s);
	$assignStatic(XPATHErrorResources_ko::ERROR_RESOURCES, "com.sun.org.apache.xpath.internal.res.XPATHErrorResources"_s);
	$assignStatic(XPATHErrorResources_ko::ERROR_STRING, "#error"_s);
	$assignStatic(XPATHErrorResources_ko::ERROR_HEADER, "Error: "_s);
	$assignStatic(XPATHErrorResources_ko::WARNING_HEADER, "Warning: "_s);
	$assignStatic(XPATHErrorResources_ko::XSL_HEADER, "XSL "_s);
	$assignStatic(XPATHErrorResources_ko::XML_HEADER, "XML "_s);
	$assignStatic(XPATHErrorResources_ko::QUERY_HEADER, "PATTERN "_s);
	$assignStatic(XPATHErrorResources_ko::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ERROR0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CURRENT_NOT_ALLOWED_IN_MATCH),
			$of(u"\uc77c\uce58 \ud328\ud134\uc5d0\uc11c\ub294 current() \ud568\uc218\uac00 \ud5c8\uc6a9\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CURRENT_TAKES_NO_ARGS),
			$of(u"current() \ud568\uc218\uc5d0\ub294 \uc778\uc218\ub97c \uc0ac\uc6a9\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_DOCUMENT_REPLACED),
			$of(u"document() \ud568\uc218 \uad6c\ud604\uc774 com.sun.org.apache.xalan.internal.xslt.FuncDocument\ub85c \ub300\uccb4\ub418\uc5c8\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CONTEXT_CAN_NOT_BE_NULL),
			$of(u"\uc791\uc5c5\uc774 \ucee8\ud14d\uc2a4\ud2b8\uc5d0 \uc885\uc18d\uc801\uc77c \ub54c \ucee8\ud14d\uc2a4\ud2b8\ub294 \ub110\uc77c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CONTEXT_HAS_NO_OWNERDOC),
			$of(u"\ucee8\ud14d\uc2a4\ud2b8\uc5d0 \uc18c\uc720\uc790 \ubb38\uc11c\uac00 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_LOCALNAME_HAS_TOO_MANY_ARGS),
			$of(u"local-name()\uc5d0 \uc778\uc218\uac00 \ub108\ubb34 \ub9ce\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS),
			$of(u"namespace-uri()\uc5d0 \uc778\uc218\uac00 \ub108\ubb34 \ub9ce\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS),
			$of(u"normalize-space()\uc5d0 \uc778\uc218\uac00 \ub108\ubb34 \ub9ce\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NUMBER_HAS_TOO_MANY_ARGS),
			$of(u"number()\uc5d0 \uc778\uc218\uac00 \ub108\ubb34 \ub9ce\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NAME_HAS_TOO_MANY_ARGS),
			$of(u"name()\uc5d0 \uc778\uc218\uac00 \ub108\ubb34 \ub9ce\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_STRING_HAS_TOO_MANY_ARGS),
			$of(u"string()\uc5d0 \uc778\uc218\uac00 \ub108\ubb34 \ub9ce\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS),
			$of(u"string-length()\uc5d0 \uc778\uc218\uac00 \ub108\ubb34 \ub9ce\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_TRANSLATE_TAKES_3_ARGS),
			$of(u"translate() \ud568\uc218\uc5d0 \uc138 \uac1c\uc758 \uc778\uc218\uac00 \uc0ac\uc6a9\ub429\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_UNPARSEDENTITYURI_TAKES_1_ARG),
			$of(u"unparsed-entity-uri \ud568\uc218\uc5d0\ub294 \ud55c \uac1c\uc758 \uc778\uc218\uac00 \uc0ac\uc6a9\ub418\uc5b4\uc57c \ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NAMESPACEAXIS_NOT_IMPLEMENTED),
			$of(u"\ub124\uc784\uc2a4\ud398\uc774\uc2a4 \ucd95\uc774 \uc544\uc9c1 \uad6c\ud604\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_UNKNOWN_AXIS),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \ucd95: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_UNKNOWN_MATCH_OPERATION),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \uc77c\uce58 \uc791\uc5c5\uc785\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_INCORRECT_ARG_LENGTH),
			$of(u"processing-instruction() \ub178\ub4dc \ud14c\uc2a4\ud2b8\uc758 \uc778\uc218 \uae38\uc774\uac00 \uc62c\ubc14\ub974\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_NUMBER),
			$of(u"{0}\uc744(\ub97c) \uc22b\uc790\ub85c \ubcc0\ud658\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_NODELIST),
			$of(u"{0}\uc744(\ub97c) NodeList\ub85c \ubcc0\ud658\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_MUTABLENODELIST),
			$of(u"{0}\uc744(\ub97c) NodeSetDTM\uc73c\ub85c \ubcc0\ud658\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_TYPE),
			$of(u"{0}\uc744(\ub97c) type#{1}(\uc73c)\ub85c \ubcc0\ud658\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_MATCH_PATTERN),
			$of(u"getMatchScore\uc5d0 \uc77c\uce58 \ud328\ud134\uc774 \ud544\uc694\ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_COULDNOT_GET_VAR_NAMED),
			$of(u"\uc774\ub984\uc774 {0}\uc778 \ubcc0\uc218\ub97c \uac00\uc838\uc62c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_UNKNOWN_OPCODE),
			$of(u"\uc624\ub958! \uc54c \uc218 \uc5c6\ub294 \uc791\uc5c5 \ucf54\ub4dc: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXTRA_ILLEGAL_TOKENS),
			$of(u"\uc798\ubabb\ub41c \ucd94\uac00 \ud1a0\ud070: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_DOUBLE_QUOTE),
			$of(u"\ub9ac\ud130\ub7f4\uc758 \ub530\uc634\ud45c\uac00 \uc798\ubabb \uc9c0\uc815\ub418\uc5c8\uc2b5\ub2c8\ub2e4. \ud070 \ub530\uc634\ud45c\uac00 \ud544\uc694\ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_SINGLE_QUOTE),
			$of(u"\ub9ac\ud130\ub7f4\uc758 \ub530\uc634\ud45c\uac00 \uc798\ubabb \uc9c0\uc815\ub418\uc5c8\uc2b5\ub2c8\ub2e4. \uc791\uc740 \ub530\uc634\ud45c\uac00 \ud544\uc694\ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EMPTY_EXPRESSION),
			$of(u"\ud45c\ud604\uc2dd\uc774 \ube44\uc5b4 \uc788\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_BUT_FOUND),
			$of(u"{0}\uc774(\uac00) \ud544\uc694\ud558\uc9c0\ub9cc {1}\uc774(\uac00) \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_INCORRECT_PROGRAMMER_ASSERTION),
			$of(u"\ud504\ub85c\uadf8\ub798\uba38 \uac80\uc99d\uc774 \uc62c\ubc14\ub974\uc9c0 \uc54a\uc74c - {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL),
			$of(u"19990709 XPath \ucd08\uc548\uc5d0\uc11c\ub294 boolean(...) \uc778\uc218\uac00 \ub354 \uc774\uc0c1 \uc120\ud0dd\uc801 \uc778\uc218\uac00 \uc544\ub2d9\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG),
			$of(u"\',\'\ub97c \ucc3e\uc558\uc9c0\ub9cc \uc120\ud589 \uc778\uc218\uac00 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG),
			$of(u"\',\'\ub97c \ucc3e\uc558\uc9c0\ub9cc \ud6c4\ud589 \uc778\uc218\uac00 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_PREDICATE_ILLEGAL_SYNTAX),
			$of(u"\'..[predicate]\' \ub610\ub294 \'.[predicate]\'\ub294 \uc798\ubabb\ub41c \uad6c\ubb38\uc785\ub2c8\ub2e4. \ub300\uc2e0 \'self::node()[predicate]\'\ub97c \uc0ac\uc6a9\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_ILLEGAL_AXIS_NAME),
			$of(u"\uc798\ubabb\ub41c \ucd95 \uc774\ub984: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_UNKNOWN_NODETYPE),
			$of(u"\uc54c \uc218 \uc5c6\ub294 nodetype: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED),
			$of(u"\ud328\ud134 \ub9ac\ud130\ub7f4({0})\uc5d0 \ub530\uc634\ud45c\ub97c \uc9c0\uc815\ud574\uc57c \ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_COULDNOT_BE_FORMATTED_TO_NUMBER),
			$of(u"{0}\uc758 \ud615\uc2dd\uc744 \uc22b\uc790\ub85c \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON),
			$of(u"XML TransformerFactory \uc5f0\uacb0\uc744 \uc0dd\uc131\ud560 \uc218 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_DIDNOT_FIND_XPATH_SELECT_EXP),
			$of(u"\uc624\ub958: xpath select \ud45c\ud604\uc2dd(-select)\uc744 \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH),
			$of(u"\uc624\ub958! OP_LOCATIONPATH \ub4a4\uc5d0\uc11c ENDOP\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_ERROR_OCCURED),
			$of(u"\uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_ILLEGAL_VARIABLE_REFERENCE),
			$of(u"\ubcc0\uc218\uc5d0 \ub300\ud574 \uc81c\uacf5\ub41c VariableReference\uac00 \ucee8\ud14d\uc2a4\ud2b8\uc5d0\uc11c \ubc97\uc5b4\ub098\uac70\ub098 \uc815\uc758\ub97c \ud3ec\ud568\ud558\uc9c0 \uc5c6\uc2b5\ub2c8\ub2e4! \uc774\ub984 = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_AXES_NOT_ALLOWED),
			$of(u"\uc77c\uce58 \ud328\ud134\uc5d0\uc11c\ub294 child:: \ubc0f attribute:: \ucd95\ub9cc \ud5c8\uc6a9\ub429\ub2c8\ub2e4! \uc798\ubabb\ub41c \ucd95 = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_KEY_HAS_TOO_MANY_ARGS),
			$of(u"key()\uc5d0 \uc62c\ubc14\ub974\uc9c0 \uc54a\uc740 \uc218\uc758 \uc778\uc218\uac00 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_COUNT_TAKES_1_ARG),
			$of(u"count \ud568\uc218\uc5d0\ub294 \ud55c \uac1c\uc758 \uc778\uc218\uac00 \uc0ac\uc6a9\ub418\uc5b4\uc57c \ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_COULDNOT_FIND_FUNCTION),
			$of(u"\ud568\uc218\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_UNSUPPORTED_ENCODING),
			$of(u"\uc9c0\uc6d0\ub418\uc9c0 \uc54a\ub294 \uc778\ucf54\ub529: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_PROBLEM_IN_DTM_NEXTSIBLING),
			$of(u"DTM\uc5d0\uc11c getNextSibling\uc5d0 \ubb38\uc81c\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4. \ubcf5\uad6c\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL),
			$of(u"\ud504\ub85c\uadf8\ub798\uba38 \uc624\ub958: EmptyNodeList\uc5d0 \uc4f8 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_SETDOMFACTORY_NOT_SUPPORTED),
			$of(u"XPathContext\uc5d0\uc11c\ub294 setDOMFactory\uac00 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_PREFIX_MUST_RESOLVE),
			$of(u"\uc811\ub450\uc5b4\ub294 \ub124\uc784\uc2a4\ud398\uc774\uc2a4\ub85c \ubd84\uc11d\ub418\uc5b4\uc57c \ud568: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_PARSE_NOT_SUPPORTED),
			$of(u"XPathContext\uc5d0\uc11c\ub294 parse(InputSource \uc18c\uc2a4)\uac00 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4! {0}\uc744(\ub97c) \uc5f4 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_SAX_API_NOT_HANDLED),
			$of(u"DTM\uc774 SAX API \ubb38\uc790(char ch[]...\ub97c \ucc98\ub9ac\ud558\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_IGNORABLE_WHITESPACE_NOT_HANDLED),
			$of(u"DTM\uc774 ignorableWhitespace(char ch[]...\ub97c \ucc98\ub9ac\ud558\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_DTM_CANNOT_HANDLE_NODES),
			$of(u"DTMLiaison\uc740 {0} \uc720\ud615\uc758 \ub178\ub4dc\ub97c \ucc98\ub9ac\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_XERCES_CANNOT_HANDLE_NODES),
			$of(u"DOM2Helper\ub294 {0} \uc720\ud615\uc758 \ub178\ub4dc\ub97c \ucc98\ub9ac\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_XERCES_PARSE_ERROR_DETAILS),
			$of(u"DOM2Helper.parse \uc624\ub958: SystemID - {0} \ud589 - {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_XERCES_PARSE_ERROR),
			$of(u"DOM2Helper.parse \uc624\ub958"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_INVALID_UTF16_SURROGATE),
			$of(u"\ubd80\uc801\ud569\ud55c UTF-16 \ub300\ub9ac \uc694\uc18c\uac00 \uac10\uc9c0\ub428: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_OIERROR),
			$of(u"IO \uc624\ub958"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANNOT_CREATE_URL),
			$of(u"{0}\uc5d0 \ub300\ud55c URL\uc744 \uc0dd\uc131\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_XPATH_READOBJECT),
			$of(u"XPath.readObject\uc5d0 \uc624\ub958 \ubc1c\uc0dd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_FUNCTION_TOKEN_NOT_FOUND),
			$of(u"\ud568\uc218 \ud1a0\ud070\uc744 \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANNOT_DEAL_XPATH_TYPE),
			$of(u"XPath \uc720\ud615\uc744 \ucc98\ub9ac\ud560 \uc218 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NODESET_NOT_MUTABLE),
			$of(u"\uc774 NodeSet\ub294 \ubcc0\uacbd\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NODESETDTM_NOT_MUTABLE),
			$of(u"\uc774 NodeSetDTM\uc740 \ubcc0\uacbd\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_VAR_NOT_RESOLVABLE),
			$of(u"\ubcc0\uc218\ub97c \ubd84\uc11d\ud560 \uc218 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NULL_ERROR_HANDLER),
			$of(u"\ub110 \uc624\ub958 \ucc98\ub9ac\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_PROG_ASSERT_UNKNOWN_OPCODE),
			$of(u"\ud504\ub85c\uadf8\ub798\uba38 \uac80\uc99d: \uc54c \uc218 \uc5c6\ub294 opcode: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_ZERO_OR_ONE),
			$of(u"0 \ub610\ub294 1"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper\ub294 rtf()\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper\ub294 asNodeIterator()\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper\ub294 detach()\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper\ub294 num()\uc744 \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper\ub294 xstr()\uc744 \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"XRTreeFragSelectWrapper\ub294 str()\uc744 \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS),
			$of(u"fsb()\ub294 XStringForChars\uc5d0 \ub300\ud574 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_COULD_NOT_FIND_VAR),
			$of(u"\uc774\ub984\uc774 {0}\uc778 \ubcc0\uc218\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING),
			$of(u"XStringForChars\ub294 \uc778\uc218\uc5d0 \ubb38\uc790\uc5f4\uc744 \uc0ac\uc6a9\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL),
			$of(u"FastStringBuffer \uc778\uc218\ub294 \ub110\uc77c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_TWO_OR_THREE),
			$of(u"2 \ub610\ub294 3"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_VARIABLE_ACCESSED_BEFORE_BIND),
			$of(u"\ubcc0\uc218\uac00 \ubc14\uc778\ub4dc\ub418\uae30 \uc804\uc5d0 \ubcc0\uc218\uc5d0 \uc561\uc138\uc2a4\ub418\uc5c8\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_FSB_CANNOT_TAKE_STRING),
			$of(u"XStringForFSB\ub294 \uc778\uc218\uc5d0 \ubb38\uc790\uc5f4\uc744 \uc0ac\uc6a9\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_SETTING_WALKER_ROOT_TO_NULL),
			$of(u"\n !!!! \uc624\ub958! \uc6cc\ucee4\uc758 \ub8e8\ud2b8\ub97c null\ub85c \uc124\uc815\ud558\ub294 \uc911\uc785\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NODESETDTM_CANNOT_ITERATE),
			$of(u"\uc774 NodeSetDTM\uc740 \uc774\uc804 \ub178\ub4dc\ub97c \ubc18\ubcf5\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NODESET_CANNOT_ITERATE),
			$of(u"\uc774 NodeSet\ub294 \uc774\uc804 \ub178\ub4dc\ub97c \ubc18\ubcf5\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NODESETDTM_CANNOT_INDEX),
			$of(u"\uc774 NodeSetDTM\uc740 \ud568\uc218\ub97c \uc778\ub371\uc2a4\ud654\ud558\uac70\ub098 \uc9d1\uacc4\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NODESET_CANNOT_INDEX),
			$of(u"\uc774 NodeSet\ub294 \ud568\uc218\ub97c \uc778\ub371\uc2a4\ud654\ud558\uac70\ub098 \uc9d1\uacc4\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANNOT_CALL_SETSHOULDCACHENODE),
			$of(u"nextNode\uac00 \ud638\ucd9c\ub41c \ud6c4\uc5d0\ub294 setShouldCacheNodes\ub97c \ud638\ucd9c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_ONLY_ALLOWS),
			$of(u"{0}\uc740(\ub294) {1}\uac1c\uc758 \uc778\uc218\ub9cc \ud5c8\uc6a9\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_UNKNOWN_STEP),
			$of(u"getNextStepPos\uc5d0 \ud504\ub85c\uadf8\ub798\uba38 \uac80\uc99d\uc774 \uc788\uc74c: \uc54c \uc218 \uc5c6\ub294 stepType: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_REL_LOC_PATH),
			$of(u"\'/\' \ub610\ub294 \'//\' \ud1a0\ud070 \ub4a4\uc5d0 \uc0c1\ub300 \uc704\uce58 \uacbd\ub85c\uac00 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_LOC_PATH),
			$of(u"\uc704\uce58 \uacbd\ub85c\uac00 \ud544\uc694\ud558\uc9c0\ub9cc {0} \ud1a0\ud070\uc774 \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_LOC_PATH_AT_END_EXPR),
			$of(u"\uc704\uce58 \uacbd\ub85c\uac00 \ud544\uc694\ud558\uc9c0\ub9cc XPath \ud45c\ud604\uc2dd \ub05d\uc774 \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_LOC_STEP),
			$of(u"\'/\' \ub610\ub294 \'//\' \ud1a0\ud070 \ub4a4\uc5d0 \uc704\uce58 \ub2e8\uacc4\uac00 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_NODE_TEST),
			$of(u"NCName:* \ub610\ub294 QName\uacfc \uc77c\uce58\ud558\ub294 \ub178\ub4dc \ud14c\uc2a4\ud2b8\uac00 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_STEP_PATTERN),
			$of(u"\ub2e8\uacc4 \ud328\ud134\uc774 \ud544\uc694\ud558\uc9c0\ub9cc \'/\'\uac00 \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXPECTED_REL_PATH_PATTERN),
			$of(u"\uc0c1\ub300 \uacbd\ub85c \ud328\ud134\uc774 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_BOOLEAN),
			$of(u"XPath \ud45c\ud604\uc2dd \'\'{0}\'\'\uc5d0 \ub300\ud55c XPathResult\uc758 XPathResultType\uc774 \ubd80\uc6b8\ub85c \ubcc0\ud658\ub420 \uc218 \uc5c6\ub294 {1}\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_SINGLENODE),
			$of(u"XPath \ud45c\ud604\uc2dd \'\'{0}\'\'\uc5d0 \ub300\ud55c XPathResult\uc758 XPathResultType\uc774 \ub2e8\uc77c \ub178\ub4dc\ub85c \ubcc0\ud658\ub420 \uc218 \uc5c6\ub294 {1}\uc785\ub2c8\ub2e4. getSingleNodeValue \uba54\uc18c\ub4dc\ub294 ANY_UNORDERED_NODE_TYPE \ubc0f FIRST_ORDERED_NODE_TYPE \uc720\ud615\uc5d0\ub9cc \uc801\uc6a9\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANT_GET_SNAPSHOT_LENGTH),
			$of(u"XPathResultType\uc774 {1}\uc774\ubbc0\ub85c getSnapshotLength \uba54\uc18c\ub4dc\ub294 XPath \ud45c\ud604\uc2dd \'\'{0}\'\'\uc5d0 \ub300\ud55c XPathResult\uc5d0\uc11c \ud638\ucd9c\ub420 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. \uc774 \uba54\uc18c\ub4dc\ub294 UNORDERED_NODE_SNAPSHOT_TYPE \ubc0f ORDERED_NODE_SNAPSHOT_TYPE \uc720\ud615\uc5d0\ub9cc \uc801\uc6a9\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NON_ITERATOR_TYPE),
			$of(u"XPathResultType\uc774 {1}\uc774\ubbc0\ub85c iterateNext \uba54\uc18c\ub4dc\ub294 XPath \ud45c\ud604\uc2dd \'\'{0}\'\'\uc5d0 \ub300\ud55c XPathResult\uc5d0\uc11c \ud638\ucd9c\ub420 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. \uc774 \uba54\uc18c\ub4dc\ub294 UNORDERED_NODE_ITERATOR_TYPE \ubc0f ORDERED_NODE_ITERATOR_TYPE \uc720\ud615\uc5d0\ub9cc \uc801\uc6a9\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_DOC_MUTATED),
			$of(u"\uacb0\uacfc\uac00 \ubc18\ud658\ub41c \ud6c4 \ubb38\uc11c\uac00 \ubcc0\uacbd\ub418\uc5c8\uc2b5\ub2c8\ub2e4. \uc774\ud130\ub808\uc774\ud130\uac00 \ubd80\uc801\ud569\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_INVALID_XPATH_TYPE),
			$of(u"\ubd80\uc801\ud569\ud55c XPath \uc720\ud615 \uc778\uc218: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EMPTY_XPATH_RESULT),
			$of(u"XPath \uacb0\uacfc \uac1d\uccb4\uac00 \ube44\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_INCOMPATIBLE_TYPES),
			$of(u"XPath \ud45c\ud604\uc2dd \'\'{0}\'\'\uc5d0 \ub300\ud55c XPathResult\uc758 XPathResultType\uc774 \uc9c0\uc815\ub41c XPathResultType {2}(\uc73c)\ub85c \uac15\uc81c \ubcc0\ud658\ub420 \uc218 \uc5c6\ub294 {1}\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NULL_RESOLVER),
			$of(u"\ub110 \uc811\ub450\uc5b4 \ubd84\uc11d\uae30\ub85c \uc811\ub450\uc5b4\ub97c \ubd84\uc11d\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANT_CONVERT_TO_STRING),
			$of(u"XPath \ud45c\ud604\uc2dd \'\'{0}\'\'\uc5d0 \ub300\ud55c XPathResult\uc758 XPathResultType\uc774 \ubb38\uc790\uc5f4\ub85c \ubcc0\ud658\ub420 \uc218 \uc5c6\ub294 {1}\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NON_SNAPSHOT_TYPE),
			$of(u"XPathResultType\uc774 {1}\uc774\ubbc0\ub85c snapshotItem \uba54\uc18c\ub4dc\ub294 XPath \ud45c\ud604\uc2dd \'\'{0}\'\'\uc5d0 \ub300\ud55c XPathResult\uc5d0\uc11c \ud638\ucd9c\ub420 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. \uc774 \uba54\uc18c\ub4dc\ub294 UNORDERED_NODE_SNAPSHOT_TYPE \ubc0f ORDERED_NODE_SNAPSHOT_TYPE \uc720\ud615\uc5d0\ub9cc \uc801\uc6a9\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_WRONG_DOCUMENT),
			$of(u"\ucee8\ud14d\uc2a4\ud2b8 \ub178\ub4dc\uac00 \uc774 XPathEvaluator\uc5d0 \ubc14\uc778\ub4dc\ub41c \ubb38\uc11c\uc5d0 \uc18d\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_WRONG_NODETYPE),
			$of(u"\ucee8\ud14d\uc2a4\ud2b8 \ub178\ub4dc \uc720\ud615\uc740 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_XPATH_ERROR),
			$of(u"XPath\uc5d0 \uc54c \uc218 \uc5c6\ub294 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER),
			$of(u"XPath \ud45c\ud604\uc2dd \'\'{0}\'\'\uc5d0 \ub300\ud55c XPathResult\uc758 XPathResultType\uc774 \uc22b\uc790\ub85c \ubcc0\ud658\ub420 \uc218 \uc5c6\ub294 {1}\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED),
			$of(u"XMLConstants.FEATURE_SECURE_PROCESSING \uae30\ub2a5\uc774 true\ub85c \uc124\uc815\ub41c \uacbd\uc6b0 \ud655\uc7a5 \ud568\uc218 \'\'{0}\'\'\uc744(\ub97c) \ud638\ucd9c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_RESOLVE_VARIABLE_RETURNS_NULL),
			$of(u"{0} \ubcc0\uc218\uc5d0 \ub300\ud55c resolveVariable\uc774 \ub110\uc744 \ubc18\ud658\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_UNSUPPORTED_RETURN_TYPE),
			$of(u"\uc9c0\uc6d0\ub418\uc9c0 \uc54a\ub294 \ubc18\ud658 \uc720\ud615: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of(u"\uc18c\uc2a4 \ubc0f/\ub610\ub294 \ubc18\ud658 \uc720\ud615\uc740 \ub110\uc77c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of(u"\uc18c\uc2a4 \ubc0f/\ub610\ub294 \ubc18\ud658 \uc720\ud615\uc740 \ub110\uc77c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_ARG_CANNOT_BE_NULL),
			$of(u"{0} \uc778\uc218\ub294 \ub110\uc77c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_OBJECT_MODEL_NULL),
			$of(u"objectModel == null\ub85c {0}#isObjectModelSupported(String objectModel)\ub97c \ud638\ucd9c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_OBJECT_MODEL_EMPTY),
			$of(u"objectModel == \"\"\ub85c {0}#isObjectModelSupported(String objectModel)\ub97c \ud638\ucd9c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_FEATURE_NAME_NULL),
			$of(u"\ub110 \uc774\ub984\uc73c\ub85c \uae30\ub2a5\uc744 \uc124\uc815\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911: {0}#setFeature(null, {1})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_FEATURE_UNKNOWN),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \uae30\ub2a5 \"{0}\"\uc744(\ub97c) \uc124\uc815\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911: {1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_GETTING_NULL_FEATURE),
			$of(u"\ub110 \uc774\ub984\uc73c\ub85c \uae30\ub2a5\uc744 \uac00\uc838\uc624\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911: {0}#getFeature(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_GETTING_UNKNOWN_FEATURE),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \uae30\ub2a5 \"{0}\"\uc744(\ub97c) \uac00\uc838\uc624\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911: {1}#getFeature({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: \ubcf4\uc548 \uad00\ub9ac\uc790\uac00 \uc788\uc744 \uacbd\uc6b0 \uae30\ub2a5\uc744 false\ub85c \uc124\uc815\ud560 \uc218 \uc5c6\uc74c: {1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NULL_XPATH_FUNCTION_RESOLVER),
			$of(u"\ub110 XPathFunctionResolver\ub97c \uc124\uc815\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911: {0}#setXPathFunctionResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::ER_NULL_XPATH_VARIABLE_RESOLVER),
			$of(u"\ub110 XPathVariableResolver\ub97c \uc124\uc815\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911: {0}#setXPathVariableResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_LOCALE_NAME_NOT_HANDLED),
			$of(u"format-number \ud568\uc218\uc758 \ub85c\ucf00\uc77c \uc774\ub984\uc774 \uc544\uc9c1 \ucc98\ub9ac\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_PROPERTY_NOT_SUPPORTED),
			$of(u"XSL \uc18d\uc131\uc774 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_DONT_DO_ANYTHING_WITH_NS),
			$of(u"\uc18d\uc131\uc758 {0} \ub124\uc784\uc2a4\ud398\uc774\uc2a4\uc5d0 \ub300\ud574 \ud604\uc7ac \uc5b4\ub5a4 \uc791\uc5c5\ub3c4 \uc218\ud589\ud558\uc9c0 \uc54a\uc544\uc57c \ud568: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_SECURITY_EXCEPTION),
			$of(u"XSL \uc2dc\uc2a4\ud15c \uc18d\uc131\uc5d0 \uc561\uc138\uc2a4\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911 SecurityException \ubc1c\uc0dd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_QUO_NO_LONGER_DEFINED),
			$of(u"\uc774\uc804 \uad6c\ubb38: quo(...)\uac00 XPath\uc5d0 \ub354 \uc774\uc0c1 \uc815\uc758\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST),
			$of(u"nodeTest\ub97c \uad6c\ud604\ud558\ub824\uba74 XPath\uc5d0 \ud30c\uc0dd \uac1d\uccb4\uac00 \ud544\uc694\ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_FUNCTION_TOKEN_NOT_FOUND),
			$of(u"\ud568\uc218 \ud1a0\ud070\uc744 \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_COULDNOT_FIND_FUNCTION),
			$of(u"\ud568\uc218\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_CANNOT_MAKE_URL_FROM),
			$of(u"{0}\uc5d0\uc11c URL\uc744 \uc0dd\uc131\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_EXPAND_ENTITIES_NOT_SUPPORTED),
			$of(u"DTM \uad6c\ubb38 \ubd84\uc11d\uae30\uc5d0 \ub300\ud574\uc11c\ub294 -E \uc635\uc158\uc774 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_ILLEGAL_VARIABLE_REFERENCE),
			$of(u"\ubcc0\uc218\uc5d0 \ub300\ud574 \uc81c\uacf5\ub41c VariableReference\uac00 \ucee8\ud14d\uc2a4\ud2b8\uc5d0\uc11c \ubc97\uc5b4\ub098\uac70\ub098 \uc815\uc758\ub97c \ud3ec\ud568\ud558\uc9c0 \uc5c6\uc2b5\ub2c8\ub2e4! \uc774\ub984 = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ko::WG_UNSUPPORTED_ENCODING),
			$of(u"\uc9c0\uc6d0\ub418\uc9c0 \uc54a\ub294 \uc778\ucf54\ub529: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("ko"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("ko"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("ko"_s)
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
			$of("version"_s),
			$of(u">>>>>>> Xalan \ubc84\uc804 "_s)
		}),
		$$new($ObjectArray, {
			$of("version2"_s),
			$of("<<<<<<<"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"\uc608"_s)
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
			$of("xsldone"_s),
			$of(u"XSLProcessor: \uc644\ub8cc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpath_option"_s),
			$of(u"XPath \uc635\uc158: "_s)
		}),
		$$new($ObjectArray, {
			$of("optionIN"_s),
			$of("   [-in inputXMLURL]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionSelect"_s),
			$of(u"   [-select XPath \ud45c\ud604\uc2dd]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionMatch"_s),
			$of(u"   [-match \uc77c\uce58 \ud328\ud134(\uc77c\uce58 \uc9c4\ub2e8\uc758 \uacbd\uc6b0)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionAnyExpr"_s),
			$of(u"\ub610\ub294 XPath \ud45c\ud604\uc2dd\uc774 \uc9c4\ub2e8 \ub364\ud504\ub97c \uc218\ud589\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg1"_s),
			$of(u"XSL \ud504\ub85c\uc138\uc2a4\ub97c \uc2e4\ud328\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg2"_s),
			$of(u"** \uad6c\ubb38 \ubd84\uc11d\uae30\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc74c **"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg3"_s),
			$of(u"\ud074\ub798\uc2a4 \uacbd\ub85c\ub97c \ud655\uc778\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg4"_s),
			$of(u"IBM\uc758 Java\uc6a9 XML \uad6c\ubb38 \ubd84\uc11d\uae30\uac00 \uc5c6\uc744 \uacbd\uc6b0 \ub2e4\uc74c \uc704\uce58\uc5d0\uc11c \ub2e4\uc6b4\ub85c\ub4dc\ud560 \uc218 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg5"_s),
			$of("IBM AlphaWorks: http://www.alphaworks.ibm.com/formula/xml"_s)
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

XPATHErrorResources_ko::XPATHErrorResources_ko() {
}

$Class* XPATHErrorResources_ko::load$($String* name, bool initialize) {
	$loadClass(XPATHErrorResources_ko, name, initialize, &_XPATHErrorResources_ko_ClassInfo_, clinit$XPATHErrorResources_ko, allocate$XPATHErrorResources_ko);
	return class$;
}

$Class* XPATHErrorResources_ko::class$ = nullptr;

						} // res
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com