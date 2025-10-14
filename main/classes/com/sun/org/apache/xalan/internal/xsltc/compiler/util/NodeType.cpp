#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>

#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NodeTest.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ANODE
#undef ATTRIBUTE
#undef COMMENT
#undef DATA_CONVERSION_ERR
#undef DOM_INTF
#undef DUP_X1
#undef ELEMENT
#undef FATAL
#undef GET_ELEMENT_VALUE
#undef GET_ELEMENT_VALUE_SIG
#undef GET_NODE_VALUE
#undef GET_NODE_VALUE_SIG
#undef ICONST_0
#undef ICONST_1
#undef INT
#undef LOAD
#undef MAKE_NODE
#undef MAKE_NODE_LIST
#undef MAKE_NODE_LIST_SIG
#undef MAKE_NODE_SIG
#undef NODE_FIELD
#undef NODE_FIELD_SIG
#undef NODE_SIG
#undef NOP
#undef PI
#undef ROOT
#undef RUNTIME_NODE_CLASS
#undef SINGLETON_ITERATOR
#undef STORE
#undef SWAP

using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
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
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $NodeTest = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NodeTest;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $ObjectType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $1Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _NodeType_FieldInfo_[] = {
	{"_type", "I", nullptr, $PRIVATE | $FINAL, $field(NodeType, _type)},
	{}
};

$MethodInfo _NodeType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(NodeType::*)()>(&NodeType::init$))},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(NodeType::*)(int32_t)>(&NodeType::init$))},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(NodeType::*)()>(&NodeType::getType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType;)V", nullptr, $PUBLIC, $method(static_cast<void(NodeType::*)($ClassGenerator*,$MethodGenerator*,$StringType*)>(&NodeType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)V", nullptr, $PUBLIC, $method(static_cast<void(NodeType::*)($ClassGenerator*,$MethodGenerator*,$BooleanType*)>(&NodeType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType;)V", nullptr, $PUBLIC, $method(static_cast<void(NodeType::*)($ClassGenerator*,$MethodGenerator*,$RealType*)>(&NodeType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType;)V", nullptr, $PUBLIC, $method(static_cast<void(NodeType::*)($ClassGenerator*,$MethodGenerator*,$NodeSetType*)>(&NodeType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType;)V", nullptr, $PUBLIC, $method(static_cast<void(NodeType::*)($ClassGenerator*,$MethodGenerator*,$ObjectType*)>(&NodeType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType;)V", nullptr, $PUBLIC, $method(static_cast<void(NodeType::*)($ClassGenerator*,$MethodGenerator*,$ReferenceType*)>(&NodeType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC},
	{"translateToDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC},
	{"translateUnBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NodeType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.NodeType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	_NodeType_FieldInfo_,
	_NodeType_MethodInfo_
};

$Object* allocate$NodeType($Class* clazz) {
	return $of($alloc(NodeType));
}

void NodeType::init$() {
	NodeType::init$($NodeTest::ANODE);
}

void NodeType::init$(int32_t type) {
	$1Type::init$();
	this->_type = type;
}

int32_t NodeType::getType() {
	return this->_type;
}

$String* NodeType::toString() {
	return "node-type"_s;
}

bool NodeType::identicalTo($1Type* other) {
	return $instanceOf(NodeType, other);
}

int32_t NodeType::hashCode() {
	return this->_type;
}

$String* NodeType::toSignature() {
	return "I"_s;
}

$Type* NodeType::toJCType() {
	$init($Type);
	return $Type::INT;
}

void NodeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $1Type* type) {
	$init($1Type);
	if (type == $1Type::String) {
		translateTo(classGen, methodGen, $cast($StringType, type));
	} else {
		if (type == $1Type::Boolean) {
			translateTo(classGen, methodGen, $cast($BooleanType, type));
		} else {
			if (type == $1Type::Real) {
				translateTo(classGen, methodGen, $cast($RealType, type));
			} else {
				if (type == $1Type::NodeSet) {
					translateTo(classGen, methodGen, $cast($NodeSetType, type));
				} else {
					if (type == $1Type::Reference) {
						translateTo(classGen, methodGen, $cast($ReferenceType, type));
					} else {
						if (type == $1Type::Object) {
							translateTo(classGen, methodGen, $cast($ObjectType, type));
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
	}
}

void NodeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $StringType* type) {
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	{
		int32_t index = 0;
		$var($ErrorMsg, err, nullptr)
		switch (this->_type) {
		case $NodeTest::ROOT:
			{}
		case $NodeTest::ELEMENT:
			{
				$nc(il)->append($(methodGen->loadDOM()));
				$init($Constants);
				$nc(il)->append(static_cast<$Instruction*>($Constants::SWAP));
				$init($Constants);
				index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_ELEMENT_VALUE, $Constants::GET_ELEMENT_VALUE_SIG);
				$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
				break;
			}
		case $NodeTest::ANODE:
			{}
		case $NodeTest::COMMENT:
			{}
		case $NodeTest::ATTRIBUTE:
			{}
		case $NodeTest::PI:
			{
				$nc(il)->append($(methodGen->loadDOM()));
				$init($Constants);
				$nc(il)->append(static_cast<$Instruction*>($Constants::SWAP));
				$init($Constants);
				index = cpg->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_NODE_VALUE, $Constants::GET_NODE_VALUE_SIG);
				$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
				break;
			}
		default:
			{
				$init($ErrorMsg);
				$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
				$var($Object, var$1, $of(toString()));
				$assign(err, $new($ErrorMsg, var$0, var$1, $($of($nc(type)->toString()))));
				$nc($(classGen->getParser()))->reportError($Constants::FATAL, err);
				break;
			}
		}
	}
}

void NodeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($FlowList, falsel, translateToDesynthesized(classGen, methodGen, type));
	$init($Constants);
	$nc(il)->append($Constants::ICONST_1);
	$var($BranchHandle, truec, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$nc(falsel)->backPatch($(il->append($Constants::ICONST_0)));
	$nc(truec)->setTarget($(il->append($Constants::NOP)));
}

void NodeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $RealType* type) {
	$init($1Type);
	translateTo(classGen, methodGen, $1Type::String);
	$nc($1Type::String)->translateTo(classGen, methodGen, $1Type::Real);
}

void NodeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $NodeSetType* type) {
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($NEW, $nc(cpg)->addClass($Constants::SINGLETON_ITERATOR))));
	il->append(static_cast<$Instruction*>($Constants::DUP_X1));
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	int32_t init = $nc(cpg)->addMethodref($Constants::SINGLETON_ITERATOR, "<init>"_s, $$str({"("_s, $Constants::NODE_SIG, ")V"_s}));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, init)));
}

void NodeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ObjectType* type) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

$FlowList* NodeType::translateToDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	return $new($FlowList, $(static_cast<$InstructionHandle*>($nc(il)->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr))))));
}

void NodeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ReferenceType* type) {
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($NEW, $nc(cpg)->addClass($Constants::RUNTIME_NODE_CLASS))));
	il->append(static_cast<$Instruction*>($Constants::DUP_X1));
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_type)));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::RUNTIME_NODE_CLASS, "<init>"_s, "(II)V"_s))));
}

void NodeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($String, className, $nc(clazz)->getName());
	if ($nc(className)->equals("java.lang.String"_s)) {
		$init($1Type);
		translateTo(classGen, methodGen, $1Type::String);
		return;
	}
	$nc(il)->append($(methodGen->loadDOM()));
	$init($Constants);
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	bool var$0 = $nc(className)->equals("org.w3c.dom.Node"_s);
	if (var$0 || $nc(className)->equals("java.lang.Object"_s)) {
		int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::MAKE_NODE, $Constants::MAKE_NODE_SIG);
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
	} else if (className->equals("org.w3c.dom.NodeList"_s)) {
		int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::MAKE_NODE_LIST, $Constants::MAKE_NODE_LIST_SIG);
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
	} else {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::DATA_CONVERSION_ERR, $($of(toString())), $of(className)));
		$nc($(classGen->getParser()))->reportError($Constants::FATAL, err);
	}
}

void NodeType::translateBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($1Type);
	translateTo(classGen, methodGen, $1Type::Reference);
}

void NodeType::translateUnBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass($Constants::RUNTIME_NODE_CLASS))));
	il->append(static_cast<$Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref($Constants::RUNTIME_NODE_CLASS, $Constants::NODE_FIELD, $Constants::NODE_FIELD_SIG))));
}

$String* NodeType::getClassName() {
	$init($Constants);
	return ($Constants::RUNTIME_NODE_CLASS);
}

$Instruction* NodeType::LOAD(int32_t slot) {
	return $new($ILOAD, slot);
}

$Instruction* NodeType::STORE(int32_t slot) {
	return $new($ISTORE, slot);
}

NodeType::NodeType() {
}

$Class* NodeType::load$($String* name, bool initialize) {
	$loadClass(NodeType, name, initialize, &_NodeType_ClassInfo_, allocate$NodeType);
	return class$;
}

$Class* NodeType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com