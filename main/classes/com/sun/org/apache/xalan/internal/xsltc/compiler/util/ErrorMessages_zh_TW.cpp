#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_zh_TW.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef ACCESSING_XSLT_TARGET_ERR
#undef ARGUMENT_CONVERSION_ERR
#undef ATTRIBSET_UNDEF_ERR
#undef ATTR_VAL_TEMPLATE_ERR
#undef CATALOG_EXCEPTION
#undef CIRCULAR_INCLUDE_ERR
#undef CIRCULAR_VARIABLE_ERR
#undef CLASS_NOT_FOUND_ERR
#undef CMDLINE_OPT_MISSING_ARG_ERR
#undef COMPILER_ERROR_KEY
#undef COMPILER_WARNING_KEY
#undef COMPILE_STDIN_ERR
#undef COMPILE_USAGE_STR
#undef CONSTRUCTOR_NOT_FOUND
#undef COULD_NOT_CREATE_TRANS_FACT
#undef DATA_CONVERSION_ERR
#undef DESERIALIZE_TRANSLET_ERR
#undef DOCUMENT_ARG_ERR
#undef ELEMENT_PARSE_ERR
#undef ERROR_LISTENER_NULL_ERR
#undef ERROR_MSG
#undef ERROR_PLUS_WRAPPED_MSG
#undef ER_RESULT_NULL
#undef FATAL_ERR_MSG
#undef FATAL_ERR_PLUS_WRAPPED_MSG
#undef FILE_ACCESS_ERR
#undef FILE_NOT_FOUND_ERR
#undef FUNCTION_RESOLVE_ERR
#undef ILLEGAL_ARG_ERR
#undef ILLEGAL_ATTRIBUTE_ERR
#undef ILLEGAL_ATTR_NAME_ERR
#undef ILLEGAL_BINARY_OP_ERR
#undef ILLEGAL_CHAR_ERR
#undef ILLEGAL_CHILD_ERR
#undef ILLEGAL_CMDLINE_OPTION_ERR
#undef ILLEGAL_ELEM_NAME_ERR
#undef ILLEGAL_PI_ERR
#undef ILLEGAL_RELAT_OP_ERR
#undef ILLEGAL_TEXT_NODE_ERR
#undef IMPORT_PRECEDE_OTHERS_ERR
#undef INTERNAL_ERR
#undef INVALID_METHOD_IN_OUTPUT
#undef INVALID_NCNAME_ERR
#undef INVALID_QNAME_ERR
#undef INVALID_URI_ERR
#undef JAXP_COMPILE_ERR
#undef JAXP_GET_FEATURE_NULL_NAME
#undef JAXP_INVALID_ATTR_ERR
#undef JAXP_INVALID_ATTR_VALUE_ERR
#undef JAXP_INVALID_SET_PARAM_VALUE
#undef JAXP_NO_HANDLER_ERR
#undef JAXP_NO_RESULT_ERR
#undef JAXP_NO_SOURCE_ERR
#undef JAXP_NO_TRANSLET_ERR
#undef JAXP_SECUREPROCESSING_FEATURE
#undef JAXP_SET_FEATURE_NULL_NAME
#undef JAXP_SET_RESULT_ERR
#undef JAXP_UNKNOWN_PROP_ERR
#undef JAXP_UNKNOWN_SOURCE_ERR
#undef JAXP_UNSUPPORTED_FEATURE
#undef KEY_USE_ATTR_ERR
#undef METHOD_NOT_FOUND_ERR
#undef MISSING_ROOT_ERR
#undef MISSING_WHEN_ERR
#undef MISSING_XSLT_TARGET_ERR
#undef MISSING_XSLT_URI_ERR
#undef MULTIPLE_OTHERWISE_ERR
#undef MULTIPLE_STYLESHEET_ERR
#undef NAMESPACE_UNDEF_ERR
#undef NEED_LITERAL_ERR
#undef NOT_IMPLEMENTED_ERR
#undef NOT_STYLESHEET_ERR
#undef NO_JAVA_FUNCT_THIS_REF
#undef NO_MAIN_TRANSLET_ERR
#undef NO_TRANSLET_CLASS_ERR
#undef OUTLINE_ERR_DELETED_TARGET
#undef OUTLINE_ERR_METHOD_TOO_BIG
#undef OUTLINE_ERR_TRY_CATCH
#undef OUTLINE_ERR_UNBALANCED_MARKERS
#undef OUTPUT_VERSION_ERR
#undef REQUIRED_ATTR_ERR
#undef RESULT_TREE_SORT_ERR
#undef RUNTIME_ERROR_KEY
#undef SAX2DOM_ADAPTER_ERR
#undef SAX_PARSER_CONFIG_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_OTHERWISE_ERR
#undef STRAY_SORT_ERR
#undef STRAY_WHEN_ERR
#undef SYMBOLS_REDEF_ERR
#undef SYNTAX_ERR
#undef TEMPLATE_REDEF_ERR
#undef TEMPLATE_UNDEF_ERR
#undef TRANSFORM_USAGE_STR
#undef TRANSFORM_WITH_JAR_STR
#undef TRANSFORM_WITH_TRANSLET_STR
#undef TRANSLET_CLASS_ERR
#undef TRANSLET_NAME_JAVA_CONFLICT
#undef TRANSLET_OBJECT_ERR
#undef TYPE_CHECK_ERR
#undef TYPE_CHECK_UNK_LOC_ERR
#undef UNKNOWN_SIG_TYPE_ERR
#undef UNNAMED_ATTRIBSET_ERR
#undef UNSUPPORTED_ENCODING
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR
#undef VARIABLE_REDEF_ERR
#undef VARIABLE_UNDEF_ERR
#undef WARNING_MSG
#undef WARNING_PLUS_WRAPPED_MSG
#undef WHEN_ELEMENT_ERR
#undef XPATH_PARSER_ERR
#undef XSLTC_SOURCE_ERR
#undef XSL_VERSION_ERR

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$MethodInfo _ErrorMessages_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_zh_TW::*)()>(&ErrorMessages_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_zh_TW_MethodInfo_
};

