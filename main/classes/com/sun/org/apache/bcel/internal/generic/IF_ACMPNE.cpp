#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPNE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPEQ.h>
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

#undef IF_ACMPNE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $IF_ACMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ACMPEQ;
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

$MethodInfo _IF_ACMPNE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IF_ACMPNE::*)()>(&IF_ACMPNE::init$))},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(static_cast<void(IF_ACMPNE::*)($InstructionHandle*)>(&IF_ACMPNE::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{"negate", "()Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IF_ACMPNE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IF_ACMPNE",
	"com.sun.org.apache.bcel.internal.generic.IfInstruction",
	nullptr,
	nullptr,
	_IF_ACMPNE_MethodInfo_
};

$Object* allocate$IF_ACMPNE($Class* clazz) {
	return $of($alloc(IF_ACMPNE));
}

void IF_ACMPNE::init$() {
	$IfInstruction::init$();
}

void IF_ACMPNE::init$($InstructionHandle* target) {
	$IfInstruction::init$($Const::IF_ACMPNE, target);
}

$IfInstruction* IF_ACMPNE::negate() {
	return $new($IF_ACMPEQ, $($IfInstruction::getTarget()));
}

void IF_ACMPNE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitIfInstruction(this);
	v->visitIF_ACMPNE(this);
}

IF_ACMPNE::IF_ACMPNE() {
}

$Class* IF_ACMPNE::load$($String* name, bool initialize) {
	$loadClass(IF_ACMPNE, name, initialize, &_IF_ACMPNE_ClassInfo_, allocate$IF_ACMPNE);
	return class$;
}

$Class* IF_ACMPNE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com