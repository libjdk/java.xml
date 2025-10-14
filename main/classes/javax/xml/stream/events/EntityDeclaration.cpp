#include <javax/xml/stream/events/EntityDeclaration.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _EntityDeclaration_MethodInfo_[] = {
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReplacementText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EntityDeclaration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.EntityDeclaration",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_EntityDeclaration_MethodInfo_
};

$Object* allocate$EntityDeclaration($Class* clazz) {
	return $of($alloc(EntityDeclaration));
}

$Class* EntityDeclaration::load$($String* name, bool initialize) {
	$loadClass(EntityDeclaration, name, initialize, &_EntityDeclaration_ClassInfo_, allocate$EntityDeclaration);
	return class$;
}

$Class* EntityDeclaration::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax