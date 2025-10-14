#include <javax/xml/stream/events/Characters.h>

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

$MethodInfo _Characters_MethodInfo_[] = {
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isCData", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isIgnorableWhiteSpace", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isWhiteSpace", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Characters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.Characters",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_Characters_MethodInfo_
};

$Object* allocate$Characters($Class* clazz) {
	return $of($alloc(Characters));
}

$Class* Characters::load$($String* name, bool initialize) {
	$loadClass(Characters, name, initialize, &_Characters_ClassInfo_, allocate$Characters);
	return class$;
}

$Class* Characters::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax