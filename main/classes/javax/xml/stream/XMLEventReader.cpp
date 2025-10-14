#include <javax/xml/stream/XMLEventReader.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _XMLEventReader_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getElementText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"hasNext", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"nextEvent", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"nextTag", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"peek", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLEventReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.XMLEventReader",
	nullptr,
	"java.util.Iterator",
	nullptr,
	_XMLEventReader_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/Object;>;"
};

$Object* allocate$XMLEventReader($Class* clazz) {
	return $of($alloc(XMLEventReader));
}

$Class* XMLEventReader::load$($String* name, bool initialize) {
	$loadClass(XMLEventReader, name, initialize, &_XMLEventReader_ClassInfo_, allocate$XMLEventReader);
	return class$;
}

$Class* XMLEventReader::class$ = nullptr;

		} // stream
	} // xml
} // javax