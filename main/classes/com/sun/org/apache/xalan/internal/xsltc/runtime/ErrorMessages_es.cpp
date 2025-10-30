#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_es.h>

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

$MethodInfo _ErrorMessages_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_es::*)()>(&ErrorMessages_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_es_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_es_MethodInfo_
};

$Object* allocate$ErrorMessages_es($Class* clazz) {
	return $of($alloc(ErrorMessages_es));
}

void ErrorMessages_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_es::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"Error interno de tiempo de ejecuci\u00f3n en \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"Error de tiempo de ejecuci\u00f3n al ejecutar <xsl:copy>."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"Conversi\u00f3n no v\u00e1lida de \'\'{0}\'\' a \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"Funci\u00f3n externa \'\'{0}\'\' no soportada por XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"Tipo de argumento desconocido en la expresi\u00f3n de igualdad."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"Tipo de argumento \'\'{0}\'\' no v\u00e1lido en la llamada a \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"Intentando formatear n\u00famero \'\'{0}\'\' mediante el patr\u00f3n \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of("No se puede clonar el iterador \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"El iterador para el eje \'\'{0}\'\' no est\u00e1 soportado."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"El iterador para el eje introducido \'\'{0}\'\' no est\u00e1 soportado."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"El atributo \'\'{0}\'\' est\u00e1 fuera del elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"Declaraci\u00f3n del espacio de nombres \'\'{0}\'\'=\'\'{1}\'\' fuera del elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of("No se ha declarado el espacio de nombres para el prefijo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of("Se ha creado DOMAdapter mediante un tipo incorrecto de DOM de origen."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"El analizador SAX que est\u00e1 utilizando no maneja los eventos de declaraci\u00f3n DTD."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"El analizador SAX que est\u00e1 utilizando no soporta los espacios de nombres XML."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of("No se ha podido resolver la referencia al URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of("Elemento \'\'{0}\'\' de XSL no soportado"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"Extensi\u00f3n \'\'{0}\'\' de XSLTC no reconocida"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"El translet especificado, \'\'{0}\'\' se ha creado con una versi\u00f3n de XSLTC m\u00e1s reciente que la versi\u00f3n del tiempo de ejecuci\u00f3n de XSLTC que se est\u00e1 utilizando. Debe volver a compilar la hoja de estilo o utilizar una versi\u00f3n m\u00e1s reciente de XSLTC para ejecutar este translet."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"Un atributo cuyo valor debe ser un QName ten\u00eda el valor \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"Un atributo cuyo valor debe ser un NCName ten\u00eda el valor \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"El uso de la funci\u00f3n de extensi\u00f3n \'\'{0}\'\' no est\u00e1 permitido cuando la funci\u00f3n de procesamiento seguro se ha definido en true."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"El uso del elemento de extensi\u00f3n \'\'{0}\'\' no est\u00e1 permitido cuando la funci\u00f3n de procesamiento seguro se ha definido en true."_s)
		})
	});
}

ErrorMessages_es::ErrorMessages_es() {
}

$Class* ErrorMessages_es::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_es, name, initialize, &_ErrorMessages_es_ClassInfo_, allocate$ErrorMessages_es);
	return class$;
}

$Class* ErrorMessages_es::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com