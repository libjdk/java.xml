#include <org/w3c/dom/ElementTraversal.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _ElementTraversal_MethodInfo_[] = {
	{"getChildElementCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getFirstElementChild", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLastElementChild", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNextElementSibling", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreviousElementSibling", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ElementTraversal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ElementTraversal",
	nullptr,
	nullptr,
	nullptr,
	_ElementTraversal_MethodInfo_
};

$Object* allocate$ElementTraversal($Class* clazz) {
	return $of($alloc(ElementTraversal));
}

$Class* ElementTraversal::load$($String* name, bool initialize) {
	$loadClass(ElementTraversal, name, initialize, &_ElementTraversal_ClassInfo_, allocate$ElementTraversal);
	return class$;
}

$Class* ElementTraversal::class$ = nullptr;

		} // dom
	} // w3c
} // org