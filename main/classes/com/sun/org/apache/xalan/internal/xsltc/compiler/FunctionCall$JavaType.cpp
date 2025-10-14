#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall$JavaType.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _FunctionCall$JavaType_FieldInfo_[] = {
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PUBLIC, $field(FunctionCall$JavaType, type)},
	{"distance", "I", nullptr, $PUBLIC, $field(FunctionCall$JavaType, distance)},
	{}
};

$MethodInfo _FunctionCall$JavaType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;I)V", "(Ljava/lang/Class<*>;I)V", $PUBLIC, $method(static_cast<void(FunctionCall$JavaType::*)($Class*,int32_t)>(&FunctionCall$JavaType::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FunctionCall$JavaType_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall$JavaType", "com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall", "JavaType", $STATIC},
	{}
};

$ClassInfo _FunctionCall$JavaType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall$JavaType",
	"java.lang.Object",
	nullptr,
	_FunctionCall$JavaType_FieldInfo_,
	_FunctionCall$JavaType_MethodInfo_,
	nullptr,
	nullptr,
	_FunctionCall$JavaType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall"
};

$Object* allocate$FunctionCall$JavaType($Class* clazz) {
	return $of($alloc(FunctionCall$JavaType));
}

void FunctionCall$JavaType::init$($Class* type, int32_t distance) {
	$set(this, type, type);
	this->distance = distance;
}

int32_t FunctionCall$JavaType::hashCode() {
	return $Objects::hashCode(this->type);
}

bool FunctionCall$JavaType::equals(Object$* query) {
	if (query == nullptr) {
		return false;
	}
	if ($nc($of(query))->getClass()->isAssignableFrom(FunctionCall$JavaType::class$)) {
		return $nc($of($nc(($cast(FunctionCall$JavaType, query)))->type))->equals(this->type);
	} else {
		return $of(query)->equals(this->type);
	}
}

FunctionCall$JavaType::FunctionCall$JavaType() {
}

$Class* FunctionCall$JavaType::load$($String* name, bool initialize) {
	$loadClass(FunctionCall$JavaType, name, initialize, &_FunctionCall$JavaType_ClassInfo_, allocate$FunctionCall$JavaType);
	return class$;
}

$Class* FunctionCall$JavaType::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com