#include <com/sun/org/apache/xml/internal/serializer/EmptySerializer.h>

#include <com/sun/org/apache/xml/internal/serializer/DOMSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/Transformer.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef ERR

using $DOMSerializer = ::com::sun::org::apache::xml::internal::serializer::DOMSerializer;
using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Transformer = ::javax::xml::transform::Transformer;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _EmptySerializer_FieldInfo_[] = {
	{"ERR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(EmptySerializer, ERR)},
	{}
};

$MethodInfo _EmptySerializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmptySerializer::*)()>(&EmptySerializer::init$))},
	{"aMethodIsCalled", "()V", nullptr, 0},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"addAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"addUniqueAttribute", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"addXSLAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"asContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"asDOM3Serializer", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"asDOMSerializer", "()Lcom/sun/org/apache/xml/internal/serializer/DOMSerializer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"characters", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"close", "()V", nullptr, $PUBLIC},
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"couldThrowIOException", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"couldThrowSAXException", "()V", nullptr, $PROTECTED, nullptr, "org.xml.sax.SAXException"},
	{"couldThrowSAXException", "([CII)V", nullptr, $PROTECTED, nullptr, "org.xml.sax.SAXException"},
	{"couldThrowSAXException", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "org.xml.sax.SAXException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"entityReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"flushPending", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"getDoctypePublic", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDoctypeSystem", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIndent", "()Z", nullptr, $PUBLIC},
	{"getIndentAmount", "()I", nullptr, $PUBLIC},
	{"getMediaType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceMappings", "()Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;", nullptr, $PUBLIC},
	{"getNamespaceURI", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURIFromPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOmitXMLDeclaration", "()Z", nullptr, $PUBLIC},
	{"getOutputFormat", "()Ljava/util/Properties;", nullptr, $PUBLIC},
	{"getOutputProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOutputPropertyDefault", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStandalone", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"reset", "()Z", nullptr, $PUBLIC},
	{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setCdataSectionElements", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC},
	{"setDTDEntityExpansion", "(Z)V", nullptr, $PUBLIC},
	{"setDoctype", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setDoctypePublic", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setDoctypeSystem", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"setIndent", "(Z)V", nullptr, $PUBLIC},
	{"setIndentAmount", "(I)V", nullptr, $PUBLIC},
	{"setIsStandalone", "(Z)V", nullptr, $PUBLIC},
	{"setMediaType", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setNamespaceMappings", "(Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;)V", nullptr, $PUBLIC},
	{"setOmitXMLDeclaration", "(Z)V", nullptr, $PUBLIC},
	{"setOutputFormat", "(Ljava/util/Properties;)V", nullptr, $PUBLIC},
	{"setOutputProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setOutputPropertyDefault", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC},
	{"setSourceLocator", "(Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC},
	{"setStandalone", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTransformer", "(Ljavax/xml/transform/Transformer;)V", nullptr, $PUBLIC},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _EmptySerializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.EmptySerializer",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.serializer.SerializationHandler",
	_EmptySerializer_FieldInfo_,
	_EmptySerializer_MethodInfo_
};

$Object* allocate$EmptySerializer($Class* clazz) {
	return $of($alloc(EmptySerializer));
}

$String* EmptySerializer::ERR = nullptr;

void EmptySerializer::init$() {
}

void EmptySerializer::couldThrowIOException() {
	return;
}

void EmptySerializer::couldThrowSAXException() {
	return;
}

void EmptySerializer::couldThrowSAXException($chars* chars, int32_t off, int32_t len) {
	return;
}

void EmptySerializer::couldThrowSAXException($String* elemQName) {
	return;
}

void EmptySerializer::aMethodIsCalled() {
	return;
}

$ContentHandler* EmptySerializer::asContentHandler() {
	couldThrowIOException();
	return nullptr;
}

void EmptySerializer::setContentHandler($ContentHandler* ch) {
	aMethodIsCalled();
}

void EmptySerializer::close() {
	aMethodIsCalled();
}

$Properties* EmptySerializer::getOutputFormat() {
	aMethodIsCalled();
	return nullptr;
}

$OutputStream* EmptySerializer::getOutputStream() {
	aMethodIsCalled();
	return nullptr;
}

$Writer* EmptySerializer::getWriter() {
	aMethodIsCalled();
	return nullptr;
}

bool EmptySerializer::reset() {
	aMethodIsCalled();
	return false;
}

void EmptySerializer::serialize($Node* node) {
	couldThrowIOException();
}

void EmptySerializer::setCdataSectionElements($List* URI_and_localNames) {
	aMethodIsCalled();
}

bool EmptySerializer::setEscaping(bool escape) {
	couldThrowSAXException();
	return false;
}

void EmptySerializer::setIndent(bool indent) {
	aMethodIsCalled();
}

void EmptySerializer::setIndentAmount(int32_t spaces) {
	aMethodIsCalled();
}

void EmptySerializer::setIsStandalone(bool isStandalone) {
	aMethodIsCalled();
}

void EmptySerializer::setOutputFormat($Properties* format) {
	aMethodIsCalled();
}

void EmptySerializer::setOutputStream($OutputStream* output) {
	aMethodIsCalled();
}

void EmptySerializer::setVersion($String* version) {
	aMethodIsCalled();
}

void EmptySerializer::setWriter($Writer* writer) {
	aMethodIsCalled();
}

void EmptySerializer::setTransformer($Transformer* transformer) {
	aMethodIsCalled();
}

$Transformer* EmptySerializer::getTransformer() {
	aMethodIsCalled();
	return nullptr;
}

void EmptySerializer::flushPending() {
	couldThrowSAXException();
}

void EmptySerializer::addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) {
	couldThrowSAXException();
}

void EmptySerializer::addAttributes($Attributes* atts) {
	couldThrowSAXException();
}

void EmptySerializer::addAttribute($String* name, $String* value) {
	aMethodIsCalled();
}

void EmptySerializer::characters($String* chars) {
	couldThrowSAXException();
}

void EmptySerializer::endElement($String* elemName) {
	couldThrowSAXException();
}

void EmptySerializer::startDocument() {
	couldThrowSAXException();
}

void EmptySerializer::startElement($String* uri, $String* localName, $String* qName) {
	couldThrowSAXException(qName);
}

void EmptySerializer::startElement($String* qName) {
	couldThrowSAXException(qName);
}

void EmptySerializer::namespaceAfterStartElement($String* uri, $String* prefix) {
	couldThrowSAXException();
}

bool EmptySerializer::startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) {
	couldThrowSAXException();
	return false;
}

void EmptySerializer::entityReference($String* entityName) {
	couldThrowSAXException();
}

$NamespaceMappings* EmptySerializer::getNamespaceMappings() {
	aMethodIsCalled();
	return nullptr;
}

$String* EmptySerializer::getPrefix($String* uri) {
	aMethodIsCalled();
	return nullptr;
}

$String* EmptySerializer::getNamespaceURI($String* name, bool isElement) {
	aMethodIsCalled();
	return nullptr;
}

$String* EmptySerializer::getNamespaceURIFromPrefix($String* prefix) {
	aMethodIsCalled();
	return nullptr;
}

void EmptySerializer::setDocumentLocator($Locator* arg0) {
	aMethodIsCalled();
}

void EmptySerializer::endDocument() {
	couldThrowSAXException();
}

void EmptySerializer::startPrefixMapping($String* arg0, $String* arg1) {
	couldThrowSAXException();
}

void EmptySerializer::endPrefixMapping($String* arg0) {
	couldThrowSAXException();
}

void EmptySerializer::startElement($String* arg0, $String* arg1, $String* arg2, $Attributes* arg3) {
	couldThrowSAXException();
}

void EmptySerializer::endElement($String* arg0, $String* arg1, $String* arg2) {
	couldThrowSAXException();
}

void EmptySerializer::characters($chars* arg0, int32_t arg1, int32_t arg2) {
	couldThrowSAXException(arg0, arg1, arg2);
}

void EmptySerializer::ignorableWhitespace($chars* arg0, int32_t arg1, int32_t arg2) {
	couldThrowSAXException();
}

void EmptySerializer::processingInstruction($String* arg0, $String* arg1) {
	couldThrowSAXException();
}

void EmptySerializer::skippedEntity($String* arg0) {
	couldThrowSAXException();
}

void EmptySerializer::comment($String* comment) {
	couldThrowSAXException();
}

void EmptySerializer::startDTD($String* arg0, $String* arg1, $String* arg2) {
	couldThrowSAXException();
}

void EmptySerializer::endDTD() {
	couldThrowSAXException();
}

void EmptySerializer::startEntity($String* arg0) {
	couldThrowSAXException();
}

void EmptySerializer::endEntity($String* arg0) {
	couldThrowSAXException();
}

void EmptySerializer::startCDATA() {
	couldThrowSAXException();
}

void EmptySerializer::endCDATA() {
	couldThrowSAXException();
}

void EmptySerializer::comment($chars* arg0, int32_t arg1, int32_t arg2) {
	couldThrowSAXException();
}

$String* EmptySerializer::getDoctypePublic() {
	aMethodIsCalled();
	return nullptr;
}

$String* EmptySerializer::getDoctypeSystem() {
	aMethodIsCalled();
	return nullptr;
}

$String* EmptySerializer::getEncoding() {
	aMethodIsCalled();
	return nullptr;
}

bool EmptySerializer::getIndent() {
	aMethodIsCalled();
	return false;
}

int32_t EmptySerializer::getIndentAmount() {
	aMethodIsCalled();
	return 0;
}

$String* EmptySerializer::getMediaType() {
	aMethodIsCalled();
	return nullptr;
}

bool EmptySerializer::getOmitXMLDeclaration() {
	aMethodIsCalled();
	return false;
}

$String* EmptySerializer::getStandalone() {
	aMethodIsCalled();
	return nullptr;
}

$String* EmptySerializer::getVersion() {
	aMethodIsCalled();
	return nullptr;
}

void EmptySerializer::setDoctype($String* system, $String* pub) {
	aMethodIsCalled();
}

void EmptySerializer::setDoctypePublic($String* doctype) {
	aMethodIsCalled();
}

void EmptySerializer::setDoctypeSystem($String* doctype) {
	aMethodIsCalled();
}

void EmptySerializer::setEncoding($String* encoding) {
	aMethodIsCalled();
}

void EmptySerializer::setMediaType($String* mediatype) {
	aMethodIsCalled();
}

void EmptySerializer::setOmitXMLDeclaration(bool b) {
	aMethodIsCalled();
}

void EmptySerializer::setStandalone($String* standalone) {
	aMethodIsCalled();
}

void EmptySerializer::elementDecl($String* arg0, $String* arg1) {
	couldThrowSAXException();
}

void EmptySerializer::attributeDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3, $String* arg4) {
	couldThrowSAXException();
}

void EmptySerializer::internalEntityDecl($String* arg0, $String* arg1) {
	couldThrowSAXException();
}

void EmptySerializer::externalEntityDecl($String* arg0, $String* arg1, $String* arg2) {
	couldThrowSAXException();
}

void EmptySerializer::warning($SAXParseException* arg0) {
	couldThrowSAXException();
}

void EmptySerializer::error($SAXParseException* arg0) {
	couldThrowSAXException();
}

void EmptySerializer::fatalError($SAXParseException* arg0) {
	couldThrowSAXException();
}

$DOMSerializer* EmptySerializer::asDOMSerializer() {
	couldThrowIOException();
	return nullptr;
}

void EmptySerializer::setNamespaceMappings($NamespaceMappings* mappings) {
	aMethodIsCalled();
}

void EmptySerializer::setSourceLocator($SourceLocator* locator) {
	aMethodIsCalled();
}

void EmptySerializer::addUniqueAttribute($String* name, $String* value, int32_t flags) {
	couldThrowSAXException();
}

void EmptySerializer::characters($Node* node) {
	couldThrowSAXException();
}

void EmptySerializer::addXSLAttribute($String* qName, $String* value, $String* uri) {
	aMethodIsCalled();
}

void EmptySerializer::addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value) {
	couldThrowSAXException();
}

void EmptySerializer::notationDecl($String* arg0, $String* arg1, $String* arg2) {
	couldThrowSAXException();
}

void EmptySerializer::unparsedEntityDecl($String* arg0, $String* arg1, $String* arg2, $String* arg3) {
	couldThrowSAXException();
}

void EmptySerializer::setDTDEntityExpansion(bool expand) {
	aMethodIsCalled();
}

$String* EmptySerializer::getOutputProperty($String* name) {
	aMethodIsCalled();
	return nullptr;
}

$String* EmptySerializer::getOutputPropertyDefault($String* name) {
	aMethodIsCalled();
	return nullptr;
}

void EmptySerializer::setOutputProperty($String* name, $String* val) {
	aMethodIsCalled();
}

void EmptySerializer::setOutputPropertyDefault($String* name, $String* val) {
	aMethodIsCalled();
}

$Object* EmptySerializer::asDOM3Serializer() {
	couldThrowIOException();
	return $of(nullptr);
}

EmptySerializer::EmptySerializer() {
}

void clinit$EmptySerializer($Class* class$) {
	$assignStatic(EmptySerializer::ERR, "EmptySerializer method not over-ridden"_s);
}

$Class* EmptySerializer::load$($String* name, bool initialize) {
	$loadClass(EmptySerializer, name, initialize, &_EmptySerializer_ClassInfo_, clinit$EmptySerializer, allocate$EmptySerializer);
	return class$;
}

$Class* EmptySerializer::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com