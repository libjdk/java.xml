#include <com/sun/org/apache/bcel/internal/generic/NameSignatureInstruction.h>

#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantCP = ::com::sun::org::apache::bcel::internal::classfile::ConstantCP;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _NameSignatureInstruction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NameSignatureInstruction::*)()>(&NameSignatureInstruction::init$))},
	{"<init>", "(SI)V", nullptr, $PUBLIC, $method(static_cast<void(NameSignatureInstruction::*)(int16_t,int32_t)>(&NameSignatureInstruction::init$))},
	{"getName", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNameAndType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/classfile/ConstantNameAndType;", nullptr, $PUBLIC},
	{"getSignature", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NameSignatureInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.NameSignatureInstruction",
	"com.sun.org.apache.bcel.internal.generic.CPInstruction",
	nullptr,
	nullptr,
	_NameSignatureInstruction_MethodInfo_
};

$Object* allocate$NameSignatureInstruction($Class* clazz) {
	return $of($alloc(NameSignatureInstruction));
}

void NameSignatureInstruction::init$() {
	$CPInstruction::init$();
}

void NameSignatureInstruction::init$(int16_t opcode, int32_t index) {
	$CPInstruction::init$(opcode, index);
}

$ConstantNameAndType* NameSignatureInstruction::getNameAndType($ConstantPoolGen* cpg) {
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($ConstantCP, cmr, $cast($ConstantCP, $nc(cp)->getConstant($CPInstruction::getIndex())));
	return $cast($ConstantNameAndType, cp->getConstant($nc(cmr)->getNameAndTypeIndex()));
}

$String* NameSignatureInstruction::getSignature($ConstantPoolGen* cpg) {
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($ConstantNameAndType, cnat, getNameAndType(cpg));
	return $nc(($cast($ConstantUtf8, $($nc(cp)->getConstant($nc(cnat)->getSignatureIndex())))))->getBytes();
}

$String* NameSignatureInstruction::getName($ConstantPoolGen* cpg) {
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($ConstantNameAndType, cnat, getNameAndType(cpg));
	return $nc(($cast($ConstantUtf8, $($nc(cp)->getConstant($nc(cnat)->getNameIndex())))))->getBytes();
}

NameSignatureInstruction::NameSignatureInstruction() {
}

$Class* NameSignatureInstruction::load$($String* name, bool initialize) {
	$loadClass(NameSignatureInstruction, name, initialize, &_NameSignatureInstruction_ClassInfo_, allocate$NameSignatureInstruction);
	return class$;
}

$Class* NameSignatureInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com