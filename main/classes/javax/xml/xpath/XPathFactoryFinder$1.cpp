#include <javax/xml/xpath/XPathFactoryFinder$1.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/xpath/XPathFactory.h>
#include <javax/xml/xpath/XPathFactoryFinder.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $XPathFactory = ::javax::xml::xpath::XPathFactory;
using $XPathFactoryFinder = ::javax::xml::xpath::XPathFactoryFinder;

namespace javax {
	namespace xml {
		namespace xpath {

$FieldInfo _XPathFactoryFinder$1_FieldInfo_[] = {
	{"this$0", "Ljavax/xml/xpath/XPathFactoryFinder;", nullptr, $FINAL | $SYNTHETIC, $field(XPathFactoryFinder$1, this$0)},
	{"val$objectModel", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(XPathFactoryFinder$1, val$objectModel)},
	{"val$factory", "Ljavax/xml/xpath/XPathFactory;", nullptr, $FINAL | $SYNTHETIC, $field(XPathFactoryFinder$1, val$factory)},
	{}
};

$MethodInfo _XPathFactoryFinder$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/xpath/XPathFactoryFinder;Ljavax/xml/xpath/XPathFactory;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(XPathFactoryFinder$1::*)($XPathFactoryFinder*,$XPathFactory*,$String*)>(&XPathFactoryFinder$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XPathFactoryFinder$1_EnclosingMethodInfo_ = {
	"javax.xml.xpath.XPathFactoryFinder",
	"isObjectModelSupportedBy",
	"(Ljavax/xml/xpath/XPathFactory;Ljava/lang/String;Ljava/security/AccessControlContext;)Z"
};

$InnerClassInfo _XPathFactoryFinder$1_InnerClassesInfo_[] = {
	{"javax.xml.xpath.XPathFactoryFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XPathFactoryFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.xpath.XPathFactoryFinder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_XPathFactoryFinder$1_FieldInfo_,
	_XPathFactoryFinder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_XPathFactoryFinder$1_EnclosingMethodInfo_,
	_XPathFactoryFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.xpath.XPathFactoryFinder"
};

$Object* allocate$XPathFactoryFinder$1($Class* clazz) {
	return $of($alloc(XPathFactoryFinder$1));
}

void XPathFactoryFinder$1::init$($XPathFactoryFinder* this$0, $XPathFactory* val$factory, $String* val$objectModel) {
	$set(this, this$0, this$0);
	$set(this, val$factory, val$factory);
	$set(this, val$objectModel, val$objectModel);
}

$Object* XPathFactoryFinder$1::run() {
	return $of($Boolean::valueOf($nc(this->val$factory)->isObjectModelSupported(this->val$objectModel)));
}

XPathFactoryFinder$1::XPathFactoryFinder$1() {
}

$Class* XPathFactoryFinder$1::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$1, name, initialize, &_XPathFactoryFinder$1_ClassInfo_, allocate$XPathFactoryFinder$1);
	return class$;
}

$Class* XPathFactoryFinder$1::class$ = nullptr;

		} // xpath
	} // xml
} // javax