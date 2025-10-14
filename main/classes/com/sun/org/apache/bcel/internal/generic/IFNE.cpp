#include <com/sun/org/apache/bcel/internal/generic/IFNE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
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

#undef IFNE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
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

$MethodInfo _IFNE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IFNE::*)()>(&IFNE::init$))},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(static_cast<void(IFNE::*)($InstructionHandle*)>(&IFNE::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IFNE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IFNE",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IFNE_MethodInfo_
};

$Object* allocate$IFNE($Class* clazz) {
	return $of($alloc(IFNE));
}

void IFNE::init$() {
	$IfInstruction::init$();
}

void IFNE::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IFNE, target);
}

$IfInstruction* IFNE::negate() {
	return $new($IFEQ, $($IfInstruction::getTarget()));
}

void IFNE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIFNE(this);
}

IFNE::IFNE() {
}

$Class* IFNE::load$($String* name, bool initialize) {
	$loadClass(IFNE, name, initialize, &_IFNE_ClassInfo_, allocate$IFNE);
	return class$;
}

$Class* IFNE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com