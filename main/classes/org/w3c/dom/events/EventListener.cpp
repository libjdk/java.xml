#include <org/w3c/dom/events/EventListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/events/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::org::w3c::dom::events::Event;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$MethodInfo _EventListener_MethodInfo_[] = {
	{"handleEvent", "(Lorg/w3c/dom/events/Event;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.EventListener",
	nullptr,
	nullptr,
	nullptr,
	_EventListener_MethodInfo_
};

$Object* allocate$EventListener($Class* clazz) {
	return $of($alloc(EventListener));
}

$Class* EventListener::load$($String* name, bool initialize) {
	$loadClass(EventListener, name, initialize, &_EventListener_ClassInfo_, allocate$EventListener);
	return class$;
}

$Class* EventListener::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org