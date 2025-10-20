#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_de.h>

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

$MethodInfo _ErrorMessages_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_de::*)()>(&ErrorMessages_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_de_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_de_MethodInfo_
};

$Object* allocate$ErrorMessages_de($Class* clazz) {
	return $of($alloc(ErrorMessages_de));
}

void ErrorMessages_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_de::getContents() {
	$useLocalCurrentObjectStackCache();
			$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of("Interner Laufzeitfehler in \"{0}\""_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"Laufzeitfehler beim Ausf\u00fchren von <xsl:copy>."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"Ung\u00fcltige Konvertierung von \"{0}\" in \"{1}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"Externe Funktion \"{0}\" nicht unterst\u00fctzt von XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of("Unbekannter Argumenttyp in Gleichheitsausdruck."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"Ung\u00fcltiger Argumenttyp \"{0}\" in Aufruf von \"{1}\""_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of("Versuch, Zahl \"{0}\" mit Muster \"{1}\" zu formatieren."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of("Iterator \"{0}\" kann nicht geclont werden."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"Iterator f\u00fcr Achse \"{0}\" nicht unterst\u00fctzt."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"Iterator f\u00fcr typisierte Achse \"{0}\" nicht unterst\u00fctzt."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"Attribut \"{0}\" au\u00dferhalb des Elements."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"Namespace-Deklaration {0}={1} au\u00dferhalb des Elements."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"Namespace f\u00fcr Pr\u00e4fix \"{0}\" wurde nicht deklariert."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of("DOMAdapter mit falschem Typ von Quell-DOM erstellt."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of("Der verwendete SAX-Parser verarbeitet keine DTD-Deklarationsereignisse."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"Der verwendete SAX-Parser unterst\u00fctzt keine XML-Namespaces."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"URI-Referenz \"{0}\" konnte nicht aufgel\u00f6st werden."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"Nicht unterst\u00fctztes XSL-Element \"{0}\""_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of("Unbekannte XSLTC-Erweiterung \"{0}\""_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"Das angegebene Translet \"{0}\" wurde mit einer neueren Version von XSLTC als die verwendete Version der XSLTC-Laufzeit erstellt. Sie m\u00fcssen das Stylesheet neu kompilieren oder eine aktuellere Version von XSLTC verwenden, um dieses Translet auszuf\u00fchren."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of("Ein Attribut, dessen Wert ein QName sein muss, hatte den Wert \"{0}\""_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of("Ein Attribut, dessen Wert ein NCName sein muss, hatte den Wert \"{0}\""_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"Verwendung der Erweiterungsfunktion \"{0}\" ist nicht zul\u00e4ssig, wenn das Feature f\u00fcr die sichere Verarbeitung auf \"true\" gesetzt ist."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"Verwendung des Erweiterungselements \"{0}\" ist nicht zul\u00e4ssig, wenn das Feature f\u00fcr die sichere Verarbeitung auf \"true\" gesetzt ist."_s)
		})
	});
}

ErrorMessages_de::ErrorMessages_de() {
}

$Class* ErrorMessages_de::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_de, name, initialize, &_ErrorMessages_de_ClassInfo_, allocate$ErrorMessages_de);
	return class$;
}

$Class* ErrorMessages_de::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com