#include <org/w3c/dom/DOMError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/DOMLocator.h>
#include <jcpp.h>

#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMLocator = ::org::w3c::dom::DOMLocator;

namespace org {
	namespace w3c {
		namespace dom {

$FieldInfo _DOMError_FieldInfo_[] = {
	{"SEVERITY_WARNING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMError, SEVERITY_WARNING)},
	{"SEVERITY_ERROR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMError, SEVERITY_ERROR)},
	{"SEVERITY_FATAL_ERROR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMError, SEVERITY_FATAL_ERROR)},
	{}
};

$MethodInfo _DOMError_MethodInfo_[] = {
	{"getLocation", "()Lorg/w3c/dom/DOMLocator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRelatedData", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRelatedException", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSeverity", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMError_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMError",
	nullptr,
	nullptr,
	_DOMError_FieldInfo_,
	_DOMError_MethodInfo_
};

$Object* allocate$DOMError($Class* clazz) {
	return $of($alloc(DOMError));
}

$Class* DOMError::load$($String* name, bool initialize) {
	$loadClass(DOMError, name, initialize, &_DOMError_ClassInfo_, allocate$DOMError);
	return class$;
}

$Class* DOMError::class$ = nullptr;

		} // dom
	} // w3c
} // org