#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources_ja.h>

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

$FieldInfo _XPATHErrorResources_ja_FieldInfo_[] = {
	{"ERROR0000", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ERROR0000)},
	{"ER_CURRENT_NOT_ALLOWED_IN_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CURRENT_NOT_ALLOWED_IN_MATCH)},
	{"ER_CURRENT_TAKES_NO_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CURRENT_TAKES_NO_ARGS)},
	{"ER_DOCUMENT_REPLACED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_DOCUMENT_REPLACED)},
	{"ER_CONTEXT_CAN_NOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CONTEXT_CAN_NOT_BE_NULL)},
	{"ER_CONTEXT_HAS_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CONTEXT_HAS_NO_OWNERDOC)},
	{"ER_LOCALNAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_LOCALNAME_HAS_TOO_MANY_ARGS)},
	{"ER_NAMESPACEURI_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NAMESPACEURI_HAS_TOO_MANY_ARGS)},
	{"ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS)},
	{"ER_NUMBER_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NUMBER_HAS_TOO_MANY_ARGS)},
	{"ER_NAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NAME_HAS_TOO_MANY_ARGS)},
	{"ER_STRING_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_STRING_HAS_TOO_MANY_ARGS)},
	{"ER_STRINGLENGTH_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_STRINGLENGTH_HAS_TOO_MANY_ARGS)},
	{"ER_TRANSLATE_TAKES_3_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_TRANSLATE_TAKES_3_ARGS)},
	{"ER_UNPARSEDENTITYURI_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_UNPARSEDENTITYURI_TAKES_1_ARG)},
	{"ER_NAMESPACEAXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NAMESPACEAXIS_NOT_IMPLEMENTED)},
	{"ER_UNKNOWN_AXIS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_UNKNOWN_AXIS)},
	{"ER_UNKNOWN_MATCH_OPERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_UNKNOWN_MATCH_OPERATION)},
	{"ER_INCORRECT_ARG_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_INCORRECT_ARG_LENGTH)},
	{"ER_CANT_CONVERT_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANT_CONVERT_TO_NUMBER)},
	{"ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER)},
	{"ER_CANT_CONVERT_TO_NODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANT_CONVERT_TO_NODELIST)},
	{"ER_CANT_CONVERT_TO_MUTABLENODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANT_CONVERT_TO_MUTABLENODELIST)},
	{"ER_CANT_CONVERT_TO_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANT_CONVERT_TO_TYPE)},
	{"ER_EXPECTED_MATCH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_MATCH_PATTERN)},
	{"ER_COULDNOT_GET_VAR_NAMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_COULDNOT_GET_VAR_NAMED)},
	{"ER_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_UNKNOWN_OPCODE)},
	{"ER_EXTRA_ILLEGAL_TOKENS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXTRA_ILLEGAL_TOKENS)},
	{"ER_EXPECTED_DOUBLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_DOUBLE_QUOTE)},
	{"ER_EXPECTED_SINGLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_SINGLE_QUOTE)},
	{"ER_EMPTY_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EMPTY_EXPRESSION)},
	{"ER_EXPECTED_BUT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_BUT_FOUND)},
	{"ER_INCORRECT_PROGRAMMER_ASSERTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_INCORRECT_PROGRAMMER_ASSERTION)},
	{"ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL)},
	{"ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG)},
	{"ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG)},
	{"ER_PREDICATE_ILLEGAL_SYNTAX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_PREDICATE_ILLEGAL_SYNTAX)},
	{"ER_PREDICATE_TOO_MANY_OPEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_PREDICATE_TOO_MANY_OPEN)},
	{"ER_COMPILATION_TOO_MANY_OPERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_COMPILATION_TOO_MANY_OPERATION)},
	{"ER_ILLEGAL_AXIS_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_ILLEGAL_AXIS_NAME)},
	{"ER_UNKNOWN_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_UNKNOWN_NODETYPE)},
	{"ER_PATTERN_LITERAL_NEEDS_BE_QUOTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_PATTERN_LITERAL_NEEDS_BE_QUOTED)},
	{"ER_COULDNOT_BE_FORMATTED_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_COULDNOT_BE_FORMATTED_TO_NUMBER)},
	{"ER_COULDNOT_CREATE_XMLPROCESSORLIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_COULDNOT_CREATE_XMLPROCESSORLIAISON)},
	{"ER_DIDNOT_FIND_XPATH_SELECT_EXP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_DIDNOT_FIND_XPATH_SELECT_EXP)},
	{"ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH)},
	{"ER_ERROR_OCCURED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_ERROR_OCCURED)},
	{"ER_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_ILLEGAL_VARIABLE_REFERENCE)},
	{"ER_AXES_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_AXES_NOT_ALLOWED)},
	{"ER_KEY_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_KEY_HAS_TOO_MANY_ARGS)},
	{"ER_COUNT_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_COUNT_TAKES_1_ARG)},
	{"ER_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_COULDNOT_FIND_FUNCTION)},
	{"ER_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_UNSUPPORTED_ENCODING)},
	{"ER_PROBLEM_IN_DTM_NEXTSIBLING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_PROBLEM_IN_DTM_NEXTSIBLING)},
	{"ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL)},
	{"ER_SETDOMFACTORY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_SETDOMFACTORY_NOT_SUPPORTED)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_PREFIX_MUST_RESOLVE)},
	{"ER_PARSE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_PARSE_NOT_SUPPORTED)},
	{"ER_SAX_API_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_SAX_API_NOT_HANDLED)},
	{"ER_IGNORABLE_WHITESPACE_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_IGNORABLE_WHITESPACE_NOT_HANDLED)},
	{"ER_DTM_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_DTM_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_XERCES_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_PARSE_ERROR_DETAILS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_XERCES_PARSE_ERROR_DETAILS)},
	{"ER_XERCES_PARSE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_XERCES_PARSE_ERROR)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_OIERROR)},
	{"ER_CANNOT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANNOT_CREATE_URL)},
	{"ER_XPATH_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_XPATH_READOBJECT)},
	{"ER_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_FUNCTION_TOKEN_NOT_FOUND)},
	{"ER_CANNOT_DEAL_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANNOT_DEAL_XPATH_TYPE)},
	{"ER_NODESET_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NODESET_NOT_MUTABLE)},
	{"ER_NODESETDTM_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NODESETDTM_NOT_MUTABLE)},
	{"ER_VAR_NOT_RESOLVABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_VAR_NOT_RESOLVABLE)},
	{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NULL_ERROR_HANDLER)},
	{"ER_PROG_ASSERT_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_PROG_ASSERT_UNKNOWN_OPCODE)},
	{"ER_ZERO_OR_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_ZERO_OR_ONE)},
	{"ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS)},
	{"ER_COULD_NOT_FIND_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_COULD_NOT_FIND_VAR)},
	{"ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING)},
	{"ER_FASTSTRINGBUFFER_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_FASTSTRINGBUFFER_CANNOT_BE_NULL)},
	{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_TWO_OR_THREE)},
	{"ER_VARIABLE_ACCESSED_BEFORE_BIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_VARIABLE_ACCESSED_BEFORE_BIND)},
	{"ER_FSB_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_FSB_CANNOT_TAKE_STRING)},
	{"ER_SETTING_WALKER_ROOT_TO_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_SETTING_WALKER_ROOT_TO_NULL)},
	{"ER_NODESETDTM_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NODESETDTM_CANNOT_ITERATE)},
	{"ER_NODESET_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NODESET_CANNOT_ITERATE)},
	{"ER_NODESETDTM_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NODESETDTM_CANNOT_INDEX)},
	{"ER_NODESET_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NODESET_CANNOT_INDEX)},
	{"ER_CANNOT_CALL_SETSHOULDCACHENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANNOT_CALL_SETSHOULDCACHENODE)},
	{"ER_ONLY_ALLOWS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_ONLY_ALLOWS)},
	{"ER_UNKNOWN_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_UNKNOWN_STEP)},
	{"ER_EXPECTED_REL_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_REL_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH_AT_END_EXPR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_LOC_PATH_AT_END_EXPR)},
	{"ER_EXPECTED_LOC_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_LOC_STEP)},
	{"ER_EXPECTED_NODE_TEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_NODE_TEST)},
	{"ER_EXPECTED_STEP_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_STEP_PATTERN)},
	{"ER_EXPECTED_REL_PATH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXPECTED_REL_PATH_PATTERN)},
	{"ER_CANT_CONVERT_TO_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANT_CONVERT_TO_BOOLEAN)},
	{"ER_CANT_CONVERT_TO_SINGLENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANT_CONVERT_TO_SINGLENODE)},
	{"ER_CANT_GET_SNAPSHOT_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANT_GET_SNAPSHOT_LENGTH)},
	{"ER_NON_ITERATOR_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NON_ITERATOR_TYPE)},
	{"ER_DOC_MUTATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_DOC_MUTATED)},
	{"ER_INVALID_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_INVALID_XPATH_TYPE)},
	{"ER_EMPTY_XPATH_RESULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EMPTY_XPATH_RESULT)},
	{"ER_INCOMPATIBLE_TYPES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_INCOMPATIBLE_TYPES)},
	{"ER_NULL_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NULL_RESOLVER)},
	{"ER_CANT_CONVERT_TO_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_CANT_CONVERT_TO_STRING)},
	{"ER_NON_SNAPSHOT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NON_SNAPSHOT_TYPE)},
	{"ER_WRONG_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_WRONG_DOCUMENT)},
	{"ER_WRONG_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_WRONG_NODETYPE)},
	{"ER_XPATH_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_XPATH_ERROR)},
	{"ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED)},
	{"ER_RESOLVE_VARIABLE_RETURNS_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_RESOLVE_VARIABLE_RETURNS_NULL)},
	{"ER_UNSUPPORTED_RETURN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_UNSUPPORTED_RETURN_TYPE)},
	{"ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL)},
	{"ER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_ARG_CANNOT_BE_NULL)},
	{"ER_OBJECT_MODEL_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_OBJECT_MODEL_NULL)},
	{"ER_OBJECT_MODEL_EMPTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_OBJECT_MODEL_EMPTY)},
	{"ER_FEATURE_NAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_FEATURE_NAME_NULL)},
	{"ER_FEATURE_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_FEATURE_UNKNOWN)},
	{"ER_GETTING_NULL_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_GETTING_NULL_FEATURE)},
	{"ER_GETTING_UNKNOWN_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_GETTING_UNKNOWN_FEATURE)},
	{"ER_SECUREPROCESSING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_SECUREPROCESSING_FEATURE)},
	{"ER_NULL_XPATH_FUNCTION_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NULL_XPATH_FUNCTION_RESOLVER)},
	{"ER_NULL_XPATH_VARIABLE_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NULL_XPATH_VARIABLE_RESOLVER)},
	{"WG_LOCALE_NAME_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_LOCALE_NAME_NOT_HANDLED)},
	{"WG_PROPERTY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_PROPERTY_NOT_SUPPORTED)},
	{"WG_DONT_DO_ANYTHING_WITH_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_DONT_DO_ANYTHING_WITH_NS)},
	{"WG_SECURITY_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_SECURITY_EXCEPTION)},
	{"WG_QUO_NO_LONGER_DEFINED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_QUO_NO_LONGER_DEFINED)},
	{"WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST)},
	{"WG_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_FUNCTION_TOKEN_NOT_FOUND)},
	{"WG_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_COULDNOT_FIND_FUNCTION)},
	{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_CANNOT_MAKE_URL_FROM)},
	{"WG_EXPAND_ENTITIES_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_EXPAND_ENTITIES_NOT_SUPPORTED)},
	{"WG_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_ILLEGAL_VARIABLE_REFERENCE)},
	{"WG_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WG_UNSUPPORTED_ENCODING)},
	{"ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, _contents)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, FORMAT_FAILED)},
	{"ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ERROR_RESOURCES)},
	{"ERROR_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ERROR_STRING)},
	{"ERROR_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, ERROR_HEADER)},
	{"WARNING_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, WARNING_HEADER)},
	{"XSL_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, XSL_HEADER)},
	{"XML_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, XML_HEADER)},
	{"QUERY_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_ja, QUERY_HEADER)},
	{}
};

$MethodInfo _XPATHErrorResources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPATHErrorResources_ja::*)()>(&XPATHErrorResources_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPATHErrorResources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.res.XPATHErrorResources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_XPATHErrorResources_ja_FieldInfo_,
	_XPATHErrorResources_ja_MethodInfo_
};

$Object* allocate$XPATHErrorResources_ja($Class* clazz) {
	return $of($alloc(XPATHErrorResources_ja));
}

$String* XPATHErrorResources_ja::ERROR0000 = nullptr;
$String* XPATHErrorResources_ja::ER_CURRENT_NOT_ALLOWED_IN_MATCH = nullptr;
$String* XPATHErrorResources_ja::ER_CURRENT_TAKES_NO_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_DOCUMENT_REPLACED = nullptr;
$String* XPATHErrorResources_ja::ER_CONTEXT_CAN_NOT_BE_NULL = nullptr;
$String* XPATHErrorResources_ja::ER_CONTEXT_HAS_NO_OWNERDOC = nullptr;
$String* XPATHErrorResources_ja::ER_LOCALNAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_NUMBER_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_NAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_STRING_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_TRANSLATE_TAKES_3_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_UNPARSEDENTITYURI_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_ja::ER_NAMESPACEAXIS_NOT_IMPLEMENTED = nullptr;
$String* XPATHErrorResources_ja::ER_UNKNOWN_AXIS = nullptr;
$String* XPATHErrorResources_ja::ER_UNKNOWN_MATCH_OPERATION = nullptr;
$String* XPATHErrorResources_ja::ER_INCORRECT_ARG_LENGTH = nullptr;
$String* XPATHErrorResources_ja::ER_CANT_CONVERT_TO_NUMBER = nullptr;
$String* XPATHErrorResources_ja::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER = nullptr;
$String* XPATHErrorResources_ja::ER_CANT_CONVERT_TO_NODELIST = nullptr;
$String* XPATHErrorResources_ja::ER_CANT_CONVERT_TO_MUTABLENODELIST = nullptr;
$String* XPATHErrorResources_ja::ER_CANT_CONVERT_TO_TYPE = nullptr;
$String* XPATHErrorResources_ja::ER_EXPECTED_MATCH_PATTERN = nullptr;
$String* XPATHErrorResources_ja::ER_COULDNOT_GET_VAR_NAMED = nullptr;
$String* XPATHErrorResources_ja::ER_UNKNOWN_OPCODE = nullptr;
$String* XPATHErrorResources_ja::ER_EXTRA_ILLEGAL_TOKENS = nullptr;
$String* XPATHErrorResources_ja::ER_EXPECTED_DOUBLE_QUOTE = nullptr;
$String* XPATHErrorResources_ja::ER_EXPECTED_SINGLE_QUOTE = nullptr;
$String* XPATHErrorResources_ja::ER_EMPTY_EXPRESSION = nullptr;
$String* XPATHErrorResources_ja::ER_EXPECTED_BUT_FOUND = nullptr;
$String* XPATHErrorResources_ja::ER_INCORRECT_PROGRAMMER_ASSERTION = nullptr;
$String* XPATHErrorResources_ja::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL = nullptr;
$String* XPATHErrorResources_ja::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG = nullptr;
$String* XPATHErrorResources_ja::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG = nullptr;
$String* XPATHErrorResources_ja::ER_PREDICATE_ILLEGAL_SYNTAX = nullptr;
$String* XPATHErrorResources_ja::ER_PREDICATE_TOO_MANY_OPEN = nullptr;
$String* XPATHErrorResources_ja::ER_COMPILATION_TOO_MANY_OPERATION = nullptr;
$String* XPATHErrorResources_ja::ER_ILLEGAL_AXIS_NAME = nullptr;
$String* XPATHErrorResources_ja::ER_UNKNOWN_NODETYPE = nullptr;
$String* XPATHErrorResources_ja::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED = nullptr;
$String* XPATHErrorResources_ja::ER_COULDNOT_BE_FORMATTED_TO_NUMBER = nullptr;
$String* XPATHErrorResources_ja::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON = nullptr;
$String* XPATHErrorResources_ja::ER_DIDNOT_FIND_XPATH_SELECT_EXP = nullptr;
$String* XPATHErrorResources_ja::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH = nullptr;
$String* XPATHErrorResources_ja::ER_ERROR_OCCURED = nullptr;
$String* XPATHErrorResources_ja::ER_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_ja::ER_AXES_NOT_ALLOWED = nullptr;
$String* XPATHErrorResources_ja::ER_KEY_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_ja::ER_COUNT_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_ja::ER_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_ja::ER_UNSUPPORTED_ENCODING = nullptr;
$String* XPATHErrorResources_ja::ER_PROBLEM_IN_DTM_NEXTSIBLING = nullptr;
$String* XPATHErrorResources_ja::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL = nullptr;
$String* XPATHErrorResources_ja::ER_SETDOMFACTORY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_ja::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XPATHErrorResources_ja::ER_PARSE_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_ja::ER_SAX_API_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_ja::ER_IGNORABLE_WHITESPACE_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_ja::ER_DTM_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_ja::ER_XERCES_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_ja::ER_XERCES_PARSE_ERROR_DETAILS = nullptr;
$String* XPATHErrorResources_ja::ER_XERCES_PARSE_ERROR = nullptr;
$String* XPATHErrorResources_ja::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XPATHErrorResources_ja::ER_OIERROR = nullptr;
$String* XPATHErrorResources_ja::ER_CANNOT_CREATE_URL = nullptr;
$String* XPATHErrorResources_ja::ER_XPATH_READOBJECT = nullptr;
$String* XPATHErrorResources_ja::ER_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_ja::ER_CANNOT_DEAL_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_ja::ER_NODESET_NOT_MUTABLE = nullptr;
$String* XPATHErrorResources_ja::ER_NODESETDTM_NOT_MUTABLE = nullptr;

$String* XPATHErrorResources_ja::ER_VAR_NOT_RESOLVABLE = nullptr;

$String* XPATHErrorResources_ja::ER_NULL_ERROR_HANDLER = nullptr;

$String* XPATHErrorResources_ja::ER_PROG_ASSERT_UNKNOWN_OPCODE = nullptr;

$String* XPATHErrorResources_ja::ER_ZERO_OR_ONE = nullptr;

$String* XPATHErrorResources_ja::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ja::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ja::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS = nullptr;

$String* XPATHErrorResources_ja::ER_COULD_NOT_FIND_VAR = nullptr;

$String* XPATHErrorResources_ja::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING = nullptr;

$String* XPATHErrorResources_ja::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL = nullptr;

$String* XPATHErrorResources_ja::ER_TWO_OR_THREE = nullptr;

$String* XPATHErrorResources_ja::ER_VARIABLE_ACCESSED_BEFORE_BIND = nullptr;

$String* XPATHErrorResources_ja::ER_FSB_CANNOT_TAKE_STRING = nullptr;

$String* XPATHErrorResources_ja::ER_SETTING_WALKER_ROOT_TO_NULL = nullptr;

$String* XPATHErrorResources_ja::ER_NODESETDTM_CANNOT_ITERATE = nullptr;

$String* XPATHErrorResources_ja::ER_NODESET_CANNOT_ITERATE = nullptr;

$String* XPATHErrorResources_ja::ER_NODESETDTM_CANNOT_INDEX = nullptr;

$String* XPATHErrorResources_ja::ER_NODESET_CANNOT_INDEX = nullptr;

$String* XPATHErrorResources_ja::ER_CANNOT_CALL_SETSHOULDCACHENODE = nullptr;

$String* XPATHErrorResources_ja::ER_ONLY_ALLOWS = nullptr;

$String* XPATHErrorResources_ja::ER_UNKNOWN_STEP = nullptr;

$String* XPATHErrorResources_ja::ER_EXPECTED_REL_LOC_PATH = nullptr;

$String* XPATHErrorResources_ja::ER_EXPECTED_LOC_PATH = nullptr;
$String* XPATHErrorResources_ja::ER_EXPECTED_LOC_PATH_AT_END_EXPR = nullptr;

$String* XPATHErrorResources_ja::ER_EXPECTED_LOC_STEP = nullptr;

$String* XPATHErrorResources_ja::ER_EXPECTED_NODE_TEST = nullptr;

$String* XPATHErrorResources_ja::ER_EXPECTED_STEP_PATTERN = nullptr;

$String* XPATHErrorResources_ja::ER_EXPECTED_REL_PATH_PATTERN = nullptr;

$String* XPATHErrorResources_ja::ER_CANT_CONVERT_TO_BOOLEAN = nullptr;

$String* XPATHErrorResources_ja::ER_CANT_CONVERT_TO_SINGLENODE = nullptr;

$String* XPATHErrorResources_ja::ER_CANT_GET_SNAPSHOT_LENGTH = nullptr;

$String* XPATHErrorResources_ja::ER_NON_ITERATOR_TYPE = nullptr;

$String* XPATHErrorResources_ja::ER_DOC_MUTATED = nullptr;
$String* XPATHErrorResources_ja::ER_INVALID_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_ja::ER_EMPTY_XPATH_RESULT = nullptr;
$String* XPATHErrorResources_ja::ER_INCOMPATIBLE_TYPES = nullptr;
$String* XPATHErrorResources_ja::ER_NULL_RESOLVER = nullptr;
$String* XPATHErrorResources_ja::ER_CANT_CONVERT_TO_STRING = nullptr;
$String* XPATHErrorResources_ja::ER_NON_SNAPSHOT_TYPE = nullptr;
$String* XPATHErrorResources_ja::ER_WRONG_DOCUMENT = nullptr;

$String* XPATHErrorResources_ja::ER_WRONG_NODETYPE = nullptr;
$String* XPATHErrorResources_ja::ER_XPATH_ERROR = nullptr;
$String* XPATHErrorResources_ja::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED = nullptr;
$String* XPATHErrorResources_ja::ER_RESOLVE_VARIABLE_RETURNS_NULL = nullptr;
$String* XPATHErrorResources_ja::ER_UNSUPPORTED_RETURN_TYPE = nullptr;
$String* XPATHErrorResources_ja::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_ja::ER_ARG_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_ja::ER_OBJECT_MODEL_NULL = nullptr;
$String* XPATHErrorResources_ja::ER_OBJECT_MODEL_EMPTY = nullptr;
$String* XPATHErrorResources_ja::ER_FEATURE_NAME_NULL = nullptr;
$String* XPATHErrorResources_ja::ER_FEATURE_UNKNOWN = nullptr;
$String* XPATHErrorResources_ja::ER_GETTING_NULL_FEATURE = nullptr;
$String* XPATHErrorResources_ja::ER_GETTING_UNKNOWN_FEATURE = nullptr;
$String* XPATHErrorResources_ja::ER_SECUREPROCESSING_FEATURE = nullptr;
$String* XPATHErrorResources_ja::ER_NULL_XPATH_FUNCTION_RESOLVER = nullptr;
$String* XPATHErrorResources_ja::ER_NULL_XPATH_VARIABLE_RESOLVER = nullptr;
$String* XPATHErrorResources_ja::WG_LOCALE_NAME_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_ja::WG_PROPERTY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_ja::WG_DONT_DO_ANYTHING_WITH_NS = nullptr;
$String* XPATHErrorResources_ja::WG_SECURITY_EXCEPTION = nullptr;
$String* XPATHErrorResources_ja::WG_QUO_NO_LONGER_DEFINED = nullptr;
$String* XPATHErrorResources_ja::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST = nullptr;
$String* XPATHErrorResources_ja::WG_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_ja::WG_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_ja::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XPATHErrorResources_ja::WG_EXPAND_ENTITIES_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_ja::WG_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_ja::WG_UNSUPPORTED_ENCODING = nullptr;

$String* XPATHErrorResources_ja::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ja::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ja::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;

$String* XPATHErrorResources_ja::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$ObjectArray2* XPATHErrorResources_ja::_contents = nullptr;

$String* XPATHErrorResources_ja::BAD_CODE = nullptr;

$String* XPATHErrorResources_ja::FORMAT_FAILED = nullptr;

$String* XPATHErrorResources_ja::ERROR_RESOURCES = nullptr;

$String* XPATHErrorResources_ja::ERROR_STRING = nullptr;

$String* XPATHErrorResources_ja::ERROR_HEADER = nullptr;

$String* XPATHErrorResources_ja::WARNING_HEADER = nullptr;

$String* XPATHErrorResources_ja::XSL_HEADER = nullptr;

$String* XPATHErrorResources_ja::XML_HEADER = nullptr;

$String* XPATHErrorResources_ja::QUERY_HEADER = nullptr;

void XPATHErrorResources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XPATHErrorResources_ja::getContents() {
	return XPATHErrorResources_ja::_contents;
}

void clinit$XPATHErrorResources_ja($Class* class$) {
	$assignStatic(XPATHErrorResources_ja::ERROR0000, "ERROR0000"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CURRENT_NOT_ALLOWED_IN_MATCH, "ER_CURRENT_NOT_ALLOWED_IN_MATCH"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CURRENT_TAKES_NO_ARGS, "ER_CURRENT_TAKES_NO_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_DOCUMENT_REPLACED, "ER_DOCUMENT_REPLACED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CONTEXT_CAN_NOT_BE_NULL, "ER_CONTEXT_CAN_NOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CONTEXT_HAS_NO_OWNERDOC, "ER_CONTEXT_HAS_NO_OWNERDOC"_s);
	$assignStatic(XPATHErrorResources_ja::ER_LOCALNAME_HAS_TOO_MANY_ARGS, "ER_LOCALNAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS, "ER_NAMESPACEURI_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS, "ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NUMBER_HAS_TOO_MANY_ARGS, "ER_NUMBER_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NAME_HAS_TOO_MANY_ARGS, "ER_NAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_STRING_HAS_TOO_MANY_ARGS, "ER_STRING_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS, "ER_STRINGLENGTH_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_TRANSLATE_TAKES_3_ARGS, "ER_TRANSLATE_TAKES_3_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_UNPARSEDENTITYURI_TAKES_1_ARG, "ER_UNPARSEDENTITYURI_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NAMESPACEAXIS_NOT_IMPLEMENTED, "ER_NAMESPACEAXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_UNKNOWN_AXIS, "ER_UNKNOWN_AXIS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_UNKNOWN_MATCH_OPERATION, "ER_UNKNOWN_MATCH_OPERATION"_s);
	$assignStatic(XPATHErrorResources_ja::ER_INCORRECT_ARG_LENGTH, "ER_INCORRECT_ARG_LENGTH"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_NUMBER, "ER_CANT_CONVERT_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER, "ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_NODELIST, "ER_CANT_CONVERT_TO_NODELIST"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_MUTABLENODELIST, "ER_CANT_CONVERT_TO_MUTABLENODELIST"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_TYPE, "ER_CANT_CONVERT_TO_TYPE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_MATCH_PATTERN, "ER_EXPECTED_MATCH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_ja::ER_COULDNOT_GET_VAR_NAMED, "ER_COULDNOT_GET_VAR_NAMED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_UNKNOWN_OPCODE, "ER_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXTRA_ILLEGAL_TOKENS, "ER_EXTRA_ILLEGAL_TOKENS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_DOUBLE_QUOTE, "ER_EXPECTED_DOUBLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_SINGLE_QUOTE, "ER_EXPECTED_SINGLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EMPTY_EXPRESSION, "ER_EMPTY_EXPRESSION"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_BUT_FOUND, "ER_EXPECTED_BUT_FOUND"_s);
	$assignStatic(XPATHErrorResources_ja::ER_INCORRECT_PROGRAMMER_ASSERTION, "ER_INCORRECT_PROGRAMMER_ASSERTION"_s);
	$assignStatic(XPATHErrorResources_ja::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL, "ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG, "ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG"_s);
	$assignStatic(XPATHErrorResources_ja::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG, "ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG"_s);
	$assignStatic(XPATHErrorResources_ja::ER_PREDICATE_ILLEGAL_SYNTAX, "ER_PREDICATE_ILLEGAL_SYNTAX"_s);
	$assignStatic(XPATHErrorResources_ja::ER_PREDICATE_TOO_MANY_OPEN, "ER_PREDICATE_TOO_MANY_OPEN"_s);
	$assignStatic(XPATHErrorResources_ja::ER_COMPILATION_TOO_MANY_OPERATION, "ER_COMPILATION_TOO_MANY_OPERATION"_s);
	$assignStatic(XPATHErrorResources_ja::ER_ILLEGAL_AXIS_NAME, "ER_ILLEGAL_AXIS_NAME"_s);
	$assignStatic(XPATHErrorResources_ja::ER_UNKNOWN_NODETYPE, "ER_UNKNOWN_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED, "ER_PATTERN_LITERAL_NEEDS_BE_QUOTED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_COULDNOT_BE_FORMATTED_TO_NUMBER, "ER_COULDNOT_BE_FORMATTED_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON, "ER_COULDNOT_CREATE_XMLPROCESSORLIAISON"_s);
	$assignStatic(XPATHErrorResources_ja::ER_DIDNOT_FIND_XPATH_SELECT_EXP, "ER_DIDNOT_FIND_XPATH_SELECT_EXP"_s);
	$assignStatic(XPATHErrorResources_ja::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH, "ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH"_s);
	$assignStatic(XPATHErrorResources_ja::ER_ERROR_OCCURED, "ER_ERROR_OCCURED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_ILLEGAL_VARIABLE_REFERENCE, "ER_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_AXES_NOT_ALLOWED, "ER_AXES_NOT_ALLOWED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_KEY_HAS_TOO_MANY_ARGS, "ER_KEY_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_COUNT_TAKES_1_ARG, "ER_COUNT_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_ja::ER_COULDNOT_FIND_FUNCTION, "ER_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_ja::ER_UNSUPPORTED_ENCODING, "ER_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_ja::ER_PROBLEM_IN_DTM_NEXTSIBLING, "ER_PROBLEM_IN_DTM_NEXTSIBLING"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL, "ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_SETDOMFACTORY_NOT_SUPPORTED, "ER_SETDOMFACTORY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_PARSE_NOT_SUPPORTED, "ER_PARSE_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_SAX_API_NOT_HANDLED, "ER_SAX_API_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_IGNORABLE_WHITESPACE_NOT_HANDLED, "ER_IGNORABLE_WHITESPACE_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_DTM_CANNOT_HANDLE_NODES, "ER_DTM_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_ja::ER_XERCES_CANNOT_HANDLE_NODES, "ER_XERCES_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_ja::ER_XERCES_PARSE_ERROR_DETAILS, "ER_XERCES_PARSE_ERROR_DETAILS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_XERCES_PARSE_ERROR, "ER_XERCES_PARSE_ERROR"_s);
	$assignStatic(XPATHErrorResources_ja::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANNOT_CREATE_URL, "ER_CANNOT_CREATE_URL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_XPATH_READOBJECT, "ER_XPATH_READOBJECT"_s);
	$assignStatic(XPATHErrorResources_ja::ER_FUNCTION_TOKEN_NOT_FOUND, "ER_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANNOT_DEAL_XPATH_TYPE, "ER_CANNOT_DEAL_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NODESET_NOT_MUTABLE, "ER_NODESET_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NODESETDTM_NOT_MUTABLE, "ER_NODESETDTM_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_VAR_NOT_RESOLVABLE, "ER_VAR_NOT_RESOLVABLE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_PROG_ASSERT_UNKNOWN_OPCODE, "ER_PROG_ASSERT_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_ZERO_OR_ONE, "ER_ZERO_OR_ONE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS, "ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_COULD_NOT_FIND_VAR, "ER_COULD_NOT_FIND_VAR"_s);
	$assignStatic(XPATHErrorResources_ja::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING, "ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_ja::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL, "ER_FASTSTRINGBUFFER_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_VARIABLE_ACCESSED_BEFORE_BIND, "ER_VARIABLE_ACCESSED_BEFORE_BIND"_s);
	$assignStatic(XPATHErrorResources_ja::ER_FSB_CANNOT_TAKE_STRING, "ER_FSB_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_ja::ER_SETTING_WALKER_ROOT_TO_NULL, "ER_SETTING_WALKER_ROOT_TO_NULL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NODESETDTM_CANNOT_ITERATE, "ER_NODESETDTM_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NODESET_CANNOT_ITERATE, "ER_NODESET_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NODESETDTM_CANNOT_INDEX, "ER_NODESETDTM_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NODESET_CANNOT_INDEX, "ER_NODESET_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANNOT_CALL_SETSHOULDCACHENODE, "ER_CANNOT_CALL_SETSHOULDCACHENODE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_ONLY_ALLOWS, "ER_ONLY_ALLOWS"_s);
	$assignStatic(XPATHErrorResources_ja::ER_UNKNOWN_STEP, "ER_UNKNOWN_STEP"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_REL_LOC_PATH, "ER_EXPECTED_REL_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_LOC_PATH, "ER_EXPECTED_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_LOC_PATH_AT_END_EXPR, "ER_EXPECTED_LOC_PATH_AT_END_EXPR"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_LOC_STEP, "ER_EXPECTED_LOC_STEP"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_NODE_TEST, "ER_EXPECTED_NODE_TEST"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_STEP_PATTERN, "ER_EXPECTED_STEP_PATTERN"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXPECTED_REL_PATH_PATTERN, "ER_EXPECTED_REL_PATH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_BOOLEAN, "ER_CANT_CONVERT_TO_BOOLEAN"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_SINGLENODE, "ER_CANT_CONVERT_TO_SINGLENODE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANT_GET_SNAPSHOT_LENGTH, "ER_CANT_GET_SNAPSHOT_LENGTH"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NON_ITERATOR_TYPE, "ER_NON_ITERATOR_TYPE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_DOC_MUTATED, "ER_DOC_MUTATED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_INVALID_XPATH_TYPE, "ER_INVALID_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EMPTY_XPATH_RESULT, "ER_EMPTY_XPATH_RESULT"_s);
	$assignStatic(XPATHErrorResources_ja::ER_INCOMPATIBLE_TYPES, "ER_INCOMPATIBLE_TYPES"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NULL_RESOLVER, "ER_NULL_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_STRING, "ER_CANT_CONVERT_TO_STRING"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NON_SNAPSHOT_TYPE, "ER_NON_SNAPSHOT_TYPE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_WRONG_DOCUMENT, "ER_WRONG_DOCUMENT"_s);
	$assignStatic(XPATHErrorResources_ja::ER_WRONG_NODETYPE, "ER_WRONG_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_XPATH_ERROR, "ER_XPATH_ERROR"_s);
	$assignStatic(XPATHErrorResources_ja::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED, "ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED"_s);
	$assignStatic(XPATHErrorResources_ja::ER_RESOLVE_VARIABLE_RETURNS_NULL, "ER_RESOLVE_VARIABLE_RETURNS_NULL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_UNSUPPORTED_RETURN_TYPE, "ER_UNSUPPORTED_RETURN_TYPE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL, "ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_ARG_CANNOT_BE_NULL, "ER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_OBJECT_MODEL_NULL, "ER_OBJECT_MODEL_NULL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_OBJECT_MODEL_EMPTY, "ER_OBJECT_MODEL_EMPTY"_s);
	$assignStatic(XPATHErrorResources_ja::ER_FEATURE_NAME_NULL, "ER_FEATURE_NAME_NULL"_s);
	$assignStatic(XPATHErrorResources_ja::ER_FEATURE_UNKNOWN, "ER_FEATURE_UNKNOWN"_s);
	$assignStatic(XPATHErrorResources_ja::ER_GETTING_NULL_FEATURE, "ER_GETTING_NULL_FEATURE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_GETTING_UNKNOWN_FEATURE, "ER_GETTING_UNKNOWN_FEATURE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_SECUREPROCESSING_FEATURE, "ER_SECUREPROCESSING_FEATURE"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NULL_XPATH_FUNCTION_RESOLVER, "ER_NULL_XPATH_FUNCTION_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NULL_XPATH_VARIABLE_RESOLVER, "ER_NULL_XPATH_VARIABLE_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_ja::WG_LOCALE_NAME_NOT_HANDLED, "WG_LOCALE_NAME_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_ja::WG_PROPERTY_NOT_SUPPORTED, "WG_PROPERTY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_ja::WG_DONT_DO_ANYTHING_WITH_NS, "WG_DONT_DO_ANYTHING_WITH_NS"_s);
	$assignStatic(XPATHErrorResources_ja::WG_SECURITY_EXCEPTION, "WG_SECURITY_EXCEPTION"_s);
	$assignStatic(XPATHErrorResources_ja::WG_QUO_NO_LONGER_DEFINED, "WG_QUO_NO_LONGER_DEFINED"_s);
	$assignStatic(XPATHErrorResources_ja::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST, "WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST"_s);
	$assignStatic(XPATHErrorResources_ja::WG_FUNCTION_TOKEN_NOT_FOUND, "WG_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_ja::WG_COULDNOT_FIND_FUNCTION, "WG_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_ja::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XPATHErrorResources_ja::WG_EXPAND_ENTITIES_NOT_SUPPORTED, "WG_EXPAND_ENTITIES_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_ja::WG_ILLEGAL_VARIABLE_REFERENCE, "WG_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_ja::WG_UNSUPPORTED_ENCODING, "WG_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_ja::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ja::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_ja::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XPATHErrorResources_ja::FORMAT_FAILED, "FORMAT_FAILED"_s);
	$assignStatic(XPATHErrorResources_ja::ERROR_RESOURCES, "com.sun.org.apache.xpath.internal.res.XPATHErrorResources"_s);
	$assignStatic(XPATHErrorResources_ja::ERROR_STRING, "#error"_s);
	$assignStatic(XPATHErrorResources_ja::ERROR_HEADER, "Error: "_s);
	$assignStatic(XPATHErrorResources_ja::WARNING_HEADER, "Warning: "_s);
	$assignStatic(XPATHErrorResources_ja::XSL_HEADER, "XSL "_s);
	$assignStatic(XPATHErrorResources_ja::XML_HEADER, "XML "_s);
	$assignStatic(XPATHErrorResources_ja::QUERY_HEADER, "PATTERN "_s);
	$assignStatic(XPATHErrorResources_ja::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ERROR0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CURRENT_NOT_ALLOWED_IN_MATCH),
			$of(u"current()\u95a2\u6570\u306f\u4e00\u81f4\u30d1\u30bf\u30fc\u30f3\u3067\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CURRENT_TAKES_NO_ARGS),
			$of(u"current()\u95a2\u6570\u306f\u5f15\u6570\u3092\u53d7\u3051\u5165\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_DOCUMENT_REPLACED),
			$of(u"document()\u95a2\u6570\u306e\u5b9f\u88c5\u306fcom.sun.org.apache.xalan.internal.xslt.FuncDocument\u306b\u3088\u3063\u3066\u7f6e\u63db\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CONTEXT_CAN_NOT_BE_NULL),
			$of(u"\u64cd\u4f5c\u304c\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u306b\u4f9d\u5b58\u3057\u3066\u3044\u308b\u5834\u5408\u3001\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u3092null\u306b\u3059\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CONTEXT_HAS_NO_OWNERDOC),
			$of(u"\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u306b\u6240\u6709\u8005\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_LOCALNAME_HAS_TOO_MANY_ARGS),
			$of(u"local-name()\u306e\u5f15\u6570\u304c\u591a\u3059\u304e\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS),
			$of(u"namespace-uri()\u306e\u5f15\u6570\u304c\u591a\u3059\u304e\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS),
			$of(u"normalize-space()\u306e\u5f15\u6570\u304c\u591a\u3059\u304e\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NUMBER_HAS_TOO_MANY_ARGS),
			$of(u"number()\u306e\u5f15\u6570\u304c\u591a\u3059\u304e\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NAME_HAS_TOO_MANY_ARGS),
			$of(u"name()\u306e\u5f15\u6570\u304c\u591a\u3059\u304e\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_STRING_HAS_TOO_MANY_ARGS),
			$of(u"string()\u306e\u5f15\u6570\u304c\u591a\u3059\u304e\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS),
			$of(u"string-length()\u306e\u5f15\u6570\u304c\u591a\u3059\u304e\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_TRANSLATE_TAKES_3_ARGS),
			$of(u"translate()\u95a2\u6570\u306f3\u3064\u306e\u5f15\u6570\u3092\u53d6\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_UNPARSEDENTITYURI_TAKES_1_ARG),
			$of(u"unparsed-entity-uri\u95a2\u6570\u306f\u5f15\u6570\u30921\u3064\u53d6\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NAMESPACEAXIS_NOT_IMPLEMENTED),
			$of(u"namespace\u8ef8\u306f\u307e\u3060\u5b9f\u88c5\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_UNKNOWN_AXIS),
			$of(u"\u4e0d\u660e\u306a\u8ef8\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_UNKNOWN_MATCH_OPERATION),
			$of(u"\u4e0d\u660e\u306a\u4e00\u81f4\u64cd\u4f5c\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_INCORRECT_ARG_LENGTH),
			$of(u"processing-instruction()\u30ce\u30fc\u30c9\u30fb\u30c6\u30b9\u30c8\u306e\u5f15\u6570\u306e\u9577\u3055\u304c\u4e0d\u6b63\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_NUMBER),
			$of(u"{0}\u3092\u6570\u5024\u306b\u5909\u63db\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_NODELIST),
			$of(u"{0}\u3092NodeList\u306b\u5909\u63db\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_MUTABLENODELIST),
			$of(u"{0}\u3092NodeSetDTM\u306b\u5909\u63db\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_TYPE),
			$of(u"{0}\u3092type#{1}\u306b\u5909\u63db\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_MATCH_PATTERN),
			$of(u"getMatchScore\u306b\u4e00\u81f4\u30d1\u30bf\u30fc\u30f3\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_COULDNOT_GET_VAR_NAMED),
			$of(u"\u540d\u524d{0}\u306e\u5909\u6570\u3092\u53d6\u5f97\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_UNKNOWN_OPCODE),
			$of(u"\u30a8\u30e9\u30fc\u3002\u4e0d\u660e\u306a\u64cd\u4f5c\u30b3\u30fc\u30c9: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXTRA_ILLEGAL_TOKENS),
			$of(u"\u4f59\u5206\u306e\u4e0d\u6b63\u306a\u30c8\u30fc\u30af\u30f3: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_DOUBLE_QUOTE),
			$of(u"\u30ea\u30c6\u30e9\u30eb\u306e\u5f15\u7528\u7b26\u304c\u4e0d\u6b63\u3067\u3059... \u4e8c\u91cd\u5f15\u7528\u7b26\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_SINGLE_QUOTE),
			$of(u"\u30ea\u30c6\u30e9\u30eb\u306e\u5f15\u7528\u7b26\u304c\u4e0d\u6b63\u3067\u3059... \u4e00\u91cd\u5f15\u7528\u7b26\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EMPTY_EXPRESSION),
			$of(u"\u5f0f\u304c\u7a7a\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_BUT_FOUND),
			$of(u"{0}\u3067\u306f\u306a\u304f{1}\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_INCORRECT_PROGRAMMER_ASSERTION),
			$of(u"\u30d7\u30ed\u30b0\u30e9\u30de\u30fb\u30a2\u30b5\u30fc\u30b7\u30e7\u30f3\u304c\u4e0d\u6b63\u3067\u3059\u3002- {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL),
			$of(u"boolean(...)\u5f15\u6570\u306f\u300119990709 XPath\u30c9\u30e9\u30d5\u30c8\u306b\u3088\u3063\u3066\u30aa\u30d7\u30b7\u30e7\u30f3\u3067\u306a\u304f\u306a\u308a\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG),
			$of(u"\',\'\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u304c\u524d\u306b\u5f15\u6570\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG),
			$of(u"\',\'\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u304c\u5f8c\u308d\u306b\u5f15\u6570\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_PREDICATE_ILLEGAL_SYNTAX),
			$of(u"\'..[predicate]\'\u307e\u305f\u306f\'.[predicate]\'\u306f\u4e0d\u6b63\u306a\u69cb\u6587\u3067\u3059\u3002\u304b\u308f\u308a\u306b\'self::node()[predicate]\'\u3092\u4f7f\u7528\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_PREDICATE_TOO_MANY_OPEN),
			$of(u"{1}\u3067{0}\u3092\u89e3\u6790\u4e2d\u306b\u30b9\u30bf\u30c3\u30af\u30fb\u30aa\u30fc\u30d0\u30fc\u30d5\u30ed\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002\u30aa\u30fc\u30d7\u30f3\u8ff0\u8a9e\u304c\u591a\u3059\u304e\u307e\u3059({2})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_COMPILATION_TOO_MANY_OPERATION),
			$of(u"\u5f0f\u306e\u30b3\u30f3\u30d1\u30a4\u30eb\u4e2d\u306b\u30b9\u30bf\u30c3\u30af\u30fb\u30aa\u30fc\u30d0\u30fc\u30d5\u30ed\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002\u64cd\u4f5c\u304c\u591a\u3059\u304e\u307e\u3059({0})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_ILLEGAL_AXIS_NAME),
			$of(u"\u4e0d\u6b63\u306a\u8ef8\u540d: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_UNKNOWN_NODETYPE),
			$of(u"\u4e0d\u660e\u306anodetype: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED),
			$of(u"\u30d1\u30bf\u30fc\u30f3\u30fb\u30ea\u30c6\u30e9\u30eb({0})\u306b\u5f15\u7528\u7b26\u3092\u4ed8\u3051\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_COULDNOT_BE_FORMATTED_TO_NUMBER),
			$of(u"{0}\u3092\u6570\u5024\u306b\u30d5\u30a9\u30fc\u30de\u30c3\u30c8\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON),
			$of(u"XML TransformerFactory Liaison\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_DIDNOT_FIND_XPATH_SELECT_EXP),
			$of(u"\u30a8\u30e9\u30fc\u3002xpath\u9078\u629e\u5f0f(-select)\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH),
			$of(u"\u30a8\u30e9\u30fc\u3002OP_LOCATIONPATH\u306e\u5f8c\u306bENDOP\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_ERROR_OCCURED),
			$of(u"\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_ILLEGAL_VARIABLE_REFERENCE),
			$of(u"\u5909\u6570\u306b\u6307\u5b9a\u3057\u305fVariableReference\u304c\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u7bc4\u56f2\u5916\u304b\u5b9a\u7fa9\u304c\u3042\u308a\u307e\u305b\u3093\u3002\u540d\u524d= {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_AXES_NOT_ALLOWED),
			$of(u"\u4e00\u81f4\u30d1\u30bf\u30fc\u30f3\u3067\u306f\u3001child::\u8ef8\u3068attribute::\u8ef8\u306e\u307f\u304c\u8a31\u53ef\u3055\u308c\u307e\u3059\u3002\u554f\u984c\u3068\u306a\u308b\u8ef8= {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_KEY_HAS_TOO_MANY_ARGS),
			$of(u"key()\u304c\u6301\u3064\u5f15\u6570\u306e\u6570\u304c\u4e0d\u6b63\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_COUNT_TAKES_1_ARG),
			$of(u"\u30ab\u30a6\u30f3\u30c8\u95a2\u6570\u306f\u5f15\u6570\u30921\u3064\u53d6\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_COULDNOT_FIND_FUNCTION),
			$of(u"\u95a2\u6570{0}\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_UNSUPPORTED_ENCODING),
			$of(u"\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u306a\u3044\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_PROBLEM_IN_DTM_NEXTSIBLING),
			$of(u"getNextSibling\u306eDTM\u3067\u554f\u984c\u304c\u767a\u751f\u3057\u307e\u3057\u305f...\u5fa9\u5143\u306e\u8a66\u884c\u4e2d\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL),
			$of(u"\u30d7\u30ed\u30b0\u30e9\u30de\u30fb\u30a8\u30e9\u30fc: EmptyNodeList\u306b\u66f8\u304d\u8fbc\u3081\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_SETDOMFACTORY_NOT_SUPPORTED),
			$of(u"setDOMFactory\u306fXPathContext\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_PREFIX_MUST_RESOLVE),
			$of(u"\u63a5\u982d\u8f9e\u306f\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306b\u89e3\u6c7a\u3055\u308c\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_PARSE_NOT_SUPPORTED),
			$of(u"\u89e3\u6790(InputSource\u30bd\u30fc\u30b9)\u306fXPathContext\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002{0}\u3092\u958b\u3051\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_SAX_API_NOT_HANDLED),
			$of(u"SAX API characters(char ch[]...\u306fDTM\u306b\u3088\u3063\u3066\u51e6\u7406\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_IGNORABLE_WHITESPACE_NOT_HANDLED),
			$of(u"ignorableWhitespace(char ch[]...\u306fDTM\u306b\u3088\u3063\u3066\u51e6\u7406\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_DTM_CANNOT_HANDLE_NODES),
			$of(u"DTMLiaison\u306f\u30bf\u30a4\u30d7{0}\u306e\u30ce\u30fc\u30c9\u3092\u51e6\u7406\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_XERCES_CANNOT_HANDLE_NODES),
			$of(u"DOM2Helper\u306f{0}\u30bf\u30a4\u30d7\u306e\u30ce\u30fc\u30c9\u3092\u51e6\u7406\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_XERCES_PARSE_ERROR_DETAILS),
			$of(u"DOM2Helper.parse\u30a8\u30e9\u30fc: SystemID - {0} \u884c - {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_XERCES_PARSE_ERROR),
			$of(u"DOM2Helper.parse\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u7121\u52b9\u306aUTF-16\u30b5\u30ed\u30b2\u30fc\u30c8\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f: {0}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_OIERROR),
			$of(u"IO\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANNOT_CREATE_URL),
			$of(u"{0}\u306eURL\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_XPATH_READOBJECT),
			$of(u"XPath.readObject\u5185: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_FUNCTION_TOKEN_NOT_FOUND),
			$of(u"\u95a2\u6570\u30c8\u30fc\u30af\u30f3\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANNOT_DEAL_XPATH_TYPE),
			$of(u"XPath\u30bf\u30a4\u30d7\u3092\u51e6\u7406\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NODESET_NOT_MUTABLE),
			$of(u"\u3053\u306eNodeSet\u306f\u53ef\u5909\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NODESETDTM_NOT_MUTABLE),
			$of(u"\u3053\u306eNodeSetDTM\u306f\u53ef\u5909\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_VAR_NOT_RESOLVABLE),
			$of(u"\u5909\u6570\u3092\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NULL_ERROR_HANDLER),
			$of(u"Null\u306e\u30a8\u30e9\u30fc\u30fb\u30cf\u30f3\u30c9\u30e9"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_PROG_ASSERT_UNKNOWN_OPCODE),
			$of(u"\u30d7\u30ed\u30b0\u30e9\u30de\u306e\u30a2\u30b5\u30fc\u30b7\u30e7\u30f3: \u4e0d\u660e\u306aopcode: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_ZERO_OR_ONE),
			$of(u"0\u307e\u305f\u306f1"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"rtf()\u306fXRTreeFragSelectWrapper\u306b\u3088\u3063\u3066\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"asNodeIterator()\u306fXRTreeFragSelectWrapper\u306b\u3088\u3063\u3066\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"detach()\u306fXRTreeFragSelectWrapper\u306b\u3088\u3063\u3066\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"num()\u306fXRTreeFragSelectWrapper\u306b\u3088\u3063\u3066\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"xstr()\u306fXRTreeFragSelectWrapper\u306b\u3088\u3063\u3066\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"str()\u306fXRTreeFragSelectWrapper\u306b\u3088\u3063\u3066\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS),
			$of(u"fsb()\u306fXStringForChars\u7528\u306b\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_COULD_NOT_FIND_VAR),
			$of(u"\u540d\u524d{0}\u306e\u5909\u6570\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING),
			$of(u"XStringForChars\u306f\u5f15\u6570\u306b\u3064\u3044\u3066\u6587\u5b57\u5217\u3092\u53d6\u308b\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL),
			$of(u"FastStringBuffer\u5f15\u6570\u306fnull\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_TWO_OR_THREE),
			$of(u"2\u307e\u305f\u306f3"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_VARIABLE_ACCESSED_BEFORE_BIND),
			$of(u"\u5909\u6570\u304c\u30d0\u30a4\u30f3\u30c9\u3055\u308c\u308b\u524d\u306b\u30a2\u30af\u30bb\u30b9\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_FSB_CANNOT_TAKE_STRING),
			$of(u"XStringForFSB\u306f\u5f15\u6570\u306b\u3064\u3044\u3066\u6587\u5b57\u5217\u3092\u53d6\u308b\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_SETTING_WALKER_ROOT_TO_NULL),
			$of(u"\n \u30a8\u30e9\u30fc\u3002\u30a6\u30a9\u30fc\u30ab\u306e\u30eb\u30fc\u30c8\u3092null\u306b\u8a2d\u5b9a\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NODESETDTM_CANNOT_ITERATE),
			$of(u"\u3053\u306eNodeSetDTM\u306f\u524d\u306e\u30ce\u30fc\u30c9\u3092\u53cd\u5fa9\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NODESET_CANNOT_ITERATE),
			$of(u"\u3053\u306eNodeSet\u306f\u524d\u306e\u30ce\u30fc\u30c9\u3092\u53cd\u5fa9\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NODESETDTM_CANNOT_INDEX),
			$of(u"\u3053\u306eNodeSetDTM\u306f\u7d22\u5f15\u4ed8\u3051\u307e\u305f\u306f\u30ab\u30a6\u30f3\u30c8\u6a5f\u80fd\u3092\u5b9f\u884c\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NODESET_CANNOT_INDEX),
			$of(u"\u3053\u306eNodeSet\u306f\u7d22\u5f15\u4ed8\u3051\u307e\u305f\u306f\u30ab\u30a6\u30f3\u30c8\u6a5f\u80fd\u3092\u5b9f\u884c\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANNOT_CALL_SETSHOULDCACHENODE),
			$of(u"nextNode\u3092\u547c\u3073\u51fa\u3057\u305f\u5f8c\u306bsetShouldCacheNodes\u3092\u547c\u3073\u51fa\u305b\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_ONLY_ALLOWS),
			$of(u"{0}\u306f{1}\u500b\u306e\u5f15\u6570\u306e\u307f\u8a31\u53ef\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_UNKNOWN_STEP),
			$of(u"getNextStepPos\u3067\u306e\u30d7\u30ed\u30b0\u30e9\u30de\u306e\u30a2\u30b5\u30fc\u30b7\u30e7\u30f3: \u4e0d\u660e\u306astepType: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_REL_LOC_PATH),
			$of(u"\'/\'\u307e\u305f\u306f\'//\'\u30c8\u30fc\u30af\u30f3\u306e\u5f8c\u306b\u76f8\u5bfe\u30ed\u30b1\u30fc\u30b7\u30e7\u30f3\u30fb\u30d1\u30b9\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_LOC_PATH),
			$of(u"\u30ed\u30b1\u30fc\u30b7\u30e7\u30f3\u30fb\u30d1\u30b9\u304c\u5fc5\u8981\u3067\u3059\u304c\u3001\u6b21\u306e\u30c8\u30fc\u30af\u30f3\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f:  {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_LOC_PATH_AT_END_EXPR),
			$of(u"\u30ed\u30b1\u30fc\u30b7\u30e7\u30f3\u30fb\u30d1\u30b9\u304c\u5fc5\u8981\u3067\u3059\u304c\u3001\u304b\u308f\u308a\u306bXPath\u5f0f\u306e\u7d42\u308f\u308a\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_LOC_STEP),
			$of(u"\'/\'\u307e\u305f\u306f\'//\'\u30c8\u30fc\u30af\u30f3\u306e\u5f8c\u306b\u30ed\u30b1\u30fc\u30b7\u30e7\u30f3\u30fb\u30b9\u30c6\u30c3\u30d7\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_NODE_TEST),
			$of(u"NCName:*\u307e\u305f\u306fQName\u306b\u4e00\u81f4\u3059\u308b\u30ce\u30fc\u30c9\u30fb\u30c6\u30b9\u30c8\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_STEP_PATTERN),
			$of(u"\u30b9\u30c6\u30c3\u30d7\u30fb\u30d1\u30bf\u30fc\u30f3\u304c\u5fc5\u8981\u3067\u3059\u304c\u3001\'/\'\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXPECTED_REL_PATH_PATTERN),
			$of(u"\u76f8\u5bfe\u30d1\u30b9\u30fb\u30d1\u30bf\u30fc\u30f3\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_BOOLEAN),
			$of(u"XPath\u5f0f\'\'{0}\'\'\u306eXPathResult\u306f\u3001boolean\u306b\u5909\u63db\u3067\u304d\u306a\u3044{1}\u306eXPathResultType\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_SINGLENODE),
			$of(u"XPath\u5f0f\'\'{0}\'\'\u306eXPathResult\u306f\u3001\u5358\u4e00\u30ce\u30fc\u30c9\u306b\u5909\u63db\u3067\u304d\u306a\u3044{1}\u306eXPathResultType\u3067\u3059\u3002\u30e1\u30bd\u30c3\u30c9getSingleNodeValue\u306f\u3001ANY_UNORDERED_NODE_TYPE\u30bf\u30a4\u30d7\u304a\u3088\u3073FIRST_ORDERED_NODE_TYPE\u30bf\u30a4\u30d7\u306b\u306e\u307f\u9069\u7528\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANT_GET_SNAPSHOT_LENGTH),
			$of(u"XPathResultType\u304c{1}\u306e\u305f\u3081\u3001\u30e1\u30bd\u30c3\u30c9getSnapshotLength\u306fXPath\u5f0f\'\'{0}\'\'\u306eXPathResult\u3067\u547c\u3073\u51fa\u3059\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093\u3002\u3053\u306e\u30e1\u30bd\u30c3\u30c9\u306f\u3001UNORDERED_NODE_SNAPSHOT_TYPE\u30bf\u30a4\u30d7\u304a\u3088\u3073ORDERED_NODE_SNAPSHOT_TYPE\u30bf\u30a4\u30d7\u306b\u306e\u307f\u9069\u7528\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NON_ITERATOR_TYPE),
			$of(u"XPathResultType\u304c{1}\u306e\u305f\u3081\u3001\u30e1\u30bd\u30c3\u30c9iterateNext\u306fXPath\u5f0f\'\'{0}\'\'\u306eXPathResult\u3067\u547c\u3073\u51fa\u3059\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093\u3002\u3053\u306e\u30e1\u30bd\u30c3\u30c9\u306f\u3001UNORDERED_NODE_ITERATOR_TYPE\u30bf\u30a4\u30d7\u304a\u3088\u3073ORDERED_NODE_ITERATOR_TYPE\u30bf\u30a4\u30d7\u306b\u306e\u307f\u9069\u7528\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_DOC_MUTATED),
			$of(u"\u7d50\u679c\u304c\u8fd4\u3055\u308c\u305f\u5f8c\u306b\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u304c\u5909\u66f4\u3055\u308c\u307e\u3057\u305f\u3002\u30a4\u30c6\u30ec\u30fc\u30bf\u304c\u7121\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_INVALID_XPATH_TYPE),
			$of(u"XPath\u30bf\u30a4\u30d7\u306e\u5f15\u6570{0}\u304c\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EMPTY_XPATH_RESULT),
			$of(u"XPath\u7d50\u679c\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u304c\u7a7a\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_INCOMPATIBLE_TYPES),
			$of(u"XPath\u5f0f\'\'{0}\'\'\u306eXPathResult\u306f\u3001{2}\u306e\u6307\u5b9a\u3055\u308c\u305fXPathResultType\u306b\u5f37\u5236\u5909\u63db\u3067\u304d\u306a\u3044{1}\u306eXPathResultType\u3092\u6301\u3061\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NULL_RESOLVER),
			$of(u"null\u63a5\u982d\u8f9e\u30ea\u30be\u30eb\u30d0\u3067\u63a5\u982d\u8f9e\u3092\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANT_CONVERT_TO_STRING),
			$of(u"XPath\u5f0f\'\'{0}\'\'\u306eXPathResult\u306f\u3001\u6587\u5b57\u5217\u306b\u5909\u63db\u3067\u304d\u306a\u3044{1}\u306eXPathResultType\u3092\u6301\u3061\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NON_SNAPSHOT_TYPE),
			$of(u"XPathResultType\u304c{1}\u306e\u305f\u3081\u3001\u30e1\u30bd\u30c3\u30c9snapshotItem\u306fXPath\u5f0f\'\'{0}\'\'\u306eXPathResult\u3067\u547c\u3073\u51fa\u3059\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093\u3002\u3053\u306e\u30e1\u30bd\u30c3\u30c9\u306f\u3001UNORDERED_NODE_SNAPSHOT_TYPE\u30bf\u30a4\u30d7\u304a\u3088\u3073ORDERED_NODE_SNAPSHOT_TYPE\u30bf\u30a4\u30d7\u306b\u306e\u307f\u9069\u7528\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_WRONG_DOCUMENT),
			$of(u"\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u30fb\u30ce\u30fc\u30c9\u306f\u3001\u3053\u306eXPathEvaluator\u306b\u30d0\u30a4\u30f3\u30c9\u3055\u308c\u305f\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u306b\u5c5e\u3057\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_WRONG_NODETYPE),
			$of(u"\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u30fb\u30ce\u30fc\u30c9\u30fb\u30bf\u30a4\u30d7\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_XPATH_ERROR),
			$of(u"XPath\u306b\u4e0d\u660e\u306a\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER),
			$of(u"XPath\u5f0f\'\'{0}\'\'\u306eXPathResult\u306f\u3001\u6570\u5024\u306b\u5909\u63db\u3067\u304d\u306a\u3044{1}\u306eXPathResultType\u3092\u6301\u3061\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED),
			$of(u"\u62e1\u5f35\u95a2\u6570: XMLConstants.FEATURE_SECURE_PROCESSING\u6a5f\u80fd\u304ctrue\u306b\u8a2d\u5b9a\u3055\u308c\u308b\u3068\'\'{0}\'\'\u3092\u8d77\u52d5\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_RESOLVE_VARIABLE_RETURNS_NULL),
			$of(u"\u5909\u6570{0}\u306eresolveVariable\u304cnull\u3092\u8fd4\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_UNSUPPORTED_RETURN_TYPE),
			$of(u"\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u306a\u3044\u623b\u308a\u578b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30bf\u30a4\u30d7\u307e\u305f\u306f\u623b\u308a\u578b\u306fnull\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of(u"\u30bd\u30fc\u30b9\u30fb\u30bf\u30a4\u30d7\u307e\u305f\u306f\u623b\u308a\u578b\u306fnull\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_ARG_CANNOT_BE_NULL),
			$of(u"{0}\u5f15\u6570\u306fnull\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_OBJECT_MODEL_NULL),
			$of(u"{0}#isObjectModelSupported( String objectModel )\u306fobjectModel == null\u3067\u547c\u3073\u51fa\u305b\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_OBJECT_MODEL_EMPTY),
			$of(u"{0}#isObjectModelSupported( String objectModel )\u306fobjectModel == \"\"\u3067\u547c\u3073\u51fa\u305b\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_FEATURE_NAME_NULL),
			$of(u"\u6a5f\u80fd\u306bnull\u306e\u540d\u524d\u3092\u8a2d\u5b9a\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f: {0}#setFeature( null, {1})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_FEATURE_UNKNOWN),
			$of(u"\u4e0d\u660e\u306a\u6a5f\u80fd\"{0}\"\u3092\u8a2d\u5b9a\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f: {1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_GETTING_NULL_FEATURE),
			$of(u"null\u540d\u306e\u6a5f\u80fd\u3092\u53d6\u5f97\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f: {0}#getFeature(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_GETTING_UNKNOWN_FEATURE),
			$of(u"\u4e0d\u660e\u306a\u6a5f\u80fd\"{0}\"\u3092\u53d6\u5f97\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f: {1}#getFeature({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: \u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30de\u30cd\u30fc\u30b8\u30e3\u304c\u5b58\u5728\u3059\u308b\u3068\u304d\u3001\u6a5f\u80fd\u3092false\u306b\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093: {1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NULL_XPATH_FUNCTION_RESOLVER),
			$of(u"null\u306eXPathFunctionResolver\u3092\u8a2d\u5b9a\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f: {0}#setXPathFunctionResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::ER_NULL_XPATH_VARIABLE_RESOLVER),
			$of(u"null\u306eXPathVariableResolver\u3092\u8a2d\u5b9a\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f: {0}#setXPathVariableResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_LOCALE_NAME_NOT_HANDLED),
			$of(u"format-number\u95a2\u6570\u306e\u30ed\u30b1\u30fc\u30eb\u540d\u304c\u672a\u51e6\u7406\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_PROPERTY_NOT_SUPPORTED),
			$of(u"XSL\u30d7\u30ed\u30d1\u30c6\u30a3\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_DONT_DO_ANYTHING_WITH_NS),
			$of(u"\u30d7\u30ed\u30d1\u30c6\u30a3{1}\u5185\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9{0}\u3067\u306f\u73fe\u5728\u4f55\u3082\u5b9f\u884c\u3057\u306a\u3044\u3067\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_SECURITY_EXCEPTION),
			$of(u"XSL\u30b7\u30b9\u30c6\u30e0\u30fb\u30d7\u30ed\u30d1\u30c6\u30a3{0}\u306b\u30a2\u30af\u30bb\u30b9\u3057\u3088\u3046\u3068\u3057\u305f\u3068\u304d\u306bSecurityException\u304c\u767a\u751f\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_QUO_NO_LONGER_DEFINED),
			$of(u"\u53e4\u3044\u69cb\u6587: quo(...)\u306fXPath\u3067\u306f\u73fe\u5728\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST),
			$of(u"XPath\u306b\u306fnodeTest\u3092\u5b9f\u88c5\u3059\u308b\u305f\u3081\u306e\u5c0e\u51fa\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_FUNCTION_TOKEN_NOT_FOUND),
			$of(u"\u95a2\u6570\u30c8\u30fc\u30af\u30f3\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_COULDNOT_FIND_FUNCTION),
			$of(u"\u95a2\u6570{0}\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_CANNOT_MAKE_URL_FROM),
			$of(u"{0}\u304b\u3089URL\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_EXPAND_ENTITIES_NOT_SUPPORTED),
			$of(u"-E\u30aa\u30d7\u30b7\u30e7\u30f3\u306fDTM\u30d1\u30fc\u30b5\u30fc\u3067\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_ILLEGAL_VARIABLE_REFERENCE),
			$of(u"\u5909\u6570\u306b\u6307\u5b9a\u3057\u305fVariableReference\u304c\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u7bc4\u56f2\u5916\u304b\u5b9a\u7fa9\u304c\u3042\u308a\u307e\u305b\u3093\u3002\u540d\u524d= {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_ja::WG_UNSUPPORTED_ENCODING),
			$of(u"\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u306a\u3044\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\u3067\u3059: {0}"_s)
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
			$of("xpath_option"_s),
			$of(u"xpath\u30aa\u30d7\u30b7\u30e7\u30f3: "_s)
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
			$of(u"   [-match match pattern (\u4e00\u81f4\u8a3a\u65ad\u7528)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionAnyExpr"_s),
			$of(u"\u307e\u305f\u306f\u3001xpath\u5f0f\u304c\u8a3a\u65ad\u30c0\u30f3\u30d7\u3092\u5b9f\u884c\u3057\u307e\u3059"_s)
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

XPATHErrorResources_ja::XPATHErrorResources_ja() {
}

$Class* XPATHErrorResources_ja::load$($String* name, bool initialize) {
	$loadClass(XPATHErrorResources_ja, name, initialize, &_XPATHErrorResources_ja_ClassInfo_, clinit$XPATHErrorResources_ja, allocate$XPATHErrorResources_ja);
	return class$;
}

$Class* XPATHErrorResources_ja::class$ = nullptr;

						} // res
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com