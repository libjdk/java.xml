#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_zh_CN.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _ErrorMessages_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_zh_CN::*)()>(&ErrorMessages_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_zh_CN",
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
			$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"\'\'{0}\'\' \u4e2d\u7684\u8fd0\u884c\u65f6\u5185\u90e8\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"\u6267\u884c <xsl:copy> \u65f6\u51fa\u73b0\u8fd0\u884c\u65f6\u9519\u8bef\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"\u4ece \'\'{0}\'\' \u5230 \'\'{1}\'\' \u7684\u8f6c\u6362\u65e0\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"XSLTC \u4e0d\u652f\u6301\u5916\u90e8\u51fd\u6570 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"\u7b49\u5f0f\u8868\u8fbe\u5f0f\u4e2d\u7684\u53c2\u6570\u7c7b\u578b\u672a\u77e5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"\u8c03\u7528 \'\'{1}\'\' \u65f6\u7684\u53c2\u6570\u7c7b\u578b \'\'{0}\'\' \u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"\u5c1d\u8bd5\u4f7f\u7528\u6a21\u5f0f \'\'{1}\'\' \u8bbe\u7f6e\u6570\u5b57 \'\'{0}\'\' \u7684\u683c\u5f0f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"\u65e0\u6cd5\u514b\u9686\u8fed\u4ee3\u5668 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"\u4e0d\u652f\u6301\u8f74 \'\'{0}\'\' \u7684\u8fed\u4ee3\u5668\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"\u4e0d\u652f\u6301\u7c7b\u578b\u5316\u8f74 \'\'{0}\'\' \u7684\u8fed\u4ee3\u5668\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"\u5c5e\u6027 \'\'{0}\'\' \u5728\u5143\u7d20\u5916\u90e8\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"\u540d\u79f0\u7a7a\u95f4\u58f0\u660e \'\'{0}\'\'=\'\'{1}\'\' \u5728\u5143\u7d20\u5916\u90e8\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"\u6ca1\u6709\u8bf4\u660e\u540d\u79f0\u7a7a\u95f4\u524d\u7f00 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"\u4f7f\u7528\u9519\u8bef\u7c7b\u578b\u7684\u6e90 DOM \u521b\u5efa\u4e86 DOMAdapter\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"\u4f7f\u7528\u7684 SAX \u89e3\u6790\u5668\u4e0d\u4f1a\u5904\u7406 DTD \u58f0\u660e\u4e8b\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"\u4f7f\u7528\u7684 SAX \u89e3\u6790\u5668\u4e0d\u652f\u6301 XML \u540d\u79f0\u7a7a\u95f4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"\u65e0\u6cd5\u89e3\u6790 URI \u5f15\u7528 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"XSL \u5143\u7d20 \'\'{0}\'\' \u4e0d\u53d7\u652f\u6301"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"XSLTC \u6269\u5c55 \'\'{0}\'\' \u65e0\u6cd5\u8bc6\u522b"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"\u521b\u5efa\u6307\u5b9a translet \'\'{0}\'\' \u65f6\u4f7f\u7528\u7684 XSLTC \u7684\u7248\u672c\u9ad8\u4e8e\u6b63\u5728\u4f7f\u7528\u7684 XSLTC \u8fd0\u884c\u65f6\u7684\u7248\u672c\u3002\u5fc5\u987b\u91cd\u65b0\u7f16\u8bd1\u6837\u5f0f\u8868\u6216\u4f7f\u7528\u8f83\u65b0\u7684 XSLTC \u7248\u672c\u8fd0\u884c\u6b64 translet\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"\u5176\u503c\u5fc5\u987b\u4e3a QName \u7684\u5c5e\u6027\u5177\u6709\u503c \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"\u5176\u503c\u5fc5\u987b\u4e3a NCName \u7684\u5c5e\u6027\u5177\u6709\u503c \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"\u5f53\u5b89\u5168\u5904\u7406\u529f\u80fd\u8bbe\u7f6e\u4e3a\u201c\u771f\u201d\u65f6, \u4e0d\u5141\u8bb8\u4f7f\u7528\u6269\u5c55\u51fd\u6570 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"\u5f53\u5b89\u5168\u5904\u7406\u529f\u80fd\u8bbe\u7f6e\u4e3a\u201c\u771f\u201d\u65f6, \u4e0d\u5141\u8bb8\u4f7f\u7528\u6269\u5c55\u5143\u7d20 \'\'{0}\'\'\u3002"_s)
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

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com