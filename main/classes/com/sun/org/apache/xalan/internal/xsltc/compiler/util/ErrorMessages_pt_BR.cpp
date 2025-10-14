#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_pt_BR.h>

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

$MethodInfo _ErrorMessages_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorMessages_pt_BR::*)()>(&ErrorMessages_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorMessages_pt_BR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_pt_BR_MethodInfo_
};

$Object* allocate$ErrorMessages_pt_BR($Class* clazz) {
	return $of($alloc(ErrorMessages_pt_BR));
}

void ErrorMessages_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_pt_BR::getContents() {
			$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of("Mais de uma folha de estilos definida no mesmo arquivo."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of(u"O modelo \'\'{0}\'\' j\u00e1 foi definido nesta folha de estilos."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of(u"O modelo \'\'{0}\'\' n\u00e3o foi definido nesta folha de estilos."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"A vari\u00e1vel \'\'{0}\'\' est\u00e1 definida v\u00e1rias vezes no mesmo escopo."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of(u"Vari\u00e1vel ou par\u00e2metro \'\'{0}\'\' indefinido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of(u"N\u00e3o \u00e9 poss\u00edvel localizar a classe \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"N\u00e3o \u00e9 poss\u00edvel localizar o m\u00e9todo externo \'\'{0}\'\' (deve ser p\u00fablico)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of(u"N\u00e3o \u00e9 poss\u00edvel converter o argumento/tipo de retorno na chamada para o m\u00e9todo \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of(u"Arquivo ou URI \'\'{0}\'\' n\u00e3o encontrado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of(u"URI inv\u00e1lido \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CATALOG_EXCEPTION),
			$of(u"JAXP08090001: O CatalogResolver foi ativado com o cat\u00e1logo \"{0}\", mas uma CatalogException foi retornada."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of(u"N\u00e3o \u00e9 poss\u00edvel abrir o arquivo ou o URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of("elemento <xsl:stylesheet> ou <xsl:transform> esperado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of(u"O prefixo do namespace \'\'{0}\'\' n\u00e3o foi declarado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of(u"N\u00e3o \u00e9 poss\u00edvel resolver a chamada para a fun\u00e7\u00e3o \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of("O argumento para \"{0}\'\' deve ser uma string literal."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of(u"Erro durante o parsing da express\u00e3o XPath \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of(u"O atributo obrigat\u00f3rio \'\'{0}\'\' n\u00e3o foi encontrado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"Caractere inv\u00e1lido \'\'{0}\'\' na express\u00e3o XPath."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of(u"Nome inv\u00e1lido \'\'{0}\'\' para instru\u00e7\u00e3o de processamento."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of("Atributo \'\'{0}\'\' fora do elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of(u"Atributo \'\'{0}\'\' inv\u00e1lido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of(u"Import/Include circular. Folha de estilos \'\'{0}\'\' j\u00e1 carregada."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR),
			$of("Os filhos do elemento xsl:import devem preceder todos os outros filhos de um elemento xsl:stylesheet, inclusive quaisquer filhos do elemento xsl:include."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of(u"Os fragmentos da \u00e1rvore n\u00e3o podem ser classificados (os elementos <xsl:sort> foram ignorados). Voc\u00ea deve classificar os n\u00f3s ao criar a \u00e1rvore de resultados."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of(u"A formata\u00e7\u00e3o decimal \'\'{0}\'\' j\u00e1 foi definida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of(u"A vers\u00e3o XSL \"{0}\'\' n\u00e3o \u00e9 suportada por XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"Refer\u00eancia de vari\u00e1vel/par\u00e2metro circulares \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"Operador desconhecido para a express\u00e3o bin\u00e1ria."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of(u"Argumento(s) inv\u00e1lido(s) para a chamada da fun\u00e7\u00e3o."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"O segundo argumento para a fun\u00e7\u00e3o document() deve ser um conjunto de n\u00f3s."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of(u"\u00c9 necess\u00e1rio, pelo menos, um elemento <xsl:when> em <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"\u00c9 permitido somente um elemento <xsl:otherwise> em <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise> s\u00f3 pode ser usado em <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when> s\u00f3 pode ser usado em <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"Somente os elementos <xsl:when> e <xsl:otherwise> s\u00e3o permitidos em <xsl:choose>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of(u"<xsl:attribute-set> n\u00e3o encontrado no atributo \'name\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of(u"Elemento filho inv\u00e1lido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of(u"Voc\u00ea n\u00e3o pode chamar um elemento \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of(u"Voc\u00ea n\u00e3o pode chamar um atributo \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of(u"Dados de texto fora do elemento <xsl:stylesheet> de n\u00edvel superior."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of(u"Parser de JAXP n\u00e3o configurado corretamente"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of(u"Erro interno-XSLTC irrecuper\u00e1vel: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of(u"Elemento XSL n\u00e3o suportado \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of(u"Extens\u00e3o de XSLTC n\u00e3o reconhecida \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"O documento de entrada n\u00e3o \u00e9 uma folha de estilos (o namespace XSL n\u00e3o foi declarado no elemento-raiz)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of(u"N\u00e3o foi poss\u00edvel localizar o alvo da folha de estilos \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of(u"N\u00e3o foi poss\u00edvel ler o alvo \'\'{0}\'\' da folha de estilos, porque o acesso a \'\'{1}\'\' n\u00e3o \u00e9 permitido em virtude da restri\u00e7\u00e3o definida pela propriedade accessExternalStylesheet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of(u"N\u00e3o implementado: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of(u"O documento de entrada n\u00e3o cont\u00e9m uma folha de estilos XSL."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of(u"N\u00e3o foi poss\u00edvel fazer parsing do elemento \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of("O atributo use de <key> deve ser node, node-set, string ou number."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"A vers\u00e3o do documento XML de sa\u00edda deve ser 1.0"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"Opera\u00e7\u00e3o desconhecida para a express\u00e3o relacional"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of(u"Tentativa de usar um conjunto de atributos \'\'{0}\'\' n\u00e3o existente."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of(u"N\u00e3o \u00e9 poss\u00edvel fazer parsing do modelo do valor do atributo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of("Tipo de dados desconhecido na assinatura da classe \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of(u"N\u00e3o \u00e9 poss\u00edvel converter o tipo de dados \'\'{0}\'\' em \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"Este Templates n\u00e3o cont\u00e9m uma defini\u00e7\u00e3o de classe translet v\u00e1lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of(u"Este Templates n\u00e3o cont\u00e9m uma classe com o nome \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of(u"N\u00e3o foi poss\u00edvel carregar a classe translet \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of(u"Classe translet carregada, mas n\u00e3o \u00e9 poss\u00edvel criar uma inst\u00e2ncia translet."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of("Tentativa de definir ErrorListener para \'\'{0}\'\' como nulo"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of(u"Somente StreamSource, SAXSource e DOMSource s\u00e3o suportados por XSLTC"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of(u"O objeto source especificado para \'\'{0}\'\' n\u00e3o tem conte\u00fado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of(u"N\u00e3o foi poss\u00edvel compilar a folha de estilos"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of(u"TransformerFactory n\u00e3o reconhece o atributo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR),
			$of("Valor incorreto especificado para o atributo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of("setResult() deve ser chamado antes de startDocument()."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of(u"O Transformer n\u00e3o tem um objeto translet encapsulado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"Nenhum handler de sa\u00edda definido para o resultado da transforma\u00e7\u00e3o."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"O objeto result especificado para \'\'{0}\'\' \u00e9 inv\u00e1lido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"Tentativa de acessar a propriedade \'\'{0}\'\' do Transformer inv\u00e1lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of(u"N\u00e3o foi poss\u00edvel criar o adaptador SAX2DOM: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of("XSLTCSource.build() chamado sem o systemId ser definido."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ER_RESULT_NULL),
			$of(u"O resultado n\u00e3o deve ser nulo"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE),
			$of(u"O valor do par\u00e2metro {0} deve ser um Objeto Java v\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"A op\u00e7\u00e3o -i deve ser usada com a op\u00e7\u00e3o -o."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"SINOPSE\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <sa\u00edda>]\n      [-d <diret\u00f3rio>] [-j <jarfile>] [-p <pacote>]\n      [-n] [-x] [-u] [-v] [-h] { <folha de estilos> | -i }\n\nOP\u00c7\u00d5ES\n   -o <sa\u00edda>    atribui o nome <sa\u00edda> ao translet\n                  gerado.  Por padr\u00e3o, o nome translet\n                  origina-se do nome <folha de estilos>.  Esta op\u00e7\u00e3o\n                  \u00e9 ignorada caso sejam compiladas v\u00e1rias folhas de estilos.\n   -d <diret\u00f3rio> especifica um diret\u00f3rio de destino para translet\n   -j <arquivo jar>   empacota as classes translet em um arquivo jar do\n                  nome especificado como <arquivo jar>\n   -p <pacote>   especifica um prefixo de nome do pacote para todas as classes\n                  translet geradas.\n   -n             permite a inclus\u00e3o do modelo na linha (comportamento padr\u00e3o melhor\n                  em m\u00e9dia).\n   -x             ativa a sa\u00edda de mensagens de depura\u00e7\u00e3o adicionais\n   -u             interpreta os argumentos <folha de estilos> como URLs\n   "
				"-i             obriga o compilador a ler a folha de estilos de stdin\n   -v             imprime a vers\u00e3o do compilador\n   -h             imprime esta instru\u00e7\u00e3o de uso\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"SINOPSE \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transforme [-j <arquivo jar>]\n      [-x] [-n <itera\u00e7\u00f5es>] {-u <url_documento> | <documento>}\n      <classe> [<par\u00e2m1>=<valor1> ...]\n\n   usa a <classe> translet para transformar um documento XML \n   especificado como <documento>. O translet <classe> est\u00e1 no\n   CLASSPATH do usu\u00e1rio ou no <arquivo jar> opcionalmente especificado.\nOP\u00c7\u00d5ES\n   -j <arquivo jar>    especifica um arquivo jar com base no qual ser\u00e1 carregado o translet\n   -x              ativa a sa\u00edda de mensagens de depura\u00e7\u00e3o adicionais\n   -n <itera\u00e7\u00f5es> executa a transforma\u00e7\u00e3o <itera\u00e7\u00f5es> vezes e\n                   exibe as informa\u00e7\u00f5es de perfis\n   -u <url_documento> especifica o documento XML de entrada na forma de URL\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort> s\u00f3 pode ser usado dentro de <xsl:for-each> ou <xsl:apply-templates>."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of(u"A codifica\u00e7\u00e3o de sa\u00edda \'\'{0}\'\' n\u00e3o \u00e9 suportada nesta JVM."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of("Erro de sintaxe em \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of(u"N\u00e3o \u00e9 poss\u00edvel localizar o construtor externo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"O primeiro argumento para a fun\u00e7\u00e3o Java n\u00e3o static \'\'{0}\'\' n\u00e3o \u00e9 uma refer\u00eancia de objeto v\u00e1lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of(u"Erro ao verificar o tipo de express\u00e3o \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"Erro ao verificar o tipo de uma express\u00e3o em uma localiza\u00e7\u00e3o desconhecida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of(u"A op\u00e7\u00e3o da linha de comandos \'\'{0}\'\' n\u00e3o \u00e9 v\u00e1lida."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of(u"A op\u00e7\u00e3o da linha de comandos \'\'{0}\'\' n\u00e3o encontrou um argumento obrigat\u00f3rio."_s)
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
			$of("Transformar usando translet \'\'{0}\'\' "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of("Transformar usando translet \'\'{0}\'\' do arquivo jar \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of(u"N\u00e3o foi poss\u00edvel criar uma inst\u00e2ncia da classe TransformerFactory \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT),
			$of(u"N\u00e3o foi poss\u00edvel usar o nome \'\'{0}\'\' como o nome da classe translet, pois ele cont\u00e9m caracteres que n\u00e3o s\u00e3o permitidos no nome da classe Java. O nome \'\'{1}\'\' foi usado."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of("Erros do compilador:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of(u"Advert\u00eancias do compilador:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of("Erros de translet:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_QNAME_ERR),
			$of(u"Um atributo cujo valor deve ser um QName ou uma lista de QNames separada por espa\u00e7os em branco tinha o valor \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_NCNAME_ERR),
			$of("Um atributo cujo valor deve ser um NCName tinha o valor \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_METHOD_IN_OUTPUT),
			$of(u"O atributo method de um elemento <xsl:output> tinha o valor \'\'{0}\'\'. O valor deve ser um dos seguintes: \'\'xml\'\', \'\'html\'\', \'\'text\'\', ou qname, mas n\u00e3o ncname"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_GET_FEATURE_NULL_NAME),
			$of(u"O nome do recurso n\u00e3o pode ser nulo em TransformerFactory.getFeature(Nome da string)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_FEATURE_NULL_NAME),
			$of(u"O nome do recurso n\u00e3o pode ser nulo em TransformerFactory.setFeature(Nome da string, valor booliano)."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNSUPPORTED_FEATURE),
			$of(u"N\u00e3o \u00e9 poss\u00edvel definir o recurso \'\'{0}\'\' nesta TransformerFactory."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: N\u00e3o \u00e9 poss\u00edvel definir o recurso como falso quando o gerenciador de seguran\u00e7a est\u00e1 presente."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_TRY_CATCH),
			$of(u"Erro interno de XSLTC: o byte code gerado cont\u00e9m um bloco try-catch-finally e n\u00e3o pode ser outlined."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS),
			$of("Erro interno de XSLTC: os marcadores OutlineableChunkStart e OutlineableChunkEnd devem ser balanceados e aninhados corretamente."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_DELETED_TARGET),
			$of(u"Erro interno de XSLTC: ainda h\u00e1 refer\u00eancia no m\u00e9todo original a uma instru\u00e7\u00e3o que fazia parte de um bloco de byte code que foi outlined."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG),
			$of(u"Erro interno de XSLTC: um m\u00e9todo no translet excede a limita\u00e7\u00e3o da M\u00e1quina Virtual Java quanto ao tamanho de um m\u00e9todo de de 64 kilobytes. Em geral, essa situa\u00e7\u00e3o \u00e9 causada por modelos de uma folha de estilos que s\u00e3o muito grandes. Tente reestruturar sua folha de estilos de forma a usar modelos menores."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DESERIALIZE_TRANSLET_ERR),
			$of(u"Quando a seguran\u00e7a do Java est\u00e1 ativada, o suporte para desserializar TemplatesImpl fica desativado. Essa situa\u00e7\u00e3o pode ser corrigida definindo a propriedade do sistema jdk.xml.enableTemplatesImplDeserialization como true."_s)
		})
	});
}

ErrorMessages_pt_BR::ErrorMessages_pt_BR() {
}

$Class* ErrorMessages_pt_BR::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_pt_BR, name, initialize, &_ErrorMessages_pt_BR_ClassInfo_, allocate$ErrorMessages_pt_BR);
	return class$;
}

$Class* ErrorMessages_pt_BR::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com