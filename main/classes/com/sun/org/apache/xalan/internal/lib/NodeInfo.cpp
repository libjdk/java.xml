#include <com/sun/org/apache/xalan/internal/lib/NodeInfo.h>

#include <com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

using $ExpressionContext = ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMNodeProxy = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

$MethodInfo _NodeInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NodeInfo::*)()>(&NodeInfo::init$))},
	{"columnNumber", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ExpressionContext*)>(&NodeInfo::columnNumber))},
	{"columnNumber", "(Lorg/w3c/dom/NodeList;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($NodeList*)>(&NodeInfo::columnNumber))},
	{"lineNumber", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ExpressionContext*)>(&NodeInfo::lineNumber))},
	{"lineNumber", "(Lorg/w3c/dom/NodeList;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($NodeList*)>(&NodeInfo::lineNumber))},
	{"publicId", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($ExpressionContext*)>(&NodeInfo::publicId))},
	{"publicId", "(Lorg/w3c/dom/NodeList;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($NodeList*)>(&NodeInfo::publicId))},
	{"systemId", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($ExpressionContext*)>(&NodeInfo::systemId))},
	{"systemId", "(Lorg/w3c/dom/NodeList;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($NodeList*)>(&NodeInfo::systemId))},
	{}
};

$ClassInfo _NodeInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.lib.NodeInfo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NodeInfo_MethodInfo_
};

$Object* allocate$NodeInfo($Class* clazz) {
	return $of($alloc(NodeInfo));
}

void NodeInfo::init$() {
}

$String* NodeInfo::systemId($ExpressionContext* context) {
	$var($Node, contextNode, $nc(context)->getContextNode());
	int32_t nodeHandler = $nc(($cast($DTMNodeProxy, contextNode)))->getDTMNodeNumber();
	$var($SourceLocator, locator, $nc($($nc(($cast($DTMNodeProxy, contextNode)))->getDTM()))->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getSystemId();
	} else {
		return nullptr;
	}
}

$String* NodeInfo::systemId($NodeList* nodeList) {
	if (nodeList == nullptr || $nc(nodeList)->getLength() == 0) {
		return nullptr;
	}
	$var($Node, node, $nc(nodeList)->item(0));
	int32_t nodeHandler = $nc(($cast($DTMNodeProxy, node)))->getDTMNodeNumber();
	$var($SourceLocator, locator, $nc($($nc(($cast($DTMNodeProxy, node)))->getDTM()))->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getSystemId();
	} else {
		return nullptr;
	}
}

$String* NodeInfo::publicId($ExpressionContext* context) {
	$var($Node, contextNode, $nc(context)->getContextNode());
	int32_t nodeHandler = $nc(($cast($DTMNodeProxy, contextNode)))->getDTMNodeNumber();
	$var($SourceLocator, locator, $nc($($nc(($cast($DTMNodeProxy, contextNode)))->getDTM()))->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getPublicId();
	} else {
		return nullptr;
	}
}

$String* NodeInfo::publicId($NodeList* nodeList) {
	if (nodeList == nullptr || $nc(nodeList)->getLength() == 0) {
		return nullptr;
	}
	$var($Node, node, $nc(nodeList)->item(0));
	int32_t nodeHandler = $nc(($cast($DTMNodeProxy, node)))->getDTMNodeNumber();
	$var($SourceLocator, locator, $nc($($nc(($cast($DTMNodeProxy, node)))->getDTM()))->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getPublicId();
	} else {
		return nullptr;
	}
}

int32_t NodeInfo::lineNumber($ExpressionContext* context) {
	$var($Node, contextNode, $nc(context)->getContextNode());
	int32_t nodeHandler = $nc(($cast($DTMNodeProxy, contextNode)))->getDTMNodeNumber();
	$var($SourceLocator, locator, $nc($($nc(($cast($DTMNodeProxy, contextNode)))->getDTM()))->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getLineNumber();
	} else {
		return -1;
	}
}

int32_t NodeInfo::lineNumber($NodeList* nodeList) {
	if (nodeList == nullptr || $nc(nodeList)->getLength() == 0) {
		return -1;
	}
	$var($Node, node, $nc(nodeList)->item(0));
	int32_t nodeHandler = $nc(($cast($DTMNodeProxy, node)))->getDTMNodeNumber();
	$var($SourceLocator, locator, $nc($($nc(($cast($DTMNodeProxy, node)))->getDTM()))->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getLineNumber();
	} else {
		return -1;
	}
}

int32_t NodeInfo::columnNumber($ExpressionContext* context) {
	$var($Node, contextNode, $nc(context)->getContextNode());
	int32_t nodeHandler = $nc(($cast($DTMNodeProxy, contextNode)))->getDTMNodeNumber();
	$var($SourceLocator, locator, $nc($($nc(($cast($DTMNodeProxy, contextNode)))->getDTM()))->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getColumnNumber();
	} else {
		return -1;
	}
}

int32_t NodeInfo::columnNumber($NodeList* nodeList) {
	if (nodeList == nullptr || $nc(nodeList)->getLength() == 0) {
		return -1;
	}
	$var($Node, node, $nc(nodeList)->item(0));
	int32_t nodeHandler = $nc(($cast($DTMNodeProxy, node)))->getDTMNodeNumber();
	$var($SourceLocator, locator, $nc($($nc(($cast($DTMNodeProxy, node)))->getDTM()))->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getColumnNumber();
	} else {
		return -1;
	}
}

NodeInfo::NodeInfo() {
}

$Class* NodeInfo::load$($String* name, bool initialize) {
	$loadClass(NodeInfo, name, initialize, &_NodeInfo_ClassInfo_, allocate$NodeInfo);
	return class$;
}

$Class* NodeInfo::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com