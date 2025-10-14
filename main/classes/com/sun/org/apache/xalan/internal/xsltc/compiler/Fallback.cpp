#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Fallback.h>

#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
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
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
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

$FieldInfo _Fallback_FieldInfo_[] = {
	{"_active", "Z", nullptr, $PRIVATE, $field(Fallback, _active)},
	{}
};

$MethodInfo _Fallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Fallback::*)()>(&Fallback::init$))},
	{"activate", "()V", nullptr, $PUBLIC, $method(static_cast<void(Fallback::*)()>(&Fallback::activate))},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Fallback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Fallback",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_Fallback_FieldInfo_,
	_Fallback_MethodInfo_
};

$Object* allocate$Fallback($Class* clazz) {
	return $of($alloc(Fallback));
}

void Fallback::init$() {
	$Instruction::init$();
	this->_active = false;
}

$Type* Fallback::typeCheck($SymbolTable* stable) {
	if (this->_active) {
		return (typeCheckContents(stable));
	} else {
		$init($Type);
		return $Type::Void;
	}
}

void Fallback::activate() {
	this->_active = true;
}

$String* Fallback::toString() {
	return ("fallback"_s);
}

void Fallback::parseContents($Parser* parser) {
	if (this->_active) {
		parseChildren(parser);
	}
}

void Fallback::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_active) {
		translateContents(classGen, methodGen);
	}
}

Fallback::Fallback() {
}

$Class* Fallback::load$($String* name, bool initialize) {
	$loadClass(Fallback, name, initialize, &_Fallback_ClassInfo_, allocate$Fallback);
	return class$;
}

$Class* Fallback::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com