#include <org/w3c/dom/Notation.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _Notation_MethodInfo_[] = {
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Notation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Notation",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_Notation_MethodInfo_
};

$Object* allocate$Notation($Class* clazz) {
	return $of($alloc(Notation));
}

$Class* Notation::load$($String* name, bool initialize) {
	$loadClass(Notation, name, initialize, &_Notation_ClassInfo_, allocate$Notation);
	return class$;
}

$Class* Notation::class$ = nullptr;

		} // dom
	} // w3c
} // org