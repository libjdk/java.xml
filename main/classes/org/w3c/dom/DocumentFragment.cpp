#include <org/w3c/dom/DocumentFragment.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$ClassInfo _DocumentFragment_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DocumentFragment",
	nullptr,
	"org.w3c.dom.Node"
};

$Object* allocate$DocumentFragment($Class* clazz) {
	return $of($alloc(DocumentFragment));
}

$Class* DocumentFragment::load$($String* name, bool initialize) {
	$loadClass(DocumentFragment, name, initialize, &_DocumentFragment_ClassInfo_, allocate$DocumentFragment);
	return class$;
}

$Class* DocumentFragment::class$ = nullptr;

		} // dom
	} // w3c
} // org