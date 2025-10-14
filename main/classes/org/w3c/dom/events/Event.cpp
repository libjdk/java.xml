#include <org/w3c/dom/events/Event.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/events/EventTarget.h>
#include <jcpp.h>

#undef AT_TARGET
#undef BUBBLING_PHASE
#undef CAPTURING_PHASE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventTarget = ::org::w3c::dom::events::EventTarget;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$FieldInfo _Event_FieldInfo_[] = {
	{"CAPTURING_PHASE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, CAPTURING_PHASE)},
	{"AT_TARGET", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, AT_TARGET)},
	{"BUBBLING_PHASE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Event, BUBBLING_PHASE)},
	{}
};

$MethodInfo _Event_MethodInfo_[] = {
	{"getBubbles", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getCancelable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getCurrentTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEventPhase", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTimeStamp", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"initEvent", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"preventDefault", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"stopPropagation", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Event_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.Event",
	nullptr,
	nullptr,
	_Event_FieldInfo_,
	_Event_MethodInfo_
};

$Object* allocate$Event($Class* clazz) {
	return $of($alloc(Event));
}

$Class* Event::load$($String* name, bool initialize) {
	$loadClass(Event, name, initialize, &_Event_ClassInfo_, allocate$Event);
	return class$;
}

$Class* Event::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org