#include <org/w3c/dom/Entity.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _Entity_MethodInfo_[] = {
	{"getInputEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getXmlEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getXmlVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Entity_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Entity",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_Entity_MethodInfo_
};

$Object* allocate$Entity($Class* clazz) {
	return $of($alloc(Entity));
}

$Class* Entity::load$($String* name, bool initialize) {
	$loadClass(Entity, name, initialize, &_Entity_ClassInfo_, allocate$Entity);
	return class$;
}

$Class* Entity::class$ = nullptr;

		} // dom
	} // w3c
} // org