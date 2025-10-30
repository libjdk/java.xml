#include <javax/xml/stream/Location.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _Location_MethodInfo_[] = {
	{"getCharacterOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Location_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.Location",
	nullptr,
	nullptr,
	nullptr,
	_Location_MethodInfo_
};

$Object* allocate$Location($Class* clazz) {
	return $of($alloc(Location));
}

$Class* Location::load$($String* name, bool initialize) {
	$loadClass(Location, name, initialize, &_Location_ClassInfo_, allocate$Location);
	return class$;
}

$Class* Location::class$ = nullptr;

		} // stream
	} // xml
} // javax