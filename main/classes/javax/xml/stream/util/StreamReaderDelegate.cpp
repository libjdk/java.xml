#include <javax/xml/stream/util/StreamReaderDelegate.h>

#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;

namespace javax {
	namespace xml {
		namespace stream {
			namespace util {

$FieldInfo _StreamReaderDelegate_FieldInfo_[] = {
	{"reader", "Ljavax/xml/stream/XMLStreamReader;", nullptr, $PRIVATE, $field(StreamReaderDelegate, reader)},
	{}
};

$MethodInfo _StreamReaderDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StreamReaderDelegate::*)()>(&StreamReaderDelegate::init$))},
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PUBLIC, $method(static_cast<void(StreamReaderDelegate::*)($XMLStreamReader*)>(&StreamReaderDelegate::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeName", "(I)Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"getAttributeNamespace", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributePrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCharacterEncodingScheme", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getElementText", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEventType", "()I", nullptr, $PUBLIC},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC},
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC},
	{"getNamespaceCount", "()I", nullptr, $PUBLIC},
	{"getNamespacePrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPIData", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPITarget", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParent", "()Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTextCharacters", "(I[CII)I", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getTextCharacters", "()[C", nullptr, $PUBLIC},
	{"getTextLength", "()I", nullptr, $PUBLIC},
	{"getTextStart", "()I", nullptr, $PUBLIC},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasName", "()Z", nullptr, $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"hasText", "()Z", nullptr, $PUBLIC},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC},
	{"isCharacters", "()Z", nullptr, $PUBLIC},
	{"isEndElement", "()Z", nullptr, $PUBLIC},
	{"isStandalone", "()Z", nullptr, $PUBLIC},
	{"isStartElement", "()Z", nullptr, $PUBLIC},
	{"isWhiteSpace", "()Z", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"nextTag", "()I", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"require", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"setParent", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PUBLIC},
	{"standaloneSet", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StreamReaderDelegate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.stream.util.StreamReaderDelegate",
	"java.lang.Object",
	"javax.xml.stream.XMLStreamReader",
	_StreamReaderDelegate_FieldInfo_,
	_StreamReaderDelegate_MethodInfo_
};

$Object* allocate$StreamReaderDelegate($Class* clazz) {
	return $of($alloc(StreamReaderDelegate));
}

void StreamReaderDelegate::init$() {
}

void StreamReaderDelegate::init$($XMLStreamReader* reader) {
	$set(this, reader, reader);
}

void StreamReaderDelegate::setParent($XMLStreamReader* reader) {
	$set(this, reader, reader);
}

$XMLStreamReader* StreamReaderDelegate::getParent() {
	return this->reader;
}

int32_t StreamReaderDelegate::next() {
	return $nc(this->reader)->next();
}

int32_t StreamReaderDelegate::nextTag() {
	return $nc(this->reader)->nextTag();
}

$String* StreamReaderDelegate::getElementText() {
	return $nc(this->reader)->getElementText();
}

void StreamReaderDelegate::require(int32_t type, $String* namespaceURI, $String* localName) {
	$nc(this->reader)->require(type, namespaceURI, localName);
}

bool StreamReaderDelegate::hasNext() {
	return $nc(this->reader)->hasNext();
}

void StreamReaderDelegate::close() {
	$nc(this->reader)->close();
}

$String* StreamReaderDelegate::getNamespaceURI($String* prefix) {
	return $nc(this->reader)->getNamespaceURI(prefix);
}

$NamespaceContext* StreamReaderDelegate::getNamespaceContext() {
	return $nc(this->reader)->getNamespaceContext();
}

bool StreamReaderDelegate::isStartElement() {
	return $nc(this->reader)->isStartElement();
}

bool StreamReaderDelegate::isEndElement() {
	return $nc(this->reader)->isEndElement();
}

bool StreamReaderDelegate::isCharacters() {
	return $nc(this->reader)->isCharacters();
}

bool StreamReaderDelegate::isWhiteSpace() {
	return $nc(this->reader)->isWhiteSpace();
}

$String* StreamReaderDelegate::getAttributeValue($String* namespaceUri, $String* localName) {
	return $nc(this->reader)->getAttributeValue(namespaceUri, localName);
}

int32_t StreamReaderDelegate::getAttributeCount() {
	return $nc(this->reader)->getAttributeCount();
}

$QName* StreamReaderDelegate::getAttributeName(int32_t index) {
	return $nc(this->reader)->getAttributeName(index);
}

$String* StreamReaderDelegate::getAttributePrefix(int32_t index) {
	return $nc(this->reader)->getAttributePrefix(index);
}

$String* StreamReaderDelegate::getAttributeNamespace(int32_t index) {
	return $nc(this->reader)->getAttributeNamespace(index);
}

$String* StreamReaderDelegate::getAttributeLocalName(int32_t index) {
	return $nc(this->reader)->getAttributeLocalName(index);
}

$String* StreamReaderDelegate::getAttributeType(int32_t index) {
	return $nc(this->reader)->getAttributeType(index);
}

$String* StreamReaderDelegate::getAttributeValue(int32_t index) {
	return $nc(this->reader)->getAttributeValue(index);
}

bool StreamReaderDelegate::isAttributeSpecified(int32_t index) {
	return $nc(this->reader)->isAttributeSpecified(index);
}

int32_t StreamReaderDelegate::getNamespaceCount() {
	return $nc(this->reader)->getNamespaceCount();
}

$String* StreamReaderDelegate::getNamespacePrefix(int32_t index) {
	return $nc(this->reader)->getNamespacePrefix(index);
}

$String* StreamReaderDelegate::getNamespaceURI(int32_t index) {
	return $nc(this->reader)->getNamespaceURI(index);
}

int32_t StreamReaderDelegate::getEventType() {
	return $nc(this->reader)->getEventType();
}

$String* StreamReaderDelegate::getText() {
	return $nc(this->reader)->getText();
}

int32_t StreamReaderDelegate::getTextCharacters(int32_t sourceStart, $chars* target, int32_t targetStart, int32_t length) {
	return $nc(this->reader)->getTextCharacters(sourceStart, target, targetStart, length);
}

$chars* StreamReaderDelegate::getTextCharacters() {
	return $nc(this->reader)->getTextCharacters();
}

int32_t StreamReaderDelegate::getTextStart() {
	return $nc(this->reader)->getTextStart();
}

int32_t StreamReaderDelegate::getTextLength() {
	return $nc(this->reader)->getTextLength();
}

$String* StreamReaderDelegate::getEncoding() {
	return $nc(this->reader)->getEncoding();
}

bool StreamReaderDelegate::hasText() {
	return $nc(this->reader)->hasText();
}

$Location* StreamReaderDelegate::getLocation() {
	return $nc(this->reader)->getLocation();
}

$QName* StreamReaderDelegate::getName() {
	return $nc(this->reader)->getName();
}

$String* StreamReaderDelegate::getLocalName() {
	return $nc(this->reader)->getLocalName();
}

bool StreamReaderDelegate::hasName() {
	return $nc(this->reader)->hasName();
}

$String* StreamReaderDelegate::getNamespaceURI() {
	return $nc(this->reader)->getNamespaceURI();
}

$String* StreamReaderDelegate::getPrefix() {
	return $nc(this->reader)->getPrefix();
}

$String* StreamReaderDelegate::getVersion() {
	return $nc(this->reader)->getVersion();
}

bool StreamReaderDelegate::isStandalone() {
	return $nc(this->reader)->isStandalone();
}

bool StreamReaderDelegate::standaloneSet() {
	return $nc(this->reader)->standaloneSet();
}

$String* StreamReaderDelegate::getCharacterEncodingScheme() {
	return $nc(this->reader)->getCharacterEncodingScheme();
}

$String* StreamReaderDelegate::getPITarget() {
	return $nc(this->reader)->getPITarget();
}

$String* StreamReaderDelegate::getPIData() {
	return $nc(this->reader)->getPIData();
}

$Object* StreamReaderDelegate::getProperty($String* name) {
	return $of($nc(this->reader)->getProperty(name));
}

StreamReaderDelegate::StreamReaderDelegate() {
}

$Class* StreamReaderDelegate::load$($String* name, bool initialize) {
	$loadClass(StreamReaderDelegate, name, initialize, &_StreamReaderDelegate_ClassInfo_, allocate$StreamReaderDelegate);
	return class$;
}

$Class* StreamReaderDelegate::class$ = nullptr;

			} // util
		} // stream
	} // xml
} // javax