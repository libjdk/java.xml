#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathVisitable = ::com::sun::org::apache::xpath::internal::XPathVisitable;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $WrongNumberArgsException = ::com::sun::org::apache::xpath::internal::functions::WrongNumberArgsException;
using $XPATHMessages = ::com::sun::org::apache::xpath::internal::res::XPATHMessages;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FunctionOneArg_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FunctionOneArg, serialVersionUID)},
	{"m_arg0", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $field(FunctionOneArg, m_arg0)},
	{}
};

$MethodInfo _FunctionOneArg_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FunctionOneArg::*)()>(&FunctionOneArg::init$))},
	{"callArgVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC},
	{"checkNumberArgs", "(I)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC},
	{"getArg0", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC},
	{"reportWrongNumberArgs", "()V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"setArg", "(Lcom/sun/org/apache/xpath/internal/Expression;I)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FunctionOneArg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	"com.sun.org.apache.xpath.internal.functions.Function",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_FunctionOneArg_FieldInfo_,
	_FunctionOneArg_MethodInfo_
};

$Object* allocate$FunctionOneArg($Class* clazz) {
	return $of($alloc(FunctionOneArg));
}

int32_t FunctionOneArg::hashCode() {
	 return this->$Function::hashCode();
}

bool FunctionOneArg::equals(Object$* arg0) {
	 return this->$Function::equals(arg0);
}

$Object* FunctionOneArg::clone() {
	 return this->$Function::clone();
}

$String* FunctionOneArg::toString() {
	 return this->$Function::toString();
}

void FunctionOneArg::finalize() {
	this->$Function::finalize();
}

void FunctionOneArg::init$() {
	$Function::init$();
}

$Expression* FunctionOneArg::getArg0() {
	return this->m_arg0;
}

void FunctionOneArg::setArg($Expression* arg, int32_t argNum) {
	if (0 == argNum) {
		$set(this, m_arg0, arg);
		$nc(arg)->exprSetParent(this);
	} else {
		reportWrongNumberArgs();
	}
}

void FunctionOneArg::checkNumberArgs(int32_t argNum) {
	if (argNum != 1) {
		reportWrongNumberArgs();
	}
}

void FunctionOneArg::reportWrongNumberArgs() {
	$throwNew($WrongNumberArgsException, $($XSLMessages::createXPATHMessage("one"_s, nullptr)));
}

bool FunctionOneArg::canTraverseOutsideSubtree() {
	return $nc(this->m_arg0)->canTraverseOutsideSubtree();
}

void FunctionOneArg::fixupVariables($List* vars, int32_t globalsSize) {
	if (nullptr != this->m_arg0) {
		$nc(this->m_arg0)->fixupVariables(vars, globalsSize);
	}
}

void FunctionOneArg::callArgVisitors($XPathVisitor* visitor) {
	if (nullptr != this->m_arg0) {
		$nc(this->m_arg0)->callVisitors(this, visitor);
	}
}

$Expression* FunctionOneArg::getExpression() {
	return this->m_arg0;
}

void FunctionOneArg::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this);
	$set(this, m_arg0, exp);
}

bool FunctionOneArg::deepEquals($Expression* expr) {
	if (!$Function::deepEquals(expr)) {
		return false;
	}
	if (nullptr != this->m_arg0) {
		if (nullptr == $nc(($cast(FunctionOneArg, expr)))->m_arg0) {
			return false;
		}
		if (!$nc(this->m_arg0)->deepEquals($nc(($cast(FunctionOneArg, expr)))->m_arg0)) {
			return false;
		}
	} else if (nullptr != ($cast(FunctionOneArg, expr))->m_arg0) {
		return false;
	}
	return true;
}

FunctionOneArg::FunctionOneArg() {
}

$Class* FunctionOneArg::load$($String* name, bool initialize) {
	$loadClass(FunctionOneArg, name, initialize, &_FunctionOneArg_ClassInfo_, allocate$FunctionOneArg);
	return class$;
}

$Class* FunctionOneArg::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com