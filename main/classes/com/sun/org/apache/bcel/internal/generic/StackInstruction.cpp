#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef UNKNOWN

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _StackInstruction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StackInstruction::*)()>(&StackInstruction::init$))},
	{"<init>", "(S)V", nullptr, $PROTECTED, $method(static_cast<void(StackInstruction::*)(int16_t)>(&StackInstruction::init$))},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StackInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.StackInstruction",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	nullptr,
	nullptr,
	_StackInstruction_MethodInfo_
};

$Object* allocate$StackInstruction($Class* clazz) {
	return $of($alloc(StackInstruction));
}

void StackInstruction::init$() {
	$Instruction::init$();
}

void StackInstruction::init$(int16_t opcode) {
	$Instruction::init$(opcode, (int16_t)1);
}

$Type* StackInstruction::getType($ConstantPoolGen* cp) {
	$init($Type);
	return $Type::UNKNOWN;
}

StackInstruction::StackInstruction() {
}

$Class* StackInstruction::load$($String* name, bool initialize) {
	$loadClass(StackInstruction, name, initialize, &_StackInstruction_ClassInfo_, allocate$StackInstruction);
	return class$;
}

$Class* StackInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com