#include <com/sun/org/apache/xpath/internal/XPathContext$XPathExpressionContext.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeIterator.h>
#include <com/sun/org/apache/xml/internal/utils/QName.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/ErrorListener.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

using $ExpressionContext = ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMNodeIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeIterator;
using $QName = ::com::sun::org::apache::xml::internal::utils::QName;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Node = ::org::w3c::dom::Node;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _XPathContext$XPathExpressionContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $FINAL | $SYNTHETIC, $field(XPathContext$XPathExpressionContext, this$0)},
	{}
};

$MethodInfo _XPathContext$XPathExpressionContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathContext$XPathExpressionContext::*)($XPathContext*)>(&XPathContext$XPathExpressionContext::init$))},
	{"getContextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getContextNodes", "()Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC},
	{"getDTMManager", "()Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC},
	{"getVariableOrParam", "(Lcom/sun/org/apache/xml/internal/utils/QName;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.xml.transform.TransformerException"},
	{"getXPathContext", "()Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $PUBLIC},
	{"overrideDefaultParser", "()Z", nullptr, $PUBLIC},
	{"setOverrideDefaultParser", "(Z)V", nullptr, $PUBLIC},
	{"toNumber", "(Lorg/w3c/dom/Node;)D", nullptr, $PUBLIC},
	{"toString", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPathContext$XPathExpressionContext_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.XPathContext$XPathExpressionContext", "com.sun.org.apache.xpath.internal.XPathContext", "XPathExpressionContext", $PUBLIC},
	{}
};

$ClassInfo _XPathContext$XPathExpressionContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.XPathContext$XPathExpressionContext",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.extensions.ExpressionContext",
	_XPathContext$XPathExpressionContext_FieldInfo_,
	_XPathContext$XPathExpressionContext_MethodInfo_,
	nullptr,
	nullptr,
	_XPathContext$XPathExpressionContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.XPathContext"
};

$Object* allocate$XPathContext$XPathExpressionContext($Class* clazz) {
	return $of($alloc(XPathContext$XPathExpressionContext));
}

void XPathContext$XPathExpressionContext::init$($XPathContext* this$0) {
	$set(this, this$0, this$0);
}

$XPathContext* XPathContext$XPathExpressionContext::getXPathContext() {
	return this->this$0;
}

$DTMManager* XPathContext$XPathExpressionContext::getDTMManager() {
	return this->this$0->m_dtmManager;
}

$Node* XPathContext$XPathExpressionContext::getContextNode() {
	int32_t context = this->this$0->getCurrentNode();
	return $nc($(this->this$0->getDTM(context)))->getNode(context);
}

$NodeIterator* XPathContext$XPathExpressionContext::getContextNodes() {
	return $new($DTMNodeIterator, $(this->this$0->getContextNodeList()));
}

$ErrorListener* XPathContext$XPathExpressionContext::getErrorListener() {
	return this->this$0->getErrorListener();
}

bool XPathContext$XPathExpressionContext::overrideDefaultParser() {
	return this->this$0->m_overrideDefaultParser;
}

void XPathContext$XPathExpressionContext::setOverrideDefaultParser(bool flag) {
	this->this$0->m_overrideDefaultParser = flag;
}

double XPathContext$XPathExpressionContext::toNumber($Node* n) {
	$useLocalCurrentObjectStackCache();
	int32_t nodeHandle = this->this$0->getDTMHandleFromNode(n);
	$var($DTM, dtm, this->this$0->getDTM(nodeHandle));
	$var($XString, xobj, $cast($XString, $nc(dtm)->getStringValue(nodeHandle)));
	return $nc(xobj)->num();
}

$String* XPathContext$XPathExpressionContext::toString($Node* n) {
	$useLocalCurrentObjectStackCache();
	int32_t nodeHandle = this->this$0->getDTMHandleFromNode(n);
	$var($DTM, dtm, this->this$0->getDTM(nodeHandle));
	$var($XMLString, strVal, $nc(dtm)->getStringValue(nodeHandle));
	return $nc(strVal)->toString();
}

$XObject* XPathContext$XPathExpressionContext::getVariableOrParam($QName* qname) {
	return $nc(this->this$0->m_variableStacks)->getVariableOrParam(this->this$0, qname);
}

XPathContext$XPathExpressionContext::XPathContext$XPathExpressionContext() {
}

$Class* XPathContext$XPathExpressionContext::load$($String* name, bool initialize) {
	$loadClass(XPathContext$XPathExpressionContext, name, initialize, &_XPathContext$XPathExpressionContext_ClassInfo_, allocate$XPathContext$XPathExpressionContext);
	return class$;
}

$Class* XPathContext$XPathExpressionContext::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com