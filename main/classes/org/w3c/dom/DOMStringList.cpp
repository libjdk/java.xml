#include <org/w3c/dom/DOMStringList.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DOMStringList_MethodInfo_[] = {
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"item", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMStringList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMStringList",
	nullptr,
	nullptr,
	nullptr,
	_DOMStringList_MethodInfo_
};

$Object* allocate$DOMStringList($Class* clazz) {
	return $of($alloc(DOMStringList));
}

$Class* DOMStringList::load$($String* name, bool initialize) {
	$loadClass(DOMStringList, name, initialize, &_DOMStringList_ClassInfo_, allocate$DOMStringList);
	return class$;
}

$Class* DOMStringList::class$ = nullptr;

		} // dom
	} // w3c
} // org