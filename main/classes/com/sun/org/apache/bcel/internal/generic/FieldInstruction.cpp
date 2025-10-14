#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
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

$MethodInfo _FieldInstruction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FieldInstruction::*)()>(&FieldInstruction::init$))},
	{"<init>", "(SI)V", nullptr, $PROTECTED, $method(static_cast<void(FieldInstruction::*)(int16_t,int32_t)>(&FieldInstruction::init$))},
	{"getFieldName", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFieldSize", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PROTECTED},
	{"getFieldType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.FieldInstruction",
	"com.sun.org.apache.bcel.internal.generic.FieldOrMethod",
	nullptr,
	nullptr,
	_FieldInstruction_MethodInfo_
};

$Object* allocate$FieldInstruction($Class* clazz) {
	return $of($alloc(FieldInstruction));
}

void FieldInstruction::init$() {
	$FieldOrMethod::init$();
}

void FieldInstruction::init$(int16_t opcode, int32_t index) {
	$FieldOrMethod::init$(opcode, index);
}

$String* FieldInstruction::toString($ConstantPool* cp) {
	$var($String, var$0, $$str({$($Const::getOpcodeName($FieldOrMethod::getOpcode())), " "_s}));
	return $concat(var$0, $($nc(cp)->constantToString($FieldOrMethod::getIndex(), $Const::CONSTANT_Fieldref)));
}

int32_t FieldInstruction::getFieldSize($ConstantPoolGen* cpg) {
	return $Type::size($Type::getTypeSize($(getSignature(cpg))));
}

$Type* FieldInstruction::getType($ConstantPoolGen* cpg) {
	return getFieldType(cpg);
}

$Type* FieldInstruction::getFieldType($ConstantPoolGen* cpg) {
	return $Type::getType($(getSignature(cpg)));
}

$String* FieldInstruction::getFieldName($ConstantPoolGen* cpg) {
	return getName(cpg);
}

FieldInstruction::FieldInstruction() {
}

$Class* FieldInstruction::load$($String* name, bool initialize) {
	$loadClass(FieldInstruction, name, initialize, &_FieldInstruction_ClassInfo_, allocate$FieldInstruction);
	return class$;
}

$Class* FieldInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com