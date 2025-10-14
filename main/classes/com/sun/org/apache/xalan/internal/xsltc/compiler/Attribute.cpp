#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Attribute.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
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

$FieldInfo _Attribute_FieldInfo_[] = {
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(Attribute, _name)},
	{}
};

$MethodInfo _Attribute_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Attribute::*)()>(&Attribute::init$))},
	{"display", "(I)V", nullptr, $PUBLIC},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Attribute_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Attribute",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_Attribute_FieldInfo_,
	_Attribute_MethodInfo_
};

$Object* allocate$Attribute($Class* clazz) {
	return $of($alloc(Attribute));
}

void Attribute::init$() {
	$Instruction::init$();
}

void Attribute::display(int32_t indent) {
	this->indent(indent);
	$Util::println($$str({"Attribute "_s, this->_name}));
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

void Attribute::parseContents($Parser* parser) {
	$set(this, _name, $nc(parser)->getQName($(getAttribute("name"_s))));
	parseChildren(parser);
}

Attribute::Attribute() {
}

$Class* Attribute::load$($String* name, bool initialize) {
	$loadClass(Attribute, name, initialize, &_Attribute_ClassInfo_, allocate$Attribute);
	return class$;
}

$Class* Attribute::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com