#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>

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

#undef ALOAD
#undef ALOAD_0

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

$MethodInfo _ALOAD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ALOAD::*)()>(&ALOAD::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ALOAD::*)(int32_t)>(&ALOAD::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ALOAD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ALOAD",
	"com.sun.org.apache.bcel.internal.generic.LoadInstruction",
	nullptr,
	nullptr,
	_ALOAD_MethodInfo_
};

$Object* allocate$ALOAD($Class* clazz) {
	return $of($alloc(ALOAD));
}

void ALOAD::init$() {
	$LoadInstruction::init$($Const::ALOAD, $Const::ALOAD_0);
}

void ALOAD::init$(int32_t n) {
	$LoadInstruction::init$($Const::ALOAD, $Const::ALOAD_0, n);
}

void ALOAD::accept($Visitor* v) {
	$LoadInstruction::accept(v);
	$nc(v)->visitALOAD(this);
}

ALOAD::ALOAD() {
}

$Class* ALOAD::load$($String* name, bool initialize) {
	$loadClass(ALOAD, name, initialize, &_ALOAD_ClassInfo_, allocate$ALOAD);
	return class$;
}

$Class* ALOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com