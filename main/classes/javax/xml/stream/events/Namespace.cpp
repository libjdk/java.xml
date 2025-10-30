#include <javax/xml/stream/events/Namespace.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::xml::stream::events::Attribute;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _Namespace_MethodInfo_[] = {
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDefaultNamespaceDeclaration", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Namespace_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.Namespace",
	nullptr,
	"javax.xml.stream.events.Attribute",
	nullptr,
	_Namespace_MethodInfo_
};

$Object* allocate$Namespace($Class* clazz) {
	return $of($alloc(Namespace));
}

$Class* Namespace::load$($String* name, bool initialize) {
	$loadClass(Namespace, name, initialize, &_Namespace_ClassInfo_, allocate$Namespace);
	return class$;
}

$Class* Namespace::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax