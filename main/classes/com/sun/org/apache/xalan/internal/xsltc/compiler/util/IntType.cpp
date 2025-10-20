#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
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
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NumberType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ADD
#undef DATA_CONVERSION_ERR
#undef DIV
#undef DUP_X1
#undef FATAL
#undef GE
#undef GT
#undef I2B
#undef I2C
#undef I2D
#undef I2F
#undef I2L
#undef I2S
#undef IADD
#undef ICONST_0
#undef ICONST_1
#undef IDIV
#undef IMUL
#undef INEG
#undef INT
#undef INTEGER_CLASS
#undef INT_VALUE
#undef INT_VALUE_SIG
#undef IREM
#undef ISUB
#undef LE
#undef LOAD
#undef LT
#undef MAX_VALUE
#undef MUL
#undef NEG
#undef NOP
#undef REM
#undef STORE
#undef STRING_SIG
#undef SUB
#undef SWAP
#undef TYPE

using $ArithmeticInstruction = ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction;
using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
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
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NumberType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $1Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$MethodInfo _IntType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(IntType::*)()>(&IntType::init$))},
	{"ADD", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"DIV", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"GE", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC},
	{"GT", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC},
	{"LE", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"LT", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC},
	{"MUL", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"NEG", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"REM", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"SUB", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"distanceTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)I", nullptr, $PUBLIC},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType;)V", nullptr, $PUBLIC, $method(static_cast<void(IntType::*)($ClassGenerator*,$MethodGenerator*,$RealType*)>(&IntType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType;)V", nullptr, $PUBLIC, $method(static_cast<void(IntType::*)($ClassGenerator*,$MethodGenerator*,$StringType*)>(&IntType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)V", nullptr, $PUBLIC, $method(static_cast<void(IntType::*)($ClassGenerator*,$MethodGenerator*,$BooleanType*)>(&IntType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType;)V", nullptr, $PUBLIC, $method(static_cast<void(IntType::*)($ClassGenerator*,$MethodGenerator*,$ReferenceType*)>(&IntType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC},
	{"translateToDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC},
	{"translateUnBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.IntType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.NumberType",
	nullptr,
	nullptr,
	_IntType_MethodInfo_
};

$Object* allocate$IntType($Class* clazz) {
	return $of($alloc(IntType));
}

void IntType::init$() {
	$NumberType::init$();
}

$String* IntType::toString() {
	return "int"_s;
}

bool IntType::identicalTo($1Type* other) {
	return $equals(this, other);
}

$String* IntType::toSignature() {
	return "I"_s;
}

$Type* IntType::toJCType() {
	$init($Type);
	return $Type::INT;
}

int32_t IntType::distanceTo($1Type* type) {
	if ($equals(type, this)) {
		return 0;
	} else {
		$init($1Type);
		if (type == $1Type::Real) {
			return 1;
		} else {
			return $Integer::MAX_VALUE;
		}
	}
}

void IntType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $1Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($1Type);
	if (type == $1Type::Real) {
		translateTo(classGen, methodGen, $cast($RealType, type));
	} else {
		if (type == $1Type::String) {
			translateTo(classGen, methodGen, $cast($StringType, type));
		} else {
			if (type == $1Type::Boolean) {
				translateTo(classGen, methodGen, $cast($BooleanType, type));
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
}

void IntType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $RealType* type) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append(static_cast<$Instruction*>($Constants::I2D));
}

void IntType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $StringType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, $nc(cpg)->addMethodref($Constants::INTEGER_CLASS, "toString"_s, $$str({"(I)"_s, $Constants::STRING_SIG})))));
}

void IntType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($BranchHandle, falsec, $nc(il)->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr))));
	$init($Constants);
	il->append($Constants::ICONST_1);
	$var($BranchHandle, truec, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$nc(falsec)->setTarget($(il->append($Constants::ICONST_0)));
	$nc(truec)->setTarget($(il->append($Constants::NOP)));
}

$FlowList* IntType::translateToDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	return $new($FlowList, $(static_cast<$InstructionHandle*>($nc(il)->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr))))));
}

void IntType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ReferenceType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($NEW, $nc(cpg)->addClass($Constants::INTEGER_CLASS))));
	il->append(static_cast<$Instruction*>($Constants::DUP_X1));
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::INTEGER_CLASS, "<init>"_s, "(I)V"_s))));
}

