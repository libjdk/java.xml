#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>

#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLT.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BOOLEAN_CLASS
#undef BOOLEAN_VALUE
#undef BOOLEAN_VALUE_SIG
#undef DATA_CONVERSION_ERR
#undef DUP_X1
#undef FATAL
#undef GE
#undef GT
#undef I2D
#undef LE
#undef LOAD
#undef LT
#undef NOP
#undef STORE
#undef SWAP
#undef TYPE

using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ConversionInstruction = ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IFGE = ::com::sun::org::apache::bcel::internal::generic::IFGE;
using $IFGT = ::com::sun::org::apache::bcel::internal::generic::IFGT;
using $IFLE = ::com::sun::org::apache::bcel::internal::generic::IFLE;
using $IFLT = ::com::sun::org::apache::bcel::internal::generic::IFLT;
using $IF_ICMPGE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPGE;
using $IF_ICMPGT = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPGT;
using $IF_ICMPLE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPLE;
using $IF_ICMPLT = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPLT;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $1Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$MethodInfo _BooleanType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(BooleanType::*)()>(&BooleanType::init$))},
	{"GE", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC},
	{"GT", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC},
	{"LE", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"LT", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC},
	{"isSimple", "()Z", nullptr, $PUBLIC},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{"translateFrom", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType;)V", nullptr, $PUBLIC, $method(static_cast<void(BooleanType::*)($ClassGenerator*,$MethodGenerator*,$StringType*)>(&BooleanType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType;)V", nullptr, $PUBLIC, $method(static_cast<void(BooleanType::*)($ClassGenerator*,$MethodGenerator*,$RealType*)>(&BooleanType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType;)V", nullptr, $PUBLIC, $method(static_cast<void(BooleanType::*)($ClassGenerator*,$MethodGenerator*,$ReferenceType*)>(&BooleanType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC},
	{"translateUnBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BooleanType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.BooleanType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	nullptr,
	_BooleanType_MethodInfo_
};

$Object* allocate$BooleanType($Class* clazz) {
	return $of($alloc(BooleanType));
}

void BooleanType::init$() {
	$1Type::init$();
}

$String* BooleanType::toString() {
	return "boolean"_s;
}

bool BooleanType::identicalTo($1Type* other) {
	return $equals(this, other);
}

$String* BooleanType::toSignature() {
	return "Z"_s;
}

bool BooleanType::isSimple() {
	return true;
}

$Type* BooleanType::toJCType() {
	$init($Type);
	return $Type::BOOLEAN;
}

void BooleanType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $1Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($1Type);
	if (type == $1Type::String) {
		translateTo(classGen, methodGen, $cast($StringType, type));
	} else {
		if (type == $1Type::Real) {
			translateTo(classGen, methodGen, $cast($RealType, type));
		} else {
			if (type == $1Type::Reference) {
				translateTo(classGen, methodGen, $cast($ReferenceType, type));
			} else {
				$init($ErrorMsg);
				$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
				$var($Object, var$1, $of(toString()));
				$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of($nc(type)->toString()))));
				$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
			}
		}
	}
}

void BooleanType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $StringType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($BranchHandle, falsec, $nc(il)->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr))));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "true"_s)));
	$var($BranchHandle, truec, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$nc(falsec)->setTarget($(il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "false"_s)))));
	$init($Constants);
	$nc(truec)->setTarget($(il->append($Constants::NOP)));
}

void BooleanType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $RealType* type) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append(static_cast<$Instruction*>($Constants::I2D));
}

void BooleanType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ReferenceType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($NEW, $nc(cpg)->addClass($Constants::BOOLEAN_CLASS))));
	il->append(static_cast<$Instruction*>($Constants::DUP_X1));
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::BOOLEAN_CLASS, "<init>"_s, "(Z)V"_s))));
}

void BooleanType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	if (clazz == $Boolean::TYPE) {
		$init($Constants);
		$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
	} else {
		if ($nc(clazz)->isAssignableFrom($Boolean::class$)) {
			$init($1Type);
			translateTo(classGen, methodGen, $1Type::Reference);
		} else {
			$init($ErrorMsg);
			$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
			$var($Object, var$1, $of(toString()));
			$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(clazz->getName()))));
			$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
		}
	}
}

void BooleanType::translateFrom($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	translateTo(classGen, methodGen, clazz);
}

void BooleanType::translateBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($1Type);
	translateTo(classGen, methodGen, $1Type::Reference);
}

void BooleanType::translateUnBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass($Constants::BOOLEAN_CLASS))));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::BOOLEAN_CLASS, $Constants::BOOLEAN_VALUE, $Constants::BOOLEAN_VALUE_SIG))));
}

$Instruction* BooleanType::LOAD(int32_t slot) {
	return $new($ILOAD, slot);
}

$Instruction* BooleanType::STORE(int32_t slot) {
	return $new($ISTORE, slot);
}

$BranchInstruction* BooleanType::GT(bool tozero) {
	return tozero ? static_cast<$BranchInstruction*>($new($IFGT, nullptr)) : static_cast<$BranchInstruction*>($new($IF_ICMPGT, nullptr));
}

$BranchInstruction* BooleanType::GE(bool tozero) {
	return tozero ? static_cast<$BranchInstruction*>($new($IFGE, nullptr)) : static_cast<$BranchInstruction*>($new($IF_ICMPGE, nullptr));
}

$BranchInstruction* BooleanType::LT(bool tozero) {
	return tozero ? static_cast<$BranchInstruction*>($new($IFLT, nullptr)) : static_cast<$BranchInstruction*>($new($IF_ICMPLT, nullptr));
}

$BranchInstruction* BooleanType::LE(bool tozero) {
	return tozero ? static_cast<$BranchInstruction*>($new($IFLE, nullptr)) : static_cast<$BranchInstruction*>($new($IF_ICMPLE, nullptr));
}

BooleanType::BooleanType() {
}

$Class* BooleanType::load$($String* name, bool initialize) {
	$loadClass(BooleanType, name, initialize, &_BooleanType_ClassInfo_, allocate$BooleanType);
	return class$;
}

$Class* BooleanType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com