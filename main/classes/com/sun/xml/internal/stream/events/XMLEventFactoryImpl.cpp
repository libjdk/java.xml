#include <com/sun/xml/internal/stream/events/XMLEventFactoryImpl.h>

#include <com/sun/xml/internal/stream/events/AttributeImpl.h>
#include <com/sun/xml/internal/stream/events/CharacterEvent.h>
#include <com/sun/xml/internal/stream/events/CommentEvent.h>
#include <com/sun/xml/internal/stream/events/DTDEvent.h>
#include <com/sun/xml/internal/stream/events/EndDocumentEvent.h>
#include <com/sun/xml/internal/stream/events/EndElementEvent.h>
#include <com/sun/xml/internal/stream/events/EntityReferenceEvent.h>
#include <com/sun/xml/internal/stream/events/NamespaceImpl.h>
#include <com/sun/xml/internal/stream/events/ProcessingInstructionEvent.h>
#include <com/sun/xml/internal/stream/events/StartDocumentEvent.h>
#include <com/sun/xml/internal/stream/events/StartElementEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLEventFactory.h>
#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/Comment.h>
#include <javax/xml/stream/events/DTD.h>
#include <javax/xml/stream/events/EndDocument.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/EntityDeclaration.h>
#include <javax/xml/stream/events/EntityReference.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/ProcessingInstruction.h>
#include <javax/xml/stream/events/StartDocument.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

using $AttributeImpl = ::com::sun::xml::internal::stream::events::AttributeImpl;
using $CharacterEvent = ::com::sun::xml::internal::stream::events::CharacterEvent;
using $CommentEvent = ::com::sun::xml::internal::stream::events::CommentEvent;
using $DTDEvent = ::com::sun::xml::internal::stream::events::DTDEvent;
using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $EndDocumentEvent = ::com::sun::xml::internal::stream::events::EndDocumentEvent;
using $EndElementEvent = ::com::sun::xml::internal::stream::events::EndElementEvent;
using $EntityReferenceEvent = ::com::sun::xml::internal::stream::events::EntityReferenceEvent;
using $NamespaceImpl = ::com::sun::xml::internal::stream::events::NamespaceImpl;
using $ProcessingInstructionEvent = ::com::sun::xml::internal::stream::events::ProcessingInstructionEvent;
using $StartDocumentEvent = ::com::sun::xml::internal::stream::events::StartDocumentEvent;
using $StartElementEvent = ::com::sun::xml::internal::stream::events::StartElementEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLEventFactory = ::javax::xml::stream::XMLEventFactory;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $Characters = ::javax::xml::stream::events::Characters;
using $Comment = ::javax::xml::stream::events::Comment;
using $DTD = ::javax::xml::stream::events::DTD;
using $EndDocument = ::javax::xml::stream::events::EndDocument;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $EntityDeclaration = ::javax::xml::stream::events::EntityDeclaration;
using $EntityReference = ::javax::xml::stream::events::EntityReference;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $ProcessingInstruction = ::javax::xml::stream::events::ProcessingInstruction;
using $StartDocument = ::javax::xml::stream::events::StartDocument;
using $StartElement = ::javax::xml::stream::events::StartElement;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$FieldInfo _XMLEventFactoryImpl_FieldInfo_[] = {
	{"location", "Ljavax/xml/stream/Location;", nullptr, 0, $field(XMLEventFactoryImpl, location)},
	{}
};

