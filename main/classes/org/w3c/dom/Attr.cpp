#include <org/w3c/dom/Attr.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/TypeInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $TypeInfo = ::org::w3c::dom::TypeInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _Attr_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOwnerElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSpecified", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isId", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _Attr_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Attr",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_Attr_MethodInfo_
};

$Object* allocate$Attr($Class* clazz) {
	return $of($alloc(Attr));
}

$Class* Attr::load$($String* name, bool initialize) {
	$loadClass(Attr, name, initialize, &_Attr_ClassInfo_, allocate$Attr);
	return class$;
}

$Class* Attr::class$ = nullptr;

		} // dom
	} // w3c
} // org