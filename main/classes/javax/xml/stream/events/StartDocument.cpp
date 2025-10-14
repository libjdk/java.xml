#include <javax/xml/stream/events/StartDocument.h>

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

$MethodInfo _StartDocument_MethodInfo_[] = {
	{"encodingSet", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharacterEncodingScheme", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isStandalone", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"standaloneSet", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StartDocument_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.StartDocument",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_StartDocument_MethodInfo_
};

$Object* allocate$StartDocument($Class* clazz) {
	return $of($alloc(StartDocument));
}

$Class* StartDocument::load$($String* name, bool initialize) {
	$loadClass(StartDocument, name, initialize, &_StartDocument_ClassInfo_, allocate$StartDocument);
	return class$;
}

$Class* StartDocument::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax