#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_es.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef ACCESSING_XSLT_TARGET_ERR
#undef ARGUMENT_CONVERSION_ERR
#undef ATTRIBSET_UNDEF_ERR
#undef ATTR_VAL_TEMPLATE_ERR
#undef CATALOG_EXCEPTION
#undef CIRCULAR_INCLUDE_ERR
#undef CIRCULAR_VARIABLE_ERR
#undef CLASS_NOT_FOUND_ERR
#undef CMDLINE_OPT_MISSING_ARG_ERR
#undef COMPILER_ERROR_KEY
#undef COMPILER_WARNING_KEY
#undef COMPILE_STDIN_ERR
#undef COMPILE_USAGE_STR
#undef CONSTRUCTOR_NOT_FOUND
#undef COULD_NOT_CREATE_TRANS_FACT
#undef DATA_CONVERSION_ERR
#undef DESERIALIZE_TRANSLET_ERR
#undef DOCUMENT_ARG_ERR
#undef ELEMENT_PARSE_ERR
#undef ERROR_LISTENER_NULL_ERR
#undef ERROR_MSG
#undef ERROR_PLUS_WRAPPED_MSG
#undef ER_RESULT_NULL
#undef FATAL_ERR_MSG
#undef FATAL_ERR_PLUS_WRAPPED_MSG
#undef FILE_ACCESS_ERR
#undef FILE_NOT_FOUND_ERR
#undef FUNCTION_RESOLVE_ERR
#undef ILLEGAL_ARG_ERR
#undef ILLEGAL_ATTRIBUTE_ERR
#undef ILLEGAL_ATTR_NAME_ERR
#undef ILLEGAL_BINARY_OP_ERR
#undef ILLEGAL_CHAR_ERR
#undef ILLEGAL_CHILD_ERR
#undef ILLEGAL_CMDLINE_OPTION_ERR
#undef ILLEGAL_ELEM_NAME_ERR
#undef ILLEGAL_PI_ERR
#undef ILLEGAL_RELAT_OP_ERR
#undef ILLEGAL_TEXT_NODE_ERR
#undef IMPORT_PRECEDE_OTHERS_ERR
#undef INTERNAL_ERR
#undef INVALID_METHOD_IN_OUTPUT
#undef INVALID_NCNAME_ERR
#undef INVALID_QNAME_ERR
#undef INVALID_URI_ERR
#undef JAXP_COMPILE_ERR
#undef JAXP_GET_FEATURE_NULL_NAME
#undef JAXP_INVALID_ATTR_ERR
#undef JAXP_INVALID_ATTR_VALUE_ERR
#undef JAXP_INVALID_SET_PARAM_VALUE
#undef JAXP_NO_HANDLER_ERR
#undef JAXP_NO_RESULT_ERR
#undef JAXP_NO_SOURCE_ERR
#undef JAXP_NO_TRANSLET_ERR
#undef JAXP_SECUREPROCESSING_FEATURE
#undef JAXP_SET_FEATURE_NULL_NAME
#undef JAXP_SET_RESULT_ERR
#undef JAXP_UNKNOWN_PROP_ERR
#undef JAXP_UNKNOWN_SOURCE_ERR
#undef JAXP_UNSUPPORTED_FEATURE
#undef KEY_USE_ATTR_ERR
#undef METHOD_NOT_FOUND_ERR
#undef MISSING_ROOT_ERR
#undef MISSING_WHEN_ERR
#undef MISSING_XSLT_TARGET_ERR
#undef MISSING_XSLT_URI_ERR
#undef MULTIPLE_OTHERWISE_ERR
#undef MULTIPLE_STYLESHEET_ERR
#undef NAMESPACE_UNDEF_ERR
#undef NEED_LITERAL_ERR
#undef NOT_IMPLEMENTED_ERR
#undef NOT_STYLESHEET_ERR
#undef NO_JAVA_FUNCT_THIS_REF
#undef NO_MAIN_TRANSLET_ERR
#undef NO_TRANSLET_CLASS_ERR
#undef OUTLINE_ERR_DELETED_TARGET
#undef OUTLINE_ERR_METHOD_TOO_BIG
#undef OUTLINE_ERR_TRY_CATCH
#undef OUTLINE_ERR_UNBALANCED_MARKERS
#undef OUTPUT_VERSION_ERR
#undef REQUIRED_ATTR_ERR
#undef RESULT_TREE_SORT_ERR
#undef RUNTIME_ERROR_KEY
#undef SAX2DOM_ADAPTER_ERR
#undef SAX_PARSER_CONFIG_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_OTHERWISE_ERR
#undef STRAY_SORT_ERR
#undef STRAY_WHEN_ERR
#undef SYMBOLS_REDEF_ERR
#undef SYNTAX_ERR
#undef TEMPLATE_REDEF_ERR
#undef TEMPLATE_UNDEF_ERR
#undef TRANSFORM_USAGE_STR
#undef TRANSFORM_WITH_JAR_STR
#undef TRANSFORM_WITH_TRANSLET_STR
#undef TRANSLET_CLASS_ERR
#undef TRANSLET_NAME_JAVA_CONFLICT
#undef TRANSLET_OBJECT_ERR
#undef TYPE_CHECK_ERR
#undef TYPE_CHECK_UNK_LOC_ERR
#undef UNKNOWN_SIG_TYPE_ERR
#undef UNNAMED_ATTRIBSET_ERR
#undef UNSUPPORTED_ENCODING
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR
#undef VARIABLE_REDEF_ERR
#undef VARIABLE_UNDEF_ERR
#undef WARNING_MSG
#undef WARNING_PLUS_WRAPPED_MSG
#undef WHEN_ELEMENT_ERR
#undef XPATH_PARSER_ERR
#undef XSLTC_SOURCE_ERR
#undef XSL_VERSION_ERR

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
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
							namespace compiler {
								namespace util {

$MethodInfo _ErrorMessages_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_es::*)()>(&ErrorMessages_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_es_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_es",
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
			$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of(u"Se ha definido m\u00e1s de una hoja de estilo en el mismo archivo."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of("La plantilla \'\'{0}\'\' ya se ha definido en esta hoja de estilo."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of("La plantilla \'\'{0}\'\' no se ha definido en esta hoja de estilo."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"Se ha definido varias veces la variable \'\'{0}\'\' en el mismo \u00e1mbito."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of(u"No se ha definido la variable o el par\u00e1metro \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of("No se ha encontrado la clase \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"No se ha encontrado el m\u00e9todo externo \'\'{0}\'\' (debe ser p\u00fablico)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of(u"No se puede convertir el tipo de argumento/retorno en la llamada al m\u00e9todo \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of("No se ha encontrado el archivo o URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of(u"URI \'\'{0}\'\' no v\u00e1lido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CATALOG_EXCEPTION),
			$of(u"JAXP08090001: CatalogResolver est\u00e1 activado con el cat\u00e1logo \"{0}\", pero se ha devuelto una excepci\u00f3n CatalogException."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of("No se puede abrir el archivo o URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of("Se esperaba el elemento <xsl:stylesheet> o <xsl:transform>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of("No se ha declarado el prefijo de espacio de nombres \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of(u"No se ha podido resolver la llamada a la funci\u00f3n \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of("El argumento en \'\'{0}\'\' debe ser una cadena literal."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of(u"Error al analizar la expresi\u00f3n XPath \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of("Falta el atributo \'\'{0}\'\' necesario."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"Car\u00e1cter \'\'{0}\'\' no permitido en la expresi\u00f3n XPath."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of(u"Nombre \'\'{0}\'\' no permitido para la instrucci\u00f3n de procesamiento."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of(u"El atributo \'\'{0}\'\' est\u00e1 fuera del elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of("Atributo \'\'{0}\'\' no permitido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of("Import/include circular. La hoja de estilo \'\'{0}\'\' ya se ha cargado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR),
			$of("Los secundarios del elemento xsl:import deben preceder al resto de secundarios de elementos de un elemento xsl:stylesheet, incluidos los secundarios de elementos xsl:include."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of(u"Los fragmentos del \u00e1rbol de resultados no se pueden ordenar (los elementos <xsl:sort> se ignoran). Debe ordenar los nodos al crear el \u00e1rbol de resultados."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of("Ya se ha definido el formato decimal \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of(u"La versi\u00f3n XSL \'\'{0}\'\' no est\u00e1 soportada por XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"La referencia de variable/par\u00e1metro circular en \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"Operador desconocido para la expresi\u00f3n binaria."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of(u"Argumentos no permitidos para la llamada de funci\u00f3n."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"El segundo argumento en la funci\u00f3n document() debe ser un juego de nodos."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of("Se necesita al menos un elemento <xsl:when> en <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"S\u00f3lo se permite un elemento <xsl:otherwise> en <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise> s\u00f3lo se puede utilizar en <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when> s\u00f3lo se puede utilizar en <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"S\u00f3lo se permiten los elementos <xsl:when> y <xsl:otherwise> en <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of("Falta el atributo \'name\' en <xsl:attribute-set>"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of("Elemento secundario no permitido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of("No se puede llamar \'\'{0}\'\' a un elemento"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of("No se puede llamar \'\'{0}\'\' a un atributo"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of("Datos de texto fuera del elemento <xsl:stylesheet> de nivel superior."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of("El analizador JAXP no se ha configurado correctamente"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of("Error interno de XSLTC irrecuperable: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of("Elemento \'\'{0}\'\' de XSL no soportado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of(u"Extensi\u00f3n \'\'{0}\'\' de XSLTC no reconocida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"El documento de entrada no es una hoja de estilo (el espacio de nombres XSL no se ha declarado en el elemento ra\u00edz)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of("No se ha encontrado el destino de hoja de estilo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of(u"No se ha podido leer el destino de hoja de estilos \'\'{0}\'\', porque no se permite el acceso \'\'{1}\'\' debido a una restricci\u00f3n definida por la propiedad accessExternalStylesheet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of("No implantado: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of("El documento de entrada no contiene una hoja de estilo XSL."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of("No se ha podido analizar el elemento \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of("El atributo use de <key> debe ser node, node-set, string o number."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"La versi\u00f3n del documento XML de salida debe ser 1.0"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"Operador desconocido para la expresi\u00f3n relacional"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of(u"Se est\u00e1 intentando utilizar el juego de atributos \'\'{0}\'\' no existente."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of("No se puede analizar la plantilla del valor de atributo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of("Tipo de datos desconocido en la firma para la clase \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of("No se puede convertir el tipo de datos \'\'{0}\'\' en \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"Templates no contiene una definici\u00f3n de clase translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of("Templates no contiene una clase con el nombre \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of("No se ha podido cargar la clase de translet \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of("La clase de translet se ha cargado, pero no se puede crear una instancia de translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of("Intentando definir ErrorListener para \'\'{0}\'\' como nulo"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of(u"S\u00f3lo StreamSource, SAXSource y DOMSource est\u00e1n soportados por XSLTC"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of("El objeto Source que se ha transferido a \'\'{0}\'\' no tiene contenido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of("No se ha podido compilar la hoja de estilo"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of("TransformerFactory no reconoce el atributo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR),
			$of(u"Valor no v\u00e1lido especificado para el atributo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of("setResult() debe llamarse antes de startDocument()."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of("Transformer no tiene un objeto translet encapsulado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"No se ha definido el manejador de salida para el resultado de la transformaci\u00f3n."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"El objeto Result que se ha pasado a \'\'{0}\'\' no es v\u00e1lido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"Se est\u00e1 intentando acceder a la propiedad \'\'{0}\'\' de Transformer no v\u00e1lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of("No se ha podido crear el adaptador SAX2DOM: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of(u"Se ha llamado a XSLTCSource.build() sin haber definido la identificaci\u00f3n del sistema."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ER_RESULT_NULL),
			$of("El resultado no debe ser nulo"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE),
			$of(u"El valor del par\u00e1metro {0} debe ser un objeto Java v\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"La opci\u00f3n -i debe utilizarse con la opci\u00f3n -o."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"SINOPSIS\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <salida>]\n      [-d <directorio>] [-j <archivo jar>] [-p <paquete>]\n      [-n] [-x] [-u] [-v] [-h] { <hoja de estilo> | -i }\n\nOPCIONES\n   -o <salida>    asigna el nombre de <salida> al translet\n                  generado. Por defecto, el nombre del translet se\n                  deriva del nombre de <hoja de estilo>. Esta opci\u00f3n\n                  se ignora si se compilan varias hojas de estilo.\n   -d <directorio> especifica un directorio de destino para el translet\n   -j <archivo jar>   empaqueta las clases de translet en un archivo jar del\n                  nombre especificado como <archivo jar>\n   -p <paquete>   especifica un prefijo de nombre de paquete para todas las clases de translet n\n                  generadas.\n   -n             permite poner en l\u00ednea la plantilla (comportamiento por defecto mejor\n                  sobre la media).\n   -x             activa la salida del mensaje de depuraci\u00f3n\n   -u             interpreta los a"
				"rgumentos <hoja de estilo> como URL\n   -i             obliga al compilador a leer la hoja de estilo de stdin\n   -v             imprime la versi\u00f3n del compilador\n   -h             imprime esta sentencia de uso\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"SYNOPSIS \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <archivo jar>]\n      [-x] [-n <iteraciones>] {-u <url_documento> | <documento>}\n      <clase> [<par\u00e1metro1>=<valor1> ...]\n\n   utiliza el translet <clase> para transformar un documento XML \n   especificado como <documento>. El translet <clase> se encuentra en\n   la CLASSPATH del usuario o en el <archivo jar> especificado opcionalmente.\nOPCIONES\n   -j <archivo jar>    especifica un archivo jar desde el que cargar el translet\n   -x              activa la salida del mensaje de depuraci\u00f3n adicional\n   -n <iteraciones> ejecuta el n\u00famero de <iteraciones> de una transformaci\u00f3n y\n                   muestra la informaci\u00f3n de la creaci\u00f3n de perfil\n   -u <url_documento> especifica el documento de entrada XML como una URL\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort> s\u00f3lo se puede utilizar en <xsl:for-each> o <xsl:apply-templates>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of(u"La codificaci\u00f3n de salida \'\'{0}\'\' no est\u00e1 soportada en esta JVM."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of("Error de sintaxis en \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of("No se ha encontrado el constructor externo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"El primer argumento de la funci\u00f3n Java no est\u00e1tica \'\'{0}\'\' no es una referencia de objeto v\u00e1lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of(u"Error al comprobar el tipo de la expresi\u00f3n \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"Error al comprobar el tipo de una expresi\u00f3n en una ubicaci\u00f3n desconocida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of(u"La opci\u00f3n de l\u00ednea de comandos \'\'{0}\'\' no es v\u00e1lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of(u"Falta un argumento necesario en la opci\u00f3n de l\u00ednea de comandos \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WARNING_PLUS_WRAPPED_MSG),
			$of("WARNING:  \'\'{0}\'\'\n       :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WARNING_MSG),
			$of("WARNING:  \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FATAL_ERR_PLUS_WRAPPED_MSG),
			$of("FATAL ERROR:  \'\'{0}\'\'\n           :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FATAL_ERR_MSG),
			$of("FATAL ERROR:  \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_PLUS_WRAPPED_MSG),
			$of("ERROR:  \'\'{0}\'\'\n     :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_MSG),
			$of("ERROR:  \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_TRANSLET_STR),
			$of(u"Transformaci\u00f3n que utiliza el translet \'\'{0}\'\' "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of(u"Transformaci\u00f3n que utiliza el translet \'\'{0}\'\' del archivo jar \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of("No se ha podido crear una instancia de la clase TransformerFactory \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT),
			$of(u"El nombre \'\'{0}\'\' no se ha podido utilizar como el nombre de la clase de translet porque contiene caracteres que no est\u00e1n permitidos en el nombre de la clase Java. Se ha utilizado el nombre \'\'{1}\'\' en su lugar."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of("Errores del compilador:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of("Advertencias del compilador:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of("Errores del translet:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_QNAME_ERR),
			$of(u"Un atributo cuyo valor debe ser un QName o lista de QNames separados por espacios en blanco ten\u00eda el valor \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_NCNAME_ERR),
			$of(u"Un atributo cuyo valor debe ser un NCName ten\u00eda el valor \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_METHOD_IN_OUTPUT),
			$of(u"El atributo method de un elemento <xsl:output> ten\u00eda el valor \'\'{0}\'\'. El valor debe ser \'\'xml\'\', \'\'html\'\', \'\'text\'\' o qname-but-not-ncname"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_GET_FEATURE_NULL_NAME),
			$of(u"El nombre de funci\u00f3n no puede ser nulo en TransformerFactory.getFeature (nombre de cadena)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_FEATURE_NULL_NAME),
			$of(u"El nombre de funci\u00f3n no puede ser nulo en TransformerFactory.setFeature (nombre de cadena, valor booleano)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNSUPPORTED_FEATURE),
			$of(u"No se puede definir la funci\u00f3n \'\'{0}\'\'en esta f\u00e1brica del transformador."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: no se puede definir la funci\u00f3n en false cuando est\u00e1 presente el gestor de seguridad."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_TRY_CATCH),
			$of(u"Error interno de XSLTC: el c\u00f3digo de bytes generado contiene un bloque try-catch-finally y no se puede delimitar."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS),
			$of("Error interno de XSLTC: los marcadores OutlineableChunkStart y OutlineableChunkEnd deben estar equilibrados y correctamente anidados."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_DELETED_TARGET),
			$of(u"Error interno de XSLTC: todav\u00eda se hace referencia a una instrucci\u00f3n que formaba parte de un bloque de c\u00f3digo de bytes delimitado en el m\u00e9todo original."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG),
			$of(u"Error interno de XSLTC: un m\u00e9todo en el translet excede la limitaci\u00f3n de Java Virtual Machine de longitud de un m\u00e9todo de 64 kilobytes. Normalmente, esto lo causan plantillas en una hoja de estilos demasiado grandes. Pruebe a reestructurar la hoja de estilos para utilizar plantillas m\u00e1s peque\u00f1as."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DESERIALIZE_TRANSLET_ERR),
			$of(u"Cuando la seguridad de Java est\u00e1 activada, el soporte para anular la serializaci\u00f3n de TemplatesImpl est\u00e1 desactivado. Esto se puede sustituir definiendo la propiedad del sistema jdk.xml.enableTemplatesImplDeserialization en true."_s)
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

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com