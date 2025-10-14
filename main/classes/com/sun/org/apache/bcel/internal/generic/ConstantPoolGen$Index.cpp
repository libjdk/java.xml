#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen$Index.h>

#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _ConstantPoolGen$Index_FieldInfo_[] = {
	{"index", "I", nullptr, $FINAL, $field(ConstantPoolGen$Index, index)},
	{}
};

$MethodInfo _ConstantPoolGen$Index_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ConstantPoolGen$Index::*)(int32_t)>(&ConstantPoolGen$Index::init$))},
	{}
};

$InnerClassInfo _ConstantPoolGen$Index_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.ConstantPoolGen$Index", "com.sun.org.apache.bcel.internal.generic.ConstantPoolGen", "Index", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ConstantPoolGen$Index_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ConstantPoolGen$Index",
	"java.lang.Object",
	nullptr,
	_ConstantPoolGen$Index_FieldInfo_,
	_ConstantPoolGen$Index_MethodInfo_,
	nullptr,
	nullptr,
	_ConstantPoolGen$Index_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.ConstantPoolGen"
};

$Object* allocate$ConstantPoolGen$Index($Class* clazz) {
	return $of($alloc(ConstantPoolGen$Index));
}

void ConstantPoolGen$Index::init$(int32_t i) {
	this->index = i;
}

ConstantPoolGen$Index::ConstantPoolGen$Index() {
}

$Class* ConstantPoolGen$Index::load$($String* name, bool initialize) {
	$loadClass(ConstantPoolGen$Index, name, initialize, &_ConstantPoolGen$Index_ClassInfo_, allocate$ConstantPoolGen$Index);
	return class$;
}

$Class* ConstantPoolGen$Index::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com