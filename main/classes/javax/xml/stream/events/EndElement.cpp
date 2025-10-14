#include <javax/xml/stream/events/EndElement.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $QName = ::javax::xml::namespace$::QName;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _EndElement_MethodInfo_[] = {
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaces", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/xml/stream/events/Namespace;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EndElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.EndElement",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_EndElement_MethodInfo_
};

$Object* allocate$EndElement($Class* clazz) {
	return $of($alloc(EndElement));
}

$Class* EndElement::load$($String* name, bool initialize) {
	$loadClass(EndElement, name, initialize, &_EndElement_ClassInfo_, allocate$EndElement);
	return class$;
}

$Class* EndElement::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax