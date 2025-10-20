#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_zh_TW.h>

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

$MethodInfo _ErrorMessages_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_zh_TW::*)()>(&ErrorMessages_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_zh_TW",
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
			$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"\'\'{0}\'\' \u4e2d\u7684\u57f7\u884c\u968e\u6bb5\u5167\u90e8\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"\u57f7\u884c <xsl:copy> \u6642\u767c\u751f\u57f7\u884c\u968e\u6bb5\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"\u5f9e \'\'{0}\'\' \u81f3 \'\'{1}\'\' \u7684\u8f49\u63db\u7121\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"XSLTC \u4e0d\u652f\u63f4\u5916\u90e8\u51fd\u6578 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"\u76f8\u7b49\u6027\u8868\u793a\u5f0f\u4e2d\u7684\u5f15\u6578\u985e\u578b\u4e0d\u660e\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"\u547c\u53eb \'\'{1}\'\' \u4e2d\u7684\u5f15\u6578\u985e\u578b \'\'{0}\'\' \u7121\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"\u5617\u8a66\u4f7f\u7528\u6a23\u5f0f \'\'{1}\'\' \u683c\u5f0f\u5316\u6578\u5b57 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"\u7121\u6cd5\u8907\u88fd\u91cd\u8907\u7a0b\u5f0f \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"\u4e0d\u652f\u63f4\u8ef8 \'\'{0}\'\' \u7684\u91cd\u8907\u7a0b\u5f0f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"\u4e0d\u652f\u63f4\u985e\u578b\u8ef8 \'\'{0}\'\' \u7684\u91cd\u8907\u7a0b\u5f0f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"\u5c6c\u6027 \'\'{0}\'\' \u5728\u5143\u7d20\u4e4b\u5916\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"\u547d\u540d\u7a7a\u9593\u5ba3\u544a \'\'{0}\'\'=\'\'{1}\'\' \u8d85\u51fa\u5143\u7d20\u5916\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"\u5b57\u9996 \'\'{0}\'\' \u7684\u547d\u540d\u7a7a\u9593\u5c1a\u672a\u5ba3\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"\u4f7f\u7528\u932f\u8aa4\u7684\u4f86\u6e90 DOM \u985e\u578b\u5efa\u7acb DOMAdapter\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"\u60a8\u6b63\u5728\u4f7f\u7528\u7684 SAX \u5256\u6790\u5668\u4e0d\u6703\u8655\u7406 DTD \u5ba3\u544a\u4e8b\u4ef6\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"\u60a8\u6b63\u5728\u4f7f\u7528\u7684 SAX \u5256\u6790\u5668\u4e0d\u652f\u63f4 XML \u547d\u540d\u7a7a\u9593\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"\u7121\u6cd5\u89e3\u6790 URI \u53c3\u7167 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"\u4e0d\u652f\u63f4\u7684 XSL \u5143\u7d20 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"\u7121\u6cd5\u8fa8\u8b58\u7684 XSLTC \u64f4\u5145\u5957\u4ef6 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"\u5efa\u7acb\u6307\u5b9a translet \'\'{0}\'\' \u7684 XSLTC \u7248\u672c\u6bd4\u4f7f\u7528\u4e2d XSLTC \u57f7\u884c\u968e\u6bb5\u7684\u7248\u672c\u8f03\u65b0\u3002\u60a8\u5fc5\u9808\u91cd\u65b0\u7de8\u8b6f\u6a23\u5f0f\u8868\uff0c\u6216\u4f7f\u7528\u8f03\u65b0\u7684 XSLTC \u7248\u672c\u4f86\u57f7\u884c\u6b64 translet\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"\u503c\u5fc5\u9808\u70ba QName \u7684\u5c6c\u6027\uff0c\u5177\u6709\u503c \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"\u503c\u5fc5\u9808\u70ba NCName \u7684\u5c6c\u6027\uff0c\u5177\u6709\u503c \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"\u7576\u5b89\u5168\u8655\u7406\u529f\u80fd\u8a2d\u70ba\u771f\u6642\uff0c\u4e0d\u5141\u8a31\u4f7f\u7528\u64f4\u5145\u5957\u4ef6\u51fd\u6578 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"\u7576\u5b89\u5168\u8655\u7406\u529f\u80fd\u8a2d\u70ba\u771f\u6642\uff0c\u4e0d\u5141\u8a31\u4f7f\u7528\u64f4\u5145\u5957\u4ef6\u5143\u7d20 \'\'{0}\'\'\u3002"_s)
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

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com