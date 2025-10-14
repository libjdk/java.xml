#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SimpleAttributeValue.h>

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $AttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
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

$FieldInfo _SimpleAttributeValue_FieldInfo_[] = {
	{"_value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SimpleAttributeValue, _value)},
	{}
};

$MethodInfo _SimpleAttributeValue_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleAttributeValue::*)($String*)>(&SimpleAttributeValue::init$))},
	{"contextDependent", "()Z", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _SimpleAttributeValue_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SimpleAttributeValue",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeValue",
	nullptr,
	_SimpleAttributeValue_FieldInfo_,
	_SimpleAttributeValue_MethodInfo_
};

$Object* allocate$SimpleAttributeValue($Class* clazz) {
	return $of($alloc(SimpleAttributeValue));
}

void SimpleAttributeValue::init$($String* value) {
	$AttributeValue::init$();
	$set(this, _value, value);
}

$Type* SimpleAttributeValue::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $assignField(this, _type, $Type::String);
}

$String* SimpleAttributeValue::toString() {
	return this->_value;
}

bool SimpleAttributeValue::contextDependent() {
	return false;
}

void SimpleAttributeValue::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_value)));
}

SimpleAttributeValue::SimpleAttributeValue() {
}

$Class* SimpleAttributeValue::load$($String* name, bool initialize) {
	$loadClass(SimpleAttributeValue, name, initialize, &_SimpleAttributeValue_ClassInfo_, allocate$SimpleAttributeValue);
	return class$;
}

$Class* SimpleAttributeValue::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com