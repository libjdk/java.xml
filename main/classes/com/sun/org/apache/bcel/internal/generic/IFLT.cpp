#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IFLT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IFGE = ::com::sun::org::apache::bcel::internal::generic::IFGE;
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

$MethodInfo _IFLT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IFLT::*)()>(&IFLT::init$))},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(static_cast<void(IFLT::*)($InstructionHandle*)>(&IFLT::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IFLT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IFLT",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IFLT_MethodInfo_
};

$Object* allocate$IFLT($Class* clazz) {
	return $of($alloc(IFLT));
}

void IFLT::init$() {
	$IfInstruction::init$();
}

void IFLT::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IFLT, target);
}

$IfInstruction* IFLT::negate() {
	return $new($IFGE, $($IfInstruction::getTarget()));
}

void IFLT::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIFLT(this);
}

IFLT::IFLT() {
}

$Class* IFLT::load$($String* name, bool initialize) {
	$loadClass(IFLT, name, initialize, &_IFLT_ClassInfo_, allocate$IFLT);
	return class$;
}

$Class* IFLT::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com