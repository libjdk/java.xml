#include <com/sun/org/apache/bcel/internal/generic/IFLE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef IFLE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IFGT = ::com::sun::org::apache::bcel::internal::generic::IFGT;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
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

$MethodInfo _IFLE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IFLE::*)()>(&IFLE::init$))},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(static_cast<void(IFLE::*)($InstructionHandle*)>(&IFLE::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IFLE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IFLE",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IFLE_MethodInfo_
};

$Object* allocate$IFLE($Class* clazz) {
	return $of($alloc(IFLE));
}

void IFLE::init$() {
	$IfInstruction::init$();
}

void IFLE::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IFLE, target);
}

$IfInstruction* IFLE::negate() {
	return $new($IFGT, $($IfInstruction::getTarget()));
}

void IFLE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIFLE(this);
}

IFLE::IFLE() {
}

$Class* IFLE::load$($String* name, bool initialize) {
	$loadClass(IFLE, name, initialize, &_IFLE_ClassInfo_, allocate$IFLE);
	return class$;
}

$Class* IFLE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com