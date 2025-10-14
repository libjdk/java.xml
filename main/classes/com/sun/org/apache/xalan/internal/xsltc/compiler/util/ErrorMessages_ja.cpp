#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_ja.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _ErrorMessages_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_ja::*)()>(&ErrorMessages_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_ja_MethodInfo_
};

$Object* allocate$ErrorMessages_ja($Class* clazz) {
	return $of($alloc(ErrorMessages_ja));
}

void ErrorMessages_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_ja::getContents() {
			$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of(u"\u540c\u3058\u30d5\u30a1\u30a4\u30eb\u306b\u8907\u6570\u306e\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u304c\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of(u"\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\'\'{0}\'\'\u306f\u3053\u306e\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u5185\u3067\u3059\u3067\u306b\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of(u"\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\'\'{0}\'\'\u306f\u3053\u306e\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u5185\u3067\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"\u5909\u6570\'\'{0}\'\'\u306f\u540c\u3058\u30b9\u30b3\u30fc\u30d7\u5185\u3067\u8907\u6570\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of(u"\u5909\u6570\u307e\u305f\u306f\u30d1\u30e9\u30e1\u30fc\u30bf\'\'{0}\'\'\u304c\u672a\u5b9a\u7fa9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of(u"\u30af\u30e9\u30b9\'\'{0}\'\'\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"\u5916\u90e8\u30e1\u30bd\u30c3\u30c9\'\'{0}\'\'\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093(public\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of(u"\u30e1\u30bd\u30c3\u30c9\'\'{0}\'\'\u306e\u547c\u51fa\u3057\u306e\u5f15\u6570\u30bf\u30a4\u30d7\u307e\u305f\u306f\u623b\u308a\u578b\u3092\u5909\u63db\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306fURI \'\'{0}\'\'\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of(u"URI \'\'{0}\'\'\u304c\u7121\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CATALOG_EXCEPTION),
			$of(u"JAXP08090001: CatalogResolver\u306f\u30ab\u30bf\u30ed\u30b0\"{0}\"\u3067\u6709\u52b9\u3067\u3059\u304c\u3001CatalogException\u304c\u8fd4\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306fURI \'\'{0}\'\'\u3092\u958b\u304f\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of(u"<xsl:stylesheet>\u307e\u305f\u306f<xsl:transform>\u306e\u8981\u7d20\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of(u"\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306e\u63a5\u982d\u8f9e\'\'{0}\'\'\u306f\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of(u"\u95a2\u6570\'\'{0}\'\'\u306e\u547c\u51fa\u3057\u3092\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of(u"\'\'{0}\'\'\u3078\u306e\u5f15\u6570\u306f\u30ea\u30c6\u30e9\u30eb\u6587\u5b57\u5217\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of(u"XPath\u5f0f\'\'{0}\'\'\u306e\u89e3\u6790\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of(u"\u5fc5\u9808\u5c5e\u6027\'\'{0}\'\'\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"XPath\u5f0f\u306e\u6587\u5b57\'\'{0}\'\'\u306f\u7121\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of(u"\u51e6\u7406\u547d\u4ee4\u306e\u540d\u524d\'\'{0}\'\'\u306f\u7121\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of(u"\u5c5e\u6027\'\'{0}\'\'\u304c\u8981\u7d20\u306e\u5916\u5074\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of(u"\u4e0d\u6b63\u306a\u5c5e\u6027\'\'{0}\'\'\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of(u"\u30a4\u30f3\u30dd\u30fc\u30c8\u307e\u305f\u306f\u30a4\u30f3\u30af\u30eb\u30fc\u30c9\u304c\u5faa\u74b0\u3057\u3066\u3044\u307e\u3059\u3002\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\'\'{0}\'\'\u306f\u3059\u3067\u306b\u30ed\u30fc\u30c9\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR),
			$of(u"xsl:import\u8981\u7d20\u306e\u5b50\u306f\u3001xsl:stylesheet\u8981\u7d20\u306e\u4ed6\u306e\u3059\u3079\u3066\u306e\u8981\u7d20\u306e\u5b50(\u3059\u3079\u3066\u306exsl:include\u8981\u7d20\u306e\u5b50\u3092\u542b\u3080)\u3088\u308a\u524d\u306b\u7f6e\u304f\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of(u"\u7d50\u679c\u30c4\u30ea\u30fc\u30fb\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306f\u30bd\u30fc\u30c8\u3067\u304d\u307e\u305b\u3093(<xsl:sort>\u8981\u7d20\u306f\u7121\u8996\u3055\u308c\u307e\u3059)\u3002\u7d50\u679c\u30c4\u30ea\u30fc\u3092\u4f5c\u6210\u3059\u308b\u3068\u304d\u306b\u30ce\u30fc\u30c9\u3092\u30bd\u30fc\u30c8\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of(u"10\u9032\u6570\u30d5\u30a9\u30fc\u30de\u30c3\u30c8\'\'{0}\'\'\u306f\u3059\u3067\u306b\u5b9a\u7fa9\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of(u"XSL\u30d0\u30fc\u30b8\u30e7\u30f3\'\'{0}\'\'\u306fXSLTC\u306b\u3088\u3063\u3066\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"\'\'{0}\'\'\u5185\u306e\u5909\u6570\u53c2\u7167\u307e\u305f\u306f\u30d1\u30e9\u30e1\u30fc\u30bf\u53c2\u7167\u304c\u5faa\u74b0\u3057\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"2\u9032\u6570\u306e\u5f0f\u306b\u5bfe\u3059\u308b\u4e0d\u660e\u306a\u6f14\u7b97\u5b50\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of(u"\u95a2\u6570\u547c\u51fa\u3057\u306e\u5f15\u6570\u304c\u4e0d\u6b63\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"document()\u95a2\u6570\u306e2\u756a\u76ee\u306e\u5f15\u6570\u306f\u30ce\u30fc\u30c9\u30bb\u30c3\u30c8\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of(u"<xsl:choose>\u5185\u306b\u306f\u5c11\u306a\u304f\u3068\u30821\u3064\u306e<xsl:when>\u8981\u7d20\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"<xsl:choose>\u5185\u3067\u306f1\u3064\u306e<xsl:otherwise>\u8981\u7d20\u306e\u307f\u304c\u8a31\u53ef\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise>\u306f<xsl:choose>\u5185\u3067\u306e\u307f\u4f7f\u7528\u3067\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when>\u306f<xsl:choose>\u5185\u3067\u306e\u307f\u4f7f\u7528\u3067\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"<xsl:choose>\u5185\u3067\u306f<xsl:when>\u3068<xsl:otherwise>\u306e\u8981\u7d20\u306e\u307f\u304c\u8a31\u53ef\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of(u"<xsl:attribute-set>\u306b\'name\'\u5c5e\u6027\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of(u"\u5b50\u8981\u7d20\u304c\u4e0d\u6b63\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of(u"\u8981\u7d20\'\'{0}\'\'\u3092\u547c\u3073\u51fa\u3059\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of(u"\u5c5e\u6027\'\'{0}\'\'\u3092\u547c\u3073\u51fa\u3059\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of(u"\u30c6\u30ad\u30b9\u30c8\u30fb\u30c7\u30fc\u30bf\u306f\u30c8\u30c3\u30d7\u30ec\u30d9\u30eb\u306e<xsl:stylesheet>\u8981\u7d20\u306e\u5916\u5074\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of(u"JAXP\u30d1\u30fc\u30b5\u30fc\u304c\u6b63\u3057\u304f\u69cb\u6210\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of(u"\u30ea\u30ab\u30d0\u30ea\u4e0d\u80fd\u306aXSLTC\u5185\u90e8\u30a8\u30e9\u30fc: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of(u"XSL\u8981\u7d20\'\'{0}\'\'\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of(u"XSLTC\u62e1\u5f35\'\'{0}\'\'\u306f\u8a8d\u8b58\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"\u5165\u529b\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u306f\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u3067\u306f\u3042\u308a\u307e\u305b\u3093(XSL\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306f\u30eb\u30fc\u30c8\u8981\u7d20\u5185\u3067\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u305b\u3093)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u30fb\u30bf\u30fc\u30b2\u30c3\u30c8\'\'{0}\'\'\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of(u"accessExternalStylesheet\u30d7\u30ed\u30d1\u30c6\u30a3\u3067\u8a2d\u5b9a\u3055\u308c\u305f\u5236\u9650\u306b\u3088\u308a\'\'{1}\'\'\u30a2\u30af\u30bb\u30b9\u304c\u8a31\u53ef\u3055\u308c\u3066\u3044\u306a\u3044\u305f\u3081\u3001\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u30fb\u30bf\u30fc\u30b2\u30c3\u30c8\'\'{0}\'\'\u3092\u8aad\u307f\u53d6\u308c\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of(u"\'\'{0}\'\'\u304c\u5b9f\u88c5\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of(u"\u5165\u529b\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u306bXSL\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of(u"\u8981\u7d20\'\'{0}\'\'\u3092\u89e3\u6790\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of(u"<key>\u306euse\u5c5e\u6027\u306f\u3001\u30ce\u30fc\u30c9\u3001\u30ce\u30fc\u30c9\u30bb\u30c3\u30c8\u3001\u6587\u5b57\u5217\u307e\u305f\u306f\u6570\u5024\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"\u51fa\u529bXML\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u306f1.0\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"\u95a2\u4fc2\u5f0f\u306e\u4e0d\u660e\u306a\u6f14\u7b97\u5b50\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of(u"\u5b58\u5728\u3057\u306a\u3044\u5c5e\u6027\u30bb\u30c3\u30c8\'\'{0}\'\'\u3092\u4f7f\u7528\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of(u"\u5c5e\u6027\u5024\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\'\'{0}\'\'\u3092\u89e3\u6790\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of(u"\u30af\u30e9\u30b9\'\'{0}\'\'\u306e\u7f72\u540d\u306b\u4e0d\u660e\u306a\u30c7\u30fc\u30bf\u578b\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of(u"\u30c7\u30fc\u30bf\u578b\'\'{0}\'\'\u3092\'\'{1}\'\'\u306b\u5909\u63db\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"\u3053\u306e\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u306b\u306f\u6709\u52b9\u306atranslet\u30af\u30e9\u30b9\u5b9a\u7fa9\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of(u"\u3053\u306e\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u306b\u306f\u540d\u524d\'\'{0}\'\'\u3092\u6301\u3064\u30af\u30e9\u30b9\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of(u"translet\u30af\u30e9\u30b9\'\'{0}\'\'\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of(u"Translet\u30af\u30e9\u30b9\u304c\u30ed\u30fc\u30c9\u3055\u308c\u307e\u3057\u305f\u304c\u3001translet\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of(u"\'\'{0}\'\'\u306eErrorListener\u3092null\u306b\u8a2d\u5b9a\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of(u"StreamSource\u3001SAXSource\u304a\u3088\u3073DOMSource\u306e\u307f\u304cXSLTC\u306b\u3088\u3063\u3066\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of(u"\'\'{0}\'\'\u306b\u6e21\u3055\u308c\u305f\u30bd\u30fc\u30b9\u30fb\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306b\u30b3\u30f3\u30c6\u30f3\u30c4\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of(u"\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u3092\u30b3\u30f3\u30d1\u30a4\u30eb\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of(u"TransformerFactory\u306f\u5c5e\u6027\'\'{0}\'\'\u3092\u8a8d\u8b58\u3057\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR),
			$of(u"\'\'{0}\'\'\u5c5e\u6027\u306b\u6307\u5b9a\u3055\u308c\u305f\u5024\u304c\u6b63\u3057\u304f\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of(u"setResult()\u306fstartDocument()\u3088\u308a\u3082\u524d\u306b\u547c\u3073\u51fa\u3059\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of(u"\u30c8\u30e9\u30f3\u30b9\u30d5\u30a9\u30fc\u30de\u306b\u306f\u30ab\u30d7\u30bb\u30eb\u5316\u3055\u308c\u305ftranslet\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"\u5909\u63db\u7d50\u679c\u306b\u5bfe\u3057\u3066\u5b9a\u7fa9\u6e08\u306e\u51fa\u529b\u30cf\u30f3\u30c9\u30e9\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"\'\'{0}\'\'\u306b\u6e21\u3055\u308c\u305f\u7d50\u679c\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306f\u7121\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"\u7121\u52b9\u306a\u30c8\u30e9\u30f3\u30b9\u30d5\u30a9\u30fc\u30de\u30fb\u30d7\u30ed\u30d1\u30c6\u30a3\'\'{0}\'\'\u306b\u30a2\u30af\u30bb\u30b9\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of(u"SAX2DOM\u30a2\u30c0\u30d7\u30bf\'\'{0}\'\'\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of(u"systemId\u3092\u8a2d\u5b9a\u305b\u305a\u306bXSLTCSource.build()\u304c\u547c\u3073\u51fa\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ER_RESULT_NULL),
			$of(u"\u7d50\u679c\u306fnull\u306b\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE),
			$of(u"\u30d1\u30e9\u30e1\u30fc\u30bf{0}\u306f\u6709\u52b9\u306aJava\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"-i\u30aa\u30d7\u30b7\u30e7\u30f3\u306f-o\u30aa\u30d7\u30b7\u30e7\u30f3\u3068\u3068\u3082\u306b\u4f7f\u7528\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"\u5f62\u5f0f\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <output>]\n      [-d <directory>] [-j <jarfile>] [-p <package>]\n      [-n] [-x] [-u] [-v] [-h] { <stylesheet> | -i }\n\nOPTIONS\n   -o <output>    \u540d\u524d<output>\u3092\u751f\u6210\u6e08translet\u306b\n                  \u5272\u308a\u5f53\u3066\u308b\u3002\u30c7\u30d5\u30a9\u30eb\u30c8\u3067\u306f\u3001translet\u540d\u306f\n                  <stylesheet>\u540d\u306b\u7531\u6765\u3057\u307e\u3059\u3002\u3053\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\n                  \u8907\u6570\u306e\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u3092\u30b3\u30f3\u30d1\u30a4\u30eb\u3059\u308b\u5834\u5408\u306f\u7121\u8996\u3055\u308c\u307e\u3059\u3002\n   -d <directory> translet\u306e\u5b9b\u5148\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u3092\u6307\u5b9a\u3059\u308b\n   -j <jarfile>   <jarfile>\u3067\u6307\u5b9a\u3055\u308c\u308b\u540d\u524d\u306ejar\u30d5\u30a1\u30a4\u30eb\u306btranslet\u30af\u30e9\u30b9\u3092\n                  \u30d1\u30c3\u30b1\u30fc\u30b8\u3059\u308b\n   -p <package>   \u751f\u6210\u3055\u308c\u308b\u3059\u3079\u3066\u306etranslet\u30af\u30e9\u30b9\u306e\u30d1\u30c3\u30b1\u30fc\u30b8\u540d\n                  \u63a5\u982d\u8f9e\u3092\u6307\u5b9a\u3059\u308b\u3002\n   -n             \u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u306e\u30a4\u30f3\u30e9\u30a4\u30f3\u5316\u3092\u6709\u52b9\u306b\u3059\u308b(\u5e73\u5747\u3057\u3066\u30c7\u30d5\u30a9\u30eb\u30c8\u52d5\u4f5c\u306e\u65b9\u304c\n                  \u512a\u308c\u3066\u3044\u307e\u3059)\u3002\n   -x             \u8ffd\u52a0\u306e\u30c7\u30d0\u30c3\u30b0\u30fb\u30e1\u30c3\u30bb\u30fc\u30b8\u51fa\u529b\u3092\u30aa\u30f3\u306b\u3059\u308b\n   -u             <stylesheet>\u5f15\u6570\u3092URL\u3068\u3057\u3066\u89e3\u91c8\u3059\u308b\n   -i             \u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u3092stdin\u304b\u3089\u8aad\u307f\u8fbc\u3080\u3053\u3068\u3092\u30b3\u30f3\u30d1\u30a4\u30e9\u306b\u5f37\u5236\u3059\u308b\n   -v             \u30b3\u30f3\u30d1\u30a4\u30e9\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u3092\u51fa\u529b\u3059\u308b\n   -h             \u3053\u306e\u4f7f\u7528\u65b9\u6cd5\u306e\u6587\u3092\u51fa\u529b\u3059\u308b\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"\u5f62\u5f0f \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <iterations>] {-u <document_url> | <document>}\n      <class> [<param1>=<value1> ...]\n\n   translet <class>\u3092\u4f7f\u7528\u3057\u3066\u3001<document>\u3067\u6307\u5b9a\u3055\u308c\u308b\n   XML\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u3092\u5909\u63db\u3059\u308b\u3002translet <class>\u306f\n   \u30e6\u30fc\u30b6\u30fc\u306eCLASSPATH\u5185\u304b\u3001\u30aa\u30d7\u30b7\u30e7\u30f3\u3067\u6307\u5b9a\u3055\u308c\u305f<jarfile>\u5185\u306b\u3042\u308a\u307e\u3059\u3002\nOPTIONS\n   -j <jarfile>    translet\u3092\u30ed\u30fc\u30c9\u3059\u308bjarfile\u3092\u6307\u5b9a\u3059\u308b\n   -x              \u8ffd\u52a0\u306e\u30c7\u30d0\u30c3\u30b0\u30fb\u30e1\u30c3\u30bb\u30fc\u30b8\u51fa\u529b\u3092\u30aa\u30f3\u306b\u3059\u308b\n   -n <iterations> \u5909\u63db\u3092<iterations>\u56de\u5b9f\u884c\u3057\u3001\n                   \u30d7\u30ed\u30d5\u30a1\u30a4\u30ea\u30f3\u30b0\u60c5\u5831\u3092\u8868\u793a\u3059\u308b\n   -u <document_url> XML\u5165\u529b\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u3092URL\u3068\u3057\u3066\u6307\u5b9a\u3059\u308b\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort>\u306f<xsl:for-each>\u307e\u305f\u306f<xsl:apply-templates>\u306e\u5185\u90e8\u3067\u306e\u307f\u4f7f\u7528\u3067\u304d\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of(u"\u51fa\u529b\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\'\'{0}\'\'\u306f\u3053\u306eJVM\u3067\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of(u"\'\'{0}\'\'\u306b\u69cb\u6587\u30a8\u30e9\u30fc\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of(u"\u5916\u90e8\u30b3\u30f3\u30b9\u30c8\u30e9\u30af\u30bf\'\'{0}\'\'\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"static\u3067\u306a\u3044Java\u95a2\u6570\'\'{0}\'\'\u306e\u6700\u521d\u306e\u5f15\u6570\u306f\u7121\u52b9\u306a\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u53c2\u7167\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of(u"\u5f0f\'\'{0}\'\'\u306e\u30bf\u30a4\u30d7\u306e\u78ba\u8a8d\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"\u4e0d\u660e\u306a\u5834\u6240\u3067\u306e\u5f0f\u306e\u30bf\u30a4\u30d7\u306e\u78ba\u8a8d\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of(u"\u30b3\u30de\u30f3\u30c9\u884c\u30aa\u30d7\u30b7\u30e7\u30f3\'\'{0}\'\'\u306f\u7121\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of(u"\u30b3\u30de\u30f3\u30c9\u884c\u30aa\u30d7\u30b7\u30e7\u30f3\'\'{0}\'\'\u306b\u5fc5\u9808\u306e\u5f15\u6570\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
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
			$of(u"translet \'\'{0}\'\'\u3092\u4f7f\u7528\u3057\u3066\u5909\u63db\u3057\u307e\u3059 "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of(u"translet \'\'{0}\'\'\u3092\u4f7f\u7528\u3057\u3066jar\u30d5\u30a1\u30a4\u30eb\'\'{1}\'\'\u304b\u3089\u5909\u63db\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of(u"TransformerFactory\u30af\u30e9\u30b9\'\'{0}\'\'\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT),
			$of(u"\u540d\u524d\'\'{0}\'\'\u306b\u306fJava\u30af\u30e9\u30b9\u306e\u540d\u524d\u306b\u8a31\u53ef\u3055\u308c\u3066\u3044\u306a\u3044\u6587\u5b57\u304c\u542b\u307e\u308c\u3066\u3044\u308b\u305f\u3081\u3001translet\u30af\u30e9\u30b9\u306e\u540d\u524d\u3068\u3057\u3066\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002\u540d\u524d\'\'{1}\'\'\u304c\u304b\u308f\u308a\u306b\u4f7f\u7528\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of(u"\u30b3\u30f3\u30d1\u30a4\u30e9\u30fb\u30a8\u30e9\u30fc:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of(u"\u30b3\u30f3\u30d1\u30a4\u30e9\u306e\u8b66\u544a:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of(u"Translet\u30a8\u30e9\u30fc:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_QNAME_ERR),
			$of(u"\u5024\u304c1\u3064\u306eQName\u307e\u305f\u306fQName\u306e\u7a7a\u767d\u6587\u5b57\u533a\u5207\u308a\u30ea\u30b9\u30c8\u3067\u3042\u308b\u3053\u3068\u304c\u5fc5\u8981\u306a\u5c5e\u6027\u306e\u5024\u304c\'\'{0}\'\'\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_NCNAME_ERR),
			$of(u"\u5024\u304cNCName\u3067\u3042\u308b\u3053\u3068\u304c\u5fc5\u8981\u306a\u5c5e\u6027\u306e\u5024\u304c\'\'{0}\'\'\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_METHOD_IN_OUTPUT),
			$of(u"<xsl:output>\u8981\u7d20\u306e\u30e1\u30bd\u30c3\u30c9\u5c5e\u6027\u306e\u5024\u304c\'\'{0}\'\'\u3067\u3057\u305f\u3002\u5024\u306f\'\'xml\'\'\u3001\'\'html\'\'\u3001\'\'text\'\'\u307e\u305f\u306fqname-but-not-ncname\u306e\u3044\u305a\u308c\u304b\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_GET_FEATURE_NULL_NAME),
			$of(u"\u6a5f\u80fd\u540d\u306fTransformerFactory.getFeature(String name)\u5185\u3067null\u306b\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_FEATURE_NULL_NAME),
			$of(u"\u6a5f\u80fd\u540d\u306fTransformerFactory.setFeature(String name, boolean value)\u5185\u3067null\u306b\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNSUPPORTED_FEATURE),
			$of(u"\u6a5f\u80fd\'\'{0}\'\'\u3092\u3053\u306eTransformerFactory\u306b\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: \u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30de\u30cd\u30fc\u30b8\u30e3\u304c\u5b58\u5728\u3059\u308b\u3068\u304d\u3001\u6a5f\u80fd\u3092false\u306b\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_TRY_CATCH),
			$of(u"\u5185\u90e8XSLTC\u30a8\u30e9\u30fc: \u751f\u6210\u3055\u308c\u305f\u30d0\u30a4\u30c8\u30fb\u30b3\u30fc\u30c9\u306f\u3001try-catch-finally\u30d6\u30ed\u30c3\u30af\u3092\u542b\u3093\u3067\u3044\u308b\u305f\u3081\u3001\u30a2\u30a6\u30c8\u30e9\u30a4\u30f3\u5316\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS),
			$of(u"\u5185\u90e8XSLTC\u30a8\u30e9\u30fc: OutlineableChunkStart\u30de\u30fc\u30ab\u30fc\u3068OutlineableChunkEnd\u30de\u30fc\u30ab\u30fc\u306f\u3001\u5bfe\u306b\u306a\u3063\u3066\u304a\u308a\u3001\u304b\u3064\u6b63\u3057\u304f\u30cd\u30b9\u30c8\u3055\u308c\u3066\u3044\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_DELETED_TARGET),
			$of(u"\u5185\u90e8XSLTC\u30a8\u30e9\u30fc: \u30a2\u30a6\u30c8\u30e9\u30a4\u30f3\u5316\u3055\u308c\u305f\u30d0\u30a4\u30c8\u30fb\u30b3\u30fc\u30c9\u306e\u30d6\u30ed\u30c3\u30af\u306e\u4e00\u90e8\u3067\u3042\u3063\u305f\u547d\u4ee4\u306f\u3001\u5143\u306e\u30e1\u30bd\u30c3\u30c9\u306e\u4e2d\u3067\u307e\u3060\u53c2\u7167\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG),
			$of(u"\u5185\u90e8XSLTC\u30a8\u30e9\u30fc: \u30c8\u30e9\u30f3\u30b9\u30ec\u30c3\u30c8\u5185\u306e\u30e1\u30bd\u30c3\u30c9\u304c\u3001Java\u4eee\u60f3\u30de\u30b7\u30f3\u306e\u5236\u9650(1\u30e1\u30bd\u30c3\u30c9\u306e\u9577\u3055\u306f\u6700\u592764\u30ad\u30ed\u30d0\u30a4\u30c8)\u3092\u8d85\u3048\u3066\u3044\u307e\u3059\u3002\u4e00\u822c\u7684\u306b\u3001\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u5185\u306e\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u306e\u30b5\u30a4\u30ba\u304c\u5927\u304d\u904e\u304e\u308b\u3053\u3068\u304c\u539f\u56e0\u3068\u3057\u3066\u8003\u3048\u3089\u308c\u307e\u3059\u3002\u5c0f\u3055\u3044\u30b5\u30a4\u30ba\u306e\u30c6\u30f3\u30d7\u30ec\u30fc\u30c8\u3092\u4f7f\u7528\u3057\u3066\u3001\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u3092\u518d\u69cb\u6210\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DESERIALIZE_TRANSLET_ERR),
			$of(u"Java\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u304c\u6709\u52b9\u5316\u3055\u308c\u3066\u3044\u308b\u5834\u5408\u3001TemplatesImpl\u306e\u30c7\u30b7\u30ea\u30a2\u30e9\u30a4\u30ba\u306e\u30b5\u30dd\u30fc\u30c8\u306f\u7121\u52b9\u5316\u3055\u308c\u307e\u3059\u3002\u3053\u308c\u306f\u3001jdk.xml.enableTemplatesImplDeserialization\u30b7\u30b9\u30c6\u30e0\u30fb\u30d7\u30ed\u30d1\u30c6\u30a3\u3092true\u306b\u8a2d\u5b9a\u3057\u3066\u30aa\u30fc\u30d0\u30fc\u30e9\u30a4\u30c9\u3067\u304d\u307e\u3059\u3002"_s)
		})
	});
}

ErrorMessages_ja::ErrorMessages_ja() {
}

$Class* ErrorMessages_ja::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_ja, name, initialize, &_ErrorMessages_ja_ClassInfo_, allocate$ErrorMessages_ja);
	return class$;
}

$Class* ErrorMessages_ja::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com