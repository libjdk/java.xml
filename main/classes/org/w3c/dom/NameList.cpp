#include <org/w3c/dom/NameList.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _NameList_MethodInfo_[] = {
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"containsNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NameList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.NameList",
	nullptr,
	nullptr,
	nullptr,
	_NameList_MethodInfo_
};

$Object* allocate$NameList($Class* clazz) {
	return $of($alloc(NameList));
}

$Class* NameList::load$($String* name, bool initialize) {
	$loadClass(NameList, name, initialize, &_NameList_ClassInfo_, allocate$NameList);
	return class$;
}

$Class* NameList::class$ = nullptr;

		} // dom
	} // w3c
} // org