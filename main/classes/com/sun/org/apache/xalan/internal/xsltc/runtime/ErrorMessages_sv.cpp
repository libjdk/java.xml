#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_sv.h>

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

$MethodInfo _ErrorMessages_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_sv::*)()>(&ErrorMessages_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_sv_MethodInfo_
};

$Object* allocate$ErrorMessages_sv($Class* clazz) {
	return $of($alloc(ErrorMessages_sv));
}

void ErrorMessages_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_sv::getContents() {
			$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of("Internt exekveringsfel i \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of("Exekveringsexekveringsfel av <xsl:copy>."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"Ogiltig konvertering fr\u00e5n \'\'{0}\'\' till \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"Den externa funktionen \'\'{0}\'\' underst\u00f6ds inte i XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"Ok\u00e4nd argumenttyp i likhetsuttryck."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"Argumenttyp \'\'{0}\'\' i anrop till \'\'{1}\'\' \u00e4r inte giltig"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"F\u00f6rs\u00f6ker formatera talet \'\'{0}\'\' med m\u00f6nstret \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of("Kan inte klona iteratorn \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"Iteratorn f\u00f6r axeln \'\'{0}\'\' underst\u00f6ds inte."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"Iteratorn f\u00f6r den typade axeln \'\'{0}\'\' underst\u00f6ds inte."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"Attributet \'\'{0}\'\' finns utanf\u00f6r elementet."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"Namnrymdsdeklarationen \'\'{0}\'\'=\'\'{1}\'\' finns utanf\u00f6r element."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"Namnrymd f\u00f6r prefix \'\'{0}\'\' har inte deklarerats."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"DOMAdapter har skapats med fel typ av DOM-k\u00e4lla."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"Den SAX-parser som du anv\u00e4nder hanterar inga DTD-deklarationsh\u00e4ndelser."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"Den SAX-parser som du anv\u00e4nder saknar st\u00f6d f\u00f6r XML-namnrymder."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of("Kunde inte matcha URI-referensen \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"XSL-elementet \'\'{0}\'\' st\u00f6ds inte"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"XSLTC-till\u00e4gget \'\'{0}\'\' \u00e4r ok\u00e4nt"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"Angiven translet, \'\'{0}\'\', har skapats med en XSLTC-version som \u00e4r senare \u00e4n den XSLTC-k\u00f6rning i bruk. F\u00f6r att kunna k\u00f6ra denna translet m\u00e5ste du omkompilera formatmallen eller anv\u00e4nda en senare version av XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"Ett attribut vars v\u00e4rde m\u00e5ste vara ett QName hade v\u00e4rdet \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"Ett attribut vars v\u00e4rde m\u00e5ste vara ett NCName hade v\u00e4rdet \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"Anv\u00e4ndning av till\u00e4ggsfunktionen \'\'{0}\'\' \u00e4r inte till\u00e5tet n\u00e4r s\u00e4ker bearbetning till\u00e4mpas."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"Anv\u00e4ndning av till\u00e4ggselementet \'\'{0}\'\' \u00e4r inte till\u00e5tet n\u00e4r s\u00e4ker bearbetning till\u00e4mpas."_s)
		})
	});
}

ErrorMessages_sv::ErrorMessages_sv() {
}

$Class* ErrorMessages_sv::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_sv, name, initialize, &_ErrorMessages_sv_ClassInfo_, allocate$ErrorMessages_sv);
	return class$;
}

$Class* ErrorMessages_sv::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com