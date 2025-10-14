#include <org/w3c/dom/TypeInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DERIVATION_EXTENSION
#undef DERIVATION_LIST
#undef DERIVATION_RESTRICTION
#undef DERIVATION_UNION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$FieldInfo _TypeInfo_FieldInfo_[] = {
	{"DERIVATION_RESTRICTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeInfo, DERIVATION_RESTRICTION)},
	{"DERIVATION_EXTENSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeInfo, DERIVATION_EXTENSION)},
	{"DERIVATION_UNION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeInfo, DERIVATION_UNION)},
	{"DERIVATION_LIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeInfo, DERIVATION_LIST)},
	{}
};

$MethodInfo _TypeInfo_MethodInfo_[] = {
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.TypeInfo",
	nullptr,
	nullptr,
	_TypeInfo_FieldInfo_,
	_TypeInfo_MethodInfo_
};

$Object* allocate$TypeInfo($Class* clazz) {
	return $of($alloc(TypeInfo));
}

$Class* TypeInfo::load$($String* name, bool initialize) {
	$loadClass(TypeInfo, name, initialize, &_TypeInfo_ClassInfo_, allocate$TypeInfo);
	return class$;
}

$Class* TypeInfo::class$ = nullptr;

		} // dom
	} // w3c
} // org