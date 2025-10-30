#include <com/sun/org/apache/xerces/internal/impl/XMLStreamFilterImpl.h>

#include <java/lang/IllegalStateException.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/StreamFilter.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef END_DOCUMENT
#undef START_ELEMENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $StreamFilter = ::javax::xml::stream::StreamFilter;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLStreamFilterImpl_FieldInfo_[] = {
	{"fStreamFilter", "Ljavax/xml/stream/StreamFilter;", nullptr, $PRIVATE, $field(XMLStreamFilterImpl, fStreamFilter)},
	{"fStreamReader", "Ljavax/xml/stream/XMLStreamReader;", nullptr, $PRIVATE, $field(XMLStreamFilterImpl, fStreamReader)},
	{"fCurrentEvent", "I", nullptr, $PRIVATE, $field(XMLStreamFilterImpl, fCurrentEvent)},
	{"fEventAccepted", "Z", nullptr, $PRIVATE, $field(XMLStreamFilterImpl, fEventAccepted)},
	{"fStreamAdvancedByHasNext", "Z", nullptr, $PRIVATE, $field(XMLStreamFilterImpl, fStreamAdvancedByHasNext)},
	{}
};

$MethodInfo _XMLStreamFilterImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;Ljavax/xml/stream/StreamFilter;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLStreamFilterImpl::*)($XMLStreamReader*,$StreamFilter*)>(&XMLStreamFilterImpl::init$)), "javax.xml.stream.XMLStreamException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"findNextEvent", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(XMLStreamFilterImpl::*)()>(&XMLStreamFilterImpl::findNextEvent)), "javax.xml.stream.XMLStreamException"},
	{"findNextTag", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(XMLStreamFilterImpl::*)()>(&XMLStreamFilterImpl::findNextTag)), "javax.xml.stream.XMLStreamException"},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeName", "(I)Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"getAttributeNamespace", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributePrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
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
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPIData", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPITarget", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTextCharacters", "()[C", nullptr, $PUBLIC},
	{"getTextCharacters", "(I[CII)I", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
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
	{"setStreamFilter", "(Ljavax/xml/stream/StreamFilter;)V", nullptr, $PROTECTED},
	{"standaloneSet", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLStreamFilterImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLStreamFilterImpl",
	"java.lang.Object",
	"javax.xml.stream.XMLStreamReader",
	_XMLStreamFilterImpl_FieldInfo_,
	_XMLStreamFilterImpl_MethodInfo_
};

$Object* allocate$XMLStreamFilterImpl($Class* clazz) {
	return $of($alloc(XMLStreamFilterImpl));
}

void XMLStreamFilterImpl::init$($XMLStreamReader* reader, $StreamFilter* filter) {
	$set(this, fStreamFilter, nullptr);
	$set(this, fStreamReader, nullptr);
	this->fEventAccepted = false;
	this->fStreamAdvancedByHasNext = false;
	$set(this, fStreamReader, reader);
	$set(this, fStreamFilter, filter);
	if ($nc(this->fStreamFilter)->accept(this->fStreamReader)) {
		this->fEventAccepted = true;
	} else {
		findNextEvent();
	}
}

void XMLStreamFilterImpl::setStreamFilter($StreamFilter* sf) {
	$set(this, fStreamFilter, sf);
}

int32_t XMLStreamFilterImpl::next() {
	if (this->fStreamAdvancedByHasNext && this->fEventAccepted) {
		this->fStreamAdvancedByHasNext = false;
		return this->fCurrentEvent;
	}
	int32_t event = findNextEvent();
	if (event != -1) {
		return event;
	}
	$throwNew($IllegalStateException, "The stream reader has reached the end of the document, or there are no more  items to return"_s);
}

int32_t XMLStreamFilterImpl::nextTag() {
	if (this->fStreamAdvancedByHasNext && this->fEventAccepted && (this->fCurrentEvent == $XMLEvent::START_ELEMENT || this->fCurrentEvent == $XMLEvent::START_ELEMENT)) {
		this->fStreamAdvancedByHasNext = false;
		return this->fCurrentEvent;
	}
	int32_t event = findNextTag();
	if (event != -1) {
		return event;
	}
	$throwNew($IllegalStateException, "The stream reader has reached the end of the document, or there are no more  items to return"_s);
}

bool XMLStreamFilterImpl::hasNext() {
	if ($nc(this->fStreamReader)->hasNext()) {
		if (!this->fEventAccepted) {
			if ((this->fCurrentEvent = findNextEvent()) == -1) {
				return false;
			} else {
				this->fStreamAdvancedByHasNext = true;
			}
		}
		return true;
	}
	return false;
}

int32_t XMLStreamFilterImpl::findNextEvent() {
	this->fStreamAdvancedByHasNext = false;
	while ($nc(this->fStreamReader)->hasNext()) {
		this->fCurrentEvent = $nc(this->fStreamReader)->next();
		if ($nc(this->fStreamFilter)->accept(this->fStreamReader)) {
			this->fEventAccepted = true;
			return this->fCurrentEvent;
		}
	}
	if (this->fCurrentEvent == $XMLEvent::END_DOCUMENT) {
		return this->fCurrentEvent;
	} else {
		return -1;
	}
}

int32_t XMLStreamFilterImpl::findNextTag() {
	this->fStreamAdvancedByHasNext = false;
	while ($nc(this->fStreamReader)->hasNext()) {
		this->fCurrentEvent = $nc(this->fStreamReader)->nextTag();
		if ($nc(this->fStreamFilter)->accept(this->fStreamReader)) {
			this->fEventAccepted = true;
			return this->fCurrentEvent;
		}
	}
	if (this->fCurrentEvent == $XMLEvent::END_DOCUMENT) {
		return this->fCurrentEvent;
	} else {
		return -1;
	}
}

void XMLStreamFilterImpl::close() {
	$nc(this->fStreamReader)->close();
}

int32_t XMLStreamFilterImpl::getAttributeCount() {
	return $nc(this->fStreamReader)->getAttributeCount();
}

$QName* XMLStreamFilterImpl::getAttributeName(int32_t index) {
	return $nc(this->fStreamReader)->getAttributeName(index);
}

$String* XMLStreamFilterImpl::getAttributeNamespace(int32_t index) {
	return $nc(this->fStreamReader)->getAttributeNamespace(index);
}

$String* XMLStreamFilterImpl::getAttributePrefix(int32_t index) {
	return $nc(this->fStreamReader)->getAttributePrefix(index);
}

$String* XMLStreamFilterImpl::getAttributeType(int32_t index) {
	return $nc(this->fStreamReader)->getAttributeType(index);
}

$String* XMLStreamFilterImpl::getAttributeValue(int32_t index) {
	return $nc(this->fStreamReader)->getAttributeValue(index);
}

$String* XMLStreamFilterImpl::getAttributeValue($String* namespaceURI, $String* localName) {
	return $nc(this->fStreamReader)->getAttributeValue(namespaceURI, localName);
}

$String* XMLStreamFilterImpl::getCharacterEncodingScheme() {
	return $nc(this->fStreamReader)->getCharacterEncodingScheme();
}

$String* XMLStreamFilterImpl::getElementText() {
	return $nc(this->fStreamReader)->getElementText();
}

$String* XMLStreamFilterImpl::getEncoding() {
	return $nc(this->fStreamReader)->getEncoding();
}

int32_t XMLStreamFilterImpl::getEventType() {
	return $nc(this->fStreamReader)->getEventType();
}

$String* XMLStreamFilterImpl::getLocalName() {
	return $nc(this->fStreamReader)->getLocalName();
}

$Location* XMLStreamFilterImpl::getLocation() {
	return $nc(this->fStreamReader)->getLocation();
}

$QName* XMLStreamFilterImpl::getName() {
	return $nc(this->fStreamReader)->getName();
}

$NamespaceContext* XMLStreamFilterImpl::getNamespaceContext() {
	return $nc(this->fStreamReader)->getNamespaceContext();
}

int32_t XMLStreamFilterImpl::getNamespaceCount() {
	return $nc(this->fStreamReader)->getNamespaceCount();
}

$String* XMLStreamFilterImpl::getNamespacePrefix(int32_t index) {
	return $nc(this->fStreamReader)->getNamespacePrefix(index);
}

$String* XMLStreamFilterImpl::getNamespaceURI() {
	return $nc(this->fStreamReader)->getNamespaceURI();
}

$String* XMLStreamFilterImpl::getNamespaceURI(int32_t index) {
	return $nc(this->fStreamReader)->getNamespaceURI(index);
}

$String* XMLStreamFilterImpl::getNamespaceURI($String* prefix) {
	return $nc(this->fStreamReader)->getNamespaceURI(prefix);
}

$String* XMLStreamFilterImpl::getPIData() {
	return $nc(this->fStreamReader)->getPIData();
}

$String* XMLStreamFilterImpl::getPITarget() {
	return $nc(this->fStreamReader)->getPITarget();
}

$String* XMLStreamFilterImpl::getPrefix() {
	return $nc(this->fStreamReader)->getPrefix();
}

$Object* XMLStreamFilterImpl::getProperty($String* name) {
	return $of($nc(this->fStreamReader)->getProperty(name));
}

$String* XMLStreamFilterImpl::getText() {
	return $nc(this->fStreamReader)->getText();
}

$chars* XMLStreamFilterImpl::getTextCharacters() {
	return $nc(this->fStreamReader)->getTextCharacters();
}

int32_t XMLStreamFilterImpl::getTextCharacters(int32_t sourceStart, $chars* target, int32_t targetStart, int32_t length) {
	return $nc(this->fStreamReader)->getTextCharacters(sourceStart, target, targetStart, length);
}

int32_t XMLStreamFilterImpl::getTextLength() {
	return $nc(this->fStreamReader)->getTextLength();
}

int32_t XMLStreamFilterImpl::getTextStart() {
	return $nc(this->fStreamReader)->getTextStart();
}

$String* XMLStreamFilterImpl::getVersion() {
	return $nc(this->fStreamReader)->getVersion();
}

bool XMLStreamFilterImpl::hasName() {
	return $nc(this->fStreamReader)->hasName();
}

bool XMLStreamFilterImpl::hasText() {
	return $nc(this->fStreamReader)->hasText();
}

bool XMLStreamFilterImpl::isAttributeSpecified(int32_t index) {
	return $nc(this->fStreamReader)->isAttributeSpecified(index);
}

bool XMLStreamFilterImpl::isCharacters() {
	return $nc(this->fStreamReader)->isCharacters();
}

bool XMLStreamFilterImpl::isEndElement() {
	return $nc(this->fStreamReader)->isEndElement();
}

bool XMLStreamFilterImpl::isStandalone() {
	return $nc(this->fStreamReader)->isStandalone();
}

bool XMLStreamFilterImpl::isStartElement() {
	return $nc(this->fStreamReader)->isStartElement();
}

bool XMLStreamFilterImpl::isWhiteSpace() {
	return $nc(this->fStreamReader)->isWhiteSpace();
}

void XMLStreamFilterImpl::require(int32_t type, $String* namespaceURI, $String* localName) {
	$nc(this->fStreamReader)->require(type, namespaceURI, localName);
}

bool XMLStreamFilterImpl::standaloneSet() {
	return $nc(this->fStreamReader)->standaloneSet();
}

$String* XMLStreamFilterImpl::getAttributeLocalName(int32_t index) {
	return $nc(this->fStreamReader)->getAttributeLocalName(index);
}

XMLStreamFilterImpl::XMLStreamFilterImpl() {
}

$Class* XMLStreamFilterImpl::load$($String* name, bool initialize) {
	$loadClass(XMLStreamFilterImpl, name, initialize, &_XMLStreamFilterImpl_ClassInfo_, allocate$XMLStreamFilterImpl);
	return class$;
}

$Class* XMLStreamFilterImpl::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com