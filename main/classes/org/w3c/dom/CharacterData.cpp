#include <org/w3c/dom/CharacterData.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _CharacterData_MethodInfo_[] = {
	{"appendData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"deleteData", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"insertData", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"replaceData", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"substringData", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _CharacterData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.CharacterData",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_CharacterData_MethodInfo_
};

$Object* allocate$CharacterData($Class* clazz) {
	return $of($alloc(CharacterData));
}

$Class* CharacterData::load$($String* name, bool initialize) {
	$loadClass(CharacterData, name, initialize, &_CharacterData_ClassInfo_, allocate$CharacterData);
	return class$;
}

$Class* CharacterData::class$ = nullptr;

		} // dom
	} // w3c
} // org