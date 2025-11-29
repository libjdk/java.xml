#include <org/w3c/dom/DOMLocator.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DOMLocator_MethodInfo_[] = {
	{"getByteOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRelatedNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUri", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUtf16Offset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMLocator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMLocator",
	nullptr,
	nullptr,
	nullptr,
	_DOMLocator_MethodInfo_
};

$Object* allocate$DOMLocator($Class* clazz) {
	return $of($alloc(DOMLocator));
}

$Class* DOMLocator::load$($String* name, bool initialize) {
	$loadClass(DOMLocator, name, initialize, &_DOMLocator_ClassInfo_, allocate$DOMLocator);
	return class$;
}

$Class* DOMLocator::class$ = nullptr;

		} // dom
	} // w3c
} // org