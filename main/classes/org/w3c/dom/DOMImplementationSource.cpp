#include <org/w3c/dom/DOMImplementationSource.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DOMImplementationList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DOMImplementationList = ::org::w3c::dom::DOMImplementationList;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DOMImplementationSource_MethodInfo_[] = {
	{"getDOMImplementation", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDOMImplementationList", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementationList;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMImplementationSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMImplementationSource",
	nullptr,
	nullptr,
	nullptr,
	_DOMImplementationSource_MethodInfo_
};

$Object* allocate$DOMImplementationSource($Class* clazz) {
	return $of($alloc(DOMImplementationSource));
}

$Class* DOMImplementationSource::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationSource, name, initialize, &_DOMImplementationSource_ClassInfo_, allocate$DOMImplementationSource);
	return class$;
}

$Class* DOMImplementationSource::class$ = nullptr;

		} // dom
	} // w3c
} // org