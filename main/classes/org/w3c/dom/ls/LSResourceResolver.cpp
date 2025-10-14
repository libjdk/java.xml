#include <org/w3c/dom/ls/LSResourceResolver.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$MethodInfo _LSResourceResolver_MethodInfo_[] = {
	{"resolveResource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LSResourceResolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ls.LSResourceResolver",
	nullptr,
	nullptr,
	nullptr,
	_LSResourceResolver_MethodInfo_
};

$Object* allocate$LSResourceResolver($Class* clazz) {
	return $of($alloc(LSResourceResolver));
}

$Class* LSResourceResolver::load$($String* name, bool initialize) {
	$loadClass(LSResourceResolver, name, initialize, &_LSResourceResolver_ClassInfo_, allocate$LSResourceResolver);
	return class$;
}

$Class* LSResourceResolver::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org