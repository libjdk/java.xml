#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/VoidType.h>

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DATA_CONVERSION_ERR
#undef FATAL
#undef NOP
#undef POP

using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $1Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
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

$MethodInfo _VoidType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(VoidType::*)()>(&VoidType::init$))},
	{"POP", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateFrom", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType;)V", nullptr, $PUBLIC, $method(static_cast<void(VoidType::*)($ClassGenerator*,$MethodGenerator*,$StringType*)>(&VoidType::translateTo))},
	{}
};

$ClassInfo _VoidType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.VoidType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	nullptr,
	_VoidType_MethodInfo_
};

$Object* allocate$VoidType($Class* clazz) {
	return $of($alloc(VoidType));
}

void VoidType::init$() {
	$1Type::init$();
}

$String* VoidType::toString() {
	return "void"_s;
}

bool VoidType::identicalTo($1Type* other) {
	return $equals(this, other);
}

$String* VoidType::toSignature() {
	return "V"_s;
}

$Type* VoidType::toJCType() {
	return nullptr;
}

$Instruction* VoidType::POP() {
	$init($Constants);
	return $Constants::NOP;
}

void VoidType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $1Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($1Type);
	if (type == $1Type::String) {
		translateTo(classGen, methodGen, $cast($StringType, type));
	} else {
		$init($ErrorMsg);
		$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
		$var($Object, var$1, $of(toString()));
		$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of($nc(type)->toString()))));
		$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
	}
}

void VoidType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $StringType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, $($nc(classGen)->getConstantPool()), ""_s)));
}

void VoidType::translateFrom($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(clazz)->getName()))->equals("void"_s)) {
		$init($ErrorMsg);
		$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
		$var($Object, var$1, $of(toString()));
		$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(clazz->getName()))));
		$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
	}
}

VoidType::VoidType() {
}

$Class* VoidType::load$($String* name, bool initialize) {
	$loadClass(VoidType, name, initialize, &_VoidType_ClassInfo_, allocate$VoidType);
	return class$;
}

$Class* VoidType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com