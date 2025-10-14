#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantClass = ::com::sun::org::apache::bcel::internal::classfile::ConstantClass;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $IndexedInstruction = ::com::sun::org::apache::bcel::internal::generic::IndexedInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _CPInstruction_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE, $field(CPInstruction, index)},
	{}
};

$MethodInfo _CPInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CPInstruction::*)()>(&CPInstruction::init$))},
	{"<init>", "(SI)V", nullptr, $PROTECTED, $method(static_cast<void(CPInstruction::*)(int16_t,int32_t)>(&CPInstruction::init$))},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getIndex", "()I", nullptr, $PUBLIC | $FINAL},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"setIndex", "(I)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CPInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.CPInstruction",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.IndexedInstruction",
	_CPInstruction_FieldInfo_,
	_CPInstruction_MethodInfo_
};

$Object* allocate$CPInstruction($Class* clazz) {
	return $of($alloc(CPInstruction));
}

$String* CPInstruction::toString() {
	 return this->$Instruction::toString();
}

bool CPInstruction::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t CPInstruction::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* CPInstruction::clone() {
	 return this->$Instruction::clone();
}

void CPInstruction::finalize() {
	this->$Instruction::finalize();
}

void CPInstruction::init$() {
	$Instruction::init$();
}

void CPInstruction::init$(int16_t opcode, int32_t index) {
	$Instruction::init$(opcode, (int16_t)3);
	setIndex(index);
}

void CPInstruction::dump($DataOutputStream* out) {
	$nc(out)->writeByte($Instruction::getOpcode());
	out->writeShort(this->index);
}

$String* CPInstruction::toString(bool verbose) {
	return $str({$($Instruction::toString(verbose)), " "_s, $$str(this->index)});
}

$String* CPInstruction::toString($ConstantPool* cp) {
	$var($Constant, c, $nc(cp)->getConstant(this->index));
	$var($String, str, cp->constantToString(c));
	if ($instanceOf($ConstantClass, c)) {
		$assign(str, $nc(str)->replace(u'.', u'/'));
	}
	return $str({$($Const::getOpcodeName($Instruction::getOpcode())), " "_s, str});
}

void CPInstruction::initFromFile($ByteSequence* bytes, bool wide) {
	setIndex($nc(bytes)->readUnsignedShort());
	$Instruction::setLength(3);
}

int32_t CPInstruction::getIndex() {
	return this->index;
}

void CPInstruction::setIndex(int32_t index) {
	if (index < 0) {
		$throwNew($ClassGenException, $$str({"Negative index value: "_s, $$str(index)}));
	}
	this->index = index;
}

$Type* CPInstruction::getType($ConstantPoolGen* cpg) {
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($String, name, $nc(cp)->getConstantString(this->index, $Const::CONSTANT_Class));
	if (!$nc(name)->startsWith("["_s)) {
		$assign(name, $str({"L"_s, name, ";"_s}));
	}
	return $Type::getType(name);
}

CPInstruction::CPInstruction() {
}

$Class* CPInstruction::load$($String* name, bool initialize) {
	$loadClass(CPInstruction, name, initialize, &_CPInstruction_ClassInfo_, allocate$CPInstruction);
	return class$;
}

$Class* CPInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com