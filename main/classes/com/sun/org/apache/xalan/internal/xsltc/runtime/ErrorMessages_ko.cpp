#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_ko.h>

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

$MethodInfo _ErrorMessages_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_ko::*)()>(&ErrorMessages_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_ko",
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
			$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"\'\'{0}\'\'\uc5d0 \ub7f0\ud0c0\uc784 \ub0b4\ubd80 \uc624\ub958\uac00 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"<xsl:copy>\ub97c \uc2e4\ud589\ud558\ub294 \uc911 \ub7f0\ud0c0\uc784 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"\'\'{0}\'\'\uc5d0\uc11c \'\'{1}\'\'(\uc73c)\ub85c\uc758 \ubcc0\ud658\uc774 \ubd80\uc801\ud569\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"XSLTC\ub294 \uc678\ubd80 \ud568\uc218 \'\'{0}\'\'\uc744(\ub97c) \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"\ub3d9\ub4f1\uc131 \ud45c\ud604\uc2dd\uc5d0 \uc54c \uc218 \uc5c6\ub294 \uc778\uc218 \uc720\ud615\uc774 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"\'\'{1}\'\'\uc5d0 \ub300\ud55c \ud638\ucd9c\uc5d0 \ubd80\uc801\ud569\ud55c \uc778\uc218 \uc720\ud615 \'\'{0}\'\'\uc774(\uac00) \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"\'\'{1}\'\' \ud328\ud134\uc744 \uc0ac\uc6a9\ud558\uc5ec \'\'{0}\'\' \uc22b\uc790\uc758 \ud615\uc2dd\uc744 \uc9c0\uc815\ud558\ub824\uace0 \uc2dc\ub3c4\ud558\ub294 \uc911\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"\'\'{0}\'\' \uc774\ud130\ub808\uc774\ud130\ub97c \ubcf5\uc81c\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"\'\'{0}\'\' \ucd95\uc5d0 \ub300\ud55c \uc774\ud130\ub808\uc774\ud130\ub294 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"\uc785\ub825\ub41c \ucd95 \'\'{0}\'\'\uc5d0 \ub300\ud55c \uc774\ud130\ub808\uc774\ud130\ub294 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"\'\'{0}\'\' \uc18d\uc131\uc774 \uc694\uc18c\uc5d0 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"\ub124\uc784\uc2a4\ud398\uc774\uc2a4 \uc120\uc5b8 \'\'{0}\'\'=\'\'{1}\'\'\uc774(\uac00) \uc694\uc18c\uc5d0 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"\'\'{0}\'\' \uc811\ub450\uc5b4\uc5d0 \ub300\ud55c \ub124\uc784\uc2a4\ud398\uc774\uc2a4\uac00 \uc120\uc5b8\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"\uc18c\uc2a4 DOM\uc758 \uc798\ubabb\ub41c \uc720\ud615\uc744 \uc0ac\uc6a9\ud558\uc5ec DOMAdapter\uac00 \uc0dd\uc131\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"\uc0ac\uc6a9 \uc911\uc778 SAX \uad6c\ubb38 \ubd84\uc11d\uae30\uac00 DTD \uc120\uc5b8 \uc774\ubca4\ud2b8\ub97c \ucc98\ub9ac\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"\uc0ac\uc6a9 \uc911\uc778 SAX \uad6c\ubb38 \ubd84\uc11d\uae30\uac00 XML \ub124\uc784\uc2a4\ud398\uc774\uc2a4\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"URI \ucc38\uc870 \'\'{0}\'\'\uc744(\ub97c) \ubd84\uc11d\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"\'\'{0}\'\'\uc740(\ub294) \uc9c0\uc6d0\ub418\uc9c0 \uc54a\ub294 XSL \uc694\uc18c\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"\'\'{0}\'\'\uc740(\ub294) \uc54c \uc218 \uc5c6\ub294 XSLTC \ud655\uc7a5\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"\uc9c0\uc815\ub41c translet \'\'{0}\'\'\uc774(\uac00) \uc0ac\uc6a9 \uc911\uc778 XSLTC \ub7f0\ud0c0\uc784 \ubc84\uc804\ubcf4\ub2e4 \ucd5c\uc2e0\uc758 XSLTC \ubc84\uc804\uc744 \uc0ac\uc6a9\ud558\uc5ec \uc0dd\uc131\ub418\uc5c8\uc2b5\ub2c8\ub2e4. \uc774 translet\uc744 \uc2e4\ud589\ud558\ub824\uba74 \uc2a4\ud0c0\uc77c\uc2dc\ud2b8\ub97c \uc7ac\ucef4\ud30c\uc77c\ud558\uac70\ub098 \ucd5c\uc2e0 XSLTC \ubc84\uc804\uc744 \uc0ac\uc6a9\ud574\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"\uac12\uc774 QName\uc774\uc5b4\uc57c \ud558\ub294 \uc18d\uc131\uc758 \uac12\uc774 \'\'{0}\'\'\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"\uac12\uc774 NCName\uc774\uc5b4\uc57c \ud558\ub294 \uc18d\uc131\uc758 \uac12\uc774 \'\'{0}\'\'\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"\ubcf4\uc548 \ucc98\ub9ac \uae30\ub2a5\uc774 true\ub85c \uc124\uc815\ub41c \uacbd\uc6b0 \ud655\uc7a5 \ud568\uc218 \'\'{0}\'\'\uc744(\ub97c) \uc0ac\uc6a9\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"\ubcf4\uc548 \ucc98\ub9ac \uae30\ub2a5\uc774 true\ub85c \uc124\uc815\ub41c \uacbd\uc6b0 \ud655\uc7a5 \uc694\uc18c \'\'{0}\'\'\uc744(\ub97c) \uc0ac\uc6a9\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
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

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com