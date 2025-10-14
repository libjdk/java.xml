#include <javax/xml/validation/TypeInfoProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/TypeInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeInfo = ::org::w3c::dom::TypeInfo;

namespace javax {
	namespace xml {
		namespace validation {

$MethodInfo _TypeInfoProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TypeInfoProvider::*)()>(&TypeInfoProvider::init$))},
	{"getAttributeTypeInfo", "(I)Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"isIdAttribute", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeInfoProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.validation.TypeInfoProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeInfoProvider_MethodInfo_
};

$Object* allocate$TypeInfoProvider($Class* clazz) {
	return $of($alloc(TypeInfoProvider));
}

void TypeInfoProvider::init$() {
}

TypeInfoProvider::TypeInfoProvider() {
}

$Class* TypeInfoProvider::load$($String* name, bool initialize) {
	$loadClass(TypeInfoProvider, name, initialize, &_TypeInfoProvider_ClassInfo_, allocate$TypeInfoProvider);
	return class$;
}

$Class* TypeInfoProvider::class$ = nullptr;

		} // validation
	} // xml
} // javax