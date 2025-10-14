#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_sv.h>

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

$MethodInfo _ErrorMessages_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_sv::*)()>(&ErrorMessages_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_sv",
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
			$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of(u"Fler \u00e4n en formatmall har definierats i samma fil."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of("Mallen \'\'{0}\'\' har redan definierats i denna formatmall."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of("Mallen \'\'{0}\'\' har inte definierats i denna formatmall."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"Variabeln \'\'{0}\'\' har definierats flera g\u00e5nger i samma omfattning."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of("Variabeln eller parametern \'\'{0}\'\' har inte definierats."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of("Hittar inte klassen \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"Hittar inte den externa metoden \'\'{0}\'\' (m\u00e5ste vara allm\u00e4n)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of("Kan inte konvertera argument/returtyp vid anrop till metoden \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of("Fil eller URI \'\'{0}\'\' hittades inte."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of("Ogiltig URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CATALOG_EXCEPTION),
			$of(u"JAXP08090001: CatalogResolver \u00e4r aktiverat med katalogen \"{0}\", men ett CatalogException returneras."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of(u"Kan inte \u00f6ppna filen eller URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of(u"F\u00f6rv\u00e4ntade <xsl:stylesheet>- eller <xsl:transform>-element."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of("Namnrymdsprefixet \'\'{0}\'\' har inte deklarerats."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of("Kan inte matcha anrop till funktionen \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of(u"Argument till \'\'{0}\'\' m\u00e5ste vara en litteral str\u00e4ng."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of("Fel vid tolkning av XPath-uttrycket \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of("Det obligatoriska attributet \'\'{0}\'\' saknas."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"Otill\u00e5tet tecken \'\'{0}\'\' i XPath-uttrycket."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of(u"\'\'{0}\'\' \u00e4r ett otill\u00e5tet namn i bearbetningsinstruktion."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of(u"Attributet \'\'{0}\'\' finns utanf\u00f6r elementet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of(u"\'\'{0}\'\' \u00e4r ett otill\u00e5tet attribut."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of(u"Cirkul\u00e4r import/include. Formatmallen \'\'{0}\'\' har redan laddats."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR),
			$of(u"Underordnade till xsl:import-elementet m\u00e5ste komma f\u00f6re alla andra underordnade till element f\u00f6r ett xsl:stylesheet-element, inklusive alla underordnade till xsl:include-elementet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of(u"Resultattr\u00e4dfragment kan inte sorteras (<xsl:sort>-element ignoreras). Du m\u00e5ste sortera noderna n\u00e4r resultattr\u00e4det skapas."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of("Decimalformateringen \'\'{0}\'\' har redan definierats."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of(u"XSL-versionen \'\'{0}\'\' underst\u00f6ds inte i XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"Cirkul\u00e4r variabel-/parameterreferens i \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"Ok\u00e4nd operator f\u00f6r bin\u00e4rt uttryck."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of(u"Otill\u00e5tna argument f\u00f6r funktionsanrop."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"Andra argumentet f\u00f6r document()-funktion m\u00e5ste vara en nodupps\u00e4ttning."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of(u"Minst ett <xsl:when>-element kr\u00e4vs i <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"Endast ett <xsl:otherwise>-element \u00e4r till\u00e5tet i <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise> anv\u00e4nds endast inom <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when> anv\u00e4nds endast inom <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"Endast <xsl:when>- och <xsl:otherwise>-element \u00e4r till\u00e5tna i <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of("<xsl:attribute-set> saknar \'name\'-attribut."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of(u"Otill\u00e5tet underordnat element."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of("Du kan inte anropa elementet \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of("Du kan inte anropa attributet \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of(u"Textdata utanf\u00f6r toppniv\u00e5elementet <xsl:stylesheet>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of("JAXP-parser har inte konfigurerats korrekt"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of(u"O\u00e5terkalleligt internt XSLTC-fel: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of(u"XSL-elementet \'\'{0}\'\' st\u00f6ds inte."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of(u"XSLTC-till\u00e4gget \'\'{0}\'\' \u00e4r ok\u00e4nt."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"Indatadokumentet \u00e4r ingen formatmall (XSL-namnrymden har inte deklarerats i rotelementet)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of("Hittade inte formatmallen \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of(u"Kunde inte l\u00e4sa formatmallen \'\'{0}\'\', eftersom \'\'{1}\'\'-\u00e5tkomst inte till\u00e5ts p\u00e5 grund av begr\u00e4nsning som anges av egenskapen accessExternalStylesheet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of("Inte implementerad: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of(u"Indatadokumentet inneh\u00e5ller ingen XSL-formatmall."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of("Kunde inte tolka elementet \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of(u"use-attribut f\u00f6r <key> m\u00e5ste vara node, node-set, string eller number."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"XML-dokumentets utdataversion m\u00e5ste vara 1.0"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"Ok\u00e4nd operator f\u00f6r relationsuttryck"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of(u"F\u00f6rs\u00f6ker anv\u00e4nda en icke-befintlig attributupps\u00e4ttning \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of(u"Kan inte tolka attributv\u00e4rdemallen \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of(u"Ok\u00e4nd datatyp i signaturen f\u00f6r klassen \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of("Kan inte konvertera datatyp \'\'{0}\'\' till \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"Templates inneh\u00e5ller inte n\u00e5gon giltig klassdefinition f\u00f6r translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of(u"Templates inneh\u00e5ller inte n\u00e5gon klass med namnet \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of("Kunde inte ladda translet-klassen \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of("Translet-klassen har laddats, men kan inte skapa instans av translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of(u"F\u00f6rs\u00f6ker st\u00e4lla in ErrorListener f\u00f6r \'\'{0}\'\' p\u00e5 null"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of(u"Endast StreamSource, SAXSource och DOMSource st\u00f6ds av XSLTC"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of(u"Source-objektet som \u00f6verf\u00f6rdes till \'\'{0}\'\' saknar inneh\u00e5ll."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of("Kunde inte kompilera formatmall"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of(u"TransformerFactory k\u00e4nner inte igen attributet \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR),
			$of(u"Fel v\u00e4rde har angetts f\u00f6r attributet \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of(u"setResult() m\u00e5ste anropas f\u00f6re startDocument()."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of(u"Transformer saknar inkapslat objekt f\u00f6r translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"Det finns ingen definierad utdatahanterare f\u00f6r transformeringsresultat."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"Result-objekt som \u00f6verf\u00f6rdes till \'\'{0}\'\' \u00e4r ogiltigt."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"F\u00f6rs\u00f6ker f\u00e5 \u00e5tkomst till ogiltig Transformer-egenskap, \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of("Kunde inte skapa SAX2DOM-adapter: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of("XSLTCSource.build() anropades utan angivet systemId."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ER_RESULT_NULL),
			$of("Result borde inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE),
			$of(u"Parameterv\u00e4rdet f\u00f6r {0} m\u00e5ste vara giltigt Java-objekt"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"Alternativet -i m\u00e5ste anv\u00e4ndas med alternativet -o."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"SYNOPSIS\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <utdata>]\n      [-d <katalog>] [-j <jarfile>] [-p <paket>]\n      [-n] [-x] [-u] [-v] [-h] { <formatmall> | -i }\n\nALTERNATIV\n   -o <utdata>    tilldelar namnet <utdata> till genererad\n                  translet. Som standard tas namnet p\u00e5 translet\n                  fr\u00e5n namnet p\u00e5 <formatmallen>. Alternativet\n                  ignoreras vid kompilering av flera formatmallar.\n   -d <katalog> anger en destinationskatalog f\u00f6r translet\n   -j <jarfile>   paketerar transletklasserna i en jar-fil med\n                  namnet <jarfile>\n   -p <paket>   anger ett paketnamnprefix f\u00f6r alla genererade\n                  transletklasser.\n   -n             aktiverar mallinfogning (ger ett b\u00e4ttre genomsnittligt\n                  standardbeteende).\n   -x             ger ytterligare fels\u00f6kningsmeddelanden\n   -u             tolkar argument i <formatmall> som URL:er\n   -i             tvingar kompilatorn att l\u00e4sa formatmallen fr\u00e5n stdin\n   -v             sk"
				"river ut kompilatorns versionsnummer\n   -h             skriver ut denna syntaxsats\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"SYNOPSIS \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <iterationer>] {-u <dokument_url> | <dokument>}\n      <klass> [<param1>=<v\u00e4rde1> ...]\n\n   anv\u00e4nder translet <klass> vid transformering av XML-dokument \n   angivna som <dokument>. Translet-<klass> finns antingen i\n   anv\u00e4ndarens CLASSPATH eller i valfritt angiven <jarfile>.\nALTERNATIV\n   -j <jarfile>    anger en jar-fil varifr\u00e5n translet laddas\n   -x              ger ytterligare fels\u00f6kningsmeddelanden\n   -n <iterationer> k\u00f6r <iterations>-tider vid transformering och\n                   visar profileringsinformation\n   -u <dokument_url> anger XML-indatadokument som URL\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort> kan anv\u00e4ndas endast i <xsl:for-each> eller <xsl:apply-templates>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of(u"Utdatakodning \'\'{0}\'\' underst\u00f6ds inte i JVM."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of("Syntaxfel i \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of("Hittar inte den externa konstruktorn \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"Det f\u00f6rsta argumentet f\u00f6r den icke-statiska Java-funktionen \'\'{0}\'\' \u00e4r inte n\u00e5gon giltig objektreferens."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of("Fel vid kontroll av typ av uttrycket \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"Fel vid kontroll av typ av ett uttryck p\u00e5 ok\u00e4nd plats."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of("Ogiltigt kommandoradsalternativ: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of("Kommandoradsalternativet \'\'{0}\'\' saknar obligatoriskt argument."_s)
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
			$of("Transformering via translet \'\'{0}\'\' "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of(u"Transformering via translet \'\'{0}\'\' fr\u00e5n jar-filen \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of("Kunde inte skapa en instans av TransformerFactory-klassen \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT),
			$of(u"\'\'{0}\'\' kunde inte anv\u00e4ndas som namn p\u00e5 transletklassen eftersom det inneh\u00e5ller otill\u00e5tna tecken f\u00f6r Java-klassnamn. Namnet \'\'{1}\'\' anv\u00e4ndes ist\u00e4llet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of("Kompileringsfel:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of("Kompileringsvarningar:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of("Transletfel:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_QNAME_ERR),
			$of(u"Ett attribut vars v\u00e4rde m\u00e5ste vara ett QName eller en blankteckenavgr\u00e4nsad lista med QNames hade v\u00e4rdet \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_NCNAME_ERR),
			$of(u"Ett attribut vars v\u00e4rde m\u00e5ste vara ett NCName hade v\u00e4rdet \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_METHOD_IN_OUTPUT),
			$of(u"Metodattributet f\u00f6r ett <xsl:output>-element hade v\u00e4rdet \'\'{0}\'\'. Endast n\u00e5got av f\u00f6ljande v\u00e4rden kan anv\u00e4ndas: \'\'xml\'\', \'\'html\'\', \'\'text\'\' eller qname-but-not-ncname i XML"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_GET_FEATURE_NULL_NAME),
			$of(u"Funktionsnamnet kan inte vara null i TransformerFactory.getFeature(namn p\u00e5 str\u00e4ng)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_FEATURE_NULL_NAME),
			$of(u"Funktionsnamnet kan inte vara null i TransformerFactory.setFeature(namn p\u00e5 str\u00e4ng, booleskt v\u00e4rde)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNSUPPORTED_FEATURE),
			$of(u"Kan inte st\u00e4lla in funktionen \'\'{0}\'\' i denna TransformerFactory."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: Funktionen kan inte anges till false om s\u00e4kerhetshanteraren anv\u00e4nds."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_TRY_CATCH),
			$of(u"Internt XSLTC-fel: den genererade bytekoden inneh\u00e5ller ett try-catch-finally-block och kan inte g\u00f6ras till en disposition."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS),
			$of(u"Internt XSLTC-fel: mark\u00f6rerna OutlineableChunkStart och OutlineableChunkEnd m\u00e5ste vara balanserade och korrekt kapslade."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_DELETED_TARGET),
			$of("Internt XSLTC-fel: originalmetoden refererar fortfarande till en instruktion som var en del av ett bytekodsblock som gjordes till en disposition."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG),
			$of(u"Internt XSLTC-fel: en metod i transleten \u00f6verstiger Java Virtual Machines l\u00e4ngdbegr\u00e4nsning f\u00f6r en metod p\u00e5 64 kilobytes.  Det h\u00e4r orsakas vanligen av mycket stora mallar i en formatmall. F\u00f6rs\u00f6k att omstrukturera formatmallen att anv\u00e4nda mindre mallar."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DESERIALIZE_TRANSLET_ERR),
			$of(u"N\u00e4r Java-s\u00e4kerheten \u00e4r aktiverad \u00e4r st\u00f6det f\u00f6r avserialisering av TemplatesImpl avaktiverat. Du kan \u00e5sidos\u00e4tta det h\u00e4r genom att st\u00e4lla in systemegenskapen jdk.xml.enableTemplatesImplDeserialization till sant."_s)
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

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com