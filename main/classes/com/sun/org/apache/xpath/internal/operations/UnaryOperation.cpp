#include <com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitable.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitable = ::com::sun::org::apache::xpath::internal::XPathVisitable;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
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
						namespace operations {

$FieldInfo _UnaryOperation_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnaryOperation, serialVersionUID)},
	{"m_right", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PROTECTED, $field(UnaryOperation, m_right)},
	{}
};

$MethodInfo _UnaryOperation_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnaryOperation::*)()>(&UnaryOperation::init$))},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC},
	{"getOperand", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerException"},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC},
	{"setRight", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnaryOperation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.operations.UnaryOperation",
	"com.sun.org.apache.xpath.internal.Expression",
	"com.sun.org.apache.xpath.internal.ExpressionOwner",
	_UnaryOperation_FieldInfo_,
	_UnaryOperation_MethodInfo_
};

$Object* allocate$UnaryOperation($Class* clazz) {
	return $of($alloc(UnaryOperation));
}

int32_t UnaryOperation::hashCode() {
	 return this->$Expression::hashCode();
}

bool UnaryOperation::equals(Object$* arg0) {
	 return this->$Expression::equals(arg0);
}

$Object* UnaryOperation::clone() {
	 return this->$Expression::clone();
}

$String* UnaryOperation::toString() {
	 return this->$Expression::toString();
}

void UnaryOperation::finalize() {
	this->$Expression::finalize();
}

void UnaryOperation::init$() {
	$Expression::init$();
}

void UnaryOperation::fixupVariables($List* vars, int32_t globalsSize) {
	$nc(this->m_right)->fixupVariables(vars, globalsSize);
}

bool UnaryOperation::canTraverseOutsideSubtree() {
	if (nullptr != this->m_right && $nc(this->m_right)->canTraverseOutsideSubtree()) {
		return true;
	}
	return false;
}

void UnaryOperation::setRight($Expression* r) {
	$set(this, m_right, r);
	$nc(r)->exprSetParent(this);
}

$XObject* UnaryOperation::execute($XPathContext* xctxt) {
	return operate($($nc(this->m_right)->execute(xctxt)));
}

$Expression* UnaryOperation::getOperand() {
	return this->m_right;
}

void UnaryOperation::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	if ($nc(visitor)->visitUnaryOperation(owner, this)) {
		$nc(this->m_right)->callVisitors(this, visitor);
	}
}

$Expression* UnaryOperation::getExpression() {
	return this->m_right;
}

void UnaryOperation::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this);
	$set(this, m_right, exp);
}

bool UnaryOperation::deepEquals($Expression* expr) {
	if (!isSameClass(expr)) {
		return false;
	}
	if (!$nc(this->m_right)->deepEquals($nc(($cast(UnaryOperation, expr)))->m_right)) {
		return false;
	}
	return true;
}

UnaryOperation::UnaryOperation() {
}

$Class* UnaryOperation::load$($String* name, bool initialize) {
	$loadClass(UnaryOperation, name, initialize, &_UnaryOperation_ClassInfo_, allocate$UnaryOperation);
	return class$;
}

$Class* UnaryOperation::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com