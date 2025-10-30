#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_ca.h>

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

$MethodInfo _ErrorMessages_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_ca::*)()>(&ErrorMessages_ca::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_ca_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_ca",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_ca_MethodInfo_
};

$Object* allocate$ErrorMessages_ca($Class* clazz) {
	return $of($alloc(ErrorMessages_ca));
}

void ErrorMessages_ca::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_ca::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"S\'\'ha produ\u00eft un error intern de temps d\'\'execuci\u00f3 a \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"Es produeix un error de temps d\'execuci\u00f3 en executar <xsl:copy>."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"La conversi\u00f3 de \'\'{0}\'\' a \'\'{1}\'\' no \u00e9s v\u00e0lida."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"XSLTC no d\u00f3na suport a la funci\u00f3 externa \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"L\'expressi\u00f3 d\'igualtat cont\u00e9 un tipus d\'argument desconegut."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"La crida a \'\'{1}\'\' cont\u00e9 un tipus d\'\'argument \'\'{0}\'\' no v\u00e0lid."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"S\'\'ha intentat donar format al n\u00famero \'\'{0}\'\' mitjan\u00e7ant el patr\u00f3 \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of("No es pot clonar l\'\'iterador \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"L\'\'iterador de l\'\'eix \'\'{0}\'\' no t\u00e9 suport."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"L\'\'iterador de l\'\'eix escrit \'\'{0}\'\' no t\u00e9 suport."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of("L\'\'atribut \'\'{0}\'\' es troba fora de l\'\'element."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"La declaraci\u00f3 d\'\'espai de noms \'\'{0}\'\'=\'\'{1}\'\' es troba fora de l\'\'element."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of("L\'\'espai de noms del prefix \'\'{0}\'\' no s\'\'ha declarat."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"DOMAdapter s\'ha creat mitjan\u00e7ant un tipus incorrecte de DOM d\'origen."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"L\'analitzador SAX que feu servir no gestiona esdeveniments de declaraci\u00f3 de DTD."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"L\'analitzador SAX que feu servir no d\u00f3na suport a espais de noms XML."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"No s\'\'ha pogut resoldre la refer\u00e8ncia d\'\'URI \'\'{0}\'\'."_s)
		})
	});
}

ErrorMessages_ca::ErrorMessages_ca() {
}

$Class* ErrorMessages_ca::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_ca, name, initialize, &_ErrorMessages_ca_ClassInfo_, allocate$ErrorMessages_ca);
	return class$;
}

$Class* ErrorMessages_ca::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com