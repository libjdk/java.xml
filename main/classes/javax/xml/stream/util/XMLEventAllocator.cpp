#include <javax/xml/stream/util/XMLEventAllocator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <javax/xml/stream/util/XMLEventConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
using $XMLEventConsumer = ::javax::xml::stream::util::XMLEventConsumer;

namespace javax {
	namespace xml {
		namespace stream {
			namespace util {

$MethodInfo _XMLEventAllocator_MethodInfo_[] = {
	{"allocate", "(Ljavax/xml/stream/XMLStreamReader;)Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"allocate", "(Ljavax/xml/stream/XMLStreamReader;Ljavax/xml/stream/util/XMLEventConsumer;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"newInstance", "()Ljavax/xml/stream/util/XMLEventAllocator;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLEventAllocator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.util.XMLEventAllocator",
	nullptr,
	nullptr,
	nullptr,
	_XMLEventAllocator_MethodInfo_
};

$Object* allocate$XMLEventAllocator($Class* clazz) {
	return $of($alloc(XMLEventAllocator));
}

$Class* XMLEventAllocator::load$($String* name, bool initialize) {
	$loadClass(XMLEventAllocator, name, initialize, &_XMLEventAllocator_ClassInfo_, allocate$XMLEventAllocator);
	return class$;
}

$Class* XMLEventAllocator::class$ = nullptr;

			} // util
		} // stream
	} // xml
} // javax