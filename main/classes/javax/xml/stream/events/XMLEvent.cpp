#include <javax/xml/stream/events/XMLEvent.h>

#include <java/io/Writer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $Characters = ::javax::xml::stream::events::Characters;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $StartElement = ::javax::xml::stream::events::StartElement;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _XMLEvent_MethodInfo_[] = {
	{"asCharacters", "()Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT},
	{"asEndElement", "()Ljavax/xml/stream/events/EndElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"asStartElement", "()Ljavax/xml/stream/events/StartElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEventType", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSchemaType", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT},
	{"isAttribute", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isCharacters", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEndDocument", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEndElement", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEntityReference", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isNamespace", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isProcessingInstruction", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isStartDocument", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isStartElement", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"writeAsEncodedUnicode", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	"javax.xml.stream.XMLStreamConstants",
	nullptr,
	_XMLEvent_MethodInfo_
};

$Object* allocate$XMLEvent($Class* clazz) {
	return $of($alloc(XMLEvent));
}

$Class* XMLEvent::load$($String* name, bool initialize) {
	$loadClass(XMLEvent, name, initialize, &_XMLEvent_ClassInfo_, allocate$XMLEvent);
	return class$;
}

$Class* XMLEvent::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax