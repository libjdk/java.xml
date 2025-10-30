#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_ja.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef AXIS_SUPPORT_ERR
#undef CANT_RESOLVE_RELATIVE_URI_ERR
#undef DATA_CONVERSION_ERR
#undef DOM_ADAPTER_INIT_ERR
#undef EQUALITY_EXPR_ERR
#undef EXTERNAL_FUNC_ERR
#undef FORMAT_NUMBER_ERR
#undef INVALID_ARGUMENT_ERR
#undef INVALID_NCNAME_ERR
#undef INVALID_QNAME_ERR
#undef ITERATOR_CLONE_ERR
#undef NAMESPACES_SUPPORT_ERR
#undef NAMESPACE_PREFIX_ERR
#undef PARSER_DTD_SUPPORT_ERR
#undef RUN_TIME_COPY_ERR
#undef RUN_TIME_INTERNAL_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_NAMESPACE_ERR
#undef TYPED_AXIS_SUPPORT_ERR
#undef UNALLOWED_EXTENSION_ELEMENT_ERR
#undef UNALLOWED_EXTENSION_FUNCTION_ERR
#undef UNKNOWN_TRANSLET_VERSION_ERR
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
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
							namespace runtime {

$MethodInfo _ErrorMessages_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_ja::*)()>(&ErrorMessages_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_ja",
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
	$useLocalCurrentObjectStackCache();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"\'\'{0}\'\'\u5185\u306e\u30e9\u30f3\u30bf\u30a4\u30e0\u5185\u90e8\u30a8\u30e9\u30fc\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"<xsl:copy>\u306e\u5b9f\u884c\u4e2d\u306e\u30e9\u30f3\u30bf\u30a4\u30e0\u30fb\u30a8\u30e9\u30fc\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"\'\'{0}\'\'\u304b\u3089\'\'{1}\'\'\u3078\u306e\u5909\u63db\u304c\u7121\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"\u5916\u90e8\u95a2\u6570\'\'{0}\'\'\u306fXSLTC\u306b\u3088\u3063\u3066\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"\u7b49\u4fa1\u5f0f\u306b\u4e0d\u660e\u306a\u5f15\u6570\u30bf\u30a4\u30d7\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"\'\'{1}\'\'\u306e\u547c\u51fa\u3057\u306e\u5f15\u6570\u30bf\u30a4\u30d7\'\'{0}\'\'\u304c\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"\u30d1\u30bf\u30fc\u30f3\'\'{1}\'\'\u3092\u4f7f\u7528\u3057\u3066\u6570\u5024\'\'{0}\'\'\u3092\u30d5\u30a9\u30fc\u30de\u30c3\u30c8\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"\u30a4\u30c6\u30ec\u30fc\u30bf\'\'{0}\'\'\u306e\u30af\u30ed\u30fc\u30f3\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"\u8ef8\'\'{0}\'\'\u306e\u30a4\u30c6\u30ec\u30fc\u30bf\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"\u578b\u6307\u5b9a\u3055\u308c\u305f\u8ef8\'\'{0}\'\'\u306e\u30a4\u30c6\u30ec\u30fc\u30bf\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"\u5c5e\u6027\'\'{0}\'\'\u304c\u8981\u7d20\u306e\u5916\u5074\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u5ba3\u8a00\'\'{0}\'\'=\'\'{1}\'\'\u304c\u8981\u7d20\u306e\u5916\u5074\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"\u63a5\u982d\u8f9e\'\'{0}\'\'\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u304c\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"DOMAdapter\u304c\u9593\u9055\u3063\u305f\u30bf\u30a4\u30d7\u306e\u30bd\u30fc\u30b9DOM\u3092\u4f7f\u7528\u3057\u3066\u4f5c\u6210\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"\u4f7f\u7528\u4e2d\u306eSAX\u30d1\u30fc\u30b5\u30fc\u306fDTD\u5ba3\u8a00\u30a4\u30d9\u30f3\u30c8\u3092\u51e6\u7406\u3057\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"\u4f7f\u7528\u4e2d\u306eSAX\u30d1\u30fc\u30b5\u30fc\u306b\u306fXML\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u306e\u30b5\u30dd\u30fc\u30c8\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"URI\u53c2\u7167\'\'{0}\'\'\u3092\u89e3\u6c7a\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u306a\u3044XSL\u8981\u7d20\'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"\u8a8d\u8b58\u3055\u308c\u306a\u3044XSLTC\u62e1\u5f35\'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"\u6307\u5b9a\u3055\u308c\u305ftranslet\u306e\'\'{0}\'\'\u306f\u3001\u4f7f\u7528\u4e2d\u306eXSLTC\u30e9\u30f3\u30bf\u30a4\u30e0\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u3088\u308a\u3082\u65b0\u3057\u3044XSLTC\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u3092\u4f7f\u7528\u3057\u3066\u4f5c\u6210\u3055\u308c\u305f\u3082\u306e\u3067\u3059\u3002\u3053\u306etranslet\u3092\u5b9f\u884c\u3059\u308b\u306b\u306f\u3001\u30b9\u30bf\u30a4\u30eb\u30b7\u30fc\u30c8\u3092\u518d\u30b3\u30f3\u30d1\u30a4\u30eb\u3059\u308b\u304b\u3001\u3088\u308a\u65b0\u3057\u3044\u30d0\u30fc\u30b8\u30e7\u30f3\u306eXSLTC\u3092\u4f7f\u7528\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"\u5024\u304cQName\u3067\u3042\u308b\u3053\u3068\u304c\u5fc5\u8981\u306a\u5c5e\u6027\u306e\u5024\u304c\'\'{0}\'\'\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"\u5024\u304cNCName\u3067\u3042\u308b\u3053\u3068\u304c\u5fc5\u8981\u306a\u5c5e\u6027\u306e\u5024\u304c\'\'{0}\'\'\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"\u30bb\u30ad\u30e5\u30a2\u51e6\u7406\u6a5f\u80fd\u304ctrue\u306b\u8a2d\u5b9a\u3055\u308c\u3066\u3044\u308b\u3068\u304d\u3001\u62e1\u5f35\u95a2\u6570\'\'{0}\'\'\u306e\u4f7f\u7528\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"\u30bb\u30ad\u30e5\u30a2\u51e6\u7406\u6a5f\u80fd\u304ctrue\u306b\u8a2d\u5b9a\u3055\u308c\u3066\u3044\u308b\u3068\u304d\u3001\u62e1\u5f35\u8981\u7d20\'\'{0}\'\'\u306e\u4f7f\u7528\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
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

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com