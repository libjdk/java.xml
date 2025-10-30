#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_ko.h>

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

$MethodInfo _ErrorMessages_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_ko::*)()>(&ErrorMessages_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_ko_MethodInfo_
};

$Object* allocate$ErrorMessages_ko($Class* clazz) {
	return $of($alloc(ErrorMessages_ko));
}

void ErrorMessages_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of(u"\ub3d9\uc77c\ud55c \ud30c\uc77c\uc5d0 \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\uac00 \ub450 \uac1c \uc774\uc0c1 \uc815\uc758\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of(u"\uc774 \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\uc5d0\ub294 \'\'{0}\'\' \ud15c\ud50c\ub9ac\ud2b8\uac00 \uc774\ubbf8 \uc815\uc758\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of(u"\uc774 \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\uc5d0\ub294 \'\'{0}\'\' \ud15c\ud50c\ub9ac\ud2b8\uac00 \uc815\uc758\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"\ub3d9\uc77c\ud55c \ubc94\uc704\uc5d0\uc11c \'\'{0}\'\' \ubcc0\uc218\uac00 \uc5ec\ub7ec \uac1c \uc815\uc758\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of(u"\ubcc0\uc218 \ub610\ub294 \ub9e4\uac1c\ubcc0\uc218 \'\'{0}\'\'\uc774(\uac00) \uc815\uc758\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of(u"\'\'{0}\'\' \ud074\ub798\uc2a4\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"\uc678\ubd80 \uba54\uc18c\ub4dc \'\'{0}\'\'\uc744(\ub97c) \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. \uc774 \uba54\uc18c\ub4dc\ub294 public\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of(u"\'\'{0}\'\' \uba54\uc18c\ub4dc\uc5d0 \ub300\ud55c \ud638\ucd9c\uc5d0\uc11c \uc778\uc218/\ubc18\ud658 \uc720\ud615\uc744 \ubcc0\ud658\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of(u"\ud30c\uc77c \ub610\ub294 URI \'\'{0}\'\'\uc744(\ub97c) \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of(u"URI \'\'{0}\'\'\uc774(\uac00) \ubd80\uc801\ud569\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CATALOG_EXCEPTION),
			$of(u"JAXP08090001: CatalogResolver\uac00 \"{0}\" \uce74\ud0c8\ub85c\uadf8\uc5d0 \uc0ac\uc6a9\uc73c\ub85c \uc124\uc815\ub418\uc5c8\uc9c0\ub9cc CatalogException\uc774 \ubc18\ud658\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of(u"\ud30c\uc77c \ub610\ub294 URI \'\'{0}\'\'\uc744(\ub97c) \uc5f4 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of(u"<xsl:stylesheet> \ub610\ub294 <xsl:transform> \uc694\uc18c\uac00 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of(u"\ub124\uc784\uc2a4\ud398\uc774\uc2a4 \uc811\ub450\uc5b4 \'\'{0}\'\'\uc774(\uac00) \uc120\uc5b8\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of(u"\'\'{0}\'\' \ud568\uc218\uc5d0 \ub300\ud55c \ud638\ucd9c\uc744 \ubd84\uc11d\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of(u"\'\'{0}\'\'\uc5d0 \ub300\ud55c \uc778\uc218\ub294 \ub9ac\ud130\ub7f4 \ubb38\uc790\uc5f4\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of(u"XPath \ud45c\ud604\uc2dd \'\'{0}\'\'\uc758 \uad6c\ubb38\uc744 \ubd84\uc11d\ud558\ub294 \uc911 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of(u"\ud544\uc218 \uc18d\uc131 \'\'{0}\'\'\uc774(\uac00) \ub204\ub77d\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"XPath \ud45c\ud604\uc2dd\uc5d0 \uc798\ubabb\ub41c \ubb38\uc790 \'\'{0}\'\'\uc774(\uac00) \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of(u"\'\'{0}\'\'\uc740(\ub294) \uba85\ub839 \ucc98\ub9ac\uc5d0 \uc798\ubabb\ub41c \uc774\ub984\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of(u"\'\'{0}\'\' \uc18d\uc131\uc774 \uc694\uc18c\uc5d0 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of(u"\'\'{0}\'\'\uc740(\ub294) \uc798\ubabb\ub41c \uc18d\uc131\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of(u"\uc21c\ud658 import/include\uc785\ub2c8\ub2e4. \'\'{0}\'\' \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\uac00 \uc774\ubbf8 \ub85c\ub4dc\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR),
			$of(u"xsl:import \uc694\uc18c \ud558\uc704\ub294 xsl:include \uc694\uc18c \ud558\uc704\ub97c \ud3ec\ud568\ud574 xsl:stylesheet \uc694\uc18c\uc758 \ubaa8\ub4e0 \ub2e4\ub978 \uc694\uc18c \ud558\uc704 \uc55e\uc5d0 \uc640\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of(u"Result-tree \ubd80\ubd84\uc744 \uc815\ub82c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4(<xsl:sort> \uc694\uc18c\uac00 \ubb34\uc2dc\ub428). \uacb0\uacfc \ud2b8\ub9ac\ub97c \uc0dd\uc131\ud560 \ub54c\ub294 \ub178\ub4dc\ub97c \uc815\ub82c\ud574\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of(u"\uc2ed\uc9c4\uc218 \ud615\uc2dd \'\'{0}\'\'\uc774(\uac00) \uc774\ubbf8 \uc815\uc758\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of(u"XSLTC\ub294 XSL \ubc84\uc804 \'\'{0}\'\'\uc744(\ub97c) \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"\'\'{0}\'\'\uc5d0 \uc21c\ud658 \ubcc0\uc218/\ub9e4\uac1c\ubcc0\uc218 \ucc38\uc870\uac00 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"\ubc14\uc774\ub108\ub9ac \ud45c\ud604\uc2dd\uc5d0 \ub300\ud574 \uc54c \uc218 \uc5c6\ub294 \uc5f0\uc0b0\uc790\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of(u"\ud568\uc218 \ud638\ucd9c\uc5d0 \ub300\ud55c \uc778\uc218\uac00 \uc798\ubabb\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"document() \ud568\uc218\uc5d0 \ub300\ud55c \ub450\ubc88\uc9f8 \uc778\uc218\ub294 node-set\uc5ec\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of(u"<xsl:choose>\uc5d0\ub294 <xsl:when> \uc694\uc18c\uac00 \ud558\ub098 \uc774\uc0c1 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"<xsl:choose>\uc5d0\uc11c\ub294 <xsl:otherwise> \uc694\uc18c\uac00 \ud558\ub098\ub9cc \ud5c8\uc6a9\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise>\ub294 <xsl:choose>\uc5d0\uc11c\ub9cc \uc0ac\uc6a9\ud560 \uc218 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when>\uc740 <xsl:choose>\uc5d0\uc11c\ub9cc \uc0ac\uc6a9\ud560 \uc218 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"<xsl:choose>\uc5d0\uc11c\ub294 <xsl:when> \ubc0f <xsl:otherwise> \uc694\uc18c\ub9cc \ud5c8\uc6a9\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of(u"<xsl:attribute-set>\uc5d0 \'name\' \uc18d\uc131\uc774 \ub204\ub77d\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of(u"\ud558\uc704 \uc694\uc18c\uac00 \uc798\ubabb\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of(u"\'\'{0}\'\' \uc694\uc18c\ub97c \ud638\ucd9c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of(u"\'\'{0}\'\' \uc18d\uc131\uc744 \ud638\ucd9c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of(u"\ud14d\uc2a4\ud2b8 \ub370\uc774\ud130\uac00 \ucd5c\uc0c1\uc704 \ub808\ubca8 <xsl:stylesheet> \uc694\uc18c\uc5d0 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of(u"JAXP \uad6c\ubb38 \ubd84\uc11d\uae30\uac00 \uc81c\ub300\ub85c \uad6c\uc131\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of(u"\ubcf5\uad6c\ud560 \uc218 \uc5c6\ub294 XSLTC \ub0b4\ubd80 \uc624\ub958: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of(u"\'\'{0}\'\'\uc740(\ub294) \uc9c0\uc6d0\ub418\uc9c0 \uc54a\ub294 XSL \uc694\uc18c\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of(u"\'\'{0}\'\'\uc740(\ub294) \uc54c \uc218 \uc5c6\ub294 XSLTC \ud655\uc7a5\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"\uc785\ub825 \ubb38\uc11c\ub294 \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\uac00 \uc544\ub2d9\ub2c8\ub2e4. XSL \ub124\uc784\uc2a4\ud398\uc774\uc2a4\uac00 \ub8e8\ud2b8 \uc694\uc18c\uc5d0 \uc120\uc5b8\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of(u"\uc2a4\ud0c0\uc77c\uc2dc\ud2b8 \ub300\uc0c1 \'\'{0}\'\'\uc744(\ub97c) \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of(u"accessExternalStylesheet \uc18d\uc131\uc73c\ub85c \uc124\uc815\ub41c \uc81c\ud55c\uc73c\ub85c \uc778\ud574 \'\'{1}\'\' \uc561\uc138\uc2a4\uac00 \ud5c8\uc6a9\ub418\uc9c0 \uc54a\uc73c\ubbc0\ub85c \uc2a4\ud0c0\uc77c\uc2dc\ud2b8 \ub300\uc0c1 \'\'{0}\'\'\uc744(\ub97c) \uc77d\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of(u"\uad6c\ud604\ub418\uc9c0 \uc54a\uc74c: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of(u"\uc785\ub825 \ubb38\uc11c\uc5d0 XSL \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of(u"\'\'{0}\'\' \uc694\uc18c\uc758 \uad6c\ubb38\uc744 \ubd84\uc11d\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of(u"<key>\uc758 use \uc18d\uc131\uc740 node, node-set, string \ub610\ub294 number\uc5ec\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"\ucd9c\ub825 XML \ubb38\uc11c \ubc84\uc804\uc740 1.0\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"\uad00\uacc4 \ud45c\ud604\uc2dd\uc5d0 \ub300\ud574 \uc54c \uc218 \uc5c6\ub294 \uc5f0\uc0b0\uc790\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of(u"\uc874\uc7ac\ud558\uc9c0 \uc54a\ub294 \uc18d\uc131 \uc9d1\ud569 \'\'{0}\'\'\uc744(\ub97c) \uc0ac\uc6a9\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of(u"\uc18d\uc131\uac12 \ud15c\ud50c\ub9ac\ud2b8 \'\'{0}\'\'\uc758 \uad6c\ubb38\uc744 \ubd84\uc11d\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of(u"\'\'{0}\'\' \ud074\ub798\uc2a4\uc5d0 \ub300\ud55c \uc11c\uba85\uc5d0 \uc54c \uc218 \uc5c6\ub294 \ub370\uc774\ud130 \uc720\ud615\uc774 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of(u"\ub370\uc774\ud130 \uc720\ud615 \'\'{0}\'\'\uc744(\ub97c) \'\'{1}\'\'(\uc73c)\ub85c \ubcc0\ud658\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"\uc774 Templates\uc5d0\ub294 \uc801\ud569\ud55c translet \ud074\ub798\uc2a4 \uc815\uc758\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of(u"\uc774 Templates\uc5d0\ub294 \uc774\ub984\uc774 \'\'{0}\'\'\uc778 \ud074\ub798\uc2a4\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of(u"Translet \ud074\ub798\uc2a4 \'\'{0}\'\'\uc744(\ub97c) \ub85c\ub4dc\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of(u"Translet \ud074\ub798\uc2a4\uac00 \ub85c\ub4dc\ub418\uc5c8\uc9c0\ub9cc translet \uc778\uc2a4\ud134\uc2a4\ub97c \uc0dd\uc131\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of(u"\'\'{0}\'\'\uc5d0 \ub300\ud55c ErrorListener\ub97c null\ub85c \uc124\uc815\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of(u"XSLTC\ub294 StreamSource, SAXSource \ubc0f DOMSource\ub9cc \uc9c0\uc6d0\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of(u"\'\'{0}\'\'(\uc73c)\ub85c \uc804\ub2ec\ub41c Source \uac1d\uccb4\uc5d0 \ucf58\ud150\uce20\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of(u"\uc2a4\ud0c0\uc77c\uc2dc\ud2b8\ub97c \ucef4\ud30c\uc77c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of(u"TransformerFactory\uc5d0\uc11c \'\'{0}\'\' \uc18d\uc131\uc744 \uc778\uc2dd\ud558\uc9c0 \ubabb\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR),
			$of(u"\'\'{0}\'\' \uc18d\uc131\uc5d0 \ub300\ud574 \uc62c\ubc14\ub974\uc9c0 \uc54a\uc740 \uac12\uc774 \uc9c0\uc815\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of(u"setResult()\ub294 startDocument() \uc55e\uc5d0 \ud638\ucd9c\ub418\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of(u"Transformer\uc5d0 \ucea1\uc290\ud654\ub41c translet \uac1d\uccb4\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"\ubcc0\ud658 \uacb0\uacfc\uc5d0 \ub300\ud574 \uc815\uc758\ub41c \ucd9c\ub825 \ucc98\ub9ac\uae30\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"\'\'{0}\'\'(\uc73c)\ub85c \uc804\ub2ec\ub41c Result \uac1d\uccb4\uac00 \ubd80\uc801\ud569\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"\ubd80\uc801\ud569\ud55c Transformer \uc18d\uc131 \'\'{0}\'\'\uc5d0 \uc561\uc138\uc2a4\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of(u"SAX2DOM \uc5b4\ub311\ud130\ub97c \uc0dd\uc131\ud560 \uc218 \uc5c6\uc74c: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of(u"systemId\ub97c \uc124\uc815\ud558\uc9c0 \uc54a\uc740 \uc0c1\ud0dc\ub85c XSLTCSource.build()\uac00 \ud638\ucd9c\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ER_RESULT_NULL),
			$of(u"\uacb0\uacfc\ub294 \ub110\uc774 \uc544\ub2c8\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE),
			$of(u"{0} \ub9e4\uac1c\ubcc0\uc218\uc758 \uac12\uc740 \uc801\ud569\ud55c Java \uac1d\uccb4\uc5ec\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"-i \uc635\uc158\uc740 -o \uc635\uc158\uacfc \ud568\uaed8 \uc0ac\uc6a9\ud574\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"\uc0ac\uc6a9\ubc95\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <output>]\n      [-d <directory>] [-j <jarfile>] [-p <package>]\n      [-n] [-x] [-u] [-v] [-h] { <stylesheet> | -i }\n\n\uc635\uc158\n   -o <output>    \uc0dd\uc131\ub41c translet\uc5d0 <output> \uc774\ub984\uc744\n                  \uc9c0\uc815\ud569\ub2c8\ub2e4. \uae30\ubcf8\uc801\uc73c\ub85c translet \uc774\ub984\uc740\n                  <stylesheet> \uc774\ub984\uc5d0\uc11c \ud30c\uc0dd\ub429\ub2c8\ub2e4. \uc5ec\ub7ec \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\ub97c\n                  \ucef4\ud30c\uc77c\ud558\ub294 \uacbd\uc6b0 \uc774 \uc635\uc158\uc740 \ubb34\uc2dc\ub429\ub2c8\ub2e4.\n   -d <directory> translet\uc5d0 \ub300\ud55c \ub300\uc0c1 \ub514\ub809\ud1a0\ub9ac\ub97c \uc9c0\uc815\ud569\ub2c8\ub2e4.\n   -j <jarfile>   translet \ud074\ub798\uc2a4\ub97c <jarfile>\uc774\ub77c\ub294 \uc774\ub984\uc774 \uc9c0\uc815\ub41c jar \ud30c\uc77c\uc5d0\n                  \ud328\ud0a4\uc9c0\ud654\ud569\ub2c8\ub2e4.\n   -p <package>   \uc0dd\uc131\ub41c \ubaa8\ub4e0 translet \ud074\ub798\uc2a4\uc5d0 \ub300\ud574 \ud328\ud0a4\uc9c0 \uc774\ub984 \uc811\ub450\uc5b4\ub97c\n                  \uc9c0\uc815\ud569\ub2c8\ub2e4.\n   -n             \ud15c\ud50c\ub9ac\ud2b8 \uc778\ub77c\uc778\uc744 \uc0ac\uc6a9\uc73c\ub85c \uc124\uc815\ud569\ub2c8\ub2e4. \uc77c\ubc18\uc801\uc73c\ub85c \uae30\ubcf8 \ub3d9\uc791\uc744\n                  \uc0ac\uc6a9\ud558\ub294 \uac83\uc774 \uc88b\uc2b5\ub2c8\ub2e4.\n   -x             \ucd94\uac00 \ub514\ubc84\uae45 \uba54\uc2dc\uc9c0 \ucd9c\ub825\uc744 \uc124\uc815\ud569\ub2c8\ub2e4.\n   -u             <stylesheet> \uc778\uc218\ub97c URL\ub85c \ud574\uc11d\ud569\ub2c8\ub2e4.\n   -i             \ucef4\ud30c\uc77c\ub7ec\uac00 stdin\uc5d0\uc11c \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\ub97c \uac15\uc81c\ub85c \uc77d\ub3c4\ub85d \ud569\ub2c8\ub2e4.\n   -v             \ucef4\ud30c\uc77c\ub7ec\uc758 \ubc84\uc804\uc744 \uc778\uc1c4\ud569\ub2c8\ub2e4.\n   -h             \uc774 \uc0ac\uc6a9\ubc95 \uc9c0\uce68\uc744 \uc778\uc1c4\ud569\ub2c8\ub2e4.\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"\uc0ac\uc6a9\ubc95 \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <iterations>] {-u <document_url> | <document>}\n      <class> [<param1>=<value1> ...]\n\n   translet <class>\ub97c \uc0ac\uc6a9\ud558\uc5ec <document>\ub85c \uc9c0\uc815\ub41c XML \ubb38\uc11c\ub97c \n   \ubcc0\ud658\ud569\ub2c8\ub2e4. translet <class>\ub294 \n   \uc0ac\uc6a9\uc790\uc758 CLASSPATH \ub610\ub294 \uc120\ud0dd\uc801\uc73c\ub85c \uc9c0\uc815\ub41c <jarfile>\uc5d0 \uc788\uc2b5\ub2c8\ub2e4.\n\uc635\uc158\n   -j <jarfile>    translet\uc744 \ub85c\ub4dc\ud574 \uc62c jarfile\uc744 \uc9c0\uc815\ud569\ub2c8\ub2e4.\n   -x              \ucd94\uac00 \ub514\ubc84\uae45 \uba54\uc2dc\uc9c0 \ucd9c\ub825\uc744 \uc124\uc815\ud569\ub2c8\ub2e4.\n   -n <iterations> \ubcc0\ud658\uc744 <iterations>\ud68c \uc2e4\ud589\ud558\uace0\n                   \ud504\ub85c\ud30c\uc77c \uc791\uc131 \uc815\ubcf4\ub97c \ud45c\uc2dc\ud569\ub2c8\ub2e4.\n   -u <document_url> XML \uc785\ub825 \ubb38\uc11c\ub97c URL\ub85c \uc9c0\uc815\ud569\ub2c8\ub2e4.\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort>\ub294 <xsl:for-each> \ub610\ub294 <xsl:apply-templates>\uc5d0\uc11c\ub9cc \uc0ac\uc6a9\ud560 \uc218 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of(u"\uc774 JVM\uc5d0\uc11c\ub294 \ucd9c\ub825 \uc778\ucf54\ub529 \'\'{0}\'\'\uc774(\uac00) \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of(u"\'\'{0}\'\'\uc5d0 \uad6c\ubb38 \uc624\ub958\uac00 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of(u"\uc678\ubd80 constructor \'\'{0}\'\'\uc744(\ub97c) \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"\ube44static Java \ud568\uc218 \'\'{0}\'\'\uc5d0 \ub300\ud55c \uccab\ubc88\uc9f8 \uc778\uc218\ub294 \uc801\ud569\ud55c \uac1d\uccb4 \ucc38\uc870\uac00 \uc544\ub2d9\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of(u"\'\'{0}\'\' \ud45c\ud604\uc2dd\uc758 \uc720\ud615\uc744 \ud655\uc778\ud558\ub294 \uc911 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"\uc54c \uc218 \uc5c6\ub294 \uc704\uce58\uc5d0\uc11c \ud45c\ud604\uc2dd\uc758 \uc720\ud615\uc744 \ud655\uc778\ud558\ub294 \uc911 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of(u"\uba85\ub839\ud589 \uc635\uc158 \'\'{0}\'\'\uc774(\uac00) \ubd80\uc801\ud569\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of(u"\uba85\ub839\ud589 \uc635\uc158 \'\'{0}\'\'\uc5d0 \ud544\uc218 \uc778\uc218\uac00 \ub204\ub77d\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
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
			$of(u"translet \'\'{0}\'\'\uc744(\ub97c) \uc0ac\uc6a9\ud558\uc5ec \ubcc0\ud658\ud558\uc2ed\uc2dc\uc624. "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of(u"jar \ud30c\uc77c \'\'{1}\'\'\uc758 translet \'\'{0}\'\'\uc744(\ub97c) \uc0ac\uc6a9\ud558\uc5ec \ubcc0\ud658\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of(u"TransformerFactory \ud074\ub798\uc2a4 \'\'{0}\'\'\uc758 \uc778\uc2a4\ud134\uc2a4\ub97c \uc0dd\uc131\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT),
			$of(u"\'\'{0}\'\' \uc774\ub984\uc5d0\ub294 Java \ud074\ub798\uc2a4 \uc774\ub984\uc5d0 \ud5c8\uc6a9\ub418\uc9c0 \uc54a\ub294 \ubb38\uc790\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc5b4 \uc774 \uc774\ub984\uc744 translet \ud074\ub798\uc2a4\uc758 \uc774\ub984\uc73c\ub85c \uc0ac\uc6a9\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. \ub300\uc2e0 \'\'{1}\'\' \uc774\ub984\uc774 \uc0ac\uc6a9\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of(u"\ucef4\ud30c\uc77c\ub7ec \uc624\ub958:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of(u"\ucef4\ud30c\uc77c\ub7ec \uacbd\uace0:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of(u"Translet \uc624\ub958:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_QNAME_ERR),
			$of(u"\uac12\uc774 QName \ub610\ub294 \uacf5\ubc31\uc73c\ub85c \uad6c\ubd84\ub41c QName \ubaa9\ub85d\uc774\uc5b4\uc57c \ud558\ub294 \uc18d\uc131\uc758 \uac12\uc774 \'\'{0}\'\'\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_NCNAME_ERR),
			$of(u"\uac12\uc774 NCName\uc774\uc5b4\uc57c \ud558\ub294 \uc18d\uc131\uc758 \uac12\uc774 \'\'{0}\'\'\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_METHOD_IN_OUTPUT),
			$of(u"<xsl:output> \uc694\uc18c\uc5d0 \ub300\ud55c method \uc18d\uc131\uc758 \uac12\uc774 \'\'{0}\'\'\uc785\ub2c8\ub2e4. \uac12\uc740 \'\'xml\'\', \'\'html\'\', \'\'text\'\' \ub610\ub294 qname-but-not-ncname \uc911 \ud558\ub098\uc5ec\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_GET_FEATURE_NULL_NAME),
			$of(u"\uae30\ub2a5 \uc774\ub984\uc740 TransformerFactory.getFeature(\ubb38\uc790\uc5f4 \uc774\ub984)\uc5d0\uc11c \ub110\uc77c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_FEATURE_NULL_NAME),
			$of(u"\uae30\ub2a5 \uc774\ub984\uc740 TransformerFactory.setFeature(\ubb38\uc790\uc5f4 \uc774\ub984, \ubd80\uc6b8 \uac12)\uc5d0\uc11c \ub110\uc77c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNSUPPORTED_FEATURE),
			$of(u"\uc774 TransformerFactory\uc5d0\uc11c \'\'{0}\'\' \uae30\ub2a5\uc744 \uc124\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: \ubcf4\uc548 \uad00\ub9ac\uc790\uac00 \uc788\uc744 \uacbd\uc6b0 \uae30\ub2a5\uc744 false\ub85c \uc124\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_TRY_CATCH),
			$of(u"\ub0b4\ubd80 XSLTC \uc624\ub958: \uc0dd\uc131\ub41c \ubc14\uc774\ud2b8 \ucf54\ub4dc\uac00 try-catch-finally \ube14\ub85d\uc744 \ud3ec\ud568\ud558\ubbc0\ub85c outlined \ucc98\ub9ac\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS),
			$of(u"\ub0b4\ubd80 XSLTC \uc624\ub958: OutlineableChunkStart \ubc0f OutlineableChunkEnd \ud45c\uc2dc\uc790\uc758 \uc9dd\uc774 \ub9de\uc544\uc57c \ud558\uace0 \uc62c\ubc14\ub974\uac8c \uc911\ucca9\ub418\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_DELETED_TARGET),
			$of(u"\ub0b4\ubd80 XSLTC \uc624\ub958: outlined \ucc98\ub9ac\ub41c \ubc14\uc774\ud2b8 \ucf54\ub4dc \ube14\ub85d\uc5d0 \uc18d\ud55c \uba85\ub839\uc774 \uc5ec\uc804\ud788 \uc6d0\ub798 \uba54\uc18c\ub4dc\uc5d0\uc11c \ucc38\uc870\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG),
			$of(u"\ub0b4\ubd80 XSLTC \uc624\ub958: translet\uc758 \uba54\uc18c\ub4dc\uac00 Java Virtual Machine\uc758 \uba54\uc18c\ub4dc \uae38\uc774 \uc81c\ud55c\uc778 64KB\ub97c \ucd08\uacfc\ud569\ub2c8\ub2e4. \ub300\uac1c \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\uc758 \ud15c\ud50c\ub9ac\ud2b8\uac00 \ub9e4\uc6b0 \ud06c\uae30 \ub54c\ubb38\uc5d0 \ubc1c\uc0dd\ud569\ub2c8\ub2e4. \ub354 \uc791\uc740 \ud15c\ud50c\ub9ac\ud2b8\ub97c \uc0ac\uc6a9\ud558\ub3c4\ub85d \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\ub97c \uc7ac\uad6c\uc131\ud574 \ubcf4\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DESERIALIZE_TRANSLET_ERR),
			$of(u"Java \ubcf4\uc548\uc774 \uc0ac\uc6a9\uc73c\ub85c \uc124\uc815\ub41c \uacbd\uc6b0 TemplatesImpl \uc9c1\ub82c\ud654 \ud574\uc81c\uc5d0 \ub300\ud55c \uc9c0\uc6d0\uc774 \uc0ac\uc6a9 \uc548\ud568\uc73c\ub85c \uc124\uc815\ub429\ub2c8\ub2e4. jdk.xml.enableTemplatesImplDeserialization \uc2dc\uc2a4\ud15c \uc18d\uc131\uc744 true\ub85c \uc124\uc815\ud558\uba74 \uc774\ub97c \ubb34\ud6a8\ud654\ud560 \uc218 \uc788\uc2b5\ub2c8\ub2e4."_s)
		})
	});
}

ErrorMessages_ko::ErrorMessages_ko() {
}

$Class* ErrorMessages_ko::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_ko, name, initialize, &_ErrorMessages_ko_ClassInfo_, allocate$ErrorMessages_ko);
	return class$;
}

$Class* ErrorMessages_ko::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com