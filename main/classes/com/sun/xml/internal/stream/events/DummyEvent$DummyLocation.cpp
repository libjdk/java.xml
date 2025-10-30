#include <com/sun/xml/internal/stream/events/DummyEvent$DummyLocation.h>

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <jcpp.h>

using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Location = ::javax::xml::stream::Location;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$MethodInfo _DummyEvent$DummyLocation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DummyEvent$DummyLocation::*)()>(&DummyEvent$DummyLocation::init$))},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DummyEvent$DummyLocation_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.events.DummyEvent$DummyLocation", "com.sun.xml.internal.stream.events.DummyEvent", "DummyLocation", $STATIC},
	{}
};

$ClassInfo _DummyEvent$DummyLocation_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.xml.internal.stream.events.DummyEvent$DummyLocation",
	"java.lang.Object",
	"javax.xml.stream.Location",
	nullptr,
	_DummyEvent$DummyLocation_MethodInfo_,
	nullptr,
	nullptr,
	_DummyEvent$DummyLocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.events.DummyEvent"
};

$Object* allocate$DummyEvent$DummyLocation($Class* clazz) {
	return $of($alloc(DummyEvent$DummyLocation));
}

void DummyEvent$DummyLocation::init$() {
}

int32_t DummyEvent$DummyLocation::getCharacterOffset() {
	return -1;
}

int32_t DummyEvent$DummyLocation::getColumnNumber() {
	return -1;
}

int32_t DummyEvent$DummyLocation::getLineNumber() {
	return -1;
}

$String* DummyEvent$DummyLocation::getPublicId() {
	return nullptr;
}

$String* DummyEvent$DummyLocation::getSystemId() {
	return nullptr;
}

DummyEvent$DummyLocation::DummyEvent$DummyLocation() {
}

$Class* DummyEvent$DummyLocation::load$($String* name, bool initialize) {
	$loadClass(DummyEvent$DummyLocation, name, initialize, &_DummyEvent$DummyLocation_ClassInfo_, allocate$DummyEvent$DummyLocation);
	return class$;
}

$Class* DummyEvent$DummyLocation::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com