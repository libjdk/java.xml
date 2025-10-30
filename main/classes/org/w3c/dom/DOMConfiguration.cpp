#include <org/w3c/dom/DOMConfiguration.h>

#include <org/w3c/dom/DOMStringList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMStringList = ::org::w3c::dom::DOMStringList;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DOMConfiguration_MethodInfo_[] = {
	{"canSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"getParameterNames", "()Lorg/w3c/dom/DOMStringList;", nullptr, $PUBLIC | $ABSTRACT},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _DOMConfiguration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMConfiguration",
	nullptr,
	nullptr,
	nullptr,
	_DOMConfiguration_MethodInfo_
};

$Object* allocate$DOMConfiguration($Class* clazz) {
	return $of($alloc(DOMConfiguration));
}

$Class* DOMConfiguration::load$($String* name, bool initialize) {
	$loadClass(DOMConfiguration, name, initialize, &_DOMConfiguration_ClassInfo_, allocate$DOMConfiguration);
	return class$;
}

$Class* DOMConfiguration::class$ = nullptr;

		} // dom
	} // w3c
} // org