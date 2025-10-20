#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_sk.h>

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

$MethodInfo _ErrorMessages_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_sk::*)()>(&ErrorMessages_sk::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_sk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_sk",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_sk_MethodInfo_
};

$Object* allocate$ErrorMessages_sk($Class* clazz) {
	return $of($alloc(ErrorMessages_sk));
}

void ErrorMessages_sk::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_sk::getContents() {
	$useLocalCurrentObjectStackCache();
			$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"Intern\u00e1 chyba \u010dasu spustenia v \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"Chyba \u010dasu spustenia pri sp\u00fa\u0161\u0165an\u00ed <xsl:copy>."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"Neplatn\u00e1 konverzia z \'\'{0}\'\' na \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"XSLTC nepodporuje extern\u00fa funkciu \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"Nezn\u00e1my typ argumentu je v\u00fdrazom rovnosti."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"Neplatn\u00fd typ argumentu \'\'{0}\'\' vo volan\u00ed do \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"Pokus o form\u00e1tovanie \u010d\u00edsla \'\'{0}\'\' pomocou vzoru \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"Nie je mo\u017en\u00e9 klonova\u0165 iter\u00e1tor \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"Iter\u00e1tor pre os \'\'{0}\'\' nie je podporovan\u00fd."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"Iter\u00e1tor pre nap\u00edsan\u00fa os \'\'{0}\'\' nie je podporovan\u00fd."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"Atrib\u00fat \'\'{0}\'\' je mimo elementu."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"Deklar\u00e1cia n\u00e1zvov\u00e9ho priestoru \'\'{0}\'\'=\'\'{1}\'\' je mimo elementu."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"N\u00e1zvov\u00fd priestor pre predponu \'\'{0}\'\' nebol deklarovan\u00fd."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"DOMAdapter bol vytvoren\u00fd pomocou nespr\u00e1vneho typu zdrojov\u00e9ho DOM."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"Analyz\u00e1tor SAX, ktor\u00fd pou\u017e\u00edvate, nesprac\u00fava udalosti deklar\u00e1cie DTD."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"Analyz\u00e1tor SAX, ktor\u00fd pou\u017e\u00edvate, nem\u00e1 podporu pre n\u00e1zvov\u00e9 priestory XML."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"Nebolo mo\u017en\u00e9 rozl\u00ed\u0161i\u0165 referenciu URI \'\'{0}\'\'."_s)
		})
	});
}

ErrorMessages_sk::ErrorMessages_sk() {
}

$Class* ErrorMessages_sk::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_sk, name, initialize, &_ErrorMessages_sk_ClassInfo_, allocate$ErrorMessages_sk);
	return class$;
}

$Class* ErrorMessages_sk::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com