#include <com/sun/org/apache/xpath/internal/operations/Variable.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/QName.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef BIT_FILTER
#undef ER_COULD_NOT_FIND_VAR
#undef PSUEDOVARNAMESPACE
#undef WG_ILLEGAL_VARIABLE_REFERENCE

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $QName = ::com::sun::org::apache::xml::internal::utils::QName;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $PathComponent = ::com::sun::org::apache::xpath::internal::axes::PathComponent;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $XPATHMessages = ::com::sun::org::apache::xpath::internal::res::XPATHMessages;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace operations {

$FieldInfo _Variable_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Variable, serialVersionUID)},
	{"m_fixUpWasCalled", "Z", nullptr, $PRIVATE, $field(Variable, m_fixUpWasCalled)},
	{"m_qname", "Lcom/sun/org/apache/xml/internal/utils/QName;", nullptr, $PROTECTED, $field(Variable, m_qname)},
	{"m_index", "I", nullptr, $PROTECTED, $field(Variable, m_index)},
	{"m_isGlobal", "Z", nullptr, $PROTECTED, $field(Variable, m_isGlobal)},
	{"PSUEDOVARNAMESPACE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Variable, PSUEDOVARNAMESPACE)},
	{}
};

$MethodInfo _Variable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Variable::*)()>(&Variable::init$))},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Z)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC},
	{"getAnalysisBits", "()I", nullptr, $PUBLIC},
	{"getGlobal", "()Z", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"getQName", "()Lcom/sun/org/apache/xml/internal/utils/QName;", nullptr, $PUBLIC},
	{"isPsuedoVarRef", "()Z", nullptr, $PUBLIC},
	{"isStableNumber", "()Z", nullptr, $PUBLIC},
	{"setIndex", "(I)V", nullptr, $PUBLIC},
	{"setIsGlobal", "(Z)V", nullptr, $PUBLIC},
	{"setQName", "(Lcom/sun/org/apache/xml/internal/utils/QName;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Variable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Variable",
	"com.sun.org.apache.xpath.internal.Expression",
	"com.sun.org.apache.xpath.internal.axes.PathComponent",
	_Variable_FieldInfo_,
	_Variable_MethodInfo_
};

$Object* allocate$Variable($Class* clazz) {
	return $of($alloc(Variable));
}

int32_t Variable::hashCode() {
	 return this->$Expression::hashCode();
}

bool Variable::equals(Object$* arg0) {
	 return this->$Expression::equals(arg0);
}

$Object* Variable::clone() {
	 return this->$Expression::clone();
}

$String* Variable::toString() {
	 return this->$Expression::toString();
}

void Variable::finalize() {
	this->$Expression::finalize();
}

$String* Variable::PSUEDOVARNAMESPACE = nullptr;

void Variable::init$() {
	$Expression::init$();
	this->m_fixUpWasCalled = false;
	this->m_isGlobal = false;
}

void Variable::setIndex(int32_t index) {
	this->m_index = index;
}

int32_t Variable::getIndex() {
	return this->m_index;
}

void Variable::setIsGlobal(bool isGlobal) {
	this->m_isGlobal = isGlobal;
}

bool Variable::getGlobal() {
	return this->m_isGlobal;
}

void Variable::fixupVariables($List* vars, int32_t globalsSize) {
	this->m_fixUpWasCalled = true;
	int32_t sz = $nc(vars)->size();
	for (int32_t i = vars->size() - 1; i >= 0; --i) {
		$var($QName, qn, $cast($QName, vars->get(i)));
		if ($nc(qn)->equals(this->m_qname)) {
			if (i < globalsSize) {
				this->m_isGlobal = true;
				this->m_index = i;
			} else {
				this->m_index = i - globalsSize;
			}
			return;
		}
	}
	$init($XPATHErrorResources);
	$var($String, msg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_COULD_NOT_FIND_VAR, $$new($ObjectArray, {$($of($nc(this->m_qname)->toString()))})));
	$var($TransformerException, te, $new($TransformerException, msg, static_cast<$SourceLocator*>(this)));
	$throwNew($WrappedRuntimeException, te);
}

void Variable::setQName($QName* qname) {
	$set(this, m_qname, qname);
}

$QName* Variable::getQName() {
	return this->m_qname;
}

$XObject* Variable::execute($XPathContext* xctxt) {
	return execute(xctxt, false);
}

$XObject* Variable::execute($XPathContext* xctxt, bool destructiveOK) {
	$var($PrefixResolver, xprefixResolver, $nc(xctxt)->getNamespaceContext());
	$var($XObject, result, nullptr);
	if (this->m_fixUpWasCalled) {
		if (this->m_isGlobal) {
			$assign(result, $nc($(xctxt->getVarStack()))->getGlobalVariable(xctxt, this->m_index, destructiveOK));
		} else {
			$assign(result, $nc($(xctxt->getVarStack()))->getLocalVariable(xctxt, this->m_index, destructiveOK));
		}
	} else {
		$assign(result, $nc($(xctxt->getVarStack()))->getVariableOrParam(xctxt, this->m_qname));
	}
	if (nullptr == result) {
		$init($XPATHErrorResources);
		warn(xctxt, $XPATHErrorResources::WG_ILLEGAL_VARIABLE_REFERENCE, $$new($ObjectArray, {$($of($nc(this->m_qname)->getLocalPart()))}));
		$assign(result, $new($XNodeSet, $(xctxt->getDTMManager())));
	}
	return result;
}

bool Variable::isStableNumber() {
	return true;
}

int32_t Variable::getAnalysisBits() {
	return $WalkerFactory::BIT_FILTER;
}

void Variable::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	$nc(visitor)->visitVariableRef(owner, this);
}

bool Variable::deepEquals($Expression* expr) {
	if (!isSameClass(expr)) {
		return false;
	}
	if (!$nc(this->m_qname)->equals($nc(($cast(Variable, expr)))->m_qname)) {
		return false;
	}
	return true;
}

bool Variable::isPsuedoVarRef() {
	$var($String, ns, $nc(this->m_qname)->getNamespaceURI());
	if ((nullptr != ns) && ns->equals(Variable::PSUEDOVARNAMESPACE)) {
		if ($nc($($nc(this->m_qname)->getLocalName()))->startsWith("#"_s)) {
			return true;
		}
	}
	return false;
}

Variable::Variable() {
}

void clinit$Variable($Class* class$) {
	$assignStatic(Variable::PSUEDOVARNAMESPACE, "http://xml.apache.org/xalan/psuedovar"_s);
}

$Class* Variable::load$($String* name, bool initialize) {
	$loadClass(Variable, name, initialize, &_Variable_ClassInfo_, clinit$Variable, allocate$Variable);
	return class$;
}

$Class* Variable::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com