$Object* allocate$ErrorMessages_zh_TW($Class* clazz) {
	return $of($alloc(ErrorMessages_zh_TW));
}

void ErrorMessages_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of(u"\u76f8\u540c\u6a94\u6848\u4e2d\u5b9a\u7fa9\u4e86\u8d85\u904e\u4e00\u500b\u6a23\u5f0f\u8868\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of(u"\u6a23\u677f \'\'{0}\'\' \u5df2\u7d93\u5b9a\u7fa9\u5728\u6b64\u6a23\u5f0f\u8868\u4e2d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of(u"\u6a23\u677f \'\'{0}\'\' \u672a\u5b9a\u7fa9\u5728\u6b64\u6a23\u5f0f\u8868\u4e2d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"\u8b8a\u6578 \'\'{0}\'\' \u5728\u76f8\u540c\u7bc4\u570d\u4e2d\u5b9a\u7fa9\u591a\u6b21\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of(u"\u8b8a\u6578\u6216\u53c3\u6578 \'\'{0}\'\' \u672a\u5b9a\u7fa9\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of(u"\u627e\u4e0d\u5230\u985e\u5225 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"\u627e\u4e0d\u5230\u5916\u90e8\u65b9\u6cd5 \'\'{0}\'\' (\u5fc5\u9808\u70ba\u516c\u7528)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of(u"\u7121\u6cd5\u8f49\u63db\u547c\u53eb\u65b9\u6cd5 \'\'{0}\'\' \u4e2d\u7684\u5f15\u6578/\u50b3\u56de\u985e\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of(u"\u627e\u4e0d\u5230\u6a94\u6848\u6216 URI \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of(u"\u7121\u6548\u7684 URI \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CATALOG_EXCEPTION),
			$of(u"JAXP08090001: CatalogResolver \u5df2\u555f\u7528\u76ee\u9304 \"{0}\"\uff0c\u4f46\u50b3\u56de CatalogException\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of(u"\u7121\u6cd5\u958b\u555f\u6a94\u6848\u6216 URI \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of(u"\u9810\u671f <xsl:stylesheet> \u6216 <xsl:transform> \u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of(u"\u672a\u5ba3\u544a\u547d\u540d\u7a7a\u9593\u524d\u7f6e\u78bc \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of(u"\u7121\u6cd5\u89e3\u6790\u51fd\u6578 \'\'{0}\'\' \u7684\u547c\u53eb\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of(u"\'\'{0}\'\' \u7684\u5f15\u6578\u5fc5\u9808\u662f\u6587\u5b57\u5b57\u4e32\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of(u"\u5256\u6790 XPath \u8868\u793a\u5f0f \'\'{0}\'\' \u6642\u767c\u751f\u932f\u8aa4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of(u"\u907a\u6f0f\u5fc5\u8981\u7684\u5c6c\u6027 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"XPath \u8868\u793a\u5f0f\u4e2d\u7121\u6548\u7684\u5b57\u5143 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of(u"\u8655\u7406\u6307\u793a\u7684\u7121\u6548\u540d\u7a31 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of(u"\u5c6c\u6027 \'\'{0}\'\' \u5728\u5143\u7d20\u4e4b\u5916\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of(u"\u7121\u6548\u7684\u5c6c\u6027 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of(u"\u5faa\u74b0\u532f\u5165/\u5305\u542b\u3002\u5df2\u7d93\u8f09\u5165\u6a23\u5f0f\u8868 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR),
			$of(u"xsl:import \u5143\u7d20\u5b50\u9805\u5fc5\u9808\u5728 xsl:stylesheet \u5143\u7d20\u7684\u6240\u6709\u5176\u4ed6\u5143\u7d20\u5b50\u9805\u4e4b\u524d\uff0c\u5305\u62ec\u4efb\u4f55 xsl:include \u5143\u7d20\u5b50\u9805\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of(u"\u7121\u6cd5\u6392\u5e8f Result-tree \u7247\u6bb5 (\u5ffd\u7565 <xsl:sort> \u5143\u7d20)\u3002\u5efa\u7acb\u7d50\u679c\u6a39\u72c0\u7d50\u69cb\u6642\uff0c\u5fc5\u9808\u6392\u5e8f\u7bc0\u9ede\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of(u"\u5df2\u7d93\u5b9a\u7fa9\u5341\u9032\u4f4d\u683c\u5f0f \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of(u"XSLTC \u4e0d\u652f\u63f4 XSL \u7248\u672c \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"\u5728 \'\'{0}\'\' \u4e2d\u6709\u5faa\u74b0\u8b8a\u6578/\u53c3\u6578\u53c3\u7167\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"\u4e8c\u9032\u4f4d\u8868\u793a\u5f0f\u4e0d\u660e\u7684\u904b\u7b97\u5b50\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of(u"\u51fd\u6578\u547c\u53eb\u7121\u6548\u7684\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"document() \u51fd\u6578\u7684\u7b2c\u4e8c\u500b\u5f15\u6578\u5fc5\u9808\u662f node-set\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of(u"\u5728 <xsl:choose> \u4e2d\u81f3\u5c11\u9700\u8981\u4e00\u500b <xsl:when> \u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"\u5728 <xsl:choose> \u4e2d\u53ea\u5141\u8a31\u4e00\u500b <xsl:otherwise> \u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise> \u53ea\u80fd\u5728 <xsl:choose> \u5167\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when> \u53ea\u80fd\u5728 <xsl:choose> \u5167\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"\u5728 <xsl:choose> \u4e2d\u53ea\u5141\u8a31 <xsl:when> \u8207 <xsl:otherwise> \u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of(u"<xsl:attribute-set> \u907a\u6f0f \'name\' \u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of(u"\u7121\u6548\u7684\u5b50\u9805\u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of(u"\u60a8\u7121\u6cd5\u547c\u53eb\u5143\u7d20 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of(u"\u60a8\u7121\u6cd5\u547c\u53eb\u5c6c\u6027 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of(u"\u6700\u4e0a\u5c64 <xsl:stylesheet> \u5143\u7d20\u4e4b\u5916\u7684\u6587\u5b57\u8cc7\u6599\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of(u"\u672a\u6b63\u78ba\u8a2d\u5b9a JAXP \u5256\u6790\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of(u"\u7121\u6cd5\u5fa9\u539f\u7684 XSLTC-internal \u932f\u8aa4: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of(u"\u4e0d\u652f\u63f4\u7684 XSL \u5143\u7d20 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of(u"\u7121\u6cd5\u8fa8\u8b58\u7684 XSLTC \u64f4\u5145\u5957\u4ef6 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"\u8f38\u5165\u6587\u4ef6\u4e0d\u662f\u6a23\u5f0f\u8868 (\u6839\u5143\u7d20\u4e2d\u672a\u5ba3\u544a XSL \u547d\u540d\u7a7a\u9593)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of(u"\u627e\u4e0d\u5230\u6a23\u5f0f\u8868\u76ee\u6a19 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of(u"\u7121\u6cd5\u8b80\u53d6\u6a23\u5f0f\u8868\u76ee\u6a19 \'\'{0}\'\'\uff0c\u56e0\u70ba accessExternalStylesheet \u5c6c\u6027\u8a2d\u5b9a\u7684\u9650\u5236\uff0c\u6240\u4ee5\u4e0d\u5141\u8a31 \'\'{1}\'\' \u5b58\u53d6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of(u"\u672a\u5be6\u884c: \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of(u"\u8f38\u5165\u6587\u4ef6\u672a\u5305\u542b XSL \u6a23\u5f0f\u8868\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of(u"\u7121\u6cd5\u5256\u6790\u5143\u7d20 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of(u"<key> \u7684\u4f7f\u7528\u5c6c\u6027\u5fc5\u9808\u662f\u7bc0\u9ede\u3001node-set\u3001\u5b57\u4e32\u6216\u6578\u5b57\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"\u8f38\u51fa XML \u6587\u4ef6\u7248\u672c\u61c9\u70ba 1.0"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"\u95dc\u806f\u8868\u793a\u5f0f\u7684\u904b\u7b97\u5b50\u4e0d\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of(u"\u5617\u8a66\u4f7f\u7528\u4e0d\u5b58\u5728\u7684\u5c6c\u6027\u96c6 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of(u"\u7121\u6cd5\u5256\u6790\u5c6c\u6027\u503c\u6a23\u677f \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of(u"\u985e\u5225 \'\'{0}\'\' \u7c3d\u7ae0\u6709\u4e0d\u660e\u7684 data-type\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of(u"\u7121\u6cd5\u8f49\u63db data-type \'\'{0}\'\' \u70ba \'\'{1}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"\u6b64\u6a23\u677f\u672a\u5305\u542b\u6709\u6548\u7684 translet \u985e\u5225\u5b9a\u7fa9\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of(u"\u6b64\u6a23\u677f\u672a\u5305\u542b\u540d\u7a31\u70ba \'\'{0}\'\' \u7684\u985e\u5225\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of(u"\u7121\u6cd5\u8f09\u5165 translet \u985e\u5225 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of(u"\u5df2\u8f09\u5165 translet \u985e\u5225\uff0c\u4f46\u7121\u6cd5\u5efa\u7acb translet \u57f7\u884c\u8655\u7406\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of(u"\u5617\u8a66\u5c07 \'\'{0}\'\' \u7684 ErrorListener \u8a2d\u5b9a\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of(u"XSLTC \u50c5\u652f\u63f4 StreamSource\u3001SAXSource \u8207 DOMSource"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of(u"\u50b3\u9001\u81f3 \'\'{0}\'\' \u7684\u4f86\u6e90\u7269\u4ef6\u6c92\u6709\u5167\u5bb9\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of(u"\u7121\u6cd5\u7de8\u8b6f\u6a23\u5f0f\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of(u"TransformerFactory \u7121\u6cd5\u8fa8\u8b58\u5c6c\u6027 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR),
			$of(u"\u70ba \'\'{0}\'\' \u5c6c\u6027\u6307\u5b9a\u7684\u503c\u4e0d\u6b63\u78ba\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of(u"\u547c\u53eb startDocument() \u4e4b\u524d\uff0c\u5fc5\u9808\u5148\u547c\u53eb setResult()\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of(u"\u8f49\u63db\u5668\u6c92\u6709\u5c01\u88dd\u7684 translet \u7269\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"\u8f49\u63db\u7d50\u679c\u6c92\u6709\u5b9a\u7fa9\u7684\u8f38\u51fa\u8655\u7406\u7a0b\u5f0f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"\u50b3\u9001\u81f3 \'\'{0}\'\' \u7684\u7d50\u679c\u7269\u4ef6\u7121\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"\u5617\u8a66\u5b58\u53d6\u7121\u6548\u7684\u8f49\u63db\u5668\u5c6c\u6027 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of(u"\u7121\u6cd5\u5efa\u7acb SAX2DOM \u8f49\u63a5\u5668: \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of(u"\u672a\u8a2d\u5b9a systemId \u800c\u547c\u53eb XSLTCSource.build()\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ER_RESULT_NULL),
			$of(u"\u7d50\u679c\u4e0d\u61c9\u70ba\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE),
			$of(u"\u53c3\u6578 {0} \u7684\u503c\u5fc5\u9808\u662f\u6709\u6548\u7684 Java \u7269\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"-i \u9078\u9805\u5fc5\u9808\u8207 -o \u9078\u9805\u4e00\u8d77\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"\u6982\u8981\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <output>]\n      [-d <directory>] [-j <jarfile>] [-p <package>]\n      [-n] [-x] [-u] [-v] [-h] { <stylesheet> | -i }\n\n\u9078\u9805\n   -o <output>    \u6307\u6d3e\u540d\u7a31 <output> \u81f3\u7522\u751f\u7684\n                  translet\u3002\u6839\u64da\u9810\u8a2d\uff0ctranslet \u540d\u7a31\n                  \u884d\u751f\u81ea <stylesheet> \u540d\u7a31\u3002\u82e5\u7de8\u8b6f\n                  \u591a\u500b\u6a23\u5f0f\u8868\uff0c\u5c07\u5ffd\u7565\u6b64\u9078\u9805\u3002\n   -d <directory> \u6307\u5b9a translet \u7684\u76ee\u7684\u5730\u76ee\u9304\n   -j <jarfile>   \u5c01\u88dd translet \u985e\u5225\u6210\u70ba jar \u6a94\u6848\uff0c\n                  \u540d\u7a31\u6307\u5b9a\u70ba <jarfile>\n   -p <package>   \u6307\u5b9a\u6240\u6709\u7522\u751f\u7684 translet \u985e\u5225\u7684\u5957\u88dd\u7a0b\u5f0f\n                  \u540d\u7a31\u524d\u7f6e\u78bc\u3002\n   -n             \u555f\u7528\u6a23\u677f\u5167\u5d4c (\u9810\u8a2d\u884c\u70ba\u4e00\u822c\u800c\u8a00\n                  \u8f03\u4f73)\u3002\n   -x             \u958b\u555f\u984d\u5916\u7684\u9664\u932f\u8a0a\u606f\u8f38\u51fa\n   -u             \u89e3\u8b6f <stylesheet> \u5f15\u6578\u70ba URL\n   -i             \u5f37\u5236\u7de8\u8b6f\u5668\u5f9e stdin \u8b80\u53d6\u6a23\u5f0f\u8868\n   -v             \u5217\u5370\u7de8\u8b6f\u5668\u7248\u672c\n   -h             \u5217\u5370\u6b64\u7528\u6cd5\u6558\u8ff0\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"\u6982\u8981 \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <iterations>] {-u <document_url> | <document>}\n      <class> [<param1>=<value1> ...]\n\n   \u4f7f\u7528 translet <class> \u8f49\u63db\u6307\u5b9a\u70ba <document> \n   \u7684 XML \u6587\u4ef6\u3002translet <class> \u4f4d\u65bc\n   \u4f7f\u7528\u8005\u7684\u985e\u5225\u8def\u5f91\uff0c\u6216\u662f\u5728\u9078\u64c7\u6027\u6307\u5b9a\u7684 <jarfile> \u4e2d\u3002\n\u9078\u9805\n   -j <jarfile>    \u6307\u5b9a\u8f09\u5165 translet \u7684\u4f86\u6e90 jarfile\n   -x              \u958b\u555f\u984d\u5916\u7684\u9664\u932f\u8a0a\u606f\u8f38\u51fa\n   -n <iterations> \u57f7\u884c\u8f49\u63db <iterations> \u6b21\u6578\u8207\n                   \u986f\u793a\u5206\u6790\u8cc7\u8a0a\n   -u <document_url> \u6307\u5b9a XML \u8f38\u5165\u6587\u4ef6\u70ba URL\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort> \u53ea\u80fd\u5728 <xsl:for-each> \u6216 <xsl:apply-templates> \u4e2d\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of(u"\u6b64 JVM \u4e0d\u652f\u63f4\u8f38\u51fa\u7de8\u78bc \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of(u"\'\'{0}\'\' \u4e2d\u7684\u8a9e\u6cd5\u932f\u8aa4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of(u"\u627e\u4e0d\u5230\u5916\u90e8\u5efa\u69cb\u5b50 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"\u975e\u975c\u614b Java \u51fd\u6578 \'\'{0}\'\' \u7684\u7b2c\u4e00\u500b\u5f15\u6578\u4e0d\u662f\u6709\u6548\u7684\u7269\u4ef6\u53c3\u7167\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of(u"\u6aa2\u67e5\u8868\u793a\u5f0f \'\'{0}\'\' \u7684\u985e\u578b\u6642\u767c\u751f\u932f\u8aa4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"\u6aa2\u67e5\u4f4d\u65bc\u4e0d\u660e\u4f4d\u7f6e\u8868\u793a\u5f0f\u7684\u985e\u578b\u6642\u767c\u751f\u932f\u8aa4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of(u"\u547d\u4ee4\u884c\u9078\u9805 \'\'{0}\'\' \u7121\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of(u"\u547d\u4ee4\u884c\u9078\u9805 \'\'{0}\'\' \u907a\u6f0f\u5fc5\u8981\u7684\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WARNING_PLUS_WRAPPED_MSG),
			$of("WARNING:  \'\'{0}\'\'\n       :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WARNING_MSG),
			$of("WARNING:  \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FATAL_ERR_PLUS_WRAPPED_MSG),
			$of("FATAL ERROR:  \'\'{0}\'\'\n           :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FATAL_ERR_MSG),
			$of("FATAL ERROR:  \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_PLUS_WRAPPED_MSG),
			$of("ERROR:  \'\'{0}\'\'\n     :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_MSG),
			$of("ERROR:  \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_TRANSLET_STR),
			$of(u"\u4f7f\u7528 translet \'\'{0}\'\' \u8f49\u63db"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of(u"\u4f7f\u7528\u4f86\u81ea jar \u6a94\u6848 \'\'{1}\'\' \u7684 translet \'\'{0}\'\' \u8f49\u63db"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of(u"\u7121\u6cd5\u5efa\u7acb TransformerFactory \u985e\u5225 \'\'{0}\'\' \u7684\u57f7\u884c\u8655\u7406\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT),
			$of(u"\u540d\u7a31 \'\'{0}\'\' \u7121\u6cd5\u4f5c\u70ba translet \u985e\u5225\u7684\u540d\u7a31\uff0c\u56e0\u70ba\u5b83\u5305\u542b Java \u985e\u5225\u540d\u7a31\u4e0d\u5141\u8a31\u7684\u5b57\u5143\u3002\u8acb\u6539\u7528\u540d\u7a31 \'\'{1}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of(u"\u7de8\u8b6f\u5668\u932f\u8aa4:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of(u"\u7de8\u8b6f\u5668\u8b66\u544a:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of(u"Translet \u932f\u8aa4:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_QNAME_ERR),
			$of(u"\u503c\u5fc5\u9808\u70ba QName \u6216\u4f7f\u7528\u7a7a\u683c\u52a0\u4ee5\u5340\u9694\u7684 QNames \u6e05\u55ae\u7684\u5c6c\u6027\uff0c\u5177\u6709\u503c \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_NCNAME_ERR),
			$of(u"\u503c\u5fc5\u9808\u70ba NCName \u7684\u5c6c\u6027\uff0c\u5177\u6709\u503c \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_METHOD_IN_OUTPUT),
			$of(u"<xsl:output> \u5143\u7d20\u7684\u65b9\u6cd5\u5c6c\u6027\u5177\u6709\u503c \'\'{0}\'\'\u3002\u6b64\u503c\u5fc5\u9808\u662f \'\'xml\'\'\u3001\'\'html\'\'\u3001\'\'text\'\' \u6216 qname-but-not-ncname \u5176\u4e2d\u4e4b\u4e00"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_GET_FEATURE_NULL_NAME),
			$of(u"TransformerFactory.getFeature(\u5b57\u4e32\u540d\u7a31) \u4e2d\u7684\u529f\u80fd\u540d\u7a31\u4e0d\u53ef\u70ba\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_FEATURE_NULL_NAME),
			$of(u"TransformerFactory.setFeature(\u5b57\u4e32\u540d\u7a31, \u5e03\u6797\u503c) \u4e2d\u7684\u529f\u80fd\u540d\u7a31\u4e0d\u53ef\u70ba\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNSUPPORTED_FEATURE),
			$of(u"\u7121\u6cd5\u5728\u6b64 TransformerFactory \u4e0a\u8a2d\u5b9a\u529f\u80fd \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: \u5b89\u5168\u7ba1\u7406\u7a0b\u5f0f\u5b58\u5728\u6642\uff0c\u7121\u6cd5\u5c07\u529f\u80fd\u8a2d\u70ba\u507d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_TRY_CATCH),
			$of(u"\u5167\u90e8 XSLTC \u932f\u8aa4:  \u7522\u751f\u7684\u4f4d\u5143\u7d44\u78bc\u5305\u542b try-catch-finally \u5340\u584a\uff0c\u7121\u6cd5\u52a0\u4ee5 outlined."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS),
			$of(u"\u5167\u90e8 XSLTC \u932f\u8aa4:  OutlineableChunkStart \u548c OutlineableChunkEnd \u6a19\u8a18\u5fc5\u9808\u6210\u5c0d\u51fa\u73fe\uff0c\u4e26\u4f7f\u7528\u6b63\u78ba\u7684\u5de2\u72c0\u7d50\u69cb\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_DELETED_TARGET),
			$of(u"\u5167\u90e8 XSLTC \u932f\u8aa4:  \u539f\u59cb\u65b9\u6cd5\u4e2d\u4ecd\u7136\u53c3\u7167\u5c6c\u65bc outlined \u4f4d\u5143\u7d44\u78bc\u5340\u584a\u4e00\u90e8\u5206\u7684\u6307\u793a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG),
			$of(u"\u5167\u90e8 XSLTC \u932f\u8aa4:  translet \u4e2d\u7684\u65b9\u6cd5\u8d85\u904e Java \u865b\u64ec\u6a5f\u5668\u5c0d\u65bc\u65b9\u6cd5\u9577\u5ea6 64 KB \u7684\u9650\u5236\u3002\u9019\u901a\u5e38\u662f\u56e0\u70ba\u6a23\u5f0f\u8868\u4e2d\u6709\u975e\u5e38\u5927\u7684\u6a23\u677f\u3002\u8acb\u5617\u8a66\u91cd\u65b0\u7d44\u7e54\u60a8\u7684\u6a23\u5f0f\u8868\u4ee5\u4f7f\u7528\u8f03\u5c0f\u7684\u6a23\u677f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DESERIALIZE_TRANSLET_ERR),
			$of(u"\u555f\u7528 Java \u5b89\u5168\u6642\uff0c\u6703\u505c\u7528\u9084\u539f\u5e8f\u5217\u5316 TemplatesImpl \u7684\u652f\u63f4\u3002\u5c07 jdk.xml.enableTemplatesImplDeserialization \u7cfb\u7d71\u5c6c\u6027\u8a2d\u70ba\u771f\u5373\u53ef\u8986\u5beb\u6b64\u8a2d\u5b9a\u3002"_s)
		})
	});
}

ErrorMessages_zh_TW::ErrorMessages_zh_TW() {
}

$Class* ErrorMessages_zh_TW::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_zh_TW, name, initialize, &_ErrorMessages_zh_TW_ClassInfo_, allocate$ErrorMessages_zh_TW);
	return class$;
}

$Class* ErrorMessages_zh_TW::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com