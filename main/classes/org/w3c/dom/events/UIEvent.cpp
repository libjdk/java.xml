#include <org/w3c/dom/events/UIEvent.h>

#include <org/w3c/dom/views/AbstractView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::org::w3c::dom::events::Event;
using $AbstractView = ::org::w3c::dom::views::AbstractView;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$MethodInfo _UIEvent_MethodInfo_[] = {
	{"getDetail", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getView", "()Lorg/w3c/dom/views/AbstractView;", nullptr, $PUBLIC | $ABSTRACT},
	{"initUIEvent", "(Ljava/lang/String;ZZLorg/w3c/dom/views/AbstractView;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UIEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.UIEvent",
	nullptr,
	"org.w3c.dom.events.Event",
	nullptr,
	_UIEvent_MethodInfo_
};

$Object* allocate$UIEvent($Class* clazz) {
	return $of($alloc(UIEvent));
}

$Class* UIEvent::load$($String* name, bool initialize) {
	$loadClass(UIEvent, name, initialize, &_UIEvent_ClassInfo_, allocate$UIEvent);
	return class$;
}

$Class* UIEvent::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org