$MethodInfo _XMLEventFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLEventFactoryImpl::*)()>(&XMLEventFactoryImpl::init$))},
	{"createAttribute", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC},
	{"createAttribute", "(Ljavax/xml/namespace/QName;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC},
	{"createAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC},
	{"createCData", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC},
	{"createCharacters", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC},
	{"createComment", "(Ljava/lang/String;)Ljavax/xml/stream/events/Comment;", nullptr, $PUBLIC},
	{"createDTD", "(Ljava/lang/String;)Ljavax/xml/stream/events/DTD;", nullptr, $PUBLIC},
	{"createEndDocument", "()Ljavax/xml/stream/events/EndDocument;", nullptr, $PUBLIC},
	{"createEndElement", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator;)Ljavax/xml/stream/events/EndElement;", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/EndElement;", $PUBLIC},
	{"createEndElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/EndElement;", nullptr, $PUBLIC},
	{"createEndElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;)Ljavax/xml/stream/events/EndElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/EndElement;", $PUBLIC},
	{"createEntityReference", "(Ljava/lang/String;Ljavax/xml/stream/events/EntityDeclaration;)Ljavax/xml/stream/events/EntityReference;", nullptr, $PUBLIC},
	{"createIgnorableSpace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC},
	{"createNamespace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Namespace;", nullptr, $PUBLIC},
	{"createNamespace", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Namespace;", nullptr, $PUBLIC},
	{"createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/ProcessingInstruction;", nullptr, $PUBLIC},
	{"createSpace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC},
	{"createStartDocument", "()Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC},
	{"createStartDocument", "(Ljava/lang/String;)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC},
	{"createStartDocument", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC},
	{"createStartDocument", "(Ljava/lang/String;Ljava/lang/String;Z)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC},
	{"createStartElement", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator;Ljava/util/Iterator;)Ljavax/xml/stream/events/StartElement;", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/StartElement;", $PUBLIC},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/StartElement;", nullptr, $PUBLIC},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;Ljava/util/Iterator;)Ljavax/xml/stream/events/StartElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/StartElement;", $PUBLIC},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;Ljava/util/Iterator;Ljavax/xml/namespace/NamespaceContext;)Ljavax/xml/stream/events/StartElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;Ljavax/xml/namespace/NamespaceContext;)Ljavax/xml/stream/events/StartElement;", $PUBLIC},
	{"setLocation", "(Ljavax/xml/stream/Location;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLEventFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.XMLEventFactoryImpl",
	"javax.xml.stream.XMLEventFactory",
	nullptr,
	_XMLEventFactoryImpl_FieldInfo_,
	_XMLEventFactoryImpl_MethodInfo_
};

$Object* allocate$XMLEventFactoryImpl($Class* clazz) {
	return $of($alloc(XMLEventFactoryImpl));
}

void XMLEventFactoryImpl::init$() {
	$XMLEventFactory::init$();
	$set(this, location, nullptr);
}

$Attribute* XMLEventFactoryImpl::createAttribute($String* localName, $String* value) {
	$var($AttributeImpl, attr, $new($AttributeImpl, localName, value));
	if (this->location != nullptr) {
		attr->setLocation(this->location);
	}
	return attr;
}

$Attribute* XMLEventFactoryImpl::createAttribute($QName* name, $String* value) {
	$var($String, var$0, $nc(name)->getPrefix());
	$var($String, var$1, name->getNamespaceURI());
	return createAttribute(var$0, var$1, $(name->getLocalPart()), value);
}

$Attribute* XMLEventFactoryImpl::createAttribute($String* prefix, $String* namespaceURI, $String* localName, $String* value) {
	$var($AttributeImpl, attr, $new($AttributeImpl, prefix, namespaceURI, localName, value, ($String*)nullptr));
	if (this->location != nullptr) {
		attr->setLocation(this->location);
	}
	return attr;
}

$Characters* XMLEventFactoryImpl::createCData($String* content) {
	$var($CharacterEvent, charEvent, $new($CharacterEvent, content, true));
	if (this->location != nullptr) {
		charEvent->setLocation(this->location);
	}
	return charEvent;
}

$Characters* XMLEventFactoryImpl::createCharacters($String* content) {
	$var($CharacterEvent, charEvent, $new($CharacterEvent, content));
	if (this->location != nullptr) {
		charEvent->setLocation(this->location);
	}
	return charEvent;
}

$Comment* XMLEventFactoryImpl::createComment($String* text) {
	$var($CommentEvent, charEvent, $new($CommentEvent, text));
	if (this->location != nullptr) {
		charEvent->setLocation(this->location);
	}
	return charEvent;
}

$DTD* XMLEventFactoryImpl::createDTD($String* dtd) {
	$var($DTDEvent, dtdEvent, $new($DTDEvent, dtd));
	if (this->location != nullptr) {
		dtdEvent->setLocation(this->location);
	}
	return dtdEvent;
}

$EndDocument* XMLEventFactoryImpl::createEndDocument() {
	$var($EndDocumentEvent, event, $new($EndDocumentEvent));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$EndElement* XMLEventFactoryImpl::createEndElement($QName* name, $Iterator* namespaces) {
	$var($String, var$0, $nc(name)->getPrefix());
	$var($String, var$1, name->getNamespaceURI());
	return createEndElement(var$0, var$1, $(name->getLocalPart()));
}

$EndElement* XMLEventFactoryImpl::createEndElement($String* prefix, $String* namespaceUri, $String* localName) {
	$var($EndElementEvent, event, $new($EndElementEvent, prefix, namespaceUri, localName));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$EndElement* XMLEventFactoryImpl::createEndElement($String* prefix, $String* namespaceUri, $String* localName, $Iterator* namespaces) {
	$var($EndElementEvent, event, $new($EndElementEvent, prefix, namespaceUri, localName));
	if (namespaces != nullptr) {
		while (namespaces->hasNext()) {
			event->addNamespace($cast($Namespace, $(namespaces->next())));
		}
	}
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$EntityReference* XMLEventFactoryImpl::createEntityReference($String* name, $EntityDeclaration* entityDeclaration) {
	$var($EntityReferenceEvent, event, $new($EntityReferenceEvent, name, entityDeclaration));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$Characters* XMLEventFactoryImpl::createIgnorableSpace($String* content) {
	$var($CharacterEvent, event, $new($CharacterEvent, content, false, true));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$Namespace* XMLEventFactoryImpl::createNamespace($String* namespaceURI) {
	$var($NamespaceImpl, event, $new($NamespaceImpl, namespaceURI));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$Namespace* XMLEventFactoryImpl::createNamespace($String* prefix, $String* namespaceURI) {
	$var($NamespaceImpl, event, $new($NamespaceImpl, prefix, namespaceURI));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$ProcessingInstruction* XMLEventFactoryImpl::createProcessingInstruction($String* target, $String* data) {
	$var($ProcessingInstructionEvent, event, $new($ProcessingInstructionEvent, target, data));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$Characters* XMLEventFactoryImpl::createSpace($String* content) {
	$var($CharacterEvent, event, $new($CharacterEvent, content));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartDocument* XMLEventFactoryImpl::createStartDocument() {
	$var($StartDocumentEvent, event, $new($StartDocumentEvent));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartDocument* XMLEventFactoryImpl::createStartDocument($String* encoding) {
	$var($StartDocumentEvent, event, $new($StartDocumentEvent, encoding));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartDocument* XMLEventFactoryImpl::createStartDocument($String* encoding, $String* version) {
	$var($StartDocumentEvent, event, $new($StartDocumentEvent, encoding, version));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartDocument* XMLEventFactoryImpl::createStartDocument($String* encoding, $String* version, bool standalone) {
	$var($StartDocumentEvent, event, $new($StartDocumentEvent, encoding, version, standalone));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartElement* XMLEventFactoryImpl::createStartElement($QName* name, $Iterator* attributes, $Iterator* namespaces) {
	$var($String, var$0, $nc(name)->getPrefix());
	$var($String, var$1, name->getNamespaceURI());
	return createStartElement(var$0, var$1, $(name->getLocalPart()), attributes, namespaces);
}

$StartElement* XMLEventFactoryImpl::createStartElement($String* prefix, $String* namespaceUri, $String* localName) {
	$var($StartElementEvent, event, $new($StartElementEvent, prefix, namespaceUri, localName));
	if (this->location != nullptr) {
		event->setLocation(this->location);
	}
	return event;
}

$StartElement* XMLEventFactoryImpl::createStartElement($String* prefix, $String* namespaceUri, $String* localName, $Iterator* attributes, $Iterator* namespaces) {
	return createStartElement(prefix, namespaceUri, localName, attributes, namespaces, nullptr);
}

$StartElement* XMLEventFactoryImpl::createStartElement($String* prefix, $String* namespaceUri, $String* localName, $Iterator* attributes, $Iterator* namespaces, $NamespaceContext* context) {
	$var($StartElementEvent, elem, $new($StartElementEvent, prefix, namespaceUri, localName));
	elem->addAttributes(attributes);
	elem->addNamespaceAttributes(namespaces);
	elem->setNamespaceContext(context);
	if (this->location != nullptr) {
		elem->setLocation(this->location);
	}
	return elem;
}

void XMLEventFactoryImpl::setLocation($Location* location) {
	$set(this, location, location);
}

XMLEventFactoryImpl::XMLEventFactoryImpl() {
}

$Class* XMLEventFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(XMLEventFactoryImpl, name, initialize, &_XMLEventFactoryImpl_ClassInfo_, allocate$XMLEventFactoryImpl);
	return class$;
}

$Class* XMLEventFactoryImpl::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com