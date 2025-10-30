#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_zh_CN.h>

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

$MethodInfo _ErrorMessages_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_zh_CN::*)()>(&ErrorMessages_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_zh_CN_MethodInfo_
};

$Object* allocate$ErrorMessages_zh_CN($Class* clazz) {
	return $of($alloc(ErrorMessages_zh_CN));
}

void ErrorMessages_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of(u"\u540c\u4e00\u6587\u4ef6\u4e2d\u5b9a\u4e49\u4e86\u591a\u4e2a\u6837\u5f0f\u8868\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of(u"\u5df2\u5728\u6b64\u6837\u5f0f\u8868\u4e2d\u5b9a\u4e49\u6a21\u677f \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of(u"\u672a\u5728\u6b64\u6837\u5f0f\u8868\u4e2d\u5b9a\u4e49\u6a21\u677f \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"\u540c\u4e00\u4f5c\u7528\u57df\u4e2d\u591a\u6b21\u5b9a\u4e49\u4e86\u53d8\u91cf \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of(u"\u672a\u5b9a\u4e49\u53d8\u91cf\u6216\u53c2\u6570 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of(u"\u627e\u4e0d\u5230\u7c7b \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"\u627e\u4e0d\u5230\u5916\u90e8\u65b9\u6cd5 \'\'{0}\'\' (\u5fc5\u987b\u4e3a public)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of(u"\u65e0\u6cd5\u5728\u8c03\u7528\u65b9\u6cd5 \'\'{0}\'\' \u65f6\u8f6c\u6362\u53c2\u6570/\u8fd4\u56de\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of(u"\u627e\u4e0d\u5230\u6587\u4ef6\u6216 URI \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of(u"URI \'\'{0}\'\' \u65e0\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CATALOG_EXCEPTION),
			$of(u"JAXP08090001: \u5df2\u5bf9\u76ee\u5f55 \"{0}\" \u542f\u7528 CatalogResolver, \u4f46\u8fd4\u56de\u4e86 CatalogException\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of(u"\u65e0\u6cd5\u6253\u5f00\u6587\u4ef6\u6216 URI \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of(u"\u9700\u8981 <xsl:stylesheet> \u6216 <xsl:transform> \u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of(u"\u672a\u58f0\u660e\u540d\u79f0\u7a7a\u95f4\u524d\u7f00 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of(u"\u65e0\u6cd5\u89e3\u6790\u5bf9\u51fd\u6570 \'\'{0}\'\' \u7684\u8c03\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of(u"\'\'{0}\'\' \u7684\u53c2\u6570\u5fc5\u987b\u662f\u6587\u5b57\u5b57\u7b26\u4e32\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of(u"\u89e3\u6790 XPath \u8868\u8fbe\u5f0f \'\'{0}\'\' \u65f6\u51fa\u9519\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of(u"\u7f3a\u5c11\u6240\u9700\u5c5e\u6027 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"XPath \u8868\u8fbe\u5f0f\u4e2d\u7684\u5b57\u7b26 \'\'{0}\'\' \u975e\u6cd5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of(u"processing instruction \u7684\u540d\u79f0 \'\'{0}\'\' \u975e\u6cd5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of(u"\u5c5e\u6027 \'\'{0}\'\' \u5728\u5143\u7d20\u5916\u90e8\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of(u"\u5c5e\u6027 \'\'{0}\'\' \u975e\u6cd5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of(u"\u5faa\u73af import/include\u3002\u5df2\u52a0\u8f7d\u6837\u5f0f\u8868 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR),
			$of(u"xsl:import \u5143\u7d20\u5b50\u7ea7\u5fc5\u987b\u4f4d\u4e8e xsl:stylesheet \u5143\u7d20\u7684\u6240\u6709\u5176\u4ed6\u5143\u7d20\u5b50\u7ea7 (\u5305\u62ec\u4efb\u4f55 xsl:include \u5143\u7d20\u5b50\u7ea7) \u4e4b\u524d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of(u"\u65e0\u6cd5\u5bf9\u7ed3\u679c\u6811\u7247\u6bb5\u6392\u5e8f (\u5ffd\u7565 <xsl:sort> \u5143\u7d20)\u3002\u5fc5\u987b\u5728\u521b\u5efa\u7ed3\u679c\u6811\u65f6\u5bf9\u8282\u70b9\u8fdb\u884c\u6392\u5e8f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of(u"\u5df2\u5b9a\u4e49\u5341\u8fdb\u5236\u683c\u5f0f \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of(u"XSLTC \u4e0d\u652f\u6301 XSL \u7248\u672c \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"\'\'{0}\'\' \u4e2d\u5b58\u5728\u5faa\u73af\u53d8\u91cf/\u53c2\u6570\u5f15\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"\u4e8c\u8fdb\u5236\u8868\u8fbe\u5f0f\u7684\u8fd0\u7b97\u7b26\u672a\u77e5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of(u"\u51fd\u6570\u8c03\u7528\u7684\u53c2\u6570\u975e\u6cd5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"document() \u51fd\u6570\u7684\u7b2c\u4e8c\u4e2a\u53c2\u6570\u5fc5\u987b\u662f\u8282\u70b9\u96c6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of(u"<xsl:choose> \u4e2d\u81f3\u5c11\u9700\u8981\u4e00\u4e2a <xsl:when> \u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"<xsl:choose> \u4e2d\u4ec5\u5141\u8bb8\u4f7f\u7528\u4e00\u4e2a <xsl:otherwise> \u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise> \u53ea\u80fd\u5728 <xsl:choose> \u4e2d\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when> \u53ea\u80fd\u5728 <xsl:choose> \u4e2d\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"<xsl:choose> \u4e2d\u4ec5\u5141\u8bb8\u4f7f\u7528 <xsl:when> \u548c <xsl:otherwise> \u5143\u7d20\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of(u"<xsl:attribute-set> \u7f3a\u5c11 \'name\' \u5c5e\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of(u"\u5b50\u5143\u7d20\u975e\u6cd5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of(u"\u65e0\u6cd5\u8c03\u7528\u5143\u7d20 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of(u"\u65e0\u6cd5\u8c03\u7528\u5c5e\u6027 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of(u"\u6587\u672c\u6570\u636e\u4f4d\u4e8e\u9876\u7ea7 <xsl:stylesheet> \u5143\u7d20\u5916\u90e8\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of(u"JAXP \u89e3\u6790\u5668\u672a\u6b63\u786e\u914d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of(u"\u4e0d\u53ef\u6062\u590d\u7684 XSLTC \u5185\u90e8\u9519\u8bef: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of(u"XSL \u5143\u7d20 \'\'{0}\'\' \u4e0d\u53d7\u652f\u6301\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of(u"XSLTC \u6269\u5c55 \'\'{0}\'\' \u65e0\u6cd5\u8bc6\u522b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"\u8f93\u5165\u6587\u6863\u4e0d\u662f\u6837\u5f0f\u8868 (\u672a\u5728\u6839\u5143\u7d20\u4e2d\u58f0\u660e XSL \u540d\u79f0\u7a7a\u95f4)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of(u"\u627e\u4e0d\u5230\u6837\u5f0f\u8868\u76ee\u6807 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of(u"\u7531\u4e8e accessExternalStylesheet \u5c5e\u6027\u8bbe\u7f6e\u7684\u9650\u5236\u800c\u4e0d\u5141\u8bb8 \'\'{1}\'\' \u8bbf\u95ee, \u56e0\u6b64\u65e0\u6cd5\u8bfb\u53d6\u6837\u5f0f\u8868\u76ee\u6807 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of(u"\u672a\u5b9e\u73b0: \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of(u"\u8f93\u5165\u6587\u6863\u4e0d\u5305\u542b XSL \u6837\u5f0f\u8868\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of(u"\u65e0\u6cd5\u89e3\u6790\u5143\u7d20 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of(u"<key> \u7684 use \u5c5e\u6027\u5fc5\u987b\u662f node, node-set, string \u6216 number\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"\u8f93\u51fa XML \u6587\u6863\u7248\u672c\u5e94\u4e3a 1.0"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"\u5173\u7cfb\u8868\u8fbe\u5f0f\u7684\u8fd0\u7b97\u7b26\u672a\u77e5"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of(u"\u5c1d\u8bd5\u4f7f\u7528\u4e0d\u5b58\u5728\u7684\u5c5e\u6027\u96c6 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of(u"\u65e0\u6cd5\u89e3\u6790\u5c5e\u6027\u503c\u6a21\u677f \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of(u"\u7c7b \'\'{0}\'\' \u7684\u7b7e\u540d\u4e2d\u7684\u6570\u636e\u7c7b\u578b\u672a\u77e5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of(u"\u65e0\u6cd5\u5c06\u6570\u636e\u7c7b\u578b \'\'{0}\'\' \u8f6c\u6362\u4e3a \'\'{1}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"\u6b64 Templates \u4e0d\u5305\u542b\u6709\u6548\u7684 translet \u7c7b\u5b9a\u4e49\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of(u"\u6b64 Templates \u4e0d\u5305\u542b\u540d\u4e3a \'\'{0}\'\' \u7684\u7c7b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of(u"\u65e0\u6cd5\u52a0\u8f7d translet \u7c7b \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of(u"\u5df2\u52a0\u8f7d Translet \u7c7b, \u4f46\u65e0\u6cd5\u521b\u5efa translet \u5b9e\u4f8b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of(u"\u5c1d\u8bd5\u5c06 \'\'{0}\'\' \u7684 ErrorListener \u8bbe\u7f6e\u4e3a\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of(u"XSLTC \u4ec5\u652f\u6301 StreamSource, SAXSource \u548c DOMSource"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of(u"\u4f20\u9012\u5230 \'\'{0}\'\' \u7684 Source \u5bf9\u8c61\u4e0d\u5305\u542b\u4efb\u4f55\u5185\u5bb9\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of(u"\u65e0\u6cd5\u7f16\u8bd1\u6837\u5f0f\u8868"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of(u"TransformerFactory \u65e0\u6cd5\u8bc6\u522b\u5c5e\u6027 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR),
			$of(u"\u4e3a \'\'{0}\'\' \u5c5e\u6027\u6307\u5b9a\u7684\u503c\u4e0d\u6b63\u786e\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of(u"\u5fc5\u987b\u5148\u8c03\u7528 setResult(), \u518d\u8c03\u7528 startDocument()\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of(u"Transformer \u6ca1\u6709\u5185\u5d4c\u7684 translet \u5bf9\u8c61\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"\u8f6c\u6362\u7ed3\u679c\u6ca1\u6709\u5b9a\u4e49\u7684\u8f93\u51fa\u5904\u7406\u7a0b\u5e8f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"\u4f20\u9012\u5230 \'\'{0}\'\' \u7684 Result \u5bf9\u8c61\u65e0\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"\u5c1d\u8bd5\u8bbf\u95ee\u65e0\u6548\u7684 Transformer \u5c5e\u6027 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of(u"\u65e0\u6cd5\u521b\u5efa SAX2DOM \u9002\u914d\u5668: \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of(u"\u8c03\u7528 XSLTCSource.build() \u65f6\u672a\u8bbe\u7f6e systemId\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ER_RESULT_NULL),
			$of(u"Result \u4e0d\u80fd\u4e3a\u7a7a\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE),
			$of(u"\u53c2\u6570 {0} \u7684\u503c\u5fc5\u987b\u662f\u6709\u6548 Java \u5bf9\u8c61"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"-i \u9009\u9879\u5fc5\u987b\u4e0e -o \u9009\u9879\u4e00\u8d77\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"\u63d0\u8981\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <\u8f93\u51fa>]\n      [-d <\u76ee\u5f55>] [-j <jarfile>] [-p <\u7a0b\u5e8f\u5305>]\n      [-n] [-x] [-u] [-v] [-h] { <\u6837\u5f0f\u8868> | -i }\n\n\u9009\u9879\n   -o <\u8f93\u51fa>    \u4e3a\u751f\u6210\u7684 translet \u5206\u914d\n                  \u540d\u79f0 <\u8f93\u51fa>\u3002\u9ed8\u8ba4\u60c5\u51b5\u4e0b, translet \u540d\u79f0\n                  \u6d3e\u751f\u81ea <\u6837\u5f0f\u8868> \u540d\u79f0\u3002\u5982\u679c\u8981\u7f16\u8bd1\u591a\u4e2a\u6837\u5f0f\u8868, \n                  \u5219\u5ffd\u7565\u6b64\u9009\u9879\u3002\n   -d <\u76ee\u5f55> \u6307\u5b9a translet \u7684\u76ee\u6807\u76ee\u5f55\n   -j <jarfile>   \u5c06 translet \u7c7b\u6253\u5305\u5230\u5177\u6709 <jarfile>\n                  \u6307\u5b9a\u7684\u540d\u79f0\u7684 jar \u6587\u4ef6\u4e2d\n   -p <\u7a0b\u5e8f\u5305>   \u4e3a\u751f\u6210\u7684\u6240\u6709 translet \u7c7b\n                  \u6307\u5b9a\u7a0b\u5e8f\u5305\u540d\u79f0\u524d\u7f00\u3002\n   -n             \u542f\u7528\u6a21\u677f\u5185\u5d4c (\u9ed8\u8ba4\u884c\u4e3a\n                  \u901a\u5e38\u53ef\u63d0\u4f9b\u8f83\u597d\u7684\u6027\u80fd)\u3002\n   -x             \u542f\u7528\u5176\u4ed6\u8c03\u8bd5\u6d88\u606f\u8f93\u51fa\n   -u             \u5c06 <\u6837\u5f0f\u8868> \u53c2\u6570\u89e3\u91ca\u4e3a URL\n   -i             \u5f3a\u5236\u7f16\u8bd1\u5668\u4ece stdin \u8bfb\u53d6\u6837\u5f0f\u8868\n   -v             \u8f93\u51fa\u7f16\u8bd1\u5668\u7684\u7248\u672c\n   -h             \u8f93\u51fa\u6b64\u7528\u6cd5\u8bed\u53e5\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"\u63d0\u8981\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <\u8fed\u4ee3\u6570>] {-u <document_url> | <\u6587\u6863>}\n      <\u7c7b> [<param1>=<value1> ...]\n\n   \u4f7f\u7528 translet <\u7c7b> \u8f6c\u6362\n   <\u6587\u6863> \u6307\u5b9a\u7684 XML \u6587\u6863\u3002translet <\u7c7b> \u4f4d\u4e8e\n   \u7528\u6237\u7684 CLASSPATH \u6216\u9009\u62e9\u6027\u6307\u5b9a\u7684 <jarfile> \u4e2d\u3002\n\u9009\u9879\n   -j <jarfile>    \u6307\u5b9a\u8981\u4ece\u4e2d\u52a0\u8f7d translet \u7684 jarfile\n   -x              \u542f\u7528\u5176\u4ed6\u8c03\u8bd5\u6d88\u606f\u8f93\u51fa\n   -n <\u8fed\u4ee3\u6570> \u8fd0\u884c <\u8fed\u4ee3\u6570> \u6b21\u8f6c\u6362\u5e76\n                   \u663e\u793a\u914d\u7f6e\u6587\u4ef6\u4fe1\u606f\n   -u <document_url> \u4ee5 URL \u5f62\u5f0f\u6307\u5b9a XML \u8f93\u5165\u6587\u6863\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort> \u53ea\u80fd\u5728 <xsl:for-each> \u6216 <xsl:apply-templates> \u4e2d\u4f7f\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of(u"\u6b64 JVM \u4e2d\u4e0d\u652f\u6301\u8f93\u51fa\u7f16\u7801 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of(u"\'\'{0}\'\' \u4e2d\u7684\u8bed\u6cd5\u9519\u8bef\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of(u"\u627e\u4e0d\u5230\u5916\u90e8\u6784\u9020\u5668 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"\u975e static Java \u51fd\u6570 \'\'{0}\'\' \u7684\u7b2c\u4e00\u4e2a\u53c2\u6570\u4e0d\u662f\u6709\u6548\u7684\u5bf9\u8c61\u5f15\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of(u"\u68c0\u67e5\u8868\u8fbe\u5f0f \'\'{0}\'\' \u7684\u7c7b\u578b\u65f6\u51fa\u9519\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"\u68c0\u67e5\u672a\u77e5\u4f4d\u7f6e\u7684\u8868\u8fbe\u5f0f\u7c7b\u578b\u65f6\u51fa\u9519\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of(u"\u547d\u4ee4\u884c\u9009\u9879 \'\'{0}\'\' \u65e0\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of(u"\u547d\u4ee4\u884c\u9009\u9879 \'\'{0}\'\' \u7f3a\u5c11\u6240\u9700\u53c2\u6570\u3002"_s)
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
			$of(u"\u4f7f\u7528 translet \'\'{0}\'\' \u8fdb\u884c\u8f6c\u6362 "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of(u"\u4f7f\u7528 translet \'\'{0}\'\' \u4ece jar \u6587\u4ef6 \'\'{1}\'\' \u8fdb\u884c\u8f6c\u6362"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of(u"\u65e0\u6cd5\u521b\u5efa TransformerFactory \u7c7b \'\'{0}\'\' \u7684\u5b9e\u4f8b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT),
			$of(u"\u540d\u79f0 \'\'{0}\'\' \u5305\u542b\u4e0d\u5141\u8bb8\u5728 Java \u7c7b\u540d\u4e2d\u4f7f\u7528\u7684\u5b57\u7b26, \u56e0\u6b64\u65e0\u6cd5\u5c06\u6b64\u540d\u79f0\u7528\u4f5c translet \u7c7b\u7684\u540d\u79f0\u3002\u5df2\u6539\u7528\u540d\u79f0 \'\'{1}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of(u"\u7f16\u8bd1\u5668\u9519\u8bef:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of(u"\u7f16\u8bd1\u5668\u8b66\u544a:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of(u"Translet \u9519\u8bef:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_QNAME_ERR),
			$of(u"\u5176\u503c\u5fc5\u987b\u4e3a QName \u6216\u7531\u7a7a\u683c\u5206\u9694\u7684 QName \u5217\u8868\u7684\u5c5e\u6027\u5177\u6709\u503c \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_NCNAME_ERR),
			$of(u"\u5176\u503c\u5fc5\u987b\u4e3a NCName \u7684\u5c5e\u6027\u5177\u6709\u503c \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_METHOD_IN_OUTPUT),
			$of(u"<xsl:output> \u5143\u7d20\u7684 method \u5c5e\u6027\u5177\u6709\u503c \'\'{0}\'\'\u3002\u8be5\u503c\u5fc5\u987b\u662f \'\'xml\'\', \'\'html\'\', \'\'text\'\' \u6216 qname-but-not-ncname \u4e4b\u4e00"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_GET_FEATURE_NULL_NAME),
			$of(u"TransformerFactory.getFeature(String name) \u4e2d\u7684\u529f\u80fd\u540d\u79f0\u4e0d\u80fd\u4e3a\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_FEATURE_NULL_NAME),
			$of(u"TransformerFactory.setFeature(String name, boolean value) \u4e2d\u7684\u529f\u80fd\u540d\u79f0\u4e0d\u80fd\u4e3a\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNSUPPORTED_FEATURE),
			$of(u"\u65e0\u6cd5\u5bf9\u6b64 TransformerFactory \u8bbe\u7f6e\u529f\u80fd \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: \u5b58\u5728 Security Manager \u65f6, \u65e0\u6cd5\u5c06\u6b64\u529f\u80fd\u8bbe\u7f6e\u4e3a\u201c\u5047\u201d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_TRY_CATCH),
			$of(u"\u5185\u90e8 XSLTC \u9519\u8bef: \u751f\u6210\u7684\u5b57\u8282\u4ee3\u7801\u5305\u542b try-catch-finally \u5757, \u65e0\u6cd5\u8fdb\u884c Outlined\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS),
			$of(u"\u5185\u90e8 XSLTC \u9519\u8bef: OutlineableChunkStart \u548c OutlineableChunkEnd \u6807\u8bb0\u5fc5\u987b\u914d\u5bf9\u5e76\u4e14\u6b63\u786e\u5d4c\u5957\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_DELETED_TARGET),
			$of(u"\u5185\u90e8 XSLTC \u9519\u8bef: \u5c5e\u4e8e\u5df2\u8fdb\u884c Outlined \u7684\u5b57\u8282\u4ee3\u7801\u5757\u7684\u6307\u4ee4\u5728\u539f\u59cb\u65b9\u6cd5\u4e2d\u4ecd\u88ab\u5f15\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG),
			$of(u"\u5185\u90e8 XSLTC \u9519\u8bef: translet \u4e2d\u7684\u65b9\u6cd5\u8d85\u8fc7\u4e86 Java \u865a\u62df\u673a\u7684\u65b9\u6cd5\u957f\u5ea6\u9650\u5236 64 KB\u3002\u8fd9\u901a\u5e38\u662f\u7531\u4e8e\u6837\u5f0f\u8868\u4e2d\u7684\u6a21\u677f\u975e\u5e38\u5927\u9020\u6210\u7684\u3002\u8bf7\u5c1d\u8bd5\u4f7f\u7528\u8f83\u5c0f\u7684\u6a21\u677f\u91cd\u65b0\u6784\u5efa\u6837\u5f0f\u8868\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DESERIALIZE_TRANSLET_ERR),
			$of(u"\u542f\u7528\u4e86 Java \u5b89\u5168\u65f6, \u5c06\u7981\u7528\u5bf9\u53cd\u5e8f\u5217\u5316 TemplatesImpl \u7684\u652f\u6301\u3002\u53ef\u4ee5\u901a\u8fc7\u5c06 jdk.xml.enableTemplatesImplDeserialization \u7cfb\u7edf\u5c5e\u6027\u8bbe\u7f6e\u4e3a\u201c\u771f\u201d\u6765\u8986\u76d6\u6b64\u8bbe\u7f6e\u3002"_s)
		})
	});
}

ErrorMessages_zh_CN::ErrorMessages_zh_CN() {
}

$Class* ErrorMessages_zh_CN::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_zh_CN, name, initialize, &_ErrorMessages_zh_CN_ClassInfo_, allocate$ErrorMessages_zh_CN);
	return class$;
}

$Class* ErrorMessages_zh_CN::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com