#include <org/w3c/dom/bootstrap/DOMImplementationRegistry$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/bootstrap/DOMImplementationRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $DOMImplementationRegistry = ::org::w3c::dom::bootstrap::DOMImplementationRegistry;

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

$FieldInfo _DOMImplementationRegistry$3_FieldInfo_[] = {
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$3, val$name)},
	{}
};

$MethodInfo _DOMImplementationRegistry$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(DOMImplementationRegistry$3::*)($String*)>(&DOMImplementationRegistry$3::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DOMImplementationRegistry$3_EnclosingMethodInfo_ = {
	"org.w3c.dom.bootstrap.DOMImplementationRegistry",
	"getSystemProperty",
	"(Ljava/lang/String;)Ljava/lang/String;"
};

$InnerClassInfo _DOMImplementationRegistry$3_InnerClassesInfo_[] = {
	{"org.w3c.dom.bootstrap.DOMImplementationRegistry$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DOMImplementationRegistry$3_ClassInfo_ = {
	$ACC_SUPER,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_DOMImplementationRegistry$3_FieldInfo_,
	_DOMImplementationRegistry$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_DOMImplementationRegistry$3_EnclosingMethodInfo_,
	_DOMImplementationRegistry$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry"
};

$Object* allocate$DOMImplementationRegistry$3($Class* clazz) {
	return $of($alloc(DOMImplementationRegistry$3));
}

void DOMImplementationRegistry$3::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$Object* DOMImplementationRegistry$3::run() {
	return $of($System::getProperty(this->val$name));
}

DOMImplementationRegistry$3::DOMImplementationRegistry$3() {
}

$Class* DOMImplementationRegistry$3::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationRegistry$3, name, initialize, &_DOMImplementationRegistry$3_ClassInfo_, allocate$DOMImplementationRegistry$3);
	return class$;
}

$Class* DOMImplementationRegistry$3::class$ = nullptr;

			} // bootstrap
		} // dom
	} // w3c
} // org