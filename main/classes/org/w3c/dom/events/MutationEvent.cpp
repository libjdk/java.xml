#include <org/w3c/dom/events/MutationEvent.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ADDITION
#undef MODIFICATION
#undef REMOVAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $Event = ::org::w3c::dom::events::Event;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$FieldInfo _MutationEvent_FieldInfo_[] = {
	{"MODIFICATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MutationEvent, MODIFICATION)},
	{"ADDITION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MutationEvent, ADDITION)},
	{"REMOVAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MutationEvent, REMOVAL)},
	{}
};

$MethodInfo _MutationEvent_MethodInfo_[] = {
	{"getAttrChange", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttrName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNewValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrevValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRelatedNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"initMutationEvent", "(Ljava/lang/String;ZZLorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;S)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MutationEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.events.MutationEvent",
	nullptr,
	"org.w3c.dom.events.Event",
	_MutationEvent_FieldInfo_,
	_MutationEvent_MethodInfo_
};

$Object* allocate$MutationEvent($Class* clazz) {
	return $of($alloc(MutationEvent));
}

$Class* MutationEvent::load$($String* name, bool initialize) {
	$loadClass(MutationEvent, name, initialize, &_MutationEvent_ClassInfo_, allocate$MutationEvent);
	return class$;
}

$Class* MutationEvent::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org