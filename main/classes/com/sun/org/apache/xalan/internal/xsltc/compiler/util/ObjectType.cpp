#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DATA_CONVERSION_ERR
#undef DUP
#undef FATAL
#undef LOAD
#undef NOP
#undef POP
#undef STORE
#undef STRING_SIG

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFNULL = ::com::sun::org::apache::bcel::internal::generic::IFNULL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $1Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _ObjectType_FieldInfo_[] = {
	{"_javaClassName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ObjectType, _javaClassName)},
	{"_clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(ObjectType, _clazz)},
	{}
};

$MethodInfo _ObjectType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(ObjectType::*)($String*)>(&ObjectType::init$))},
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(ObjectType::*)($Class*)>(&ObjectType::init$))},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getJavaClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(ObjectType::*)()>(&ObjectType::getJavaClass))},
	{"getJavaClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ObjectType::*)()>(&ObjectType::getJavaClassName))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateFrom", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectType::*)($ClassGenerator*,$MethodGenerator*,$StringType*)>(&ObjectType::translateTo))},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC},
	{}
};

$ClassInfo _ObjectType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ObjectType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	_ObjectType_FieldInfo_,
	_ObjectType_MethodInfo_
};

$Object* allocate$ObjectType($Class* clazz) {
	return $of($alloc(ObjectType));
}

void ObjectType::init$($String* javaClassName) {
	$1Type::init$();
	$set(this, _javaClassName, "java.lang.Object"_s);
	$load($Object);
	$set(this, _clazz, $Object::class$);
	$set(this, _javaClassName, javaClassName);
	try {
		$set(this, _clazz, $ObjectFactory::findProviderClass(javaClassName, true));
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e, $catch());
		$set(this, _clazz, nullptr);
	}
}

void ObjectType::init$($Class* clazz) {
	$1Type::init$();
	$set(this, _javaClassName, "java.lang.Object"_s);
	$load($Object);
	$set(this, _clazz, $Object::class$);
	$set(this, _clazz, clazz);
	$set(this, _javaClassName, $nc(clazz)->getName());
}

int32_t ObjectType::hashCode() {
	$load($Object);
	return $of($Object::class$)->hashCode();
}

bool ObjectType::equals(Object$* obj) {
	return ($instanceOf(ObjectType, obj));
}

$String* ObjectType::getJavaClassName() {
	return this->_javaClassName;
}

$Class* ObjectType::getJavaClass() {
	return this->_clazz;
}

$String* ObjectType::toString() {
	return this->_javaClassName;
}

bool ObjectType::identicalTo($1Type* other) {
	return $equals(this, other);
}

$String* ObjectType::toSignature() {
	$var($StringBuffer, result, $new($StringBuffer, "L"_s));
	result->append($($nc(this->_javaClassName)->replace(u'.', u'/')))->append(u';');
	return result->toString();
}

$Type* ObjectType::toJCType() {
	return $Util::getJCRefType($(toSignature()));
}

void ObjectType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $1Type* type) {
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

void ObjectType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $StringType* type) {
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($Constants::DUP));
	$var($BranchHandle, ifNull, il->append(static_cast<$BranchInstruction*>($$new($IFNULL, nullptr))));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref(this->_javaClassName, "toString"_s, $$str({"()"_s, $Constants::STRING_SIG})))));
	$var($BranchHandle, gotobh, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$nc(ifNull)->setTarget($(il->append(static_cast<$Instruction*>($Constants::POP))));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, ""_s)));
	$nc(gotobh)->setTarget($(il->append($Constants::NOP)));
}

void ObjectType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	if ($nc(clazz)->isAssignableFrom(this->_clazz)) {
		$init($Constants);
		$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
	} else {
		$init($ErrorMsg);
		$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
		$var($Object, var$1, $of(toString()));
		$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of($of(clazz)->getClass()->toString()))));
		$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
	}
}

void ObjectType::translateFrom($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

$Instruction* ObjectType::LOAD(int32_t slot) {
	return $new($ALOAD, slot);
}

$Instruction* ObjectType::STORE(int32_t slot) {
	return $new($ASTORE, slot);
}

ObjectType::ObjectType() {
}

$Class* ObjectType::load$($String* name, bool initialize) {
	$loadClass(ObjectType, name, initialize, &_ObjectType_ClassInfo_, allocate$ObjectType);
	return class$;
}

$Class* ObjectType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com