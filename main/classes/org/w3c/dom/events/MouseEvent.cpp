#include <org/w3c/dom/events/MouseEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/events/EventTarget.h>
#include <org/w3c/dom/views/AbstractView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventTarget = ::org::w3c::dom::events::EventTarget;
using $UIEvent = ::org::w3c::dom::events::UIEvent;
using $AbstractView = ::org::w3c::dom::views::AbstractView;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$MethodInfo _MouseEvent_MethodInfo_[] = {
	{"getAltKey", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getButton", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getClientX", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getClientY", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCtrlKey", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getMetaKey", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getRelatedTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC | $ABSTRACT},
	{"getScreenX", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getScreenY", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getShiftKey", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"initMouseEvent", "(Ljava/lang/String;ZZLorg/w3c/dom/views/AbstractView;IIIIIZZZZSLorg/w3c/dom/events/EventTarget;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MouseEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.MouseEvent",
	nullptr,
	"org.w3c.dom.events.UIEvent",
	nullptr,
	_MouseEvent_MethodInfo_
};

$Object* allocate$MouseEvent($Class* clazz) {
	return $of($alloc(MouseEvent));
}

$Class* MouseEvent::load$($String* name, bool initialize) {
	$loadClass(MouseEvent, name, initialize, &_MouseEvent_ClassInfo_, allocate$MouseEvent);
	return class$;
}

$Class* MouseEvent::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org