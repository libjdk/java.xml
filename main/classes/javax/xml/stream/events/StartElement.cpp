#include <javax/xml/stream/events/StartElement.h>

#include <java/util/Iterator.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/events/Attribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _StartElement_MethodInfo_[] = {
	{"getAttributeByName", "(Ljavax/xml/namespace/QName;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributes", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/xml/stream/events/Attribute;>;", $PUBLIC | $ABSTRACT},
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaces", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/xml/stream/events/Namespace;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StartElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.StartElement",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_StartElement_MethodInfo_
};

$Object* allocate$StartElement($Class* clazz) {
	return $of($alloc(StartElement));
}

$Class* StartElement::load$($String* name, bool initialize) {
	$loadClass(StartElement, name, initialize, &_StartElement_ClassInfo_, allocate$StartElement);
	return class$;
}

$Class* StartElement::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax