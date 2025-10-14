#include <javax/xml/stream/util/EventReaderDelegate.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {
			namespace util {

$FieldInfo _EventReaderDelegate_FieldInfo_[] = {
	{"reader", "Ljavax/xml/stream/XMLEventReader;", nullptr, $PRIVATE, $field(EventReaderDelegate, reader)},
	{}
};

$MethodInfo _EventReaderDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EventReaderDelegate::*)()>(&EventReaderDelegate::init$))},
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;)V", nullptr, $PUBLIC, $method(static_cast<void(EventReaderDelegate::*)($XMLEventReader*)>(&EventReaderDelegate::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getElementText", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getParent", "()Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"nextEvent", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"nextTag", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"peek", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"remove", "()V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/xml/stream/XMLEventReader;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EventReaderDelegate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.stream.util.EventReaderDelegate",
	"java.lang.Object",
	"javax.xml.stream.XMLEventReader",
	_EventReaderDelegate_FieldInfo_,
	_EventReaderDelegate_MethodInfo_
};

$Object* allocate$EventReaderDelegate($Class* clazz) {
	return $of($alloc(EventReaderDelegate));
}

void EventReaderDelegate::init$() {
}

void EventReaderDelegate::init$($XMLEventReader* reader) {
	$set(this, reader, reader);
}

void EventReaderDelegate::setParent($XMLEventReader* reader) {
	$set(this, reader, reader);
}

$XMLEventReader* EventReaderDelegate::getParent() {
	return this->reader;
}

$XMLEvent* EventReaderDelegate::nextEvent() {
	return $nc(this->reader)->nextEvent();
}

$Object* EventReaderDelegate::next() {
	return $of($nc(this->reader)->next());
}

bool EventReaderDelegate::hasNext() {
	return $nc(this->reader)->hasNext();
}

$XMLEvent* EventReaderDelegate::peek() {
	return $nc(this->reader)->peek();
}

void EventReaderDelegate::close() {
	$nc(this->reader)->close();
}

$String* EventReaderDelegate::getElementText() {
	return $nc(this->reader)->getElementText();
}

$XMLEvent* EventReaderDelegate::nextTag() {
	return $nc(this->reader)->nextTag();
}

$Object* EventReaderDelegate::getProperty($String* name) {
	return $of($nc(this->reader)->getProperty(name));
}

void EventReaderDelegate::remove() {
	$nc(this->reader)->remove();
}

EventReaderDelegate::EventReaderDelegate() {
}

$Class* EventReaderDelegate::load$($String* name, bool initialize) {
	$loadClass(EventReaderDelegate, name, initialize, &_EventReaderDelegate_ClassInfo_, allocate$EventReaderDelegate);
	return class$;
}

$Class* EventReaderDelegate::class$ = nullptr;

			} // util
		} // stream
	} // xml
} // javax