#include <com/sun/org/apache/xpath/internal/Expression.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/io/Serializable.h>
#include <java/util/List.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

#undef ER_INCORRECT_PROGRAMMER_ASSERTION

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _Expression_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Expression, serialVersionUID)},
	{"m_parent", "Lcom/sun/org/apache/xpath/internal/ExpressionNode;", nullptr, $PRIVATE, $field(Expression, m_parent)},
	{}
};

$MethodInfo _Expression_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Expression::*)()>(&Expression::init$))},
	{"asIterator", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"asIteratorRaw", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"asNode", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"assertion", "(ZLjava/lang/String;)V", nullptr, $PUBLIC},
	{"bool", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Z", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"error", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILcom/sun/org/apache/xml/internal/dtm/DTM;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Z)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"executeCharsToContentHandler", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException,org.xml.sax.SAXException"},
	{"exprAddChild", "(Lcom/sun/org/apache/xpath/internal/ExpressionNode;I)V", nullptr, $PUBLIC},
	{"exprGetChild", "(I)Lcom/sun/org/apache/xpath/internal/ExpressionNode;", nullptr, $PUBLIC},
	{"exprGetNumChildren", "()I", nullptr, $PUBLIC},
	{"exprGetParent", "()Lcom/sun/org/apache/xpath/internal/ExpressionNode;", nullptr, $PUBLIC},
	{"exprSetParent", "(Lcom/sun/org/apache/xpath/internal/ExpressionNode;)V", nullptr, $PUBLIC},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC | $ABSTRACT},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getExpressionOwner", "()Lcom/sun/org/apache/xpath/internal/ExpressionNode;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isNodesetExpr", "()Z", nullptr, $PUBLIC},
	{"isSameClass", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(Expression::*)(Expression*)>(&Expression::isSameClass))},
	{"isStableNumber", "()Z", nullptr, $PUBLIC},
	{"num", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"warn", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"xstr", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Expression_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.Expression",
	"java.lang.Object",
	"java.io.Serializable,com.sun.org.apache.xpath.internal.ExpressionNode,com.sun.org.apache.xpath.internal.XPathVisitable",
	_Expression_FieldInfo_,
	_Expression_MethodInfo_
};

$Object* allocate$Expression($Class* clazz) {
	return $of($alloc(Expression));
}

int32_t Expression::hashCode() {
	 return this->$Serializable::hashCode();
}

bool Expression::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

$Object* Expression::clone() {
	 return this->$Serializable::clone();
}

$String* Expression::toString() {
	 return this->$Serializable::toString();
}

void Expression::finalize() {
	this->$Serializable::finalize();
}

void Expression::init$() {
}

bool Expression::canTraverseOutsideSubtree() {
	return false;
}

$XObject* Expression::execute($XPathContext* xctxt, int32_t currentNode) {
	return execute(xctxt);
}

$XObject* Expression::execute($XPathContext* xctxt, int32_t currentNode, $DTM* dtm, int32_t expType) {
	return execute(xctxt);
}

$XObject* Expression::execute($XPathContext* xctxt, bool destructiveOK) {
	return execute(xctxt);
}

double Expression::num($XPathContext* xctxt) {
	return $nc($(execute(xctxt)))->num();
}

bool Expression::bool$($XPathContext* xctxt) {
	return $nc($(execute(xctxt)))->bool$();
}

$XMLString* Expression::xstr($XPathContext* xctxt) {
	return $nc($(execute(xctxt)))->xstr();
}

bool Expression::isNodesetExpr() {
	return false;
}

int32_t Expression::asNode($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($DTMIterator, iter, $nc($(execute(xctxt)))->iter());
	return $nc(iter)->nextNode();
}

