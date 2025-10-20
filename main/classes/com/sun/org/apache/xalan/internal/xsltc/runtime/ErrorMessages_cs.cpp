#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_cs.h>

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
#undef ITERATOR_CLONE_ERR
#undef NAMESPACES_SUPPORT_ERR
#undef NAMESPACE_PREFIX_ERR
#undef PARSER_DTD_SUPPORT_ERR
#undef RUN_TIME_COPY_ERR
#undef RUN_TIME_INTERNAL_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_NAMESPACE_ERR
#undef TYPED_AXIS_SUPPORT_ERR

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

$MethodInfo _ErrorMessages_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_cs::*)()>(&ErrorMessages_cs::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_cs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_cs",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_cs_MethodInfo_
};

$Object* allocate$ErrorMessages_cs($Class* clazz) {
	return $of($alloc(ErrorMessages_cs));
}

void ErrorMessages_cs::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_cs::getContents() {
	$useLocalCurrentObjectStackCache();
			$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"Vnit\u0159n\u00ed b\u011bhov\u00e1 chyba v \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"Vnit\u0159n\u00ed b\u011bhov\u00e1 chyba p\u0159i prov\u00e1d\u011bn\u00ed funkce <xsl:copy>."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"Neplatn\u00e1 konverze z \'\'{0}\'\' do \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"Extern\u00ed funkce \'\'{0}\'\' nen\u00ed podporov\u00e1na produktem SLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"Nezn\u00e1m\u00fd typ argumentu ve v\u00fdrazu rovnosti."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"Neplatn\u00fd typ argumentu \'\'{0}\'\' p\u0159i vol\u00e1n\u00ed \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"Pokus form\u00e1tovat \u010d\u00edslo \'\'{0}\'\' pou\u017eit\u00edm vzorku \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"Nelze klonovat iter\u00e1tor \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"Iter\u00e1tor pro osu \'\'{0}\'\' nen\u00ed podporov\u00e1n."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"Iter\u00e1tor pro typizovanou osu \'\'{0}\'\' nen\u00ed podporov\u00e1n."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"Atribut \'\'{0}\'\' je vn\u011b prvku."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"Deklarace oboru n\u00e1zv\u016f \'\'{0}\'\'=\'\'{1}\'\' je vn\u011b prvku."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"Obor n\u00e1zv\u016f pro p\u0159edponu \'\'{0}\'\' nebyl deklarov\u00e1n."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"DOMAdapter byl vytvo\u0159en s pou\u017eit\u00edm chybn\u00e9ho typu zdroje DOM."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"Pou\u017eit\u00fd analyz\u00e1tor SAX nem\u016f\u017ee manipulovat s deklara\u010dn\u00edmi ud\u00e1lostmi DTD."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"Pou\u017eit\u00fd analyz\u00e1tor SAX nem\u016f\u017ee podporovat obory n\u00e1zv\u016f pro XML."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"Nelze p\u0159elo\u017eit odkazy URI \'\'{0}\'\'."_s)
		})
	});
}

ErrorMessages_cs::ErrorMessages_cs() {
}

$Class* ErrorMessages_cs::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_cs, name, initialize, &_ErrorMessages_cs_ClassInfo_, allocate$ErrorMessages_cs);
	return class$;
}

$Class* ErrorMessages_cs::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com