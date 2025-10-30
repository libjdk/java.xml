#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>

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
#undef ER_COMPILATION_TOO_MANY_OPERATION
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
#undef ER_PREDICATE_TOO_MANY_OPEN
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

$FieldInfo _XPATHErrorResources_FieldInfo_[] = {
	{"ERROR0000", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ERROR0000)},
	{"ER_CURRENT_NOT_ALLOWED_IN_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CURRENT_NOT_ALLOWED_IN_MATCH)},
	{"ER_CURRENT_TAKES_NO_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CURRENT_TAKES_NO_ARGS)},
	{"ER_DOCUMENT_REPLACED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_DOCUMENT_REPLACED)},
	{"ER_CONTEXT_CAN_NOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CONTEXT_CAN_NOT_BE_NULL)},
	{"ER_CONTEXT_HAS_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CONTEXT_HAS_NO_OWNERDOC)},
	{"ER_LOCALNAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_LOCALNAME_HAS_TOO_MANY_ARGS)},
	{"ER_NAMESPACEURI_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NAMESPACEURI_HAS_TOO_MANY_ARGS)},
	{"ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS)},
	{"ER_NUMBER_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NUMBER_HAS_TOO_MANY_ARGS)},
	{"ER_NAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NAME_HAS_TOO_MANY_ARGS)},
	{"ER_STRING_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_STRING_HAS_TOO_MANY_ARGS)},
	{"ER_STRINGLENGTH_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_STRINGLENGTH_HAS_TOO_MANY_ARGS)},
	{"ER_TRANSLATE_TAKES_3_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_TRANSLATE_TAKES_3_ARGS)},
	{"ER_UNPARSEDENTITYURI_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_UNPARSEDENTITYURI_TAKES_1_ARG)},
	{"ER_NAMESPACEAXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NAMESPACEAXIS_NOT_IMPLEMENTED)},
	{"ER_UNKNOWN_AXIS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_UNKNOWN_AXIS)},
	{"ER_UNKNOWN_MATCH_OPERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_UNKNOWN_MATCH_OPERATION)},
	{"ER_INCORRECT_ARG_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_INCORRECT_ARG_LENGTH)},
	{"ER_CANT_CONVERT_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANT_CONVERT_TO_NUMBER)},
	{"ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER)},
	{"ER_CANT_CONVERT_TO_NODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANT_CONVERT_TO_NODELIST)},
	{"ER_CANT_CONVERT_TO_MUTABLENODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANT_CONVERT_TO_MUTABLENODELIST)},
	{"ER_CANT_CONVERT_TO_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANT_CONVERT_TO_TYPE)},
	{"ER_EXPECTED_MATCH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_MATCH_PATTERN)},
	{"ER_COULDNOT_GET_VAR_NAMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_COULDNOT_GET_VAR_NAMED)},
	{"ER_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_UNKNOWN_OPCODE)},
	{"ER_EXTRA_ILLEGAL_TOKENS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXTRA_ILLEGAL_TOKENS)},
	{"ER_EXPECTED_DOUBLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_DOUBLE_QUOTE)},
	{"ER_EXPECTED_SINGLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_SINGLE_QUOTE)},
	{"ER_EMPTY_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EMPTY_EXPRESSION)},
	{"ER_EXPECTED_BUT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_BUT_FOUND)},
	{"ER_INCORRECT_PROGRAMMER_ASSERTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_INCORRECT_PROGRAMMER_ASSERTION)},
	{"ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL)},
	{"ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG)},
	{"ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG)},
	{"ER_PREDICATE_ILLEGAL_SYNTAX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_PREDICATE_ILLEGAL_SYNTAX)},
	{"ER_PREDICATE_TOO_MANY_OPEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_PREDICATE_TOO_MANY_OPEN)},
	{"ER_COMPILATION_TOO_MANY_OPERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_COMPILATION_TOO_MANY_OPERATION)},
	{"ER_ILLEGAL_AXIS_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_ILLEGAL_AXIS_NAME)},
	{"ER_UNKNOWN_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_UNKNOWN_NODETYPE)},
	{"ER_PATTERN_LITERAL_NEEDS_BE_QUOTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_PATTERN_LITERAL_NEEDS_BE_QUOTED)},
	{"ER_COULDNOT_BE_FORMATTED_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_COULDNOT_BE_FORMATTED_TO_NUMBER)},
	{"ER_COULDNOT_CREATE_XMLPROCESSORLIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_COULDNOT_CREATE_XMLPROCESSORLIAISON)},
	{"ER_DIDNOT_FIND_XPATH_SELECT_EXP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_DIDNOT_FIND_XPATH_SELECT_EXP)},
	{"ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH)},
	{"ER_ERROR_OCCURED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_ERROR_OCCURED)},
	{"ER_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_ILLEGAL_VARIABLE_REFERENCE)},
	{"ER_AXES_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_AXES_NOT_ALLOWED)},
	{"ER_KEY_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_KEY_HAS_TOO_MANY_ARGS)},
	{"ER_COUNT_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_COUNT_TAKES_1_ARG)},
	{"ER_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_COULDNOT_FIND_FUNCTION)},
	{"ER_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_UNSUPPORTED_ENCODING)},
	{"ER_PROBLEM_IN_DTM_NEXTSIBLING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_PROBLEM_IN_DTM_NEXTSIBLING)},
	{"ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL)},
	{"ER_SETDOMFACTORY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_SETDOMFACTORY_NOT_SUPPORTED)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_PREFIX_MUST_RESOLVE)},
	{"ER_PARSE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_PARSE_NOT_SUPPORTED)},
	{"ER_SAX_API_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_SAX_API_NOT_HANDLED)},
	{"ER_IGNORABLE_WHITESPACE_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_IGNORABLE_WHITESPACE_NOT_HANDLED)},
	{"ER_DTM_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_DTM_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_XERCES_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_PARSE_ERROR_DETAILS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_XERCES_PARSE_ERROR_DETAILS)},
	{"ER_XERCES_PARSE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_XERCES_PARSE_ERROR)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_OIERROR)},
	{"ER_CANNOT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANNOT_CREATE_URL)},
	{"ER_XPATH_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_XPATH_READOBJECT)},
	{"ER_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_FUNCTION_TOKEN_NOT_FOUND)},
	{"ER_CANNOT_DEAL_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANNOT_DEAL_XPATH_TYPE)},
	{"ER_NODESET_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NODESET_NOT_MUTABLE)},
	{"ER_NODESETDTM_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NODESETDTM_NOT_MUTABLE)},
	{"ER_VAR_NOT_RESOLVABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_VAR_NOT_RESOLVABLE)},
	{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NULL_ERROR_HANDLER)},
	{"ER_PROG_ASSERT_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_PROG_ASSERT_UNKNOWN_OPCODE)},
	{"ER_ZERO_OR_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_ZERO_OR_ONE)},
	{"ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS)},
	{"ER_COULD_NOT_FIND_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_COULD_NOT_FIND_VAR)},
	{"ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING)},
	{"ER_FASTSTRINGBUFFER_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_FASTSTRINGBUFFER_CANNOT_BE_NULL)},
	{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_TWO_OR_THREE)},
	{"ER_VARIABLE_ACCESSED_BEFORE_BIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_VARIABLE_ACCESSED_BEFORE_BIND)},
	{"ER_FSB_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_FSB_CANNOT_TAKE_STRING)},
	{"ER_SETTING_WALKER_ROOT_TO_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_SETTING_WALKER_ROOT_TO_NULL)},
	{"ER_NODESETDTM_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NODESETDTM_CANNOT_ITERATE)},
	{"ER_NODESET_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NODESET_CANNOT_ITERATE)},
	{"ER_NODESETDTM_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NODESETDTM_CANNOT_INDEX)},
	{"ER_NODESET_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NODESET_CANNOT_INDEX)},
	{"ER_CANNOT_CALL_SETSHOULDCACHENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANNOT_CALL_SETSHOULDCACHENODE)},
	{"ER_ONLY_ALLOWS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_ONLY_ALLOWS)},
	{"ER_UNKNOWN_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_UNKNOWN_STEP)},
	{"ER_EXPECTED_REL_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_REL_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH_AT_END_EXPR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_LOC_PATH_AT_END_EXPR)},
	{"ER_EXPECTED_LOC_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_LOC_STEP)},
	{"ER_EXPECTED_NODE_TEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_NODE_TEST)},
	{"ER_EXPECTED_STEP_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_STEP_PATTERN)},
	{"ER_EXPECTED_REL_PATH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXPECTED_REL_PATH_PATTERN)},
	{"ER_CANT_CONVERT_TO_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANT_CONVERT_TO_BOOLEAN)},
	{"ER_CANT_CONVERT_TO_SINGLENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANT_CONVERT_TO_SINGLENODE)},
	{"ER_CANT_GET_SNAPSHOT_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANT_GET_SNAPSHOT_LENGTH)},
	{"ER_NON_ITERATOR_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NON_ITERATOR_TYPE)},
	{"ER_DOC_MUTATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_DOC_MUTATED)},
	{"ER_INVALID_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_INVALID_XPATH_TYPE)},
	{"ER_EMPTY_XPATH_RESULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EMPTY_XPATH_RESULT)},
	{"ER_INCOMPATIBLE_TYPES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_INCOMPATIBLE_TYPES)},
	{"ER_NULL_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NULL_RESOLVER)},
	{"ER_CANT_CONVERT_TO_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_CANT_CONVERT_TO_STRING)},
	{"ER_NON_SNAPSHOT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NON_SNAPSHOT_TYPE)},
	{"ER_WRONG_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_WRONG_DOCUMENT)},
	{"ER_WRONG_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_WRONG_NODETYPE)},
	{"ER_XPATH_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_XPATH_ERROR)},
	{"ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED)},
	{"ER_RESOLVE_VARIABLE_RETURNS_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_RESOLVE_VARIABLE_RETURNS_NULL)},
	{"ER_UNSUPPORTED_RETURN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_UNSUPPORTED_RETURN_TYPE)},
	{"ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL)},
	{"ER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_ARG_CANNOT_BE_NULL)},
	{"ER_OBJECT_MODEL_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_OBJECT_MODEL_NULL)},
	{"ER_OBJECT_MODEL_EMPTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_OBJECT_MODEL_EMPTY)},
	{"ER_FEATURE_NAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_FEATURE_NAME_NULL)},
	{"ER_FEATURE_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_FEATURE_UNKNOWN)},
	{"ER_GETTING_NULL_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_GETTING_NULL_FEATURE)},
	{"ER_GETTING_UNKNOWN_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_GETTING_UNKNOWN_FEATURE)},
	{"ER_SECUREPROCESSING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_SECUREPROCESSING_FEATURE)},
	{"ER_NULL_XPATH_FUNCTION_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NULL_XPATH_FUNCTION_RESOLVER)},
	{"ER_NULL_XPATH_VARIABLE_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NULL_XPATH_VARIABLE_RESOLVER)},
	{"WG_LOCALE_NAME_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_LOCALE_NAME_NOT_HANDLED)},
	{"WG_PROPERTY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_PROPERTY_NOT_SUPPORTED)},
	{"WG_DONT_DO_ANYTHING_WITH_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_DONT_DO_ANYTHING_WITH_NS)},
	{"WG_SECURITY_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_SECURITY_EXCEPTION)},
	{"WG_QUO_NO_LONGER_DEFINED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_QUO_NO_LONGER_DEFINED)},
	{"WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST)},
	{"WG_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_FUNCTION_TOKEN_NOT_FOUND)},
	{"WG_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_COULDNOT_FIND_FUNCTION)},
	{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_CANNOT_MAKE_URL_FROM)},
	{"WG_EXPAND_ENTITIES_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_EXPAND_ENTITIES_NOT_SUPPORTED)},
	{"WG_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_ILLEGAL_VARIABLE_REFERENCE)},
	{"WG_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WG_UNSUPPORTED_ENCODING)},
	{"ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPATHErrorResources, _contents)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, FORMAT_FAILED)},
	{"ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ERROR_RESOURCES)},
	{"ERROR_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ERROR_STRING)},
	{"ERROR_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, ERROR_HEADER)},
	{"WARNING_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, WARNING_HEADER)},
	{"XSL_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, XSL_HEADER)},
	{"XML_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, XML_HEADER)},
	{"QUERY_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources, QUERY_HEADER)},
	{}
};

$MethodInfo _XPATHErrorResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPATHErrorResources::*)()>(&XPATHErrorResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPATHErrorResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.res.XPATHErrorResources",
	"java.util.ListResourceBundle",
	nullptr,
	_XPATHErrorResources_FieldInfo_,
	_XPATHErrorResources_MethodInfo_
};

$Object* allocate$XPATHErrorResources($Class* clazz) {
	return $of($alloc(XPATHErrorResources));
}

$String* XPATHErrorResources::ERROR0000 = nullptr;
$String* XPATHErrorResources::ER_CURRENT_NOT_ALLOWED_IN_MATCH = nullptr;
$String* XPATHErrorResources::ER_CURRENT_TAKES_NO_ARGS = nullptr;
$String* XPATHErrorResources::ER_DOCUMENT_REPLACED = nullptr;
$String* XPATHErrorResources::ER_CONTEXT_CAN_NOT_BE_NULL = nullptr;
$String* XPATHErrorResources::ER_CONTEXT_HAS_NO_OWNERDOC = nullptr;
$String* XPATHErrorResources::ER_LOCALNAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources::ER_NUMBER_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources::ER_NAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources::ER_STRING_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources::ER_TRANSLATE_TAKES_3_ARGS = nullptr;
$String* XPATHErrorResources::ER_UNPARSEDENTITYURI_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources::ER_NAMESPACEAXIS_NOT_IMPLEMENTED = nullptr;
$String* XPATHErrorResources::ER_UNKNOWN_AXIS = nullptr;
$String* XPATHErrorResources::ER_UNKNOWN_MATCH_OPERATION = nullptr;
$String* XPATHErrorResources::ER_INCORRECT_ARG_LENGTH = nullptr;
$String* XPATHErrorResources::ER_CANT_CONVERT_TO_NUMBER = nullptr;
$String* XPATHErrorResources::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER = nullptr;
$String* XPATHErrorResources::ER_CANT_CONVERT_TO_NODELIST = nullptr;
$String* XPATHErrorResources::ER_CANT_CONVERT_TO_MUTABLENODELIST = nullptr;
$String* XPATHErrorResources::ER_CANT_CONVERT_TO_TYPE = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_MATCH_PATTERN = nullptr;
$String* XPATHErrorResources::ER_COULDNOT_GET_VAR_NAMED = nullptr;
$String* XPATHErrorResources::ER_UNKNOWN_OPCODE = nullptr;
$String* XPATHErrorResources::ER_EXTRA_ILLEGAL_TOKENS = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_DOUBLE_QUOTE = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_SINGLE_QUOTE = nullptr;
$String* XPATHErrorResources::ER_EMPTY_EXPRESSION = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_BUT_FOUND = nullptr;
$String* XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION = nullptr;
$String* XPATHErrorResources::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL = nullptr;
$String* XPATHErrorResources::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG = nullptr;
$String* XPATHErrorResources::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG = nullptr;
$String* XPATHErrorResources::ER_PREDICATE_ILLEGAL_SYNTAX = nullptr;
$String* XPATHErrorResources::ER_PREDICATE_TOO_MANY_OPEN = nullptr;
$String* XPATHErrorResources::ER_COMPILATION_TOO_MANY_OPERATION = nullptr;
$String* XPATHErrorResources::ER_ILLEGAL_AXIS_NAME = nullptr;
$String* XPATHErrorResources::ER_UNKNOWN_NODETYPE = nullptr;
$String* XPATHErrorResources::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED = nullptr;
$String* XPATHErrorResources::ER_COULDNOT_BE_FORMATTED_TO_NUMBER = nullptr;
$String* XPATHErrorResources::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON = nullptr;
$String* XPATHErrorResources::ER_DIDNOT_FIND_XPATH_SELECT_EXP = nullptr;
$String* XPATHErrorResources::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH = nullptr;
$String* XPATHErrorResources::ER_ERROR_OCCURED = nullptr;
$String* XPATHErrorResources::ER_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources::ER_AXES_NOT_ALLOWED = nullptr;
$String* XPATHErrorResources::ER_KEY_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources::ER_COUNT_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources::ER_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources::ER_UNSUPPORTED_ENCODING = nullptr;
$String* XPATHErrorResources::ER_PROBLEM_IN_DTM_NEXTSIBLING = nullptr;
$String* XPATHErrorResources::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL = nullptr;
$String* XPATHErrorResources::ER_SETDOMFACTORY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XPATHErrorResources::ER_PARSE_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources::ER_SAX_API_NOT_HANDLED = nullptr;
$String* XPATHErrorResources::ER_IGNORABLE_WHITESPACE_NOT_HANDLED = nullptr;
$String* XPATHErrorResources::ER_DTM_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources::ER_XERCES_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources::ER_XERCES_PARSE_ERROR_DETAILS = nullptr;
$String* XPATHErrorResources::ER_XERCES_PARSE_ERROR = nullptr;
$String* XPATHErrorResources::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XPATHErrorResources::ER_OIERROR = nullptr;
$String* XPATHErrorResources::ER_CANNOT_CREATE_URL = nullptr;
$String* XPATHErrorResources::ER_XPATH_READOBJECT = nullptr;
$String* XPATHErrorResources::ER_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources::ER_CANNOT_DEAL_XPATH_TYPE = nullptr;
$String* XPATHErrorResources::ER_NODESET_NOT_MUTABLE = nullptr;
$String* XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE = nullptr;
$String* XPATHErrorResources::ER_VAR_NOT_RESOLVABLE = nullptr;
$String* XPATHErrorResources::ER_NULL_ERROR_HANDLER = nullptr;
$String* XPATHErrorResources::ER_PROG_ASSERT_UNKNOWN_OPCODE = nullptr;
$String* XPATHErrorResources::ER_ZERO_OR_ONE = nullptr;
$String* XPATHErrorResources::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS = nullptr;
$String* XPATHErrorResources::ER_COULD_NOT_FIND_VAR = nullptr;
$String* XPATHErrorResources::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING = nullptr;
$String* XPATHErrorResources::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources::ER_TWO_OR_THREE = nullptr;
$String* XPATHErrorResources::ER_VARIABLE_ACCESSED_BEFORE_BIND = nullptr;
$String* XPATHErrorResources::ER_FSB_CANNOT_TAKE_STRING = nullptr;
$String* XPATHErrorResources::ER_SETTING_WALKER_ROOT_TO_NULL = nullptr;
$String* XPATHErrorResources::ER_NODESETDTM_CANNOT_ITERATE = nullptr;
$String* XPATHErrorResources::ER_NODESET_CANNOT_ITERATE = nullptr;
$String* XPATHErrorResources::ER_NODESETDTM_CANNOT_INDEX = nullptr;
$String* XPATHErrorResources::ER_NODESET_CANNOT_INDEX = nullptr;
$String* XPATHErrorResources::ER_CANNOT_CALL_SETSHOULDCACHENODE = nullptr;
$String* XPATHErrorResources::ER_ONLY_ALLOWS = nullptr;
$String* XPATHErrorResources::ER_UNKNOWN_STEP = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_REL_LOC_PATH = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_LOC_PATH = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_LOC_PATH_AT_END_EXPR = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_LOC_STEP = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_NODE_TEST = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_STEP_PATTERN = nullptr;
$String* XPATHErrorResources::ER_EXPECTED_REL_PATH_PATTERN = nullptr;
$String* XPATHErrorResources::ER_CANT_CONVERT_TO_BOOLEAN = nullptr;
$String* XPATHErrorResources::ER_CANT_CONVERT_TO_SINGLENODE = nullptr;
$String* XPATHErrorResources::ER_CANT_GET_SNAPSHOT_LENGTH = nullptr;
$String* XPATHErrorResources::ER_NON_ITERATOR_TYPE = nullptr;
$String* XPATHErrorResources::ER_DOC_MUTATED = nullptr;
$String* XPATHErrorResources::ER_INVALID_XPATH_TYPE = nullptr;
$String* XPATHErrorResources::ER_EMPTY_XPATH_RESULT = nullptr;
$String* XPATHErrorResources::ER_INCOMPATIBLE_TYPES = nullptr;
$String* XPATHErrorResources::ER_NULL_RESOLVER = nullptr;
$String* XPATHErrorResources::ER_CANT_CONVERT_TO_STRING = nullptr;
$String* XPATHErrorResources::ER_NON_SNAPSHOT_TYPE = nullptr;
$String* XPATHErrorResources::ER_WRONG_DOCUMENT = nullptr;
$String* XPATHErrorResources::ER_WRONG_NODETYPE = nullptr;
$String* XPATHErrorResources::ER_XPATH_ERROR = nullptr;
$String* XPATHErrorResources::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED = nullptr;
$String* XPATHErrorResources::ER_RESOLVE_VARIABLE_RETURNS_NULL = nullptr;
$String* XPATHErrorResources::ER_UNSUPPORTED_RETURN_TYPE = nullptr;
$String* XPATHErrorResources::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources::ER_ARG_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources::ER_OBJECT_MODEL_NULL = nullptr;
$String* XPATHErrorResources::ER_OBJECT_MODEL_EMPTY = nullptr;
$String* XPATHErrorResources::ER_FEATURE_NAME_NULL = nullptr;
$String* XPATHErrorResources::ER_FEATURE_UNKNOWN = nullptr;
$String* XPATHErrorResources::ER_GETTING_NULL_FEATURE = nullptr;
$String* XPATHErrorResources::ER_GETTING_UNKNOWN_FEATURE = nullptr;
$String* XPATHErrorResources::ER_SECUREPROCESSING_FEATURE = nullptr;
$String* XPATHErrorResources::ER_NULL_XPATH_FUNCTION_RESOLVER = nullptr;
$String* XPATHErrorResources::ER_NULL_XPATH_VARIABLE_RESOLVER = nullptr;
$String* XPATHErrorResources::WG_LOCALE_NAME_NOT_HANDLED = nullptr;
$String* XPATHErrorResources::WG_PROPERTY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources::WG_DONT_DO_ANYTHING_WITH_NS = nullptr;
$String* XPATHErrorResources::WG_SECURITY_EXCEPTION = nullptr;
$String* XPATHErrorResources::WG_QUO_NO_LONGER_DEFINED = nullptr;
$String* XPATHErrorResources::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST = nullptr;
$String* XPATHErrorResources::WG_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources::WG_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XPATHErrorResources::WG_EXPAND_ENTITIES_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources::WG_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources::WG_UNSUPPORTED_ENCODING = nullptr;
$String* XPATHErrorResources::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$ObjectArray2* XPATHErrorResources::_contents = nullptr;
$String* XPATHErrorResources::BAD_CODE = nullptr;
$String* XPATHErrorResources::FORMAT_FAILED = nullptr;
$String* XPATHErrorResources::ERROR_RESOURCES = nullptr;
$String* XPATHErrorResources::ERROR_STRING = nullptr;
$String* XPATHErrorResources::ERROR_HEADER = nullptr;
$String* XPATHErrorResources::WARNING_HEADER = nullptr;
$String* XPATHErrorResources::XSL_HEADER = nullptr;
$String* XPATHErrorResources::XML_HEADER = nullptr;
$String* XPATHErrorResources::QUERY_HEADER = nullptr;

void XPATHErrorResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XPATHErrorResources::getContents() {
	return XPATHErrorResources::_contents;
}

void clinit$XPATHErrorResources($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XPATHErrorResources::ERROR0000, "ERROR0000"_s);
	$assignStatic(XPATHErrorResources::ER_CURRENT_NOT_ALLOWED_IN_MATCH, "ER_CURRENT_NOT_ALLOWED_IN_MATCH"_s);
	$assignStatic(XPATHErrorResources::ER_CURRENT_TAKES_NO_ARGS, "ER_CURRENT_TAKES_NO_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_DOCUMENT_REPLACED, "ER_DOCUMENT_REPLACED"_s);
	$assignStatic(XPATHErrorResources::ER_CONTEXT_CAN_NOT_BE_NULL, "ER_CONTEXT_CAN_NOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources::ER_CONTEXT_HAS_NO_OWNERDOC, "ER_CONTEXT_HAS_NO_OWNERDOC"_s);
	$assignStatic(XPATHErrorResources::ER_LOCALNAME_HAS_TOO_MANY_ARGS, "ER_LOCALNAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS, "ER_NAMESPACEURI_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS, "ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_NUMBER_HAS_TOO_MANY_ARGS, "ER_NUMBER_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_NAME_HAS_TOO_MANY_ARGS, "ER_NAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_STRING_HAS_TOO_MANY_ARGS, "ER_STRING_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS, "ER_STRINGLENGTH_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_TRANSLATE_TAKES_3_ARGS, "ER_TRANSLATE_TAKES_3_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_UNPARSEDENTITYURI_TAKES_1_ARG, "ER_UNPARSEDENTITYURI_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources::ER_NAMESPACEAXIS_NOT_IMPLEMENTED, "ER_NAMESPACEAXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XPATHErrorResources::ER_UNKNOWN_AXIS, "ER_UNKNOWN_AXIS"_s);
	$assignStatic(XPATHErrorResources::ER_UNKNOWN_MATCH_OPERATION, "ER_UNKNOWN_MATCH_OPERATION"_s);
	$assignStatic(XPATHErrorResources::ER_INCORRECT_ARG_LENGTH, "ER_INCORRECT_ARG_LENGTH"_s);
	$assignStatic(XPATHErrorResources::ER_CANT_CONVERT_TO_NUMBER, "ER_CANT_CONVERT_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER, "ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources::ER_CANT_CONVERT_TO_NODELIST, "ER_CANT_CONVERT_TO_NODELIST"_s);
	$assignStatic(XPATHErrorResources::ER_CANT_CONVERT_TO_MUTABLENODELIST, "ER_CANT_CONVERT_TO_MUTABLENODELIST"_s);
	$assignStatic(XPATHErrorResources::ER_CANT_CONVERT_TO_TYPE, "ER_CANT_CONVERT_TO_TYPE"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_MATCH_PATTERN, "ER_EXPECTED_MATCH_PATTERN"_s);
	$assignStatic(XPATHErrorResources::ER_COULDNOT_GET_VAR_NAMED, "ER_COULDNOT_GET_VAR_NAMED"_s);
	$assignStatic(XPATHErrorResources::ER_UNKNOWN_OPCODE, "ER_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources::ER_EXTRA_ILLEGAL_TOKENS, "ER_EXTRA_ILLEGAL_TOKENS"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_DOUBLE_QUOTE, "ER_EXPECTED_DOUBLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_SINGLE_QUOTE, "ER_EXPECTED_SINGLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources::ER_EMPTY_EXPRESSION, "ER_EMPTY_EXPRESSION"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_BUT_FOUND, "ER_EXPECTED_BUT_FOUND"_s);
	$assignStatic(XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION, "ER_INCORRECT_PROGRAMMER_ASSERTION"_s);
	$assignStatic(XPATHErrorResources::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL, "ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL"_s);
	$assignStatic(XPATHErrorResources::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG, "ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG"_s);
	$assignStatic(XPATHErrorResources::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG, "ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG"_s);
	$assignStatic(XPATHErrorResources::ER_PREDICATE_ILLEGAL_SYNTAX, "ER_PREDICATE_ILLEGAL_SYNTAX"_s);
	$assignStatic(XPATHErrorResources::ER_PREDICATE_TOO_MANY_OPEN, "ER_PREDICATE_TOO_MANY_OPEN"_s);
	$assignStatic(XPATHErrorResources::ER_COMPILATION_TOO_MANY_OPERATION, "ER_COMPILATION_TOO_MANY_OPERATION"_s);
	$assignStatic(XPATHErrorResources::ER_ILLEGAL_AXIS_NAME, "ER_ILLEGAL_AXIS_NAME"_s);
	$assignStatic(XPATHErrorResources::ER_UNKNOWN_NODETYPE, "ER_UNKNOWN_NODETYPE"_s);
	$assignStatic(XPATHErrorResources::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED, "ER_PATTERN_LITERAL_NEEDS_BE_QUOTED"_s);
	$assignStatic(XPATHErrorResources::ER_COULDNOT_BE_FORMATTED_TO_NUMBER, "ER_COULDNOT_BE_FORMATTED_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON, "ER_COULDNOT_CREATE_XMLPROCESSORLIAISON"_s);
	$assignStatic(XPATHErrorResources::ER_DIDNOT_FIND_XPATH_SELECT_EXP, "ER_DIDNOT_FIND_XPATH_SELECT_EXP"_s);
	$assignStatic(XPATHErrorResources::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH, "ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH"_s);
	$assignStatic(XPATHErrorResources::ER_ERROR_OCCURED, "ER_ERROR_OCCURED"_s);
	$assignStatic(XPATHErrorResources::ER_ILLEGAL_VARIABLE_REFERENCE, "ER_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources::ER_AXES_NOT_ALLOWED, "ER_AXES_NOT_ALLOWED"_s);
	$assignStatic(XPATHErrorResources::ER_KEY_HAS_TOO_MANY_ARGS, "ER_KEY_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources::ER_COUNT_TAKES_1_ARG, "ER_COUNT_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources::ER_COULDNOT_FIND_FUNCTION, "ER_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources::ER_UNSUPPORTED_ENCODING, "ER_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources::ER_PROBLEM_IN_DTM_NEXTSIBLING, "ER_PROBLEM_IN_DTM_NEXTSIBLING"_s);
	$assignStatic(XPATHErrorResources::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL, "ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL"_s);
	$assignStatic(XPATHErrorResources::ER_SETDOMFACTORY_NOT_SUPPORTED, "ER_SETDOMFACTORY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XPATHErrorResources::ER_PARSE_NOT_SUPPORTED, "ER_PARSE_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources::ER_SAX_API_NOT_HANDLED, "ER_SAX_API_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources::ER_IGNORABLE_WHITESPACE_NOT_HANDLED, "ER_IGNORABLE_WHITESPACE_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources::ER_DTM_CANNOT_HANDLE_NODES, "ER_DTM_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources::ER_XERCES_CANNOT_HANDLE_NODES, "ER_XERCES_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources::ER_XERCES_PARSE_ERROR_DETAILS, "ER_XERCES_PARSE_ERROR_DETAILS"_s);
	$assignStatic(XPATHErrorResources::ER_XERCES_PARSE_ERROR, "ER_XERCES_PARSE_ERROR"_s);
	$assignStatic(XPATHErrorResources::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XPATHErrorResources::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XPATHErrorResources::ER_CANNOT_CREATE_URL, "ER_CANNOT_CREATE_URL"_s);
	$assignStatic(XPATHErrorResources::ER_XPATH_READOBJECT, "ER_XPATH_READOBJECT"_s);
	$assignStatic(XPATHErrorResources::ER_FUNCTION_TOKEN_NOT_FOUND, "ER_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources::ER_CANNOT_DEAL_XPATH_TYPE, "ER_CANNOT_DEAL_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources::ER_NODESET_NOT_MUTABLE, "ER_NODESET_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE, "ER_NODESETDTM_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources::ER_VAR_NOT_RESOLVABLE, "ER_VAR_NOT_RESOLVABLE"_s);
	$assignStatic(XPATHErrorResources::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XPATHErrorResources::ER_PROG_ASSERT_UNKNOWN_OPCODE, "ER_PROG_ASSERT_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources::ER_ZERO_OR_ONE, "ER_ZERO_OR_ONE"_s);
	$assignStatic(XPATHErrorResources::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS, "ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS"_s);
	$assignStatic(XPATHErrorResources::ER_COULD_NOT_FIND_VAR, "ER_COULD_NOT_FIND_VAR"_s);
	$assignStatic(XPATHErrorResources::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING, "ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL, "ER_FASTSTRINGBUFFER_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XPATHErrorResources::ER_VARIABLE_ACCESSED_BEFORE_BIND, "ER_VARIABLE_ACCESSED_BEFORE_BIND"_s);
	$assignStatic(XPATHErrorResources::ER_FSB_CANNOT_TAKE_STRING, "ER_FSB_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources::ER_SETTING_WALKER_ROOT_TO_NULL, "ER_SETTING_WALKER_ROOT_TO_NULL"_s);
	$assignStatic(XPATHErrorResources::ER_NODESETDTM_CANNOT_ITERATE, "ER_NODESETDTM_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources::ER_NODESET_CANNOT_ITERATE, "ER_NODESET_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources::ER_NODESETDTM_CANNOT_INDEX, "ER_NODESETDTM_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources::ER_NODESET_CANNOT_INDEX, "ER_NODESET_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources::ER_CANNOT_CALL_SETSHOULDCACHENODE, "ER_CANNOT_CALL_SETSHOULDCACHENODE"_s);
	$assignStatic(XPATHErrorResources::ER_ONLY_ALLOWS, "ER_ONLY_ALLOWS"_s);
	$assignStatic(XPATHErrorResources::ER_UNKNOWN_STEP, "ER_UNKNOWN_STEP"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_REL_LOC_PATH, "ER_EXPECTED_REL_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_LOC_PATH, "ER_EXPECTED_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_LOC_PATH_AT_END_EXPR, "ER_EXPECTED_LOC_PATH_AT_END_EXPR"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_LOC_STEP, "ER_EXPECTED_LOC_STEP"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_NODE_TEST, "ER_EXPECTED_NODE_TEST"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_STEP_PATTERN, "ER_EXPECTED_STEP_PATTERN"_s);
	$assignStatic(XPATHErrorResources::ER_EXPECTED_REL_PATH_PATTERN, "ER_EXPECTED_REL_PATH_PATTERN"_s);
	$assignStatic(XPATHErrorResources::ER_CANT_CONVERT_TO_BOOLEAN, "ER_CANT_CONVERT_TO_BOOLEAN"_s);
	$assignStatic(XPATHErrorResources::ER_CANT_CONVERT_TO_SINGLENODE, "ER_CANT_CONVERT_TO_SINGLENODE"_s);
	$assignStatic(XPATHErrorResources::ER_CANT_GET_SNAPSHOT_LENGTH, "ER_CANT_GET_SNAPSHOT_LENGTH"_s);
	$assignStatic(XPATHErrorResources::ER_NON_ITERATOR_TYPE, "ER_NON_ITERATOR_TYPE"_s);
	$assignStatic(XPATHErrorResources::ER_DOC_MUTATED, "ER_DOC_MUTATED"_s);
	$assignStatic(XPATHErrorResources::ER_INVALID_XPATH_TYPE, "ER_INVALID_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources::ER_EMPTY_XPATH_RESULT, "ER_EMPTY_XPATH_RESULT"_s);
	$assignStatic(XPATHErrorResources::ER_INCOMPATIBLE_TYPES, "ER_INCOMPATIBLE_TYPES"_s);
	$assignStatic(XPATHErrorResources::ER_NULL_RESOLVER, "ER_NULL_RESOLVER"_s);
	$assignStatic(XPATHErrorResources::ER_CANT_CONVERT_TO_STRING, "ER_CANT_CONVERT_TO_STRING"_s);
	$assignStatic(XPATHErrorResources::ER_NON_SNAPSHOT_TYPE, "ER_NON_SNAPSHOT_TYPE"_s);
	$assignStatic(XPATHErrorResources::ER_WRONG_DOCUMENT, "ER_WRONG_DOCUMENT"_s);
	$assignStatic(XPATHErrorResources::ER_WRONG_NODETYPE, "ER_WRONG_NODETYPE"_s);
	$assignStatic(XPATHErrorResources::ER_XPATH_ERROR, "ER_XPATH_ERROR"_s);
	$assignStatic(XPATHErrorResources::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED, "ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED"_s);
	$assignStatic(XPATHErrorResources::ER_RESOLVE_VARIABLE_RETURNS_NULL, "ER_RESOLVE_VARIABLE_RETURNS_NULL"_s);
	$assignStatic(XPATHErrorResources::ER_UNSUPPORTED_RETURN_TYPE, "ER_UNSUPPORTED_RETURN_TYPE"_s);
	$assignStatic(XPATHErrorResources::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL, "ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources::ER_ARG_CANNOT_BE_NULL, "ER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources::ER_OBJECT_MODEL_NULL, "ER_OBJECT_MODEL_NULL"_s);
	$assignStatic(XPATHErrorResources::ER_OBJECT_MODEL_EMPTY, "ER_OBJECT_MODEL_EMPTY"_s);
	$assignStatic(XPATHErrorResources::ER_FEATURE_NAME_NULL, "ER_FEATURE_NAME_NULL"_s);
	$assignStatic(XPATHErrorResources::ER_FEATURE_UNKNOWN, "ER_FEATURE_UNKNOWN"_s);
	$assignStatic(XPATHErrorResources::ER_GETTING_NULL_FEATURE, "ER_GETTING_NULL_FEATURE"_s);
	$assignStatic(XPATHErrorResources::ER_GETTING_UNKNOWN_FEATURE, "ER_GETTING_UNKNOWN_FEATURE"_s);
	$assignStatic(XPATHErrorResources::ER_SECUREPROCESSING_FEATURE, "ER_SECUREPROCESSING_FEATURE"_s);
	$assignStatic(XPATHErrorResources::ER_NULL_XPATH_FUNCTION_RESOLVER, "ER_NULL_XPATH_FUNCTION_RESOLVER"_s);
	$assignStatic(XPATHErrorResources::ER_NULL_XPATH_VARIABLE_RESOLVER, "ER_NULL_XPATH_VARIABLE_RESOLVER"_s);
	$assignStatic(XPATHErrorResources::WG_LOCALE_NAME_NOT_HANDLED, "WG_LOCALE_NAME_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources::WG_PROPERTY_NOT_SUPPORTED, "WG_PROPERTY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources::WG_DONT_DO_ANYTHING_WITH_NS, "WG_DONT_DO_ANYTHING_WITH_NS"_s);
	$assignStatic(XPATHErrorResources::WG_SECURITY_EXCEPTION, "WG_SECURITY_EXCEPTION"_s);
	$assignStatic(XPATHErrorResources::WG_QUO_NO_LONGER_DEFINED, "WG_QUO_NO_LONGER_DEFINED"_s);
	$assignStatic(XPATHErrorResources::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST, "WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST"_s);
	$assignStatic(XPATHErrorResources::WG_FUNCTION_TOKEN_NOT_FOUND, "WG_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources::WG_COULDNOT_FIND_FUNCTION, "WG_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XPATHErrorResources::WG_EXPAND_ENTITIES_NOT_SUPPORTED, "WG_EXPAND_ENTITIES_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources::WG_ILLEGAL_VARIABLE_REFERENCE, "WG_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources::WG_UNSUPPORTED_ENCODING, "WG_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XPATHErrorResources::FORMAT_FAILED, "FORMAT_FAILED"_s);
	$assignStatic(XPATHErrorResources::ERROR_RESOURCES, "com.sun.org.apache.xpath.internal.res.XPATHErrorResources"_s);
	$assignStatic(XPATHErrorResources::ERROR_STRING, "#error"_s);
	$assignStatic(XPATHErrorResources::ERROR_HEADER, "Error: "_s);
	$assignStatic(XPATHErrorResources::WARNING_HEADER, "Warning: "_s);
	$assignStatic(XPATHErrorResources::XSL_HEADER, "XSL "_s);
	$assignStatic(XPATHErrorResources::XML_HEADER, "XML "_s);
	$assignStatic(XPATHErrorResources::QUERY_HEADER, "PATTERN "_s);
	$assignStatic(XPATHErrorResources::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ERROR0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CURRENT_NOT_ALLOWED_IN_MATCH),
			$of("The current() function is not allowed in a match pattern!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CURRENT_TAKES_NO_ARGS),
			$of("The current() function does not accept arguments!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_DOCUMENT_REPLACED),
			$of("document() function implementation has been replaced by com.sun.org.apache.xalan.internal.xslt.FuncDocument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CONTEXT_CAN_NOT_BE_NULL),
			$of("The context can not be null when the operation is context-dependent."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CONTEXT_HAS_NO_OWNERDOC),
			$of("context does not have an owner document!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_LOCALNAME_HAS_TOO_MANY_ARGS),
			$of("local-name() has too many arguments."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS),
			$of("namespace-uri() has too many arguments."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS),
			$of("normalize-space() has too many arguments."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NUMBER_HAS_TOO_MANY_ARGS),
			$of("number() has too many arguments."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NAME_HAS_TOO_MANY_ARGS),
			$of("name() has too many arguments."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_STRING_HAS_TOO_MANY_ARGS),
			$of("string() has too many arguments."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS),
			$of("string-length() has too many arguments."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_TRANSLATE_TAKES_3_ARGS),
			$of("The translate() function takes three arguments!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_UNPARSEDENTITYURI_TAKES_1_ARG),
			$of("The unparsed-entity-uri function should take one argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NAMESPACEAXIS_NOT_IMPLEMENTED),
			$of("namespace axis not implemented yet!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_UNKNOWN_AXIS),
			$of("unknown axis: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_UNKNOWN_MATCH_OPERATION),
			$of("unknown match operation!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_INCORRECT_ARG_LENGTH),
			$of("Arg length of processing-instruction() node test is incorrect!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANT_CONVERT_TO_NUMBER),
			$of("Can not convert {0} to a number"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANT_CONVERT_TO_NODELIST),
			$of("Can not convert {0} to a NodeList!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANT_CONVERT_TO_MUTABLENODELIST),
			$of("Can not convert {0} to a NodeSetDTM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANT_CONVERT_TO_TYPE),
			$of("Can not convert {0} to a type#{1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_MATCH_PATTERN),
			$of("Expected match pattern in getMatchScore!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_COULDNOT_GET_VAR_NAMED),
			$of("Could not get variable named {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_UNKNOWN_OPCODE),
			$of("ERROR! Unknown op code: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXTRA_ILLEGAL_TOKENS),
			$of("Extra illegal tokens: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_DOUBLE_QUOTE),
			$of("misquoted literal... expected double quote!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_SINGLE_QUOTE),
			$of("misquoted literal... expected single quote!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EMPTY_EXPRESSION),
			$of("Empty expression!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_BUT_FOUND),
			$of("Expected {0}, but found: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION),
			$of("Programmer assertion is incorrect! - {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL),
			$of("boolean(...) argument is no longer optional with 19990709 XPath draft."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG),
			$of("Found \',\' but no preceding argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG),
			$of("Found \',\' but no following argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_PREDICATE_ILLEGAL_SYNTAX),
			$of("\'..[predicate]\' or \'.[predicate]\' is illegal syntax.  Use \'self::node()[predicate]\' instead."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_PREDICATE_TOO_MANY_OPEN),
			$of("Stack overflow while parsing {0} at {1}. Too many open predicates({2})."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_COMPILATION_TOO_MANY_OPERATION),
			$of("Stack overflow while compiling the expression. Too many operations({0})."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_ILLEGAL_AXIS_NAME),
			$of("illegal axis name: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_UNKNOWN_NODETYPE),
			$of("Unknown nodetype: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED),
			$of("Pattern literal ({0}) needs to be quoted!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_COULDNOT_BE_FORMATTED_TO_NUMBER),
			$of("{0} could not be formatted to a number!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON),
			$of("Could not create XML TransformerFactory Liaison: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_DIDNOT_FIND_XPATH_SELECT_EXP),
			$of("Error! Did not find xpath select expression (-select)."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH),
			$of("ERROR! Could not find ENDOP after OP_LOCATIONPATH"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_ERROR_OCCURED),
			$of("Error occured!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_ILLEGAL_VARIABLE_REFERENCE),
			$of("VariableReference given for variable out of context or without definition!  Name = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_AXES_NOT_ALLOWED),
			$of("Only child:: and attribute:: axes are allowed in match patterns!  Offending axes = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_KEY_HAS_TOO_MANY_ARGS),
			$of("key() has an incorrect number of arguments."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_COUNT_TAKES_1_ARG),
			$of("The count function should take one argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_COULDNOT_FIND_FUNCTION),
			$of("Could not find function: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_UNSUPPORTED_ENCODING),
			$of("Unsupported encoding: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_PROBLEM_IN_DTM_NEXTSIBLING),
			$of("Problem occured in DTM in getNextSibling... trying to recover"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL),
			$of("Programmer error: EmptyNodeList can not be written to."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_SETDOMFACTORY_NOT_SUPPORTED),
			$of("setDOMFactory is not supported by XPathContext!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_PREFIX_MUST_RESOLVE),
			$of("Prefix must resolve to a namespace: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_PARSE_NOT_SUPPORTED),
			$of("parse (InputSource source) not supported in XPathContext! Can not open {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_SAX_API_NOT_HANDLED),
			$of("SAX API characters(char ch[]... not handled by the DTM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_IGNORABLE_WHITESPACE_NOT_HANDLED),
			$of("ignorableWhitespace(char ch[]... not handled by the DTM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_DTM_CANNOT_HANDLE_NODES),
			$of("DTMLiaison can not handle nodes of type {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_XERCES_CANNOT_HANDLE_NODES),
			$of("DOM2Helper can not handle nodes of type {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_XERCES_PARSE_ERROR_DETAILS),
			$of("DOM2Helper.parse error: SystemID - {0} line - {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_XERCES_PARSE_ERROR),
			$of("DOM2Helper.parse error"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_INVALID_UTF16_SURROGATE),
			$of("Invalid UTF-16 surrogate detected: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_OIERROR),
			$of("IO error"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANNOT_CREATE_URL),
			$of("Cannot create url for: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_XPATH_READOBJECT),
			$of("In XPath.readObject: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_FUNCTION_TOKEN_NOT_FOUND),
			$of("function token not found."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANNOT_DEAL_XPATH_TYPE),
			$of("Can not deal with XPath type: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NODESET_NOT_MUTABLE),
			$of("This NodeSet is not mutable"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NODESETDTM_NOT_MUTABLE),
			$of("This NodeSetDTM is not mutable"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_VAR_NOT_RESOLVABLE),
			$of("Variable not resolvable: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NULL_ERROR_HANDLER),
			$of("Null error handler"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_PROG_ASSERT_UNKNOWN_OPCODE),
			$of("Programmer\'\'s assertion: unknown opcode: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_ZERO_OR_ONE),
			$of("0 or 1"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of("rtf() not supported by XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of("asNodeIterator() not supported by XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of("detach() not supported by XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of("num() not supported by XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of("xstr() not supported by XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of("str() not supported by XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS),
			$of("fsb() not supported for XStringForChars"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_COULD_NOT_FIND_VAR),
			$of("Could not find variable with the name of {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING),
			$of("XStringForChars can not take a string for an argument"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL),
			$of("The FastStringBuffer argument can not be null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_TWO_OR_THREE),
			$of("2 or 3"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_VARIABLE_ACCESSED_BEFORE_BIND),
			$of("Variable accessed before it is bound!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_FSB_CANNOT_TAKE_STRING),
			$of("XStringForFSB can not take a string for an argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_SETTING_WALKER_ROOT_TO_NULL),
			$of("\n !!!! Error! Setting the root of a walker to null!!!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NODESETDTM_CANNOT_ITERATE),
			$of("This NodeSetDTM can not iterate to a previous node!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NODESET_CANNOT_ITERATE),
			$of("This NodeSet can not iterate to a previous node!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NODESETDTM_CANNOT_INDEX),
			$of("This NodeSetDTM can not do indexing or counting functions!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NODESET_CANNOT_INDEX),
			$of("This NodeSet can not do indexing or counting functions!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANNOT_CALL_SETSHOULDCACHENODE),
			$of("Can not call setShouldCacheNodes after nextNode has been called!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_ONLY_ALLOWS),
			$of("{0} only allows {1} arguments"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_UNKNOWN_STEP),
			$of("Programmer\'\'s assertion in getNextStepPos: unknown stepType: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_REL_LOC_PATH),
			$of("A relative location path was expected following the \'/\' or \'//\' token."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_LOC_PATH),
			$of("A location path was expected, but the following token was encountered:  {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_LOC_PATH_AT_END_EXPR),
			$of("A location path was expected, but the end of the XPath expression was found instead."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_LOC_STEP),
			$of("A location step was expected following the \'/\' or \'//\' token."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_NODE_TEST),
			$of("A node test that matches either NCName:* or QName was expected."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_STEP_PATTERN),
			$of("A step pattern was expected, but \'/\' was encountered."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXPECTED_REL_PATH_PATTERN),
			$of("A relative path pattern was expected."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANT_CONVERT_TO_BOOLEAN),
			$of("The XPathResult of XPath expression \'\'{0}\'\' has an XPathResultType of {1} which cannot be converted to a boolean."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANT_CONVERT_TO_SINGLENODE),
			$of("The XPathResult of XPath expression \'\'{0}\'\' has an XPathResultType of {1} which cannot be converted to a single node. The method getSingleNodeValue applies only to types ANY_UNORDERED_NODE_TYPE and FIRST_ORDERED_NODE_TYPE."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANT_GET_SNAPSHOT_LENGTH),
			$of("The method getSnapshotLength cannot be called on the XPathResult of XPath expression \'\'{0}\'\' because its XPathResultType is {1}. This method applies only to types UNORDERED_NODE_SNAPSHOT_TYPE and ORDERED_NODE_SNAPSHOT_TYPE."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NON_ITERATOR_TYPE),
			$of("The method iterateNext cannot be called on the XPathResult of XPath expression \'\'{0}\'\' because its XPathResultType is {1}. This method applies only to types UNORDERED_NODE_ITERATOR_TYPE and ORDERED_NODE_ITERATOR_TYPE."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_DOC_MUTATED),
			$of("Document mutated since result was returned. Iterator is invalid."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_INVALID_XPATH_TYPE),
			$of("Invalid XPath type argument: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EMPTY_XPATH_RESULT),
			$of("Empty XPath result object"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_INCOMPATIBLE_TYPES),
			$of("The XPathResult of XPath expression \'\'{0}\'\' has an XPathResultType of {1} which cannot be coerced into the specified XPathResultType of {2}."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NULL_RESOLVER),
			$of("Unable to resolve prefix with null prefix resolver."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANT_CONVERT_TO_STRING),
			$of("The XPathResult of XPath expression \'\'{0}\'\' has an XPathResultType of {1} which cannot be converted to a string."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NON_SNAPSHOT_TYPE),
			$of("The method snapshotItem cannot be called on the XPathResult of XPath expression \'\'{0}\'\' because its XPathResultType is {1}. This method applies only to types UNORDERED_NODE_SNAPSHOT_TYPE and ORDERED_NODE_SNAPSHOT_TYPE."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_WRONG_DOCUMENT),
			$of("Context node does not belong to the document that is bound to this XPathEvaluator."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_WRONG_NODETYPE),
			$of("The context node type is not supported."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_XPATH_ERROR),
			$of("Unknown error in XPath."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER),
			$of("The XPathResult of XPath expression \'\'{0}\'\' has an XPathResultType of {1} which cannot be converted to a number"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED),
			$of("Extension function: \'\'{0}\'\' can not be invoked when the XMLConstants.FEATURE_SECURE_PROCESSING feature is set to true."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_RESOLVE_VARIABLE_RETURNS_NULL),
			$of("resolveVariable for variable {0} returning null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_UNSUPPORTED_RETURN_TYPE),
			$of("UnSupported Return Type : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of("Source and/or Return Type can not be null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of("Source and/or Return Type can not be null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_ARG_CANNOT_BE_NULL),
			$of("{0} argument can not be null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_OBJECT_MODEL_NULL),
			$of("{0}#isObjectModelSupported( String objectModel ) cannot be called with objectModel == null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_OBJECT_MODEL_EMPTY),
			$of("{0}#isObjectModelSupported( String objectModel ) cannot be called with objectModel == \"\""_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_FEATURE_NAME_NULL),
			$of("Trying to set a feature with a null name: {0}#setFeature( null, {1})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_FEATURE_UNKNOWN),
			$of("Trying to set the unknown feature \"{0}\":{1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_GETTING_NULL_FEATURE),
			$of("Trying to get a feature with a null name: {0}#getFeature(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_GETTING_UNKNOWN_FEATURE),
			$of("Trying to get the unknown feature \"{0}\":{1}#getFeature({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_SECUREPROCESSING_FEATURE),
			$of("FEATURE_SECURE_PROCESSING: Cannot set the feature to false when security manager is present: {1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NULL_XPATH_FUNCTION_RESOLVER),
			$of("Attempting to set a null XPathFunctionResolver:{0}#setXPathFunctionResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::ER_NULL_XPATH_VARIABLE_RESOLVER),
			$of("Attempting to set a null XPathVariableResolver:{0}#setXPathVariableResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_LOCALE_NAME_NOT_HANDLED),
			$of("locale name in the format-number function not yet handled!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_PROPERTY_NOT_SUPPORTED),
			$of("XSL Property not supported: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_DONT_DO_ANYTHING_WITH_NS),
			$of("Do not currently do anything with namespace {0} in property: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_SECURITY_EXCEPTION),
			$of("SecurityException when trying to access XSL system property: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_QUO_NO_LONGER_DEFINED),
			$of("Old syntax: quo(...) is no longer defined in XPath."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST),
			$of("XPath needs a derived object to implement nodeTest!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_FUNCTION_TOKEN_NOT_FOUND),
			$of("function token not found."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_COULDNOT_FIND_FUNCTION),
			$of("Could not find function: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_CANNOT_MAKE_URL_FROM),
			$of("Can not make URL from: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_EXPAND_ENTITIES_NOT_SUPPORTED),
			$of("-E option not supported for DTM parser"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_ILLEGAL_VARIABLE_REFERENCE),
			$of("VariableReference given for variable out of context or without definition!  Name = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources::WG_UNSUPPORTED_ENCODING),
			$of("Unsupported encoding: {0}"_s)
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
			$of("Parameter to createMessage was out of bounds"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of("Exception thrown during messageFormat call"_s)
		}),
		$$new($ObjectArray, {
			$of("version"_s),
			$of(">>>>>>> Xalan Version "_s)
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
			$of("Line #"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of("Column #"_s)
		}),
		$$new($ObjectArray, {
			$of("xsldone"_s),
			$of("XSLProcessor: done"_s)
		}),
		$$new($ObjectArray, {
			$of("xpath_option"_s),
			$of("xpath options: "_s)
		}),
		$$new($ObjectArray, {
			$of("optionIN"_s),
			$of("   [-in inputXMLURL]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionSelect"_s),
			$of("   [-select xpath expression]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionMatch"_s),
			$of("   [-match match pattern (for match diagnostics)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionAnyExpr"_s),
			$of("Or just an xpath expression will do a diagnostic dump"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg1"_s),
			$of("XSL Process was not successful."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg2"_s),
			$of("** Could not find parser **"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg3"_s),
			$of("Please check your classpath."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg4"_s),
			$of("If you don\'t have IBM\'s XML Parser for Java, you can download it from"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg5"_s),
			$of("IBM\'s AlphaWorks: http://www.alphaworks.ibm.com/formula/xml"_s)
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

XPATHErrorResources::XPATHErrorResources() {
}

$Class* XPATHErrorResources::load$($String* name, bool initialize) {
	$loadClass(XPATHErrorResources, name, initialize, &_XPATHErrorResources_ClassInfo_, clinit$XPATHErrorResources, allocate$XPATHErrorResources);
	return class$;
}

$Class* XPATHErrorResources::class$ = nullptr;

						} // res
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com