#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_ca.h>

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
#undef DOCUMENT_ARG_ERR
#undef ELEMENT_PARSE_ERR
#undef ERROR_LISTENER_NULL_ERR
#undef ERROR_MSG
#undef ERROR_PLUS_WRAPPED_MSG
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
#undef INTERNAL_ERR
#undef INVALID_URI_ERR
#undef JAXP_COMPILE_ERR
#undef JAXP_INVALID_ATTR_ERR
#undef JAXP_NO_HANDLER_ERR
#undef JAXP_NO_RESULT_ERR
#undef JAXP_NO_SOURCE_ERR
#undef JAXP_NO_TRANSLET_ERR
#undef JAXP_SECUREPROCESSING_FEATURE
#undef JAXP_SET_RESULT_ERR
#undef JAXP_UNKNOWN_PROP_ERR
#undef JAXP_UNKNOWN_SOURCE_ERR
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

$MethodInfo _ErrorMessages_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_ca::*)()>(&ErrorMessages_ca::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_ca_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_ca",
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
			$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of(u"S\'ha definit m\u00e9s d\'un full d\'estils en el mateix fitxer."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of(u"La plantilla \'\'{0}\'\' ja est\u00e0 definida en aquest full d\'\'estils."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of(u"La plantilla \'\'{0}\'\' no est\u00e0 definida en aquest full d\'\'estils."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"La variable \'\'{0}\'\' s\'\'ha definit m\u00e9s d\'\'una vegada en el mateix \u00e0mbit."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of(u"La variable o el par\u00e0metre \'\'{0}\'\' no s\'\'ha definit."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of("No s\'\'ha trobat la classe \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"No s\'\'ha trobat el m\u00e8tode extern \'\'{0}\'\' (ha de ser public)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of(u"No s\'\'ha pogut convertir l\'\'argument o tipus de retorn a la crida del m\u00e8tode \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of("No s\'\'ha trobat el fitxer o URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of(u"L\'\'URI \'\'{0}\'\' no \u00e9s v\u00e0lid."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of("No es pot obrir el fitxer o l\'\'URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of("S\'\'esperava l\'\'element <xsl:stylesheet> o <xsl:transform>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of("El prefix d\'\'espai de noms \'\'{0}\'\' no s\'\'ha declarat."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of(u"No s\'\'ha pogut resoldre la crida de la funci\u00f3 \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of("L\'\'argument de \'\'{0}\'\' ha de ser una cadena de literals."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of(u"S\'\'ha produ\u00eft un error en analitzar l\'\'expressi\u00f3 XPath \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of("No s\'\'ha especificat l\'\'atribut obligatori \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"L\'\'expressi\u00f3 XPath cont\u00e9 el car\u00e0cter no perm\u00e8s \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of(u"La instrucci\u00f3 de processament t\u00e9 el nom no perm\u00e8s \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of("L\'\'atribut \'\'{0}\'\' es troba fora de l\'\'element."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of("No es permet l\'\'atribut \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of("Import/include circular. El full d\'\'estils \'\'{0}\'\' ja s\'\'ha carregat."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of("Els fragments de l\'arbre de resultats no es poden classificar (es passen per alt els elements <xsl:sort>). Heu de classificar els nodes quan creeu l\'arbre de resultats. "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of(u"El formatatge decimal \'\'{0}\'\' ja est\u00e0 definit."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of(u"XSLTC no d\u00f3na suport a la versi\u00f3 XSL \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"Hi ha una refer\u00e8ncia de variable/par\u00e0metre circular a \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"L\'operador de l\'expressi\u00f3 bin\u00e0ria \u00e9s desconegut."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of(u"La crida de funci\u00f3 t\u00e9 arguments no permesos."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"El segon argument de la funci\u00f3 document() ha de ser un conjunt de nodes."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of(u"Es necessita com a m\u00ednim un element <xsl:when> a <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"Nom\u00e9s es permet un element <xsl:otherwise> a <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise> nom\u00e9s es pot utilitzar dins de <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when> nom\u00e9s es pot utilitzar dins de <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"A <xsl:choose> nom\u00e9s es permeten els elements <xsl:when> i <xsl:otherwise>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of("L\'atribut \'name\' falta a <xsl:attribute-set>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of(u"L\'element subordinat no \u00e9s perm\u00e8s."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of("No podeu cridar un element \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of("No podeu cridar un atribut \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of("Hi ha dades fora de l\'element de nivell superior <xsl:stylesheet>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of("L\'analitzador JAXP no s\'ha configurat correctament"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of(u"S\'\'ha produ\u00eft un error intern d\'\'XSLTC irrecuperable: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of(u"L\'\'element d\'\'XSL \'\'{0}\'\' no t\u00e9 suport."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of(u"No es reconeix l\'\'extensi\u00f3 d\'\'XSLTC \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"El document d\'entrada no \u00e9s un full d\'estils (l\'espai de noms XSL no s\'ha declarat en l\'element arrel)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of(u"No s\'\'ha trobat la destinaci\u00f3 \'\'{0}\'\' del full d\'\'estils."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of("Could not read stylesheet target \'\'{0}\'\', because \'\'{1}\'\' access is not allowed."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of("No s\'\'ha implementat \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of(u"El document d\'entrada no cont\u00e9 cap full d\'estils XSL."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of("No s\'\'ha pogut analitzar l\'\'element \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of("L\'atribut use de <key> ha de ser node, node-set, string o number."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"La versi\u00f3 del document XML de sortida ha de ser 1.0"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"L\'operador de l\'expressi\u00f3 relacional \u00e9s desconegut."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of("S\'\'ha intentat utilitzar el conjunt d\'\'atributs \'\'{0}\'\' que no existeix."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of("No es pot analitzar la plantilla de valors d\'\'atributs \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of(u"El tipus de dades de la signatura de la classe \'\'{0}\'\' \u00e9s desconegut."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of("No es pot convertir el tipus de dades \'\'{0}\'\' en \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"Templates no cont\u00e9 cap definici\u00f3 de classe translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of(u"Templates no cont\u00e9 cap classe amb el nom \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of("No s\'\'ha pogut carregar la classe translet \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of(u"La classe translet s\'\'ha carregat, per\u00f2 no es pot crear la inst\u00e0ncia translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of("S\'\'ha intentat establir ErrorListener de \'\'{0}\'\' en un valor nul."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of(u"XSLTC nom\u00e9s d\u00f3na suport a StreamSource, SAXSource i DOMSource."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of(u"L\'\'objecte source donat a \'\'{0}\'\' no t\u00e9 contingut."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of("No s\'ha pogut compilar el full d\'estils."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of("TransformerFactory no reconeix l\'\'atribut \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of("setResult() s\'ha de cridar abans de startDocument()."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of(u"Transformer no cont\u00e9 cap objecte translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"No s\'ha definit cap manejador de sortida per al resultat de transformaci\u00f3."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"L\'\'objecte result donat a \'\'{0}\'\' no \u00e9s v\u00e0lid."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"S\'\'ha intentat accedir a una propietat Transformer \'\'{0}\'\' no v\u00e0lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of("No s\'\'ha pogut crear l\'\'adaptador SAX2DOM \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of(u"S\'ha cridat XSLTCSource.build() sense que s\'hagu\u00e9s establert la identificaci\u00f3 del sistema."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"L\'opci\u00f3 -i s\'ha d\'utilitzar amb l\'opci\u00f3 -o."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"RESUM\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <sortida>]\n      [-d <directori>] [-j <fitxer_jar>] [-p <paquet>]\n      [-n] [-x] [-s] [-u] [-v] [-h] { <full_estils> |  -i }\n\nOPCIONS\n   -o <sortida>    assigna el nom <sortida> al translet\n generat. Per defecte, el nom de translet\n s\'obt\u00e9 del nom de <full_estils>. Aquesta opci\u00f3\n no es t\u00e9 en compte si es compilen diversos fulls d\'estils.\n   -d <directori> especifica un directori de destinaci\u00f3 per al translet\n   -j <fitxer_jar>   empaqueta les classes translet en un fitxer jar del nom\n                  especificat com a <fitxer_jar>\n   -p <paquet> especifica un prefix de nom de paquet per a totes les classes\n                  translet generades.\n -n habilita l\'inlining (com a mitjana, el funcionament per defecte\n \u00e9s millor).\n   -x            habilita la sortida de missatges de depuraci\u00f3 addicionals\n   -s inhabilita la crida de System.exit\n   -u             interpreta els arguments <full_estils> com URL\n -i obliga el compilador a llegir "
				"el full d\'estils des de l\'entrada est\u00e0ndard\n   -v imprimeix la versi\u00f3 del compilador\n   -h             imprimeix aquesta sent\u00e8ncia d\'\u00fas.\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"RESUM \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <fitxer_jar>]\n      [-x] [-s] [-n <iteracions>] {-u <url_document> | <document>}\n      <classe> [<par\u00e0m1>=<valor1> ...]\n\n   utilitza la <classe> translet per transformar un document XML\n   especificat com a <document>. La <classe> translet es troba\n   o b\u00e9 a la CLASSPATH de l\'usuari o b\u00e9 al <fitxer_jar> que es pot especificar opcionalment.\nOPCIONS\n   -j <fitxer_jar>    especifica un fitxer jar des del qual es pot carregar el translet\n   -x habilita la sortida de missatges de depuraci\u00f3 addicionals\n   -s              inhabilita la crida de System.exit\n   -n <iteracions> executa la transformaci\u00f3 el nombre de vegades <iteracions> i\n               mostra informaci\u00f3 de perfil\n   -u <url_document> especifica el document d\'entrada XML com una URL\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort> nom\u00e9s es pot utilitzar amb <xsl:for-each> o <xsl:apply-templates>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of(u"Aquesta JVM no d\u00f3na suport a la codificaci\u00f3 de sortida \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of(u"S\'\'ha produ\u00eft un error de sintaxi a \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of("No s\'\'ha trobat el constructor extern \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"El primer argument de la funci\u00f3 Java no static \'\'{0}\'\' no \u00e9s una refer\u00e8ncia d\'\'objecte v\u00e0lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of(u"S\'\'ha produ\u00eft un error en comprovar el tipus de l\'\'expressi\u00f3 \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"S\'ha produ\u00eft un error en comprovar el tipus d\'expressi\u00f3 en una ubicaci\u00f3 desconeguda."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of(u"L\'\'opci\u00f3 de l\u00ednia d\'\'ordres \'\'{0}\'\' no \u00e9s v\u00e0lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of(u"A l\'\'opci\u00f3 de l\u00ednia d\'\'ordres \'\'{0}\'\' li falta un argument obligatori."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WARNING_PLUS_WRAPPED_MSG),
			$of(u"AV\u00cdS: \'\'{0}\'\'\n       :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WARNING_MSG),
			$of(u"AV\u00cdS: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FATAL_ERR_PLUS_WRAPPED_MSG),
			$of("ERROR MOLT GREU: \'\'{0}\'\'\n           :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FATAL_ERR_MSG),
			$of("ERROR MOLT GREU: \'\'{0}\'\'"_s)
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
			$of(u"Transformaci\u00f3 mitjan\u00e7ant translet \'\'{0}\'\' "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of(u"Transformaci\u00f3 mitjan\u00e7ant translet \'\'{0}\'\' des del fitxer jar \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of(u"No s\'\'ha pogut crear una inst\u00e0ncia de la classe TransformerFactory \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of("Errors del compilador:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of("Avisos del compilador:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of("Errors de translet:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of("FEATURE_SECURE_PROCESSING: Cannot set the feature to false when security manager is present."_s)
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

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com