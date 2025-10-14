#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>

#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLParser = ::com::sun::org::apache::xerces::internal::parsers::XMLParser;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLDTDContentModelSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _AbstractXMLDocumentParser_FieldInfo_[] = {
	{"fInDTD", "Z", nullptr, $PROTECTED, $field(AbstractXMLDocumentParser, fInDTD)},
	{"fDocumentSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PROTECTED, $field(AbstractXMLDocumentParser, fDocumentSource)},
	{"fDTDSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PROTECTED, $field(AbstractXMLDocumentParser, fDTDSource)},
	{"fDTDContentModelSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PROTECTED, $field(AbstractXMLDocumentParser, fDTDContentModelSource)},
	{}
};

$MethodInfo _AbstractXMLDocumentParser_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractXMLDocumentParser::*)($XMLParserConfiguration*)>(&AbstractXMLDocumentParser::init$))},
	{"any", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"element", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"empty", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endContentModel", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDContentModelSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PUBLIC},
	{"getDTDSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PUBLIC},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ignoredCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"occurrence", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"pcdata", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "()V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"separator", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;)V", nullptr, $PUBLIC},
	{"setDTDSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;)V", nullptr, $PUBLIC},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startContentModel", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _AbstractXMLDocumentParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.parsers.AbstractXMLDocumentParser",
	"com.sun.org.apache.xerces.internal.parsers.XMLParser",
	"com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler,com.sun.org.apache.xerces.internal.xni.XMLDTDHandler,com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler",
	_AbstractXMLDocumentParser_FieldInfo_,
	_AbstractXMLDocumentParser_MethodInfo_
};

$Object* allocate$AbstractXMLDocumentParser($Class* clazz) {
	return $of($alloc(AbstractXMLDocumentParser));
}

int32_t AbstractXMLDocumentParser::hashCode() {
	 return this->$XMLParser::hashCode();
}

bool AbstractXMLDocumentParser::equals(Object$* arg0) {
	 return this->$XMLParser::equals(arg0);
}

$Object* AbstractXMLDocumentParser::clone() {
	 return this->$XMLParser::clone();
}

$String* AbstractXMLDocumentParser::toString() {
	 return this->$XMLParser::toString();
}

void AbstractXMLDocumentParser::finalize() {
	this->$XMLParser::finalize();
}

void AbstractXMLDocumentParser::init$($XMLParserConfiguration* config) {
	$XMLParser::init$(config);
	$nc(config)->setDocumentHandler(this);
	config->setDTDHandler(this);
	config->setDTDContentModelHandler(this);
}

void AbstractXMLDocumentParser::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	startElement(element, attributes, augs);
	endElement(element, augs);
}

void AbstractXMLDocumentParser::characters($XMLString* text, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::endElement($QName* element, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::startCDATA($Augmentations* augs) {
}

void AbstractXMLDocumentParser::endCDATA($Augmentations* augs) {
}

void AbstractXMLDocumentParser::endDocument($Augmentations* augs) {
}

void AbstractXMLDocumentParser::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::textDecl($String* version, $String* encoding, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::endGeneralEntity($String* name, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::comment($XMLString* text, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::setDocumentSource($XMLDocumentSource* source) {
	$set(this, fDocumentSource, source);
}

$XMLDocumentSource* AbstractXMLDocumentParser::getDocumentSource() {
	return this->fDocumentSource;
}

void AbstractXMLDocumentParser::startDTD($XMLLocator* locator, $Augmentations* augs) {
	this->fInDTD = true;
}

void AbstractXMLDocumentParser::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
}

void AbstractXMLDocumentParser::endExternalSubset($Augmentations* augmentations) {
}

void AbstractXMLDocumentParser::startParameterEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::endParameterEntity($String* name, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::ignoredCharacters($XMLString* text, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::elementDecl($String* name, $String* contentModel, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::startAttlist($String* elementName, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::endAttlist($Augmentations* augs) {
}

void AbstractXMLDocumentParser::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::startConditional(int16_t type, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::endConditional($Augmentations* augs) {
}

void AbstractXMLDocumentParser::endDTD($Augmentations* augs) {
	this->fInDTD = false;
}

void AbstractXMLDocumentParser::setDTDSource($XMLDTDSource* source) {
	$set(this, fDTDSource, source);
}

$XMLDTDSource* AbstractXMLDocumentParser::getDTDSource() {
	return this->fDTDSource;
}

void AbstractXMLDocumentParser::startContentModel($String* elementName, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::any($Augmentations* augs) {
}

void AbstractXMLDocumentParser::empty($Augmentations* augs) {
}

void AbstractXMLDocumentParser::startGroup($Augmentations* augs) {
}

void AbstractXMLDocumentParser::pcdata($Augmentations* augs) {
}

void AbstractXMLDocumentParser::element($String* elementName, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::separator(int16_t separator, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::occurrence(int16_t occurrence, $Augmentations* augs) {
}

void AbstractXMLDocumentParser::endGroup($Augmentations* augs) {
}

void AbstractXMLDocumentParser::endContentModel($Augmentations* augs) {
}

void AbstractXMLDocumentParser::setDTDContentModelSource($XMLDTDContentModelSource* source) {
	$set(this, fDTDContentModelSource, source);
}

$XMLDTDContentModelSource* AbstractXMLDocumentParser::getDTDContentModelSource() {
	return this->fDTDContentModelSource;
}

void AbstractXMLDocumentParser::reset() {
	$XMLParser::reset();
	this->fInDTD = false;
}

AbstractXMLDocumentParser::AbstractXMLDocumentParser() {
}

$Class* AbstractXMLDocumentParser::load$($String* name, bool initialize) {
	$loadClass(AbstractXMLDocumentParser, name, initialize, &_AbstractXMLDocumentParser_ClassInfo_, allocate$AbstractXMLDocumentParser);
	return class$;
}

$Class* AbstractXMLDocumentParser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com