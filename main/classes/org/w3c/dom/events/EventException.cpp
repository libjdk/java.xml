#include <org/w3c/dom/events/EventException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef UNSPECIFIED_EVENT_TYPE_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$FieldInfo _EventException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventException, serialVersionUID)},
	{"code", "S", nullptr, $PUBLIC, $field(EventException, code)},
	{"UNSPECIFIED_EVENT_TYPE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EventException, UNSPECIFIED_EVENT_TYPE_ERR)},
	{}
};

$MethodInfo _EventException_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(EventException::*)(int16_t,$String*)>(&EventException::init$))},
	{}
};

$ClassInfo _EventException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.w3c.dom.events.EventException",
	"java.lang.RuntimeException",
	nullptr,
	_EventException_FieldInfo_,
	_EventException_MethodInfo_
};

$Object* allocate$EventException($Class* clazz) {
	return $of($alloc(EventException));
}

void EventException::init$(int16_t code, $String* message) {
	$RuntimeException::init$(message);
	this->code = code;
}

EventException::EventException() {
}

EventException::EventException(const EventException& e) {
}

EventException EventException::wrapper$() {
	$pendingException(this);
	return *this;
}

void EventException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* EventException::load$($String* name, bool initialize) {
	$loadClass(EventException, name, initialize, &_EventException_ClassInfo_, allocate$EventException);
	return class$;
}

$Class* EventException::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org