void IntType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Character);
	if (clazz == $Character::TYPE) {
		$init($Constants);
		$nc(il)->append(static_cast<$Instruction*>($Constants::I2C));
	} else {
		$init($Byte);
		if (clazz == $Byte::TYPE) {
			$init($Constants);
			$nc(il)->append(static_cast<$Instruction*>($Constants::I2B));
		} else {
			$init($Short);
			if (clazz == $Short::TYPE) {
				$init($Constants);
				$nc(il)->append(static_cast<$Instruction*>($Constants::I2S));
			} else {
				$init($Integer);
				if (clazz == $Integer::TYPE) {
					$init($Constants);
					$nc(il)->append($Constants::NOP);
				} else {
					$init($Long);
					if (clazz == $Long::TYPE) {
						$init($Constants);
						$nc(il)->append(static_cast<$Instruction*>($Constants::I2L));
					} else {
						$init($Float);
						if (clazz == $Float::TYPE) {
							$init($Constants);
							$nc(il)->append(static_cast<$Instruction*>($Constants::I2F));
						} else {
							$init($Double);
							if (clazz == $Double::TYPE) {
								$init($Constants);
								$nc(il)->append(static_cast<$Instruction*>($Constants::I2D));
							} else {
								if ($nc(clazz)->isAssignableFrom($Double::class$)) {
									$init($Constants);
									$nc(il)->append(static_cast<$Instruction*>($Constants::I2D));
									$init($1Type);
									$nc($1Type::Real)->translateTo(classGen, methodGen, $1Type::Reference);
								} else {
									$init($ErrorMsg);
									$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
									$var($Object, var$1, $of(toString()));
									$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(clazz->getName()))));
									$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
								}
							}
						}
					}
				}
			}
		}
	}
}

void IntType::translateBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($1Type);
	translateTo(classGen, methodGen, $1Type::Reference);
}

void IntType::translateUnBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass($Constants::INTEGER_CLASS))));
	int32_t index = $nc(cpg)->addMethodref($Constants::INTEGER_CLASS, $Constants::INT_VALUE, $Constants::INT_VALUE_SIG);
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
}

$Instruction* IntType::ADD() {
	$init($InstructionConst);
	return $InstructionConst::IADD;
}

$Instruction* IntType::SUB() {
	$init($InstructionConst);
	return $InstructionConst::ISUB;
}

$Instruction* IntType::MUL() {
	$init($InstructionConst);
	return $InstructionConst::IMUL;
}

$Instruction* IntType::DIV() {
	$init($InstructionConst);
	return $InstructionConst::IDIV;
}

$Instruction* IntType::REM() {
	$init($InstructionConst);
	return $InstructionConst::IREM;
}

$Instruction* IntType::NEG() {
	$init($InstructionConst);
	return $InstructionConst::INEG;
}

$Instruction* IntType::LOAD(int32_t slot) {
	return $new($ILOAD, slot);
}

$Instruction* IntType::STORE(int32_t slot) {
	return $new($ISTORE, slot);
}

$BranchInstruction* IntType::GT(bool tozero) {
	return tozero ? static_cast<$BranchInstruction*>($new($IFGT, nullptr)) : static_cast<$BranchInstruction*>($new($IF_ICMPGT, nullptr));
}

$BranchInstruction* IntType::GE(bool tozero) {
	return tozero ? static_cast<$BranchInstruction*>($new($IFGE, nullptr)) : static_cast<$BranchInstruction*>($new($IF_ICMPGE, nullptr));
}

$BranchInstruction* IntType::LT(bool tozero) {
	return tozero ? static_cast<$BranchInstruction*>($new($IFLT, nullptr)) : static_cast<$BranchInstruction*>($new($IF_ICMPLT, nullptr));
}

$BranchInstruction* IntType::LE(bool tozero) {
	return tozero ? static_cast<$BranchInstruction*>($new($IFLE, nullptr)) : static_cast<$BranchInstruction*>($new($IF_ICMPLE, nullptr));
}

IntType::IntType() {
}

$Class* IntType::load$($String* name, bool initialize) {
	$loadClass(IntType, name, initialize, &_IntType_ClassInfo_, allocate$IntType);
	return class$;
}

$Class* IntType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com