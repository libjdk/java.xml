#include <javax/xml/stream/events/ProcessingInstruction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _ProcessingInstruction_MethodInfo_[] = {
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ProcessingInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.ProcessingInstruction",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_ProcessingInstruction_MethodInfo_
};

$Object* allocate$ProcessingInstruction($Class* clazz) {
	return $of($alloc(ProcessingInstruction));
}

$Class* ProcessingInstruction::load$($String* name, bool initialize) {
	$loadClass(ProcessingInstruction, name, initialize, &_ProcessingInstruction_ClassInfo_, allocate$ProcessingInstruction);
	return class$;
}

$Class* ProcessingInstruction::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax