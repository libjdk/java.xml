#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NameCall.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NameBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DOM_INTF
#undef GET_NODE_NAME
#undef GET_NODE_NAME_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $NameBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NameBase;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _NameCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $method(static_cast<void(NameCall::*)($QName*)>(&NameCall::init$))},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(static_cast<void(NameCall::*)($QName*,$List*)>(&NameCall::init$))},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NameCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.NameCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.NameBase",
	nullptr,
	nullptr,
	_NameCall_MethodInfo_
};

$Object* allocate$NameCall($Class* clazz) {
	return $of($alloc(NameCall));
}

void NameCall::init$($QName* fname) {
	$NameBase::init$(fname);
}

void NameCall::init$($QName* fname, $List* arguments) {
	$NameBase::init$(fname, arguments);
}

void NameCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t getName = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_NODE_NAME, $Constants::GET_NODE_NAME_SIG);
	$NameBase::translate(classGen, methodGen);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getName, 2)));
}

NameCall::NameCall() {
}

$Class* NameCall::load$($String* name, bool initialize) {
	$loadClass(NameCall, name, initialize, &_NameCall_ClassInfo_, allocate$NameCall);
	return class$;
}

$Class* NameCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com