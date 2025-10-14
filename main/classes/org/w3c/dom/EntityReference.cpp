#include <org/w3c/dom/EntityReference.h>

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

$ClassInfo _EntityReference_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.EntityReference",
	nullptr,
	"org.w3c.dom.Node"
};

$Object* allocate$EntityReference($Class* clazz) {
	return $of($alloc(EntityReference));
}

$Class* EntityReference::load$($String* name, bool initialize) {
	$loadClass(EntityReference, name, initialize, &_EntityReference_ClassInfo_, allocate$EntityReference);
	return class$;
}

$Class* EntityReference::class$ = nullptr;

		} // dom
	} // w3c
} // org