#include <javax/xml/stream/events/NotationDeclaration.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _NotationDeclaration_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NotationDeclaration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.NotationDeclaration",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_NotationDeclaration_MethodInfo_
};

$Object* allocate$NotationDeclaration($Class* clazz) {
	return $of($alloc(NotationDeclaration));
}

$Class* NotationDeclaration::load$($String* name, bool initialize) {
	$loadClass(NotationDeclaration, name, initialize, &_NotationDeclaration_ClassInfo_, allocate$NotationDeclaration);
	return class$;
}

$Class* NotationDeclaration::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax