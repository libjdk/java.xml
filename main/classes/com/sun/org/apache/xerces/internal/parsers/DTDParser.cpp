#include <com/sun/org/apache/xerces/internal/parsers/DTDParser.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLGrammarParser.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <jcpp.h>

using $DTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar;
using $XMLGrammarParser = ::com::sun::org::apache::xerces::internal::parsers::XMLGrammarParser;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
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

$FieldInfo _DTDParser_FieldInfo_[] = {
	{"fDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(DTDParser, fDTDScanner)},
	{}
};

$MethodInfo _DTDParser_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(static_cast<void(DTDParser::*)($SymbolTable*)>(&DTDParser::init$))},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"childrenElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"childrenEndGroup", "()V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"childrenOccurrence", "(S)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"childrenSeparator", "(S)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"childrenStartGroup", "()V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endContentModel", "()V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDGrammar", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, $PUBLIC},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"mixedElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startContentModel", "(Ljava/lang/String;S)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _DTDParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.parsers.DTDParser",
	"com.sun.org.apache.xerces.internal.parsers.XMLGrammarParser",
	"com.sun.org.apache.xerces.internal.xni.XMLDTDHandler,com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler",
	_DTDParser_FieldInfo_,
	_DTDParser_MethodInfo_
};

$Object* allocate$DTDParser($Class* clazz) {
	return $of($alloc(DTDParser));
}

int32_t DTDParser::hashCode() {
	 return this->$XMLGrammarParser::hashCode();
}

bool DTDParser::equals(Object$* arg0) {
	 return this->$XMLGrammarParser::equals(arg0);
}

$Object* DTDParser::clone() {
	 return this->$XMLGrammarParser::clone();
}

$String* DTDParser::toString() {
	 return this->$XMLGrammarParser::toString();
}

void DTDParser::finalize() {
	this->$XMLGrammarParser::finalize();
}

void DTDParser::init$($SymbolTable* symbolTable) {
	$XMLGrammarParser::init$(symbolTable);
}

$DTDGrammar* DTDParser::getDTDGrammar() {
	return nullptr;
}

void DTDParser::startEntity($String* name, $String* publicId, $String* systemId, $String* encoding) {
}

void DTDParser::textDecl($String* version, $String* encoding) {
}

void DTDParser::startDTD($XMLLocator* locator, $Augmentations* augmentations) {
}

void DTDParser::comment($XMLString* text, $Augmentations* augmentations) {
}

void DTDParser::processingInstruction($String* target, $XMLString* data, $Augmentations* augmentations) {
}

void DTDParser::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
}

void DTDParser::endExternalSubset($Augmentations* augmentations) {
}

void DTDParser::elementDecl($String* name, $String* contentModel, $Augmentations* augmentations) {
}

void DTDParser::startAttlist($String* elementName, $Augmentations* augmentations) {
}

void DTDParser::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augmentations) {
}

void DTDParser::endAttlist($Augmentations* augmentations) {
}

void DTDParser::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augmentations) {
}

void DTDParser::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
}

void DTDParser::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augmentations) {
}

void DTDParser::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
}

void DTDParser::startConditional(int16_t type, $Augmentations* augmentations) {
}

void DTDParser::endConditional($Augmentations* augmentations) {
}

void DTDParser::endDTD($Augmentations* augmentations) {
}

void DTDParser::endEntity($String* name, $Augmentations* augmentations) {
}

void DTDParser::startContentModel($String* elementName, int16_t type) {
}

void DTDParser::mixedElement($String* elementName) {
}

void DTDParser::childrenStartGroup() {
}

void DTDParser::childrenElement($String* elementName) {
}

void DTDParser::childrenSeparator(int16_t separator) {
}

void DTDParser::childrenOccurrence(int16_t occurrence) {
}

void DTDParser::childrenEndGroup() {
}

void DTDParser::endContentModel() {
}

DTDParser::DTDParser() {
}

$Class* DTDParser::load$($String* name, bool initialize) {
	$loadClass(DTDParser, name, initialize, &_DTDParser_ClassInfo_, allocate$DTDParser);
	return class$;
}

$Class* DTDParser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com