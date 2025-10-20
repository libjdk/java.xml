#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
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

#undef EMPTYSTRING

using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
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

$FieldInfo _LiteralExpr_FieldInfo_[] = {
	{"_value", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LiteralExpr, _value)},
	{"_namespace", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LiteralExpr, _namespace)},
	{}
};

$MethodInfo _LiteralExpr_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LiteralExpr::*)($String*)>(&LiteralExpr::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LiteralExpr::*)($String*,$String*)>(&LiteralExpr::init$))},
	{"contextDependent", "()Z", nullptr, $PROTECTED},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PROTECTED, $method(static_cast<$String*(LiteralExpr::*)()>(&LiteralExpr::getNamespace))},
	{"getValue", "()Ljava/lang/String;", nullptr, $PROTECTED, $method(static_cast<$String*(LiteralExpr::*)()>(&LiteralExpr::getValue))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _LiteralExpr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LiteralExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_LiteralExpr_FieldInfo_,
	_LiteralExpr_MethodInfo_
};

$Object* allocate$LiteralExpr($Class* clazz) {
	return $of($alloc(LiteralExpr));
}

void LiteralExpr::init$($String* value) {
	$Expression::init$();
	$set(this, _value, value);
	$set(this, _namespace, nullptr);
}

void LiteralExpr::init$($String* value, $String* namespace$) {
	$Expression::init$();
	$set(this, _value, value);
	$init($Constants);
	$set(this, _namespace, $nc(namespace$)->equals($Constants::EMPTYSTRING) ? ($String*)nullptr : namespace$);
}

$Type* LiteralExpr::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $assignField(this, _type, $Type::String);
}

$String* LiteralExpr::toString() {
	return $str({"literal-expr("_s, this->_value, $$str(u')')});
}

bool LiteralExpr::contextDependent() {
	return false;
}

$String* LiteralExpr::getValue() {
	return this->_value;
}

$String* LiteralExpr::getNamespace() {
	return this->_namespace;
}

void LiteralExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_value)));
}

LiteralExpr::LiteralExpr() {
}

$Class* LiteralExpr::load$($String* name, bool initialize) {
	$loadClass(LiteralExpr, name, initialize, &_LiteralExpr_ClassInfo_, allocate$LiteralExpr);
	return class$;
}

$Class* LiteralExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com