#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ILOAD
#undef ILOAD_0

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _ILOAD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ILOAD::*)()>(&ILOAD::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ILOAD::*)(int32_t)>(&ILOAD::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ILOAD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ILOAD",
	"com.sun.org.apache.bcel.internal.generic.LoadInstruction",
	nullptr,
	nullptr,
	_ILOAD_MethodInfo_
};

$Object* allocate$ILOAD($Class* clazz) {
	return $of($alloc(ILOAD));
}

void ILOAD::init$() {
	$LoadInstruction::init$($Const::ILOAD, $Const::ILOAD_0);
}

void ILOAD::init$(int32_t n) {
	$LoadInstruction::init$($Const::ILOAD, $Const::ILOAD_0, n);
}

void ILOAD::accept($Visitor* v) {
	$LoadInstruction::accept(v);
	$nc(v)->visitILOAD(this);
}

ILOAD::ILOAD() {
}

$Class* ILOAD::load$($String* name, bool initialize) {
	$loadClass(ILOAD, name, initialize, &_ILOAD_ClassInfo_, allocate$ILOAD);
	return class$;
}

$Class* ILOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com