$DTMIterator* Expression::asIterator($XPathContext* xctxt, int32_t contextNode) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($DTMIterator, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(xctxt)->pushCurrentNodeAndExpression(contextNode, contextNode);
			$assign(var$2, $nc($(execute(xctxt)))->iter());
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(xctxt)->popCurrentNodeAndExpression();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$DTMIterator* Expression::asIteratorRaw($XPathContext* xctxt, int32_t contextNode) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($DTMIterator, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(xctxt)->pushCurrentNodeAndExpression(contextNode, contextNode);
			$var($XNodeSet, nodeset, $cast($XNodeSet, execute(xctxt)));
			$assign(var$2, $nc(nodeset)->iterRaw());
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(xctxt)->popCurrentNodeAndExpression();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void Expression::executeCharsToContentHandler($XPathContext* xctxt, $ContentHandler* handler) {
	$var($XObject, obj, execute(xctxt));
	$nc(obj)->dispatchCharactersEvents(handler);
	obj->detach();
}

bool Expression::isStableNumber() {
	return false;
}

bool Expression::isSameClass(Expression* expr) {
	if (nullptr == expr) {
		return false;
	}
	return ($of(this)->getClass() == $nc($of(expr))->getClass());
}

void Expression::warn($XPathContext* xctxt, $String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, $XSLMessages::createXPATHWarning(msg, args));
	if (nullptr != xctxt) {
		$var($ErrorListener, eh, xctxt->getErrorListener());
		$nc(eh)->warning($$new($TransformerException, fmsg, $(xctxt->getSAXLocator())));
	}
}

void Expression::assertion(bool b, $String* msg) {
	$useLocalCurrentObjectStackCache();
	if (!b) {
		$init($XPATHErrorResources);
		$var($String, fMsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_INCORRECT_PROGRAMMER_ASSERTION, $$new($ObjectArray, {$of(msg)})));
		$throwNew($RuntimeException, fMsg);
	}
}

void Expression::error($XPathContext* xctxt, $String* msg, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, $XSLMessages::createXPATHMessage(msg, args));
	if (nullptr != xctxt) {
		$var($ErrorListener, eh, xctxt->getErrorListener());
		$var($TransformerException, te, $new($TransformerException, fmsg, static_cast<$SourceLocator*>(this)));
		$nc(eh)->fatalError(te);
	}
}

$ExpressionNode* Expression::getExpressionOwner() {
	$var($ExpressionNode, parent, exprGetParent());
	while ((nullptr != parent) && ($instanceOf(Expression, parent))) {
		$assign(parent, parent->exprGetParent());
	}
	return parent;
}

void Expression::exprSetParent($ExpressionNode* n) {
	assertion(!$equals(n, this), "Can not parent an expression to itself!"_s);
	$set(this, m_parent, n);
}

$ExpressionNode* Expression::exprGetParent() {
	return this->m_parent;
}

void Expression::exprAddChild($ExpressionNode* n, int32_t i) {
	assertion(false, "exprAddChild method not implemented!"_s);
}

$ExpressionNode* Expression::exprGetChild(int32_t i) {
	return nullptr;
}

int32_t Expression::exprGetNumChildren() {
	return 0;
}

$String* Expression::getPublicId() {
	if (nullptr == this->m_parent) {
		return nullptr;
	}
	return $nc(this->m_parent)->getPublicId();
}

$String* Expression::getSystemId() {
	if (nullptr == this->m_parent) {
		return nullptr;
	}
	return $nc(this->m_parent)->getSystemId();
}

int32_t Expression::getLineNumber() {
	if (nullptr == this->m_parent) {
		return 0;
	}
	return $nc(this->m_parent)->getLineNumber();
}

int32_t Expression::getColumnNumber() {
	if (nullptr == this->m_parent) {
		return 0;
	}
	return $nc(this->m_parent)->getColumnNumber();
}

Expression::Expression() {
}

$Class* Expression::load$($String* name, bool initialize) {
	$loadClass(Expression, name, initialize, &_Expression_ClassInfo_, allocate$Expression);
	return class$;
}

$Class* Expression::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com