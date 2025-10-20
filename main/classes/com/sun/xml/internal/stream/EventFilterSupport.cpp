#include <com/sun/xml/internal/stream/EventFilterSupport.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <javax/xml/stream/EventFilter.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <javax/xml/stream/util/EventReaderDelegate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $EventFilter = ::javax::xml::stream::EventFilter;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
using $EventReaderDelegate = ::javax::xml::stream::util::EventReaderDelegate;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _EventFilterSupport_FieldInfo_[] = {
	{"fEventFilter", "Ljavax/xml/stream/EventFilter;", nullptr, 0, $field(EventFilterSupport, fEventFilter)},
	{}
};

$MethodInfo _EventFilterSupport_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;Ljavax/xml/stream/EventFilter;)V", nullptr, $PUBLIC, $method(static_cast<void(EventFilterSupport::*)($XMLEventReader*,$EventFilter*)>(&EventFilterSupport::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"nextEvent", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"nextTag", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"peek", "()Ljavax/xml/stream/events/XMLEvent;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _EventFilterSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.EventFilterSupport",
	"javax.xml.stream.util.EventReaderDelegate",
	nullptr,
	_EventFilterSupport_FieldInfo_,
	_EventFilterSupport_MethodInfo_
};

$Object* allocate$EventFilterSupport($Class* clazz) {
	return $of($alloc(EventFilterSupport));
}

void EventFilterSupport::init$($XMLEventReader* eventReader, $EventFilter* eventFilter) {
	$EventReaderDelegate::init$();
	setParent(eventReader);
	$set(this, fEventFilter, eventFilter);
}

$Object* EventFilterSupport::next() {
	try {
		return $of(nextEvent());
	} catch ($XMLStreamException&) {
		$var($XMLStreamException, ex, $catch());
		$throwNew($NoSuchElementException);
	}
	$shouldNotReachHere();
}

bool EventFilterSupport::hasNext() {
	try {
		return peek() != nullptr ? true : false;
	} catch ($XMLStreamException&) {
		$var($XMLStreamException, ex, $catch());
		return false;
	}
	$shouldNotReachHere();
}

$XMLEvent* EventFilterSupport::nextEvent() {
	$useLocalCurrentObjectStackCache();
	while ($EventReaderDelegate::hasNext()) {
		$var($XMLEvent, event, $EventReaderDelegate::nextEvent());
		if ($nc(this->fEventFilter)->accept(event)) {
			return event;
		}
	}
	$throwNew($NoSuchElementException);
}

$XMLEvent* EventFilterSupport::nextTag() {
	$useLocalCurrentObjectStackCache();
	while ($EventReaderDelegate::hasNext()) {
		$var($XMLEvent, event, $EventReaderDelegate::nextTag());
		if ($nc(this->fEventFilter)->accept(event)) {
			return event;
		}
	}
	$throwNew($NoSuchElementException);
}

$XMLEvent* EventFilterSupport::peek() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		$var($XMLEvent, event, $EventReaderDelegate::peek());
		if (event == nullptr) {
			return nullptr;
		}
		if ($nc(this->fEventFilter)->accept(event)) {
			return event;
		}
		$EventReaderDelegate::next();
	}
}

EventFilterSupport::EventFilterSupport() {
}

$Class* EventFilterSupport::load$($String* name, bool initialize) {
	$loadClass(EventFilterSupport, name, initialize, &_EventFilterSupport_ClassInfo_, allocate$EventFilterSupport);
	return class$;
}

$Class* EventFilterSupport::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com