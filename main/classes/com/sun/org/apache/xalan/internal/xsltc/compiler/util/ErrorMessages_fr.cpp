#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_fr.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
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

$MethodInfo _ErrorMessages_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_fr::*)()>(&ErrorMessages_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_fr_MethodInfo_
};

$Object* allocate$ErrorMessages_fr($Class* clazz) {
	return $of($alloc(ErrorMessages_fr));
}

void ErrorMessages_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of(u"Plusieurs feuilles de style d\u00e9finies dans le m\u00eame fichier."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of(u"Mod\u00e8le \'\'{0}\'\' d\u00e9j\u00e0 d\u00e9fini dans cette feuille de style."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of(u"Mod\u00e8le \'\'{0}\'\' non d\u00e9fini dans cette feuille de style."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"Plusieurs variables \'\'{0}\'\' d\u00e9finies dans la m\u00eame port\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of(u"La variable ou le param\u00e8tre \'\'{0}\'\' n\'\'est pas d\u00e9fini."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of("Impossible de trouver la classe \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"M\u00e9thode externe \'\'{0}\'\' introuvable (elle doit \u00eatre \"public\")."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of(u"Impossible de convertir le type de retour/d\'\'argument dans l\'\'appel de la m\u00e9thode \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of("Fichier ou URI \'\'{0}\'\' introuvable."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of("URI \'\'{0}\'\' non valide."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CATALOG_EXCEPTION),
			$of(u"JAXP08090001 : le CatalogResolver est activ\u00e9 avec le catalogue \"{0}\", mais une exception CatalogException est renvoy\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of("Impossible d\'\'ouvrir le fichier ou l\'\'URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of(u"El\u00e9ment <xsl:stylesheet> ou <xsl:transform> attendu."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of(u"Le pr\u00e9fixe de l\'\'espace de noms \'\'{0}\'\' n\'\'a pas \u00e9t\u00e9 d\u00e9clar\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of(u"Impossible de r\u00e9soudre l\'\'appel de la fonction \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of(u"L\'\'argument pour \'\'{0}\'\' doit \u00eatre une cha\u00eene litt\u00e9rale."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of("Erreur lors de l\'\'analyse de l\'\'expression XPath \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of("Attribut \'\'{0}\'\' obligatoire manquant."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"Caract\u00e8re \'\'{0}\'\' non admis dans l\'\'expression XPath."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of("Nom \'\'{0}\'\' non admis pour l\'\'instruction de traitement."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of(u"Attribut \'\'{0}\'\' \u00e0 l\'\'ext\u00e9rieur de l\'\'\u00e9l\u00e9ment."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of("Attribut \'\'{0}\'\' non admis."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of(u"Op\u00e9ration import/include circulaire. La feuille de style \'\'{0}\'\' est d\u00e9j\u00e0 charg\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR),
			$of(u"Les enfants d\'\u00e9l\u00e9ment xsl:import doivent pr\u00e9c\u00e9der tous les autres enfants d\'\u00e9l\u00e9ment d\'un \u00e9l\u00e9ment xsl:stylesheet, y compris tout enfant d\'\u00e9l\u00e9ment xsl:include."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of(u"Les fragments de l\'arborescence de r\u00e9sultats ne peuvent pas \u00eatre tri\u00e9s (les \u00e9l\u00e9ments <xsl:sort> ne sont pas pris en compte). Vous devez trier les noeuds lorsque vous cr\u00e9ez l\'arborescence de r\u00e9sultats."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of(u"Le formatage d\u00e9cimal \'\'{0}\'\' est d\u00e9j\u00e0 d\u00e9fini."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of("La version XSL \'\'{0}\'\' n\'\'est pas prise en charge par XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"R\u00e9f\u00e9rence de param\u00e8tre/variable circulaire dans \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"Op\u00e9rateur inconnu pour l\'expression binaire."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of("Arguments non admis pour l\'appel de la fonction."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"Le deuxi\u00e8me argument de la fonction document() doit \u00eatre un jeu de noeuds."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of(u"Au moins un \u00e9l\u00e9ment <xsl:when> est obligatoire dans <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"Un seul \u00e9l\u00e9ment <xsl:otherwise> est autoris\u00e9 dans <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise> ne peut \u00eatre utilis\u00e9 que dans <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when> ne peut \u00eatre utilis\u00e9 que dans <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"Seuls les \u00e9l\u00e9ments <xsl:when> et <xsl:otherwise> sont autoris\u00e9s dans <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of("Attribut \"name\" manquant dans <xsl:attribute-set>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of(u"El\u00e9ment enfant non admis."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of(u"Vous ne pouvez pas appeler un \u00e9l\u00e9ment \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of("Vous ne pouvez pas appeler un attribut \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of(u"Donn\u00e9es texte en dehors de l\'\u00e9l\u00e9ment <xsl:stylesheet> de niveau sup\u00e9rieur."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of(u"L\'analyseur JAXP n\'est pas configur\u00e9 correctement"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of(u"Erreur interne XSLTC irr\u00e9cup\u00e9rable : \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of(u"El\u00e9ment \'\'{0}\'\' XSL non pris en charge."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of("Extension \'\'{0}\'\' XSLTC non reconnue."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"Le document d\'entr\u00e9e n\'est pas une feuille de style (l\'espace de noms XSL n\'est pas d\u00e9clar\u00e9 dans l\'\u00e9l\u00e9ment racine)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of("Cible de feuille de style \'\'{0}\'\' introuvable."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of(u"Impossible de lire la cible de feuille de style \'\'{0}\'\' car l\'\'acc\u00e8s \u00e0 \'\'{1}\'\' n\'\'est pas autoris\u00e9 en raison d\'\'une restriction d\u00e9finie par la propri\u00e9t\u00e9 accessExternalStylesheet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of(u"Non impl\u00e9ment\u00e9 : \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of(u"Le document d\'entr\u00e9e ne contient pas de feuille de style XSL."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of(u"Impossible d\'\'analyser l\'\'\u00e9l\u00e9ment \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of(u"L\'attribut \"use\" de <key> doit \u00eatre node, node-set, string ou number."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"La version du document XML de sortie doit \u00eatre 1.0"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"Op\u00e9rateur inconnu pour l\'expression relationnelle"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of("Tentative d\'\'utilisation de l\'\'ensemble d\'\'attributs non existant \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of(u"Impossible d\'\'analyser le mod\u00e8le de valeur d\'\'attribut \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of(u"Type de donn\u00e9es inconnu dans la signature pour la classe \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of(u"Impossible de convertir le type de donn\u00e9es \'\'{0}\'\' en \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"Cette classe Templates ne contient pas de d\u00e9finition de classe de translet valide."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of("Cette classe Termplates ne contient pas de classe portant le nom \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of("Impossible de charger la classe de translet \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of(u"Classe de translet charg\u00e9e, mais impossible de cr\u00e9er une instance de translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of(u"Tentative de d\u00e9finition d\'\'ErrorListener sur NULL pour \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of("Seuls StreamSource, SAXSource et DOMSource sont pris en charge par XSLTC"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of(u"L\'\'objet Source transmis \u00e0 \'\'{0}\'\' n\'\'a pas de contenu."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of("Impossible de compiler la feuille de style"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of(u"TransformerFactory ne reconna\u00eet pas l\'\'attribut \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR),
			$of(u"La valeur indiqu\u00e9e pour l\'\'attribut \'\'{0}\'\' est incorrecte."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of(u"setResult() doit \u00eatre appel\u00e9 avant startDocument()."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of(u"La classe Transformer ne contient pas d\'objet translet encapsul\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"Aucun gestionnaire de sortie d\u00e9fini pour le r\u00e9sultat de la transformation."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"L\'\'objet de r\u00e9sultat transmis \u00e0 \'\'{0}\'\' n\'\'est pas valide."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"Tentative d\'\'acc\u00e8s \u00e0 la propri\u00e9t\u00e9 Transformer non valide \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of(u"Impossible de cr\u00e9er l\'\'adaptateur SAX2DOM : \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of(u"XSLTCSource.build() appel\u00e9 sans que l\'ID syst\u00e8me soit d\u00e9fini."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ER_RESULT_NULL),
			$of(u"Le r\u00e9sultat ne doit pas \u00eatre NULL"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE),
			$of(u"La valeur du param\u00e8tre {0} doit \u00eatre un objet Java valide"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"L\'option -i doit \u00eatre utilis\u00e9e avec l\'option -o."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"SYNTAXE\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <output>]\n      [-d <directory>] [-j <jarfile>] [-p <package>]\n      [-n] [-x] [-u] [-v] [-h] { <stylesheet> | -i }\n\nOPTIONS\n   -o <output>    attribue le nom <output> au\n                  translet g\u00e9n\u00e9r\u00e9. Par d\u00e9faut, le nom du translet est\n                  d\u00e9riv\u00e9 du nom <stylesheet>. Cette option\n                  n\'est pas prise en compte lors de la compilation de plusieurs feuilles de style.\n   -d <directory> indique un r\u00e9pertoire de destination pour le translet\n   -j <jarfile>   package les classes de translet dans un fichier JAR portant le\n                  nom sp\u00e9cifi\u00e9 comme <jarfile>\n   -p <package>   indique un pr\u00e9fixe de nom de package pour toutes les\n                  classes de translet g\u00e9n\u00e9r\u00e9es.\n   -n             active le mode INLINE du mod\u00e8le (comportement par d\u00e9faut am\u00e9lior\u00e9\n                  en moyenne).\n   -x             active la sortie de messages de d\u00e9bogage suppl\u00e9mentaires\n   -u             interpr\u00e8te les argumen"
				"ts <stylesheet> comme des URL\n   -i             force le compilateur \u00e0 lire la feuille de style \u00e0 partir de STDIN\n   -v             affiche la version du compilateur\n   -h             affiche cette instruction de syntaxe\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"SYNTAXE \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <iterations>] {-u <document_url> | <document>}\n      <class> [<param1>=<value1> ...]\n\n   utilise le translet <class> pour transformer un document XML\n   sp\u00e9cifi\u00e9 comme <document>. Le translet <class> est soit dans\n   la variable d\'environnement CLASSPATH de l\'utilisateur, soit dans un fichier <jarfile> indiqu\u00e9 en option.\nOPTIONS\n   -j <jarfile>    indique un fichier JAR \u00e0 partir duquel charger le translet\n   -x              active la sortie de messages de d\u00e9bogage suppl\u00e9mentaires\n   -n <iterations> ex\u00e9cute la transformation <iterations> fois et\n                   affiche les informations de profilage\n   -u <document_url> sp\u00e9cifie le document d\'entr\u00e9e XML comme URL\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort> peut uniquement \u00eatre utilis\u00e9 dans <xsl:for-each> ou <xsl:apply-templates>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of("L\'\'encodage de sortie \'\'{0}\'\' n\'\'est pas pris en charge sur cette Java Virtual Machine (JVM)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of("Erreur de syntaxe dans \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of("Constructeur \'\'{0}\'\' externe introuvable."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"Le premier argument pour la fonction Java \'\'{0}\'\' non static n\'\'est pas une r\u00e9f\u00e9rence d\'\'objet valide."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of(u"Erreur lors de la v\u00e9rification du type de l\'\'expression \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"Erreur lors de la v\u00e9rification du type d\'expression \u00e0 un emplacement inconnu."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of("L\'\'option de ligne de commande \'\'{0}\'\' n\'\'est pas valide."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of("Argument obligatoire manquant dans l\'\'option de ligne de commande \'\'{0}\'\'."_s)
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
			$of(u"Transformation \u00e0 l\'\'aide du translet \'\'{0}\'\' "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of(u"Transformation \u00e0 l\'\'aide du translet \'\'{0}\'\' dans le fichier JAR \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of(u"Impossible de cr\u00e9er une instance de la classe TransformerFactory \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT),
			$of(u"Impossible d\'\'utiliser le nom \'\'{0}\'\' comme nom de classe de translet car il contient des caract\u00e8res non autoris\u00e9s dans le nom de la classe Java. Le nom \'\'{1}\'\' a \u00e9t\u00e9 utilis\u00e9 \u00e0 la place."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of("Erreurs de compilateur :"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of("Avertissements de compilateur :"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of("Erreurs de translet :"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_QNAME_ERR),
			$of(u"Un attribut dont la valeur doit \u00eatre un QName ou une liste de QNames s\u00e9par\u00e9s par des espaces avait la valeur \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_NCNAME_ERR),
			$of(u"Un attribut dont la valeur doit \u00eatre un NCName avait la valeur \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_METHOD_IN_OUTPUT),
			$of(u"L\'\'attribut \"method\" d\'\'un \u00e9l\u00e9ment <xsl:output> avait la valeur \'\'{0}\'\'. La valeur doit \u00eatre l\'\'une des suivantes : \'\'xml\'\', \'\'html\'\', \'\'text\'\' ou qname-but-not-ncname"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_GET_FEATURE_NULL_NAME),
			$of(u"Le nom de la fonctionnalit\u00e9 ne peut pas \u00eatre NULL dans TransformerFactory.getFeature (cha\u00eene pour le nom)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_FEATURE_NULL_NAME),
			$of(u"Le nom de la fonctionnalit\u00e9 ne peut pas \u00eatre NULL dans TransformerFactory.setFeature (cha\u00eene pour le nom, valeur bool\u00e9enne)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNSUPPORTED_FEATURE),
			$of(u"Impossible de d\u00e9finir la fonctionnalit\u00e9 \'\'{0}\'\' sur cette propri\u00e9t\u00e9 TransformerFactory."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING : impossible de d\u00e9finir la fonctionnalit\u00e9 sur False en pr\u00e9sence du gestionnaire de s\u00e9curit\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_TRY_CATCH),
			$of(u"Erreur XSLTC interne : le code ex\u00e9cutable g\u00e9n\u00e9r\u00e9 contient un bloc try-catch-finally et ne peut pas \u00eatre d\u00e9limit\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS),
			$of(u"Erreur XSLTC interne : les marqueurs OutlineableChunkStart et OutlineableChunkEnd doivent \u00eatre \u00e9quilibr\u00e9s et correctement imbriqu\u00e9s."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_DELETED_TARGET),
			$of(u"Erreur XSLTC interne : une instruction ayant fait partie d\'un bloc de code ex\u00e9cutable d\u00e9limit\u00e9 est toujours r\u00e9f\u00e9renc\u00e9e dans la m\u00e9thode d\'origine."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG),
			$of(u"Erreur XSLTC interne : une m\u00e9thode dans le translet d\u00e9passe la limite de la JVM concernant la longueur d\'une m\u00e9thode de 64 kilo-octets. En g\u00e9n\u00e9ral, ceci est d\u00fb \u00e0 de tr\u00e8s grands mod\u00e8les dans une feuille de style. Essayez de restructurer la feuille de style pour utiliser des mod\u00e8les plus petits."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DESERIALIZE_TRANSLET_ERR),
			$of(u"Lorsque la s\u00e9curit\u00e9 Java est activ\u00e9e, la prise en charge de la d\u00e9s\u00e9rialisation de TemplatesImpl est d\u00e9sactiv\u00e9e. La d\u00e9finition de la propri\u00e9t\u00e9 syst\u00e8me jdk.xml.enableTemplatesImplDeserialization sur True permet de remplacer ce param\u00e8tre."_s)
		})
	});
}

ErrorMessages_fr::ErrorMessages_fr() {
}

$Class* ErrorMessages_fr::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_fr, name, initialize, &_ErrorMessages_fr_ClassInfo_, allocate$ErrorMessages_fr);
	return class$;
}

$Class* ErrorMessages_fr::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com