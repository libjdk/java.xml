#include <javax/xml/stream/events/Comment.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

$MethodInfo _Comment_MethodInfo_[] = {
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Comment_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.events.Comment",
	nullptr,
	"javax.xml.stream.events.XMLEvent",
	nullptr,
	_Comment_MethodInfo_
};

$Object* allocate$Comment($Class* clazz) {
	return $of($alloc(Comment));
}

$Class* Comment::load$($String* name, bool initialize) {
	$loadClass(Comment, name, initialize, &_Comment_ClassInfo_, allocate$Comment);
	return class$;
}

$Class* Comment::class$ = nullptr;

			} // events
		} // stream
	} // xml
} // javax