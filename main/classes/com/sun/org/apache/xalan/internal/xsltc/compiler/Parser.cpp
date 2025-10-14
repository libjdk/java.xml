#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>

#include <com/sun/java_cup/internal/runtime/Scanner.h>
#include <com/sun/java_cup/internal/runtime/Symbol.h>
#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CompilerException.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Import.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Output.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Text.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnsupportedElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XPathLexer.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XPathParser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/SystemIDResolver.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Stack.h>
#include <java/util/StringTokenizer.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <jdk/xml/internal/ErrorHandlerProxy.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef ACCESSING_XSLT_TARGET_ERR
#undef ACCESS_EXTERNAL_ALL
#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_STYLESHEET
#undef A_V
#undef B_B
#undef B_BB
#undef B_II
#undef B_O
#undef B_RR
#undef B_S
#undef B_SS
#undef B_V
#undef CATALOG_FEATURES
#undef CDATA_CHUNK_SIZE
#undef CLASS_NOT_FOUND_ERR
#undef COMPILER_ERROR_KEY
#undef COMPILER_PACKAGE
#undef COMPILER_WARNING_KEY
#undef D_D
#undef D_O
#undef D_S
#undef D_SD
#undef D_SS
#undef D_V
#undef D_X
#undef ELEMENT_PARSE_ERR
#undef EMPTYSTRING
#undef ERROR
#undef FATAL
#undef ILLEGAL_ATTRIBUTE_ERR
#undef ILLEGAL_TEXT_NODE_ERR
#undef IMPORT_PRECEDE_OTHERS_ERR
#undef INTERNAL
#undef INTERNAL_ERR
#undef I_D
#undef I_I
#undef I_II
#undef I_R
#undef I_S
#undef I_V
#undef JAXP_COMPILE_ERR
#undef JDK_DEBUG_LIMIT
#undef JDK_YES
#undef MISSING_XSLT_TARGET_ERR
#undef MISSING_XSLT_URI_ERR
#undef NAMESPACE_UNDEF_ERR
#undef NOT_STYLESHEET_ERR
#undef O_SO
#undef REDIRECT_URI
#undef R_D
#undef R_I
#undef R_O
#undef R_R
#undef R_RR
#undef R_V
#undef SECURITY_MANAGER
#undef S_A
#undef S_D
#undef S_DS
#undef S_DSS
#undef S_O
#undef S_S
#undef S_SD
#undef S_SR
#undef S_SRR
#undef S_SS
#undef S_SSS
#undef S_V
#undef TRANSLET
#undef TRANSLET_URI
#undef UNSUPPORTED
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR
#undef USE_CATALOG
#undef WARNING
#undef XMLNS_PREFIX
#undef XPATH_PARSER_ERR
#undef XSL
#undef XSLT_URI

using $XMLSecurityManager$LimitArray = $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit>;
using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $Scanner = ::com::sun::java_cup::internal::runtime::Scanner;
using $Symbol = ::com::sun::java_cup::internal::runtime::Symbol;
using $lr_parser = ::com::sun::java_cup::internal::runtime::lr_parser;
using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $XMLSecurityManager = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit;
using $CompilerException = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CompilerException;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Import = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Import;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $LiteralElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralElement;
using $Output = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Output;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $Text = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Text;
using $UnsupportedElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UnsupportedElement;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $XPathLexer = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XPathLexer;
using $XPathParser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::serializer::utils::SystemIDResolver;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $Stack = ::java::util::Stack;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Vector = ::java::util::Vector;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $ErrorHandlerProxy = ::jdk::xml::internal::ErrorHandlerProxy;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _Parser_FieldInfo_[] = {
	{"XSL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Parser, XSL)},
	{"TRANSLET", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Parser, TRANSLET)},
	{"_locator", "Lorg/xml/sax/Locator;", nullptr, $PRIVATE, $field(Parser, _locator)},
	{"_xsltc", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC;", nullptr, $PRIVATE, $field(Parser, _xsltc)},
	{"_xpathParser", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XPathParser;", nullptr, $PRIVATE, $field(Parser, _xpathParser)},
	{"_errors", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;>;", $PRIVATE, $field(Parser, _errors)},
	{"_warnings", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;>;", $PRIVATE, $field(Parser, _warnings)},
	{"_instructionClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(Parser, _instructionClasses)},
	{"_instructionAttrs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;", $PRIVATE, $field(Parser, _instructionAttrs)},
	{"_qNames", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;>;", $PRIVATE, $field(Parser, _qNames)},
	{"_namespaces", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;>;>;", $PRIVATE, $field(Parser, _namespaces)},
	{"_useAttributeSets", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(Parser, _useAttributeSets)},
	{"_excludeResultPrefixes", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(Parser, _excludeResultPrefixes)},
	{"_extensionElementPrefixes", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(Parser, _extensionElementPrefixes)},
	{"_variableScope", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(Parser, _variableScope)},
	{"_currentStylesheet", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PRIVATE, $field(Parser, _currentStylesheet)},
	{"_symbolTable", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;", nullptr, $PRIVATE, $field(Parser, _symbolTable)},
	{"_output", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Output;", nullptr, $PRIVATE, $field(Parser, _output)},
	{"_template", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PRIVATE, $field(Parser, _template)},
	{"_rootNamespaceDef", "Z", nullptr, $PRIVATE, $field(Parser, _rootNamespaceDef)},
	{"_root", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PRIVATE, $field(Parser, _root)},
	{"_target", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Parser, _target)},
	{"_currentImportPrecedence", "I", nullptr, $PRIVATE, $field(Parser, _currentImportPrecedence)},
	{"_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(Parser, _overrideDefaultParser)},
	{"_hasUserErrListener", "Z", nullptr, $PRIVATE, $field(Parser, _hasUserErrListener)},
	{"_PImedia", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Parser, _PImedia)},
	{"_PItitle", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Parser, _PItitle)},
	{"_PIcharset", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Parser, _PIcharset)},
	{"_templateIndex", "I", nullptr, $PRIVATE, $field(Parser, _templateIndex)},
	{"versionIsOne", "Z", nullptr, $PRIVATE, $field(Parser, versionIsOne)},
	{"_parentStack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;>;", $PRIVATE, $field(Parser, _parentStack)},
	{"_prefixMapping", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(Parser, _prefixMapping)},
	{}
};

$MethodInfo _Parser_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(Parser::*)($XSLTC*,bool,bool)>(&Parser::init$))},
	{"addParameter", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Param;)V", nullptr, $PUBLIC},
	{"addVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Variable;)V", nullptr, $PUBLIC},
	{"addVariableOrParam", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase;)V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)($VariableBase*)>(&Parser::addVariableOrParam))},
	{"characters", "([CII)V", nullptr, $PUBLIC},
	{"checkForSuperfluousAttributes", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)($SyntaxTreeNode*,$Attributes*)>(&Parser::checkForSuperfluousAttributes))},
	{"createAST", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC},
	{"elementSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"endDocument", "()V", nullptr, $PUBLIC},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"errorsFound", "()Z", nullptr, $PUBLIC},
	{"findStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PRIVATE, $method(static_cast<$SyntaxTreeNode*(Parser::*)($SyntaxTreeNode*,$String*)>(&Parser::findStylesheet))},
	{"functionSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"getCurrentImportPrecedence", "()I", nullptr, $PUBLIC},
	{"getCurrentStylesheet", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC},
	{"getDocumentRoot", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PUBLIC},
	{"getErrors", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;>;", $PUBLIC},
	{"getExcludeResultPrefixes", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getExtensionElementPrefixes", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Parser::*)()>(&Parser::getLineNumber))},
	{"getNextImportPrecedence", "()I", nullptr, $PUBLIC},
	{"getOutput", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Output;", nullptr, $PUBLIC},
	{"getOutputProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC},
	{"getQName", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getQName", "(Ljava/lang/String;Z)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getQName", "(Ljava/lang/String;ZZ)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $method(static_cast<$QName*(Parser::*)($String*,bool,bool)>(&Parser::getQName))},
	{"getQName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getQName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getQName", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getQNameIgnoreDefaultNs", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getQNameSafe", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PRIVATE, $method(static_cast<$SyntaxTreeNode*(Parser::*)($SyntaxTreeNode*)>(&Parser::getStylesheet)), "com.sun.org.apache.xalan.internal.xsltc.compiler.CompilerException"},
	{"getSymbolTable", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;", nullptr, $PUBLIC},
	{"getTemplate", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PUBLIC},
	{"getTemplateIndex", "()I", nullptr, $PUBLIC},
	{"getTokenValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Parser::*)($String*)>(&Parser::getTokenValue))},
	{"getTopLevelStylesheet", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC},
	{"getUseAttributeSets", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC},
	{"getWarnings", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;>;", $PUBLIC},
	{"getXSLTC", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC;", nullptr, $PUBLIC},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PUBLIC},
	{"initAttrTable", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)($String*,$StringArray*)>(&Parser::initAttrTable))},
	{"initExtClass", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)($String*,$String*)>(&Parser::initExtClass))},
	{"initExtClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)($String*,$String*,$String*)>(&Parser::initExtClass))},
	{"initExtClasses", "()V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)()>(&Parser::initExtClasses))},
	{"initInstructionAttrs", "()V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)()>(&Parser::initInstructionAttrs))},
	{"initStdClass", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)($String*,$String*)>(&Parser::initStdClass))},
	{"initStdClasses", "()V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)()>(&Parser::initStdClasses))},
	{"initSymbolTable", "()V", nullptr, $PRIVATE, $method(static_cast<void(Parser::*)()>(&Parser::initSymbolTable))},
	{"loadExternalStylesheet", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PRIVATE, $method(static_cast<$SyntaxTreeNode*(Parser::*)($String*)>(&Parser::loadExternalStylesheet)), "com.sun.org.apache.xalan.internal.xsltc.compiler.CompilerException"},
	{"lookupVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase;", nullptr, $PUBLIC},
	{"makeInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PUBLIC},
	{"makeStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.compiler.CompilerException"},
	{"parse", "(Lorg/xml/sax/XMLReader;Lorg/xml/sax/InputSource;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PUBLIC},
	{"parse", "(Lorg/xml/sax/InputSource;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PUBLIC},
	{"parseExpression", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC},
	{"parseExpression", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC},
	{"parsePattern", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PUBLIC},
	{"parsePattern", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PUBLIC},
	{"parseTopLevel", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, $PRIVATE, $method(static_cast<$SyntaxTreeNode*(Parser::*)($SyntaxTreeNode*,$String*,$String*)>(&Parser::parseTopLevel))},
	{"printErrors", "()V", nullptr, $PUBLIC},
	{"printWarnings", "()V", nullptr, $PUBLIC},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"removeVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC},
	{"reportError", "(ILcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;)V", nullptr, $PUBLIC},
	{"setCurrentStylesheet", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC},
	{"setOutput", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Output;)V", nullptr, $PUBLIC},
	{"setPIParameters", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"setTemplate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;)V", nullptr, $PUBLIC},
	{"setXSLTC", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC;)V", nullptr, $PUBLIC},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"startDocument", "()V", nullptr, $PUBLIC},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Parser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Parser",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Constants,org.xml.sax.ContentHandler",
	_Parser_FieldInfo_,
	_Parser_MethodInfo_
};

$Object* allocate$Parser($Class* clazz) {
	return $of($alloc(Parser));
}

int32_t Parser::hashCode() {
	 return this->$Constants::hashCode();
}

bool Parser::equals(Object$* arg0) {
	 return this->$Constants::equals(arg0);
}

$Object* Parser::clone() {
	 return this->$Constants::clone();
}

$String* Parser::toString() {
	 return this->$Constants::toString();
}

void Parser::finalize() {
	this->$Constants::finalize();
}

$String* Parser::XSL = nullptr;
$String* Parser::TRANSLET = nullptr;

void Parser::init$($XSLTC* xsltc, bool useOverrideDefaultParser, bool hasUserErrListener) {
	$set(this, _locator, nullptr);
	$set(this, _PImedia, nullptr);
	$set(this, _PItitle, nullptr);
	$set(this, _PIcharset, nullptr);
	this->_templateIndex = 0;
	this->versionIsOne = true;
	$set(this, _parentStack, nullptr);
	$set(this, _prefixMapping, nullptr);
	$set(this, _xsltc, xsltc);
	this->_overrideDefaultParser = useOverrideDefaultParser;
	this->_hasUserErrListener = hasUserErrListener;
}

void Parser::init() {
	$set(this, _qNames, $new($HashMap, 512));
	$set(this, _namespaces, $new($HashMap));
	$set(this, _instructionClasses, $new($HashMap));
	$set(this, _instructionAttrs, $new($HashMap));
	$set(this, _variableScope, $new($HashMap));
	$set(this, _template, nullptr);
	$set(this, _errors, $new($ArrayList));
	$set(this, _warnings, $new($ArrayList));
	$set(this, _symbolTable, $new($SymbolTable));
	$set(this, _xpathParser, $new($XPathParser, this));
	$set(this, _currentStylesheet, nullptr);
	$set(this, _output, nullptr);
	$set(this, _root, nullptr);
	this->_rootNamespaceDef = false;
	this->_currentImportPrecedence = 1;
	initStdClasses();
	initInstructionAttrs();
	initExtClasses();
	initSymbolTable();
	$init($Constants);
	$set(this, _useAttributeSets, getQName($Constants::XSLT_URI, Parser::XSL, "use-attribute-sets"_s));
	$set(this, _excludeResultPrefixes, getQName($Constants::XSLT_URI, Parser::XSL, "exclude-result-prefixes"_s));
	$set(this, _extensionElementPrefixes, getQName($Constants::XSLT_URI, Parser::XSL, "extension-element-prefixes"_s));
}

void Parser::setOutput($Output* output) {
	if (this->_output != nullptr) {
		int32_t var$0 = $nc(this->_output)->getImportPrecedence();
		if (var$0 <= $nc(output)->getImportPrecedence()) {
			output->mergeOutput(this->_output);
			$nc(this->_output)->disable();
			$set(this, _output, output);
		} else {
			output->disable();
		}
	} else {
		$set(this, _output, output);
	}
}

$Output* Parser::getOutput() {
	return this->_output;
}

$Properties* Parser::getOutputProperties() {
	return $nc($(getTopLevelStylesheet()))->getOutputProperties();
}

void Parser::addVariable($Variable* var) {
	addVariableOrParam(var);
}

void Parser::addParameter($Param* param) {
	addVariableOrParam(param);
}

void Parser::addVariableOrParam($VariableBase* var) {
	$var($Object, existing, $nc(this->_variableScope)->get($($nc($($nc(var)->getName()))->getStringRep())));
	if (existing != nullptr) {
		if ($instanceOf($Stack, existing)) {
			$var($Stack, stack, $cast($Stack, existing));
			stack->push(var);
		} else if ($instanceOf($VariableBase, existing)) {
			$var($Stack, stack, $new($Stack));
			stack->push($cast($VariableBase, existing));
			stack->push(var);
			$nc(this->_variableScope)->put($($nc($($nc(var)->getName()))->getStringRep()), stack);
		}
	} else {
		$nc(this->_variableScope)->put($($nc($($nc(var)->getName()))->getStringRep()), var);
	}
}

void Parser::removeVariable($QName* name) {
	$var($Object, existing, $nc(this->_variableScope)->get($($nc(name)->getStringRep())));
	if ($instanceOf($Stack, existing)) {
		$var($Stack, stack, $cast($Stack, existing));
		if (!$nc(stack)->isEmpty()) {
			stack->pop();
		}
		if (!$nc(stack)->isEmpty()) {
			return;
		}
	}
	$nc(this->_variableScope)->remove($($nc(name)->getStringRep()));
}

$VariableBase* Parser::lookupVariable($QName* name) {
	$var($Object, existing, $nc(this->_variableScope)->get($($nc(name)->getStringRep())));
	if ($instanceOf($VariableBase, existing)) {
		return $cast($VariableBase, existing);
	} else if ($instanceOf($Stack, existing)) {
		$var($Stack, stack, $cast($Stack, existing));
		return $cast($VariableBase, $nc(stack)->peek());
	}
	return nullptr;
}

void Parser::setXSLTC($XSLTC* xsltc) {
	$set(this, _xsltc, xsltc);
}

$XSLTC* Parser::getXSLTC() {
	return this->_xsltc;
}

int32_t Parser::getCurrentImportPrecedence() {
	return this->_currentImportPrecedence;
}

int32_t Parser::getNextImportPrecedence() {
	return ++this->_currentImportPrecedence;
}

void Parser::setCurrentStylesheet($Stylesheet* stylesheet) {
	$set(this, _currentStylesheet, stylesheet);
}

$Stylesheet* Parser::getCurrentStylesheet() {
	return this->_currentStylesheet;
}

$Stylesheet* Parser::getTopLevelStylesheet() {
	return $nc(this->_xsltc)->getStylesheet();
}

$QName* Parser::getQNameSafe($String* stringRep) {
	int32_t colon = $nc(stringRep)->lastIndexOf((int32_t)u':');
	if (colon != -1) {
		$var($String, prefix, stringRep->substring(0, colon));
		$var($String, localname, stringRep->substring(colon + 1));
		$var($String, namespace$, nullptr);
		$init($Constants);
		if (prefix->equals($Constants::XMLNS_PREFIX) == false) {
			$assign(namespace$, $nc(this->_symbolTable)->lookupNamespace(prefix));
			if (namespace$ == nullptr) {
				$assign(namespace$, $Constants::EMPTYSTRING);
			}
		}
		return getQName(namespace$, prefix, localname);
	} else {
		$init($Constants);
		$var($String, uri, stringRep->equals($Constants::XMLNS_PREFIX) ? ($String*)nullptr : $nc(this->_symbolTable)->lookupNamespace($Constants::EMPTYSTRING));
		return getQName(uri, ($String*)nullptr, stringRep);
	}
}

$QName* Parser::getQName($String* stringRep) {
	return getQName(stringRep, true, false);
}

$QName* Parser::getQNameIgnoreDefaultNs($String* stringRep) {
	return getQName(stringRep, true, true);
}

$QName* Parser::getQName($String* stringRep, bool reportError) {
	return getQName(stringRep, reportError, false);
}

$QName* Parser::getQName($String* stringRep, bool reportError, bool ignoreDefaultNs) {
	int32_t colon = $nc(stringRep)->lastIndexOf((int32_t)u':');
	if (colon != -1) {
		$var($String, prefix, stringRep->substring(0, colon));
		$var($String, localname, stringRep->substring(colon + 1));
		$var($String, namespace$, nullptr);
		$init($Constants);
		if (prefix->equals($Constants::XMLNS_PREFIX) == false) {
			$assign(namespace$, $nc(this->_symbolTable)->lookupNamespace(prefix));
			if (namespace$ == nullptr && reportError) {
				int32_t line = getLineNumber();
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::NAMESPACE_UNDEF_ERR, line, $of(prefix)));
				this->reportError($Constants::ERROR, err);
			}
		}
		return getQName(namespace$, prefix, localname);
	} else {
		$init($Constants);
		if (stringRep->equals($Constants::XMLNS_PREFIX)) {
			ignoreDefaultNs = true;
		}
		$var($String, defURI, ignoreDefaultNs ? ($String*)nullptr : $nc(this->_symbolTable)->lookupNamespace($Constants::EMPTYSTRING));
		return getQName(defURI, ($String*)nullptr, stringRep);
	}
}

$QName* Parser::getQName($String* namespace$, $String* prefix, $String* localname) {
	$init($Constants);
	if (namespace$ == nullptr || $nc(namespace$)->equals($Constants::EMPTYSTRING)) {
		$var($QName, name, $cast($QName, $nc(this->_qNames)->get(localname)));
		if (name == nullptr) {
			$assign(name, $new($QName, nullptr, prefix, localname));
			$nc(this->_qNames)->put(localname, name);
		}
		return name;
	} else {
		$var($Map, space, $cast($Map, $nc(this->_namespaces)->get(namespace$)));
		$var($String, lexicalQName, (prefix == nullptr || $nc(prefix)->length() == 0) ? localname : ($str({prefix, $$str(u':'), localname})));
		if (space == nullptr) {
			$var($QName, name, $new($QName, namespace$, prefix, localname));
			$nc(this->_namespaces)->put(namespace$, $assign(space, $new($HashMap)));
			$nc(space)->put(lexicalQName, name);
			return name;
		} else {
			$var($QName, name, $cast($QName, $nc(space)->get(lexicalQName)));
			if (name == nullptr) {
				$assign(name, $new($QName, namespace$, prefix, localname));
				space->put(lexicalQName, name);
			}
			return name;
		}
	}
}

$QName* Parser::getQName($String* scope, $String* name) {
	return getQName($$str({scope, name}));
}

$QName* Parser::getQName($QName* scope, $QName* name) {
	$var($String, var$0, $($nc(scope)->toString()));
	return getQName($$concat(var$0, $($nc(name)->toString())));
}

$QName* Parser::getUseAttributeSets() {
	return this->_useAttributeSets;
}

$QName* Parser::getExtensionElementPrefixes() {
	return this->_extensionElementPrefixes;
}

$QName* Parser::getExcludeResultPrefixes() {
	return this->_excludeResultPrefixes;
}

$Stylesheet* Parser::makeStylesheet($SyntaxTreeNode* element) {
	try {
		$var($Stylesheet, stylesheet, nullptr);
		if ($instanceOf($Stylesheet, element)) {
			$assign(stylesheet, $cast($Stylesheet, element));
		} else {
			$assign(stylesheet, $new($Stylesheet));
			stylesheet->setSimplified();
			stylesheet->addElement(element);
			stylesheet->setAttributes($cast($AttributesImpl, $($nc(element)->getAttributes())));
			$init($Constants);
			if ($nc(element)->lookupNamespace($Constants::EMPTYSTRING) == nullptr) {
				element->addPrefixMapping($Constants::EMPTYSTRING, $Constants::EMPTYSTRING);
			}
		}
		$nc(stylesheet)->setParser(this);
		return stylesheet;
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::NOT_STYLESHEET_ERR, element));
		$throwNew($CompilerException, $(err->toString()));
	}
	$shouldNotReachHere();
}

void Parser::createAST($Stylesheet* stylesheet) {
	try {
		if (stylesheet != nullptr) {
			stylesheet->parseContents(this);
			$var($Iterator, elements, stylesheet->elements());
			while ($nc(elements)->hasNext()) {
				$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, elements->next()));
				if ($instanceOf($Text, child)) {
					int32_t l = getLineNumber();
					$init($ErrorMsg);
					$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::ILLEGAL_TEXT_NODE_ERR, l, ($Object*)nullptr));
					reportError($Constants::ERROR, err);
				}
			}
			if (!errorsFound()) {
				stylesheet->typeCheck(this->_symbolTable);
			}
		}
	} catch ($TypeCheckError&) {
		$var($TypeCheckError, e, $catch());
		$init($ErrorMsg);
		reportError($Constants::ERROR, $$new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR, static_cast<$Throwable*>(e)));
	}
}

$SyntaxTreeNode* Parser::parse($XMLReader* reader, $InputSource* input) {
	try {
		$nc(reader)->setContentHandler(this);
		if (this->_hasUserErrListener) {
			reader->setErrorHandler($$new($ErrorHandlerProxy));
		}
		reader->parse(input);
		return getStylesheet(this->_root);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		if ($nc(this->_xsltc)->debug()) {
			e->printStackTrace();
		}
		$init($ErrorMsg);
		reportError($Constants::ERROR, $$new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR, static_cast<$Throwable*>(e)));
	} catch ($SAXException&) {
		$var($SAXException, e, $catch());
		$var($Throwable, ex, e->getException());
		if ($nc(this->_xsltc)->debug()) {
			e->printStackTrace();
			if (ex != nullptr) {
				ex->printStackTrace();
			}
		}
		$init($ErrorMsg);
		reportError($Constants::ERROR, $$new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR, static_cast<$Throwable*>(e)));
	} catch ($CompilerException&) {
		$var($CompilerException, e, $catch());
		if ($nc(this->_xsltc)->debug()) {
			e->printStackTrace();
		}
		$init($ErrorMsg);
		reportError($Constants::ERROR, $$new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR, static_cast<$Throwable*>(e)));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(this->_xsltc)->debug()) {
			e->printStackTrace();
		}
		$init($ErrorMsg);
		reportError($Constants::ERROR, $$new($ErrorMsg, $ErrorMsg::JAXP_COMPILE_ERR, static_cast<$Throwable*>(e)));
	}
	return nullptr;
}

$SyntaxTreeNode* Parser::parse($InputSource* input) {
	try {
		$var($XMLReader, reader, $JdkXmlUtils::getXMLReader(this->_overrideDefaultParser, $nc(this->_xsltc)->isSecureProcessing()));
		$init($XMLConstants);
		$JdkXmlUtils::setXMLReaderPropertyIfSupport(reader, $XMLConstants::ACCESS_EXTERNAL_DTD, $($nc(this->_xsltc)->getProperty($XMLConstants::ACCESS_EXTERNAL_DTD)), true);
		bool supportCatalog = true;
		$init($JdkXmlFeatures$XmlFeature);
		bool useCatalog = $nc(this->_xsltc)->getFeature($JdkXmlFeatures$XmlFeature::USE_CATALOG);
		try {
			$nc(reader)->setFeature($JdkXmlUtils::USE_CATALOG, useCatalog);
		} catch ($SAXNotRecognizedException&) {
			$var($SAXException, e, $catch());
			supportCatalog = false;
		} catch ($SAXNotSupportedException&) {
			$var($SAXException, e, $catch());
			supportCatalog = false;
		}
		if (supportCatalog && useCatalog) {
			try {
				$init($JdkXmlFeatures);
				$var($CatalogFeatures, cf, $cast($CatalogFeatures, $nc(this->_xsltc)->getProperty($JdkXmlFeatures::CATALOG_FEATURES)));
				if (cf != nullptr) {
					{
						$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$CatalogFeatures$Feature* f = arr$->get(i$);
							{
								$var($String, var$0, $nc(f)->getPropertyName());
								$nc(reader)->setProperty(var$0, $(cf->get(f)));
							}
						}
					}
				}
			} catch ($SAXNotRecognizedException&) {
				$catch();
			}
		}
		$var($String, lastProperty, ""_s);
		try {
			$init($JdkConstants);
			$var($XMLSecurityManager, securityManager, $cast($XMLSecurityManager, $nc(this->_xsltc)->getProperty($JdkConstants::SECURITY_MANAGER)));
			{
				$var($XMLSecurityManager$LimitArray, arr$, $XMLSecurityManager$Limit::values());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$XMLSecurityManager$Limit* limit = arr$->get(i$);
					{
						$assign(lastProperty, $nc(limit)->apiProperty());
						$nc(reader)->setProperty(lastProperty, $($nc(securityManager)->getLimitValueAsString(limit)));
					}
				}
			}
			if ($nc(securityManager)->printEntityCountInfo()) {
				$assign(lastProperty, $JdkConstants::JDK_DEBUG_LIMIT);
				$nc(reader)->setProperty(lastProperty, $JdkConstants::JDK_YES);
			}
		} catch ($SAXException&) {
			$var($SAXException, se, $catch());
			$XMLSecurityManager::printWarning($($nc($of(reader))->getClass()->getName()), lastProperty, se);
		}
		$init($JdkConstants);
		$JdkXmlUtils::setXMLReaderPropertyIfSupport(reader, $JdkConstants::CDATA_CHUNK_SIZE, $($nc(this->_xsltc)->getProperty($JdkConstants::CDATA_CHUNK_SIZE)), false);
		return (parse(reader, input));
	} catch ($SAXException&) {
		$var($SAXException, e, $catch());
		reportError($Constants::ERROR, $$new($ErrorMsg, $(e->getMessage())));
	}
	return nullptr;
}

$SyntaxTreeNode* Parser::getDocumentRoot() {
	return this->_root;
}

void Parser::setPIParameters($String* media, $String* title, $String* charset) {
	$set(this, _PImedia, media);
	$set(this, _PItitle, title);
	$set(this, _PIcharset, charset);
}

$SyntaxTreeNode* Parser::getStylesheet($SyntaxTreeNode* root) {
	if (this->_target == nullptr) {
		if (!this->_rootNamespaceDef) {
			$init($ErrorMsg);
			$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::MISSING_XSLT_URI_ERR));
			$throwNew($CompilerException, $(msg->toString()));
		}
		return (root);
	}
	if ($nc(this->_target)->charAt(0) == u'#') {
		$var($SyntaxTreeNode, element, findStylesheet(root, $($nc(this->_target)->substring(1))));
		if (element == nullptr) {
			$init($ErrorMsg);
			$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::MISSING_XSLT_TARGET_ERR, $of(this->_target), root));
			$throwNew($CompilerException, $(msg->toString()));
		}
		return (element);
	} else {
		try {
			$var($String, path, this->_target);
			if ($nc(path)->indexOf(":"_s) == -1) {
				$assign(path, $str({"file:"_s, path}));
			}
			$assign(path, $SystemIDResolver::getAbsoluteURI(path));
			$init($XMLConstants);
			$init($JdkConstants);
			$var($String, accessError, $SecuritySupport::checkAccess(path, $cast($String, $($nc(this->_xsltc)->getProperty($XMLConstants::ACCESS_EXTERNAL_STYLESHEET))), $JdkConstants::ACCESS_EXTERNAL_ALL));
			if (accessError != nullptr) {
				$init($ErrorMsg);
				$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::ACCESSING_XSLT_TARGET_ERR, $($SecuritySupport::sanitizePath(this->_target)), accessError, root));
				$throwNew($CompilerException, $(msg->toString()));
			}
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			$throwNew($CompilerException, static_cast<$Exception*>(ex));
		}
		return (loadExternalStylesheet(this->_target));
	}
}

$SyntaxTreeNode* Parser::findStylesheet($SyntaxTreeNode* root, $String* href) {
	if (root == nullptr) {
		return nullptr;
	}
	if ($instanceOf($Stylesheet, root)) {
		$var($String, id, $nc(root)->getAttribute("id"_s));
		if ($nc(id)->equals(href)) {
			return root;
		}
	}
	$var($List, children, $nc(root)->getContents());
	if (children != nullptr) {
		int32_t count = children->size();
		for (int32_t i = 0; i < count; ++i) {
			$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, children->get(i)));
			$var($SyntaxTreeNode, node, findStylesheet(child, href));
			if (node != nullptr) {
				return node;
			}
		}
	}
	return nullptr;
}

$SyntaxTreeNode* Parser::loadExternalStylesheet($String* location) {
	$var($InputSource, source, nullptr);
	if (($$new($File, location))->exists()) {
		$assign(source, $new($InputSource, $$str({"file:"_s, location})));
	} else {
		$assign(source, $new($InputSource, location));
	}
	$var($SyntaxTreeNode, external, parse(source));
	return (external);
}

void Parser::initAttrTable($String* elementName, $StringArray* attrs) {
	$init($Constants);
	$nc(this->_instructionAttrs)->put($($nc($(getQName($Constants::XSLT_URI, Parser::XSL, elementName)))->getStringRep()), attrs);
}

void Parser::initInstructionAttrs() {
	initAttrTable("template"_s, $$new($StringArray, {
		"match"_s,
		"name"_s,
		"priority"_s,
		"mode"_s
	}));
	initAttrTable("stylesheet"_s, $$new($StringArray, {
		"id"_s,
		"version"_s,
		"extension-element-prefixes"_s,
		"exclude-result-prefixes"_s
	}));
	initAttrTable("transform"_s, $$new($StringArray, {
		"id"_s,
		"version"_s,
		"extension-element-prefixes"_s,
		"exclude-result-prefixes"_s
	}));
	initAttrTable("text"_s, $$new($StringArray, {"disable-output-escaping"_s}));
	initAttrTable("if"_s, $$new($StringArray, {"test"_s}));
	initAttrTable("choose"_s, $$new($StringArray, 0));
	initAttrTable("when"_s, $$new($StringArray, {"test"_s}));
	initAttrTable("otherwise"_s, $$new($StringArray, 0));
	initAttrTable("for-each"_s, $$new($StringArray, {"select"_s}));
	initAttrTable("message"_s, $$new($StringArray, {"terminate"_s}));
	initAttrTable("number"_s, $$new($StringArray, {
		"level"_s,
		"count"_s,
		"from"_s,
		"value"_s,
		"format"_s,
		"lang"_s,
		"letter-value"_s,
		"grouping-separator"_s,
		"grouping-size"_s
	}));
	initAttrTable("comment"_s, $$new($StringArray, 0));
	initAttrTable("copy"_s, $$new($StringArray, {"use-attribute-sets"_s}));
	initAttrTable("copy-of"_s, $$new($StringArray, {"select"_s}));
	initAttrTable("param"_s, $$new($StringArray, {
		"name"_s,
		"select"_s
	}));
	initAttrTable("with-param"_s, $$new($StringArray, {
		"name"_s,
		"select"_s
	}));
	initAttrTable("variable"_s, $$new($StringArray, {
		"name"_s,
		"select"_s
	}));
	initAttrTable("output"_s, $$new($StringArray, {
		"method"_s,
		"version"_s,
		"encoding"_s,
		"omit-xml-declaration"_s,
		"standalone"_s,
		"doctype-public"_s,
		"doctype-system"_s,
		"cdata-section-elements"_s,
		"indent"_s,
		"media-type"_s
	}));
	initAttrTable("sort"_s, $$new($StringArray, {
		"select"_s,
		"order"_s,
		"case-order"_s,
		"lang"_s,
		"data-type"_s
	}));
	initAttrTable("key"_s, $$new($StringArray, {
		"name"_s,
		"match"_s,
		"use"_s
	}));
	initAttrTable("fallback"_s, $$new($StringArray, 0));
	initAttrTable("attribute"_s, $$new($StringArray, {
		"name"_s,
		"namespace"_s
	}));
	initAttrTable("attribute-set"_s, $$new($StringArray, {
		"name"_s,
		"use-attribute-sets"_s
	}));
	initAttrTable("value-of"_s, $$new($StringArray, {
		"select"_s,
		"disable-output-escaping"_s
	}));
	initAttrTable("element"_s, $$new($StringArray, {
		"name"_s,
		"namespace"_s,
		"use-attribute-sets"_s
	}));
	initAttrTable("call-template"_s, $$new($StringArray, {"name"_s}));
	initAttrTable("apply-templates"_s, $$new($StringArray, {
		"select"_s,
		"mode"_s
	}));
	initAttrTable("apply-imports"_s, $$new($StringArray, 0));
	initAttrTable("decimal-format"_s, $$new($StringArray, {
		"name"_s,
		"decimal-separator"_s,
		"grouping-separator"_s,
		"infinity"_s,
		"minus-sign"_s,
		"NaN"_s,
		"percent"_s,
		"per-mille"_s,
		"zero-digit"_s,
		"digit"_s,
		"pattern-separator"_s
	}));
	initAttrTable("import"_s, $$new($StringArray, {"href"_s}));
	initAttrTable("include"_s, $$new($StringArray, {"href"_s}));
	initAttrTable("strip-space"_s, $$new($StringArray, {"elements"_s}));
	initAttrTable("preserve-space"_s, $$new($StringArray, {"elements"_s}));
	initAttrTable("processing-instruction"_s, $$new($StringArray, {"name"_s}));
	initAttrTable("namespace-alias"_s, $$new($StringArray, {
		"stylesheet-prefix"_s,
		"result-prefix"_s
	}));
}

void Parser::initStdClasses() {
	initStdClass("template"_s, "Template"_s);
	initStdClass("stylesheet"_s, "Stylesheet"_s);
	initStdClass("transform"_s, "Stylesheet"_s);
	initStdClass("text"_s, "Text"_s);
	initStdClass("if"_s, "If"_s);
	initStdClass("choose"_s, "Choose"_s);
	initStdClass("when"_s, "When"_s);
	initStdClass("otherwise"_s, "Otherwise"_s);
	initStdClass("for-each"_s, "ForEach"_s);
	initStdClass("message"_s, "Message"_s);
	initStdClass("number"_s, "Number"_s);
	initStdClass("comment"_s, "Comment"_s);
	initStdClass("copy"_s, "Copy"_s);
	initStdClass("copy-of"_s, "CopyOf"_s);
	initStdClass("param"_s, "Param"_s);
	initStdClass("with-param"_s, "WithParam"_s);
	initStdClass("variable"_s, "Variable"_s);
	initStdClass("output"_s, "Output"_s);
	initStdClass("sort"_s, "Sort"_s);
	initStdClass("key"_s, "Key"_s);
	initStdClass("fallback"_s, "Fallback"_s);
	initStdClass("attribute"_s, "XslAttribute"_s);
	initStdClass("attribute-set"_s, "AttributeSet"_s);
	initStdClass("value-of"_s, "ValueOf"_s);
	initStdClass("element"_s, "XslElement"_s);
	initStdClass("call-template"_s, "CallTemplate"_s);
	initStdClass("apply-templates"_s, "ApplyTemplates"_s);
	initStdClass("apply-imports"_s, "ApplyImports"_s);
	initStdClass("decimal-format"_s, "DecimalFormatting"_s);
	initStdClass("import"_s, "Import"_s);
	initStdClass("include"_s, "Include"_s);
	initStdClass("strip-space"_s, "Whitespace"_s);
	initStdClass("preserve-space"_s, "Whitespace"_s);
	initStdClass("processing-instruction"_s, "ProcessingInstruction"_s);
	initStdClass("namespace-alias"_s, "NamespaceAlias"_s);
}

void Parser::initStdClass($String* elementName, $String* className) {
	$init($Constants);
	$nc(this->_instructionClasses)->put($($nc($(getQName($Constants::XSLT_URI, Parser::XSL, elementName)))->getStringRep()), $$str({$Constants::COMPILER_PACKAGE, $$str(u'.'), className}));
}

bool Parser::elementSupported($String* namespace$, $String* localName) {
	return ($nc(this->_instructionClasses)->get($($nc($(getQName(namespace$, Parser::XSL, localName)))->getStringRep())) != nullptr);
}

bool Parser::functionSupported($String* fname) {
	return ($nc(this->_symbolTable)->lookupPrimop(fname) != nullptr);
}

void Parser::initExtClasses() {
	initExtClass("output"_s, "TransletOutput"_s);
	$init($Constants);
	initExtClass($Constants::REDIRECT_URI, "write"_s, "TransletOutput"_s);
}

void Parser::initExtClass($String* elementName, $String* className) {
	$init($Constants);
	$nc(this->_instructionClasses)->put($($nc($(getQName($Constants::TRANSLET_URI, Parser::TRANSLET, elementName)))->getStringRep()), $$str({$Constants::COMPILER_PACKAGE, $$str(u'.'), className}));
}

void Parser::initExtClass($String* namespace$, $String* elementName, $String* className) {
	$init($Constants);
	$nc(this->_instructionClasses)->put($($nc($(getQName(namespace$, Parser::TRANSLET, elementName)))->getStringRep()), $$str({$Constants::COMPILER_PACKAGE, $$str(u'.'), className}));
}

void Parser::initSymbolTable() {
	$init($Type);
	$var($MethodType, I_V, $new($MethodType, $Type::Int, $Type::Void));
	$var($MethodType, I_R, $new($MethodType, $Type::Int, $Type::Real));
	$var($MethodType, I_S, $new($MethodType, $Type::Int, $Type::String));
	$var($MethodType, I_D, $new($MethodType, $Type::Int, $Type::NodeSet));
	$var($MethodType, R_I, $new($MethodType, $Type::Real, $Type::Int));
	$var($MethodType, R_V, $new($MethodType, $Type::Real, $Type::Void));
	$var($MethodType, R_R, $new($MethodType, $Type::Real, $Type::Real));
	$var($MethodType, R_D, $new($MethodType, $Type::Real, $Type::NodeSet));
	$var($MethodType, R_O, $new($MethodType, $Type::Real, $Type::Reference));
	$var($MethodType, I_I, $new($MethodType, $Type::Int, $Type::Int));
	$var($MethodType, D_O, $new($MethodType, $Type::NodeSet, $Type::Reference));
	$var($MethodType, D_V, $new($MethodType, $Type::NodeSet, $Type::Void));
	$var($MethodType, D_S, $new($MethodType, $Type::NodeSet, $Type::String));
	$var($MethodType, D_D, $new($MethodType, $Type::NodeSet, $Type::NodeSet));
	$var($MethodType, A_V, $new($MethodType, $Type::Node, $Type::Void));
	$var($MethodType, S_V, $new($MethodType, $Type::String, $Type::Void));
	$var($MethodType, S_S, $new($MethodType, $Type::String, $Type::String));
	$var($MethodType, S_A, $new($MethodType, $Type::String, $Type::Node));
	$var($MethodType, S_D, $new($MethodType, $Type::String, $Type::NodeSet));
	$var($MethodType, S_O, $new($MethodType, $Type::String, $Type::Reference));
	$var($MethodType, B_O, $new($MethodType, $Type::Boolean, $Type::Reference));
	$var($MethodType, B_V, $new($MethodType, $Type::Boolean, $Type::Void));
	$var($MethodType, B_B, $new($MethodType, $Type::Boolean, $Type::Boolean));
	$var($MethodType, B_S, $new($MethodType, $Type::Boolean, $Type::String));
	$var($MethodType, D_X, $new($MethodType, $Type::NodeSet, $Type::Object));
	$var($MethodType, R_RR, $new($MethodType, $Type::Real, $Type::Real, $Type::Real));
	$var($MethodType, I_II, $new($MethodType, $Type::Int, $Type::Int, $Type::Int));
	$var($MethodType, B_RR, $new($MethodType, $Type::Boolean, $Type::Real, $Type::Real));
	$var($MethodType, B_II, $new($MethodType, $Type::Boolean, $Type::Int, $Type::Int));
	$var($MethodType, S_SS, $new($MethodType, $Type::String, $Type::String, $Type::String));
	$var($MethodType, S_DS, $new($MethodType, $Type::String, $Type::Real, $Type::String));
	$var($MethodType, S_SR, $new($MethodType, $Type::String, $Type::String, $Type::Real));
	$var($MethodType, O_SO, $new($MethodType, $Type::Reference, $Type::String, $Type::Reference));
	$var($MethodType, D_SS, $new($MethodType, $Type::NodeSet, $Type::String, $Type::String));
	$var($MethodType, D_SD, $new($MethodType, $Type::NodeSet, $Type::String, $Type::NodeSet));
	$var($MethodType, B_BB, $new($MethodType, $Type::Boolean, $Type::Boolean, $Type::Boolean));
	$var($MethodType, B_SS, $new($MethodType, $Type::Boolean, $Type::String, $Type::String));
	$var($MethodType, S_SD, $new($MethodType, $Type::String, $Type::String, $Type::NodeSet));
	$var($MethodType, S_DSS, $new($MethodType, $Type::String, $Type::Real, $Type::String, $Type::String));
	$var($MethodType, S_SRR, $new($MethodType, $Type::String, $Type::String, $Type::Real, $Type::Real));
	$var($MethodType, S_SSS, $new($MethodType, $Type::String, $Type::String, $Type::String, $Type::String));
	$nc(this->_symbolTable)->addPrimop("current"_s, A_V);
	$nc(this->_symbolTable)->addPrimop("last"_s, I_V);
	$nc(this->_symbolTable)->addPrimop("position"_s, I_V);
	$nc(this->_symbolTable)->addPrimop("true"_s, B_V);
	$nc(this->_symbolTable)->addPrimop("false"_s, B_V);
	$nc(this->_symbolTable)->addPrimop("not"_s, B_B);
	$nc(this->_symbolTable)->addPrimop("name"_s, S_V);
	$nc(this->_symbolTable)->addPrimop("name"_s, S_A);
	$nc(this->_symbolTable)->addPrimop("generate-id"_s, S_V);
	$nc(this->_symbolTable)->addPrimop("generate-id"_s, S_A);
	$nc(this->_symbolTable)->addPrimop("ceiling"_s, R_R);
	$nc(this->_symbolTable)->addPrimop("floor"_s, R_R);
	$nc(this->_symbolTable)->addPrimop("round"_s, R_R);
	$nc(this->_symbolTable)->addPrimop("contains"_s, B_SS);
	$nc(this->_symbolTable)->addPrimop("number"_s, R_O);
	$nc(this->_symbolTable)->addPrimop("number"_s, R_V);
	$nc(this->_symbolTable)->addPrimop("boolean"_s, B_O);
	$nc(this->_symbolTable)->addPrimop("string"_s, S_O);
	$nc(this->_symbolTable)->addPrimop("string"_s, S_V);
	$nc(this->_symbolTable)->addPrimop("translate"_s, S_SSS);
	$nc(this->_symbolTable)->addPrimop("string-length"_s, I_V);
	$nc(this->_symbolTable)->addPrimop("string-length"_s, I_S);
	$nc(this->_symbolTable)->addPrimop("starts-with"_s, B_SS);
	$nc(this->_symbolTable)->addPrimop("format-number"_s, S_DS);
	$nc(this->_symbolTable)->addPrimop("format-number"_s, S_DSS);
	$nc(this->_symbolTable)->addPrimop("unparsed-entity-uri"_s, S_S);
	$nc(this->_symbolTable)->addPrimop("key"_s, D_SS);
	$nc(this->_symbolTable)->addPrimop("key"_s, D_SD);
	$nc(this->_symbolTable)->addPrimop("id"_s, D_S);
	$nc(this->_symbolTable)->addPrimop("id"_s, D_D);
	$nc(this->_symbolTable)->addPrimop("namespace-uri"_s, S_V);
	$nc(this->_symbolTable)->addPrimop("function-available"_s, B_S);
	$nc(this->_symbolTable)->addPrimop("element-available"_s, B_S);
	$nc(this->_symbolTable)->addPrimop("document"_s, D_S);
	$nc(this->_symbolTable)->addPrimop("document"_s, D_V);
	$nc(this->_symbolTable)->addPrimop("count"_s, I_D);
	$nc(this->_symbolTable)->addPrimop("sum"_s, R_D);
	$nc(this->_symbolTable)->addPrimop("local-name"_s, S_V);
	$nc(this->_symbolTable)->addPrimop("local-name"_s, S_D);
	$nc(this->_symbolTable)->addPrimop("namespace-uri"_s, S_V);
	$nc(this->_symbolTable)->addPrimop("namespace-uri"_s, S_D);
	$nc(this->_symbolTable)->addPrimop("substring"_s, S_SR);
	$nc(this->_symbolTable)->addPrimop("substring"_s, S_SRR);
	$nc(this->_symbolTable)->addPrimop("substring-after"_s, S_SS);
	$nc(this->_symbolTable)->addPrimop("substring-before"_s, S_SS);
	$nc(this->_symbolTable)->addPrimop("normalize-space"_s, S_V);
	$nc(this->_symbolTable)->addPrimop("normalize-space"_s, S_S);
	$nc(this->_symbolTable)->addPrimop("system-property"_s, S_S);
	$nc(this->_symbolTable)->addPrimop("nodeset"_s, D_O);
	$nc(this->_symbolTable)->addPrimop("objectType"_s, S_O);
	$nc(this->_symbolTable)->addPrimop("cast"_s, O_SO);
	$nc(this->_symbolTable)->addPrimop("+"_s, R_RR);
	$nc(this->_symbolTable)->addPrimop("-"_s, R_RR);
	$nc(this->_symbolTable)->addPrimop("*"_s, R_RR);
	$nc(this->_symbolTable)->addPrimop("/"_s, R_RR);
	$nc(this->_symbolTable)->addPrimop("%"_s, R_RR);
	$nc(this->_symbolTable)->addPrimop("+"_s, I_II);
	$nc(this->_symbolTable)->addPrimop("-"_s, I_II);
	$nc(this->_symbolTable)->addPrimop("*"_s, I_II);
	$nc(this->_symbolTable)->addPrimop("<"_s, B_RR);
	$nc(this->_symbolTable)->addPrimop("<="_s, B_RR);
	$nc(this->_symbolTable)->addPrimop(">"_s, B_RR);
	$nc(this->_symbolTable)->addPrimop(">="_s, B_RR);
	$nc(this->_symbolTable)->addPrimop("<"_s, B_II);
	$nc(this->_symbolTable)->addPrimop("<="_s, B_II);
	$nc(this->_symbolTable)->addPrimop(">"_s, B_II);
	$nc(this->_symbolTable)->addPrimop(">="_s, B_II);
	$nc(this->_symbolTable)->addPrimop("<"_s, B_BB);
	$nc(this->_symbolTable)->addPrimop("<="_s, B_BB);
	$nc(this->_symbolTable)->addPrimop(">"_s, B_BB);
	$nc(this->_symbolTable)->addPrimop(">="_s, B_BB);
	$nc(this->_symbolTable)->addPrimop("or"_s, B_BB);
	$nc(this->_symbolTable)->addPrimop("and"_s, B_BB);
	$nc(this->_symbolTable)->addPrimop("u-"_s, R_R);
	$nc(this->_symbolTable)->addPrimop("u-"_s, I_I);
}

$SymbolTable* Parser::getSymbolTable() {
	return this->_symbolTable;
}

$Template* Parser::getTemplate() {
	return this->_template;
}

void Parser::setTemplate($Template* template$) {
	$set(this, _template, template$);
}

int32_t Parser::getTemplateIndex() {
	return (this->_templateIndex++);
}

$SyntaxTreeNode* Parser::makeInstance($String* uri, $String* prefix, $String* local, $Attributes* attributes) {
	$beforeCallerSensitive();
	$var($SyntaxTreeNode, node, nullptr);
	$var($QName, qname, getQName(uri, prefix, local));
	$var($String, className, $cast($String, $nc(this->_instructionClasses)->get($($nc(qname)->getStringRep()))));
	if (className != nullptr) {
		try {
			$Class* clazz = $ObjectFactory::findProviderClass(className, true);
			$assign(node, $cast($SyntaxTreeNode, $nc($($nc(clazz)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
			$nc(node)->setQName(qname);
			node->setParser(this);
			if (this->_locator != nullptr) {
				node->setLineNumber(getLineNumber());
			}
			if ($instanceOf($Stylesheet, node)) {
				$nc(this->_xsltc)->setStylesheet($cast($Stylesheet, node));
			}
			checkForSuperfluousAttributes(node, attributes);
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, e, $catch());
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::CLASS_NOT_FOUND_ERR, node));
			reportError($Constants::ERROR, err);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INTERNAL_ERR, $($of(e->getMessage())), node));
			reportError($Constants::FATAL, err);
		}
	} else {
		if (uri != nullptr) {
			$init($Constants);
			if (uri->equals($Constants::XSLT_URI)) {
				$assign(node, $new($UnsupportedElement, uri, prefix, local, false));
				$var($UnsupportedElement, element, $cast($UnsupportedElement, node));
				$init($ErrorMsg);
				$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::UNSUPPORTED_XSL_ERR, getLineNumber(), $of(local)));
				element->setErrorMessage(msg);
				if (this->versionIsOne) {
					reportError($Constants::UNSUPPORTED, msg);
				}
			} else {
				if (uri->equals($Constants::TRANSLET_URI)) {
					$assign(node, $new($UnsupportedElement, uri, prefix, local, true));
					$var($UnsupportedElement, element, $cast($UnsupportedElement, node));
					$init($ErrorMsg);
					$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::UNSUPPORTED_EXT_ERR, getLineNumber(), $of(local)));
					element->setErrorMessage(msg);
				} else {
					$var($Stylesheet, sheet, $nc(this->_xsltc)->getStylesheet());
					if ((sheet != nullptr) && (sheet->isExtension(uri))) {
						if (!$equals(sheet, $nc(this->_parentStack)->peek())) {
							$assign(node, $new($UnsupportedElement, uri, prefix, local, true));
							$var($UnsupportedElement, elem, $cast($UnsupportedElement, node));
							$init($ErrorMsg);
							$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::UNSUPPORTED_EXT_ERR, getLineNumber(), $of($$str({prefix, ":"_s, local}))));
							elem->setErrorMessage(msg);
						}
					}
				}
			}
		}
		if (node == nullptr) {
			$assign(node, $new($LiteralElement));
			node->setLineNumber(getLineNumber());
		}
	}
	if ((node != nullptr) && ($instanceOf($LiteralElement, node))) {
		$nc(($cast($LiteralElement, node)))->setQName(qname);
	}
	return (node);
}

void Parser::checkForSuperfluousAttributes($SyntaxTreeNode* node, $Attributes* attrs) {
	$var($QName, qname, $nc(node)->getQName());
	bool isStylesheet = ($instanceOf($Stylesheet, node));
	$var($StringArray, legal, $cast($StringArray, $nc(this->_instructionAttrs)->get($($nc(qname)->getStringRep()))));
	if (this->versionIsOne && legal != nullptr) {
		int32_t j = 0;
		int32_t n = $nc(attrs)->getLength();
		for (int32_t i = 0; i < n; ++i) {
			$var($String, attrQName, attrs->getQName(i));
			if (isStylesheet && $nc(attrQName)->equals("version"_s)) {
				this->versionIsOne = $nc($(attrs->getValue(i)))->equals("1.0"_s);
			}
			bool var$0 = $nc(attrQName)->startsWith("xml"_s);
			if (var$0 || $nc(attrQName)->indexOf((int32_t)u':') > 0) {
				continue;
			}
			for (j = 0; j < legal->length; ++j) {
				if ($nc(attrQName)->equalsIgnoreCase(legal->get(j))) {
					break;
				}
			}
			if (j == legal->length) {
				$init($ErrorMsg);
				$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::ILLEGAL_ATTRIBUTE_ERR, $of(attrQName), node));
				err->setWarningError(true);
				reportError($Constants::WARNING, err);
			}
		}
	}
}

$Expression* Parser::parseExpression($SyntaxTreeNode* parent, $String* exp) {
	return $cast($Expression, parseTopLevel(parent, $$str({"<EXPRESSION>"_s, exp}), nullptr));
}

$Expression* Parser::parseExpression($SyntaxTreeNode* parent, $String* attr, $String* def) {
	$var($String, exp, $nc(parent)->getAttribute(attr));
	if (($nc(exp)->length() == 0) && (def != nullptr)) {
		$assign(exp, def);
	}
	return $cast($Expression, parseTopLevel(parent, $$str({"<EXPRESSION>"_s, exp}), exp));
}

$Pattern* Parser::parsePattern($SyntaxTreeNode* parent, $String* pattern) {
	return $cast($Pattern, parseTopLevel(parent, $$str({"<PATTERN>"_s, pattern}), pattern));
}

$Pattern* Parser::parsePattern($SyntaxTreeNode* parent, $String* attr, $String* def) {
	$var($String, pattern, $nc(parent)->getAttribute(attr));
	if (($nc(pattern)->length() == 0) && (def != nullptr)) {
		$assign(pattern, def);
	}
	return $cast($Pattern, parseTopLevel(parent, $$str({"<PATTERN>"_s, pattern}), pattern));
}

$SyntaxTreeNode* Parser::parseTopLevel($SyntaxTreeNode* parent, $String* text, $String* expression) {
	int32_t line = getLineNumber();
	try {
		$nc(this->_xpathParser)->setScanner($$new($XPathLexer, static_cast<$Reader*>($$new($StringReader, text))));
		$var($Symbol, result, $nc(this->_xpathParser)->parse(expression, line));
		if (result != nullptr) {
			$var($SyntaxTreeNode, node, $cast($SyntaxTreeNode, result->value));
			if (node != nullptr) {
				node->setParser(this);
				node->setParent(parent);
				node->setLineNumber(line);
				return node;
			}
		}
		$init($ErrorMsg);
		reportError($Constants::ERROR, $$new($ErrorMsg, $ErrorMsg::XPATH_PARSER_ERR, $of(expression), parent));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(this->_xsltc)->debug()) {
			e->printStackTrace();
		}
		$init($ErrorMsg);
		reportError($Constants::ERROR, $$new($ErrorMsg, $ErrorMsg::XPATH_PARSER_ERR, $of(expression), parent));
	}
	$init($SyntaxTreeNode);
	$nc($SyntaxTreeNode::Dummy)->setParser(this);
	return $SyntaxTreeNode::Dummy;
}

bool Parser::errorsFound() {
	return $nc(this->_errors)->size() > 0;
}

void Parser::printErrors() {
	int32_t size = $nc(this->_errors)->size();
	if (size > 0) {
		$init($System);
		$init($ErrorMsg);
		$nc($System::err)->println($of($$new($ErrorMsg, $ErrorMsg::COMPILER_ERROR_KEY)));
		for (int32_t i = 0; i < size; ++i) {
			$nc($System::err)->println($$str({"  "_s, $($nc(this->_errors)->get(i))}));
		}
	}
}

void Parser::printWarnings() {
	int32_t size = $nc(this->_warnings)->size();
	if (size > 0) {
		$init($System);
		$init($ErrorMsg);
		$nc($System::err)->println($of($$new($ErrorMsg, $ErrorMsg::COMPILER_WARNING_KEY)));
		for (int32_t i = 0; i < size; ++i) {
			$nc($System::err)->println($$str({"  "_s, $($nc(this->_warnings)->get(i))}));
		}
	}
}

void Parser::reportError(int32_t category, $ErrorMsg* error) {
	switch (category) {
	case $Constants::INTERNAL:
		{
			$nc(this->_errors)->add(error);
			break;
		}
	case $Constants::UNSUPPORTED:
		{
			$nc(this->_errors)->add(error);
			break;
		}
	case $Constants::FATAL:
		{
			$nc(this->_errors)->add(error);
			break;
		}
	case $Constants::ERROR:
		{
			$nc(this->_errors)->add(error);
			break;
		}
	case $Constants::WARNING:
		{
			$nc(this->_warnings)->add(error);
			break;
		}
	}
}

$ArrayList* Parser::getErrors() {
	return this->_errors;
}

$ArrayList* Parser::getWarnings() {
	return this->_warnings;
}

void Parser::startDocument() {
	$set(this, _root, nullptr);
	$set(this, _target, nullptr);
	$set(this, _prefixMapping, nullptr);
	$set(this, _parentStack, $new($Stack));
}

void Parser::endDocument() {
}

void Parser::startPrefixMapping($String* prefix, $String* uri) {
	if (this->_prefixMapping == nullptr) {
		$set(this, _prefixMapping, $new($HashMap));
	}
	$nc(this->_prefixMapping)->put(prefix, uri);
}

void Parser::endPrefixMapping($String* prefix) {
}

void Parser::startElement($String* uri, $String* localname, $String* qname, $Attributes* attributes) {
	int32_t col = $nc(qname)->lastIndexOf((int32_t)u':');
	$var($String, prefix, (col == -1) ? ($String*)nullptr : qname->substring(0, col));
	$var($SyntaxTreeNode, element, makeInstance(uri, prefix, localname, attributes));
	if (element == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::ELEMENT_PARSE_ERR, $of($$str({prefix, $$str(u':'), localname}))));
		$throwNew($SAXException, $(err->toString()));
	}
	if (this->_root == nullptr) {
		$init($Constants);
		if ((this->_prefixMapping == nullptr) || ($nc(this->_prefixMapping)->containsValue($Constants::XSLT_URI) == false)) {
			this->_rootNamespaceDef = false;
		} else {
			this->_rootNamespaceDef = true;
		}
		$set(this, _root, element);
	} else {
		$var($SyntaxTreeNode, parent, $cast($SyntaxTreeNode, $nc(this->_parentStack)->peek()));
		$load($Import);
		bool var$0 = $nc($of(element))->getClass()->isAssignableFrom($Import::class$);
		if (var$0 && $nc(parent)->notTypeOf($Import::class$)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR, $of($$str({prefix, $$str(u':'), localname}))));
			$throwNew($SAXException, $(err->toString()));
		}
		$nc(parent)->addElement(element);
		$nc(element)->setParent(parent);
	}
	$nc(element)->setAttributes($$new($AttributesImpl, attributes));
	element->setPrefixMapping(this->_prefixMapping);
	if ($instanceOf($Stylesheet, element)) {
		$nc($(getSymbolTable()))->setCurrentNode(element);
		$nc(($cast($Stylesheet, element)))->declareExtensionPrefixes(this);
	}
	$set(this, _prefixMapping, nullptr);
	$nc(this->_parentStack)->push(element);
}

void Parser::endElement($String* uri, $String* localname, $String* qname) {
	$nc(this->_parentStack)->pop();
}

void Parser::characters($chars* ch, int32_t start, int32_t length) {
	$var($String, string, $new($String, ch, start, length));
	$var($SyntaxTreeNode, parent, $cast($SyntaxTreeNode, $nc(this->_parentStack)->peek()));
	if (string->length() == 0) {
		return;
	}
	if ($instanceOf($Text, parent)) {
		$nc(($cast($Text, parent)))->setText(string);
		return;
	}
	if ($instanceOf($Stylesheet, parent)) {
		return;
	}
	$var($SyntaxTreeNode, bro, $nc(parent)->lastChild());
	if ((bro != nullptr) && ($instanceOf($Text, bro))) {
		$var($Text, text, $cast($Text, bro));
		if (!text->isTextElement()) {
			if ((length > 1) || (((int32_t)$nc(ch)->get(0)) < 256)) {
				text->setText(string);
				return;
			}
		}
	}
	parent->addElement($$new($Text, string));
}

$String* Parser::getTokenValue($String* token) {
	int32_t start = $nc(token)->indexOf((int32_t)u'\"');
	int32_t stop = token->lastIndexOf((int32_t)u'\"');
	return token->substring(start + 1, stop);
}

void Parser::processingInstruction($String* name, $String* value) {
	if ((this->_target == nullptr) && ($nc(name)->equals("xml-stylesheet"_s))) {
		$var($String, href, nullptr);
		$var($String, media, nullptr);
		$var($String, title, nullptr);
		$var($String, charset, nullptr);
		$var($StringTokenizer, tokens, $new($StringTokenizer, value));
		while (tokens->hasMoreElements()) {
			$var($String, token, $cast($String, tokens->nextElement()));
			if ($nc(token)->startsWith("href"_s)) {
				$assign(href, getTokenValue(token));
			} else if (token->startsWith("media"_s)) {
				$assign(media, getTokenValue(token));
			} else if (token->startsWith("title"_s)) {
				$assign(title, getTokenValue(token));
			} else if (token->startsWith("charset"_s)) {
				$assign(charset, getTokenValue(token));
			}
		}
		bool var$1 = ((this->_PImedia == nullptr) || ($nc(this->_PImedia)->equals(media)));
		bool var$0 = var$1 && ((this->_PItitle == nullptr) || ($nc(this->_PImedia)->equals(title)));
		if (var$0 && ((this->_PIcharset == nullptr) || ($nc(this->_PImedia)->equals(charset)))) {
			$set(this, _target, href);
		}
	}
}

void Parser::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
}

void Parser::skippedEntity($String* name) {
}

void Parser::setDocumentLocator($Locator* locator) {
	$set(this, _locator, locator);
}

int32_t Parser::getLineNumber() {
	int32_t line = 0;
	if (this->_locator != nullptr) {
		line = $nc(this->_locator)->getLineNumber();
	}
	return line;
}

Parser::Parser() {
}

void clinit$Parser($Class* class$) {
	$assignStatic(Parser::XSL, "xsl"_s);
	$assignStatic(Parser::TRANSLET, "translet"_s);
}

$Class* Parser::load$($String* name, bool initialize) {
	$loadClass(Parser, name, initialize, &_Parser_ClassInfo_, clinit$Parser, allocate$Parser);
	return class$;
}

$Class* Parser::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com