#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/AdaptiveResultTreeImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM$AxisIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM$NodeValueIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIterNodeList.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef CHILD
#undef IDENT_DTM_NODE_BITS
#undef INITIAL_SIZE
#undef NO_TYPE
#undef NULL

using $DOMArray = $Array<::com::sun::org::apache::xalan::internal::xsltc::DOM>;
using $DOMAdapterArray = $Array<::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter>;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
using $AdaptiveResultTreeImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::AdaptiveResultTreeImpl;
using $DOMAdapter = ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter;
using $MultiDOM$AxisIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM$AxisIterator;
using $MultiDOM$NodeValueIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM$NodeValueIterator;
using $SimpleResultTreeImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMAxisIterNodeList = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIterNodeList;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMNodeListBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $SuballocatedIntVector = ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _MultiDOM_FieldInfo_[] = {
	{"NO_TYPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MultiDOM, NO_TYPE)},
	{"INITIAL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MultiDOM, INITIAL_SIZE)},
	{"_adapters", "[Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE, $field(MultiDOM, _adapters)},
	{"_main", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter;", nullptr, $PRIVATE, $field(MultiDOM, _main)},
	{"_dtmManager", "Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PRIVATE, $field(MultiDOM, _dtmManager)},
	{"_free", "I", nullptr, $PRIVATE, $field(MultiDOM, _free)},
	{"_size", "I", nullptr, $PRIVATE, $field(MultiDOM, _size)},
	{"_documents", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(MultiDOM, _documents)},
	{}
};

$MethodInfo _MultiDOM_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiDOM::*)($DOM*)>(&MultiDOM::init$))},
	{"addDOMAdapter", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(MultiDOM::*)($DOMAdapter*)>(&MultiDOM::addDOMAdapter))},
	{"addDOMAdapter", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter;Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MultiDOM::*)($DOMAdapter*,bool)>(&MultiDOM::addDOMAdapter))},
	{"characters", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"getAttributeNode", "(II)I", nullptr, $PUBLIC},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getDOMAdapter", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $method(static_cast<$DOM*(MultiDOM::*)($String*)>(&MultiDOM::getDOMAdapter))},
	{"getDTM", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $method(static_cast<$DOM*(MultiDOM::*)(int32_t)>(&MultiDOM::getDTM))},
	{"getDTMId", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(MultiDOM::*)(int32_t)>(&MultiDOM::getDTMId))},
	{"getDTMManager", "()Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC, $method(static_cast<$DTMManager*(MultiDOM::*)()>(&MultiDOM::getDTMManager))},
	{"getDocument", "()I", nullptr, $PUBLIC},
	{"getDocumentMask", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(MultiDOM::*)($String*)>(&MultiDOM::getDocumentMask))},
	{"getDocumentURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getElementsWithIDs", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC},
	{"getIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getLanguage", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMain", "()Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $method(static_cast<$DOM*(MultiDOM::*)()>(&MultiDOM::getMain))},
	{"getNSType", "(I)I", nullptr, $PUBLIC},
	{"getNamespaceAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getNamespaceName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceType", "(I)I", nullptr, $PUBLIC},
	{"getNodeHandle", "(I)I", nullptr, $PUBLIC},
	{"getNodeIdent", "(I)I", nullptr, $PUBLIC},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeValueIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILjava/lang/String;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getNthDescendant", "(IIZ)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getOutputDomBuilder", "()Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC},
	{"getParent", "(I)I", nullptr, $PUBLIC},
	{"getResultTreeFrag", "(II)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC},
	{"getResultTreeFrag", "(IIZ)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStringValueX", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getTypedChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isAttribute", "(I)Z", nullptr, $PUBLIC},
	{"isElement", "(I)Z", nullptr, $PUBLIC},
	{"isMatchingAdapterEntry", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MultiDOM::*)($DOM*,$DOMAdapter*)>(&MultiDOM::isMatchingAdapterEntry))},
	{"lessThan", "(II)Z", nullptr, $PUBLIC},
	{"lookupNamespace", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"makeNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"makeNode", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"makeNodeList", "(I)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"makeNodeList", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"nextMask", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(MultiDOM::*)()>(&MultiDOM::nextMask))},
	{"orderNodes", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"release", "()V", nullptr, $PUBLIC},
	{"removeDOMAdapter", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiDOM::*)($DOMAdapter*)>(&MultiDOM::removeDOMAdapter))},
	{"setFilter", "(Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;)V", nullptr, $PUBLIC},
	{"setupMapping", "([Ljava/lang/String;[Ljava/lang/String;[I[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"shallowCopy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{}
};

$InnerClassInfo _MultiDOM_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$NodeValueIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM", "NodeValueIterator", $PRIVATE | $FINAL},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$AxisIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM", "AxisIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _MultiDOM_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.DOM",
	_MultiDOM_FieldInfo_,
	_MultiDOM_MethodInfo_,
	nullptr,
	nullptr,
	_MultiDOM_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$NodeValueIterator,com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$AxisIterator"
};

$Object* allocate$MultiDOM($Class* clazz) {
	return $of($alloc(MultiDOM));
}

void MultiDOM::init$($DOM* main) {
	$useLocalCurrentObjectStackCache();
	$set(this, _documents, $new($HashMap));
	this->_size = MultiDOM::INITIAL_SIZE;
	this->_free = 1;
	$set(this, _adapters, $new($DOMArray, MultiDOM::INITIAL_SIZE));
	$var($DOMAdapter, adapter, $cast($DOMAdapter, main));
	$nc(this->_adapters)->set(0, adapter);
	$set(this, _main, adapter);
	$var($DOM, dom, $nc(adapter)->getDOMImpl());
	if ($instanceOf($DTMDefaultBase, dom)) {
		$set(this, _dtmManager, $nc(($cast($DTMDefaultBase, dom)))->getManager());
	}
	addDOMAdapter(adapter, false);
}

int32_t MultiDOM::nextMask() {
	return this->_free;
}

void MultiDOM::setupMapping($StringArray* names, $StringArray* uris, $ints* types, $StringArray* namespaces) {
}

int32_t MultiDOM::addDOMAdapter($DOMAdapter* adapter) {
	return addDOMAdapter(adapter, true);
}

int32_t MultiDOM::addDOMAdapter($DOMAdapter* adapter, bool indexByURI) {
	$useLocalCurrentObjectStackCache();
	$var($DOM, dom, $nc(adapter)->getDOMImpl());
	int32_t domNo = 1;
	int32_t dtmSize = 1;
	$var($SuballocatedIntVector, dtmIds, nullptr);
	if ($instanceOf($DTMDefaultBase, dom)) {
		$var($DTMDefaultBase, dtmdb, $cast($DTMDefaultBase, dom));
		$assign(dtmIds, $nc(dtmdb)->getDTMIDs());
		dtmSize = $nc(dtmIds)->size();
		domNo = $usr(dtmIds->elementAt(dtmSize - 1), $DTMManager::IDENT_DTM_NODE_BITS);
	} else if ($instanceOf($SimpleResultTreeImpl, dom)) {
		$var($SimpleResultTreeImpl, simpleRTF, $cast($SimpleResultTreeImpl, dom));
		domNo = $usr($nc(simpleRTF)->getDocument(), $DTMManager::IDENT_DTM_NODE_BITS);
	}
	if (domNo >= this->_size) {
		int32_t oldSize = this->_size;
		do {
			this->_size *= 2;
		} while (this->_size <= domNo);
		$var($DOMAdapterArray, newArray, $new($DOMAdapterArray, this->_size));
		$System::arraycopy(this->_adapters, 0, newArray, 0, oldSize);
		$set(this, _adapters, $fcast($DOMArray, newArray));
	}
	this->_free = domNo + 1;
	if (dtmSize == 1) {
		$nc(this->_adapters)->set(domNo, adapter);
	} else if (dtmIds != nullptr) {
		int32_t domPos = 0;
		for (int32_t i = dtmSize - 1; i >= 0; --i) {
			domPos = $usr(dtmIds->elementAt(i), $DTMManager::IDENT_DTM_NODE_BITS);
			$nc(this->_adapters)->set(domPos, adapter);
		}
		domNo = domPos;
	}
	if (indexByURI) {
		$var($String, uri, adapter->getDocumentURI(0));
		$nc(this->_documents)->put(uri, $($Integer::valueOf(domNo)));
	}
	if ($instanceOf($AdaptiveResultTreeImpl, dom)) {
		$var($AdaptiveResultTreeImpl, adaptiveRTF, $cast($AdaptiveResultTreeImpl, dom));
		$var($DOM, nestedDom, $nc(adaptiveRTF)->getNestedDOM());
		if (nestedDom != nullptr) {
			$var($DOM, var$0, nestedDom);
			$var($StringArray, var$1, adapter->getNamesArray());
			$var($StringArray, var$2, adapter->getUrisArray());
			$var($ints, var$3, adapter->getTypesArray());
			$var($DOMAdapter, newAdapter, $new($DOMAdapter, var$0, var$1, var$2, var$3, $(adapter->getNamespaceArray())));
			addDOMAdapter(newAdapter);
		}
	}
	return domNo;
}

int32_t MultiDOM::getDocumentMask($String* uri) {
	$var($Integer, domIdx, $cast($Integer, $nc(this->_documents)->get(uri)));
	if (domIdx == nullptr) {
		return (-1);
	} else {
		return $nc(domIdx)->intValue();
	}
}

$DOM* MultiDOM::getDOMAdapter($String* uri) {
	$var($Integer, domIdx, $cast($Integer, $nc(this->_documents)->get(uri)));
	if (domIdx == nullptr) {
		return (nullptr);
	} else {
		return ($nc(this->_adapters)->get($nc(domIdx)->intValue()));
	}
}

int32_t MultiDOM::getDocument() {
	return $nc(this->_main)->getDocument();
}

$DTMManager* MultiDOM::getDTMManager() {
	return this->_dtmManager;
}

$DTMAxisIterator* MultiDOM::getIterator() {
	return $nc(this->_main)->getIterator();
}

$String* MultiDOM::getStringValue() {
	return $nc(this->_main)->getStringValue();
}

$DTMAxisIterator* MultiDOM::getChildren(int32_t node) {
	return $nc($nc(this->_adapters)->get(getDTMId(node)))->getChildren(node);
}

$DTMAxisIterator* MultiDOM::getTypedChildren(int32_t type) {
	return $new($MultiDOM$AxisIterator, this, $Axis::CHILD, type);
}

$DTMAxisIterator* MultiDOM::getAxisIterator(int32_t axis) {
	return $new($MultiDOM$AxisIterator, this, axis, MultiDOM::NO_TYPE);
}

$DTMAxisIterator* MultiDOM::getTypedAxisIterator(int32_t axis, int32_t type) {
	return $new($MultiDOM$AxisIterator, this, axis, type);
}

$DTMAxisIterator* MultiDOM::getNthDescendant(int32_t node, int32_t n, bool includeself) {
	return $nc($nc(this->_adapters)->get(getDTMId(node)))->getNthDescendant(node, n, includeself);
}

$DTMAxisIterator* MultiDOM::getNodeValueIterator($DTMAxisIterator* iterator, int32_t type, $String* value, bool op) {
	return ($new($MultiDOM$NodeValueIterator, this, iterator, type, value, op));
}

$DTMAxisIterator* MultiDOM::getNamespaceAxisIterator(int32_t axis, int32_t ns) {
	$var($DTMAxisIterator, iterator, $nc(this->_main)->getNamespaceAxisIterator(axis, ns));
	return (iterator);
}

$DTMAxisIterator* MultiDOM::orderNodes($DTMAxisIterator* source, int32_t node) {
	return $nc($nc(this->_adapters)->get(getDTMId(node)))->orderNodes(source, node);
}

int32_t MultiDOM::getExpandedTypeID(int32_t node) {
	if (node != $DTM::NULL) {
		return $nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->getExpandedTypeID(node);
	} else {
		return $DTM::NULL;
	}
}

int32_t MultiDOM::getNamespaceType(int32_t node) {
	return $nc($nc(this->_adapters)->get(getDTMId(node)))->getNamespaceType(node);
}

int32_t MultiDOM::getNSType(int32_t node) {
	return $nc($nc(this->_adapters)->get(getDTMId(node)))->getNSType(node);
}

int32_t MultiDOM::getParent(int32_t node) {
	if (node == $DTM::NULL) {
		return $DTM::NULL;
	}
	return $nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->getParent(node);
}

int32_t MultiDOM::getAttributeNode(int32_t type, int32_t el) {
	if (el == $DTM::NULL) {
		return $DTM::NULL;
	}
	return $nc($nc(this->_adapters)->get($usr(el, $DTMManager::IDENT_DTM_NODE_BITS)))->getAttributeNode(type, el);
}

$String* MultiDOM::getNodeName(int32_t node) {
	if (node == $DTM::NULL) {
		return ""_s;
	}
	return $nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->getNodeName(node);
}

$String* MultiDOM::getNodeNameX(int32_t node) {
	if (node == $DTM::NULL) {
		return ""_s;
	}
	return $nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->getNodeNameX(node);
}

$String* MultiDOM::getNamespaceName(int32_t node) {
	if (node == $DTM::NULL) {
		return ""_s;
	}
	return $nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->getNamespaceName(node);
}

$String* MultiDOM::getStringValueX(int32_t node) {
	if (node == $DTM::NULL) {
		return ""_s;
	}
	return $nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->getStringValueX(node);
}

void MultiDOM::copy(int32_t node, $SerializationHandler* handler) {
	if (node != $DTM::NULL) {
		$nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->copy(node, handler);
	}
}

void MultiDOM::copy($DTMAxisIterator* nodes, $SerializationHandler* handler) {
	int32_t node = 0;
	while ((node = $nc(nodes)->next()) != $DTM::NULL) {
		$nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->copy(node, handler);
	}
}

$String* MultiDOM::shallowCopy(int32_t node, $SerializationHandler* handler) {
	if (node == $DTM::NULL) {
		return ""_s;
	}
	return $nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->shallowCopy(node, handler);
}

bool MultiDOM::lessThan(int32_t node1, int32_t node2) {
	if (node1 == $DTM::NULL) {
		return true;
	}
	if (node2 == $DTM::NULL) {
		return false;
	}
	int32_t dom1 = getDTMId(node1);
	int32_t dom2 = getDTMId(node2);
	return dom1 == dom2 ? $nc($nc(this->_adapters)->get(dom1))->lessThan(node1, node2) : dom1 < dom2;
}

void MultiDOM::characters(int32_t textNode, $SerializationHandler* handler) {
	if (textNode != $DTM::NULL) {
		$nc($nc(this->_adapters)->get($usr(textNode, $DTMManager::IDENT_DTM_NODE_BITS)))->characters(textNode, handler);
	}
}

void MultiDOM::setFilter($StripFilter* filter) {
	for (int32_t dom = 0; dom < this->_free; ++dom) {
		if ($nc(this->_adapters)->get(dom) != nullptr) {
			$nc($nc(this->_adapters)->get(dom))->setFilter(filter);
		}
	}
}

$Node* MultiDOM::makeNode(int32_t index) {
	if (index == $DTM::NULL) {
		return nullptr;
	}
	return $nc($nc(this->_adapters)->get(getDTMId(index)))->makeNode(index);
}

$Node* MultiDOM::makeNode($DTMAxisIterator* iter) {
	return $nc(this->_main)->makeNode(iter);
}

$NodeList* MultiDOM::makeNodeList(int32_t index) {
	if (index == $DTM::NULL) {
		return nullptr;
	}
	return $nc($nc(this->_adapters)->get(getDTMId(index)))->makeNodeList(index);
}

$NodeList* MultiDOM::makeNodeList($DTMAxisIterator* iter) {
	int32_t index = $nc(iter)->next();
	if (index == $DTM::NULL) {
		return $new($DTMAxisIterNodeList, nullptr, nullptr);
	}
	iter->reset();
	return $nc($nc(this->_adapters)->get(getDTMId(index)))->makeNodeList(iter);
}

$String* MultiDOM::getLanguage(int32_t node) {
	return $nc($nc(this->_adapters)->get(getDTMId(node)))->getLanguage(node);
}

int32_t MultiDOM::getSize() {
	int32_t size = 0;
	for (int32_t i = 0; i < this->_size; ++i) {
		size += $nc($nc(this->_adapters)->get(i))->getSize();
	}
	return (size);
}

$String* MultiDOM::getDocumentURI(int32_t node) {
	if (node == $DTM::NULL) {
		node = $DOM::NULL;
	}
	return $nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->getDocumentURI(0);
}

bool MultiDOM::isElement(int32_t node) {
	if (node == $DTM::NULL) {
		return false;
	}
	return ($nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->isElement(node));
}

bool MultiDOM::isAttribute(int32_t node) {
	if (node == $DTM::NULL) {
		return false;
	}
	return ($nc($nc(this->_adapters)->get($usr(node, $DTMManager::IDENT_DTM_NODE_BITS)))->isAttribute(node));
}

int32_t MultiDOM::getDTMId(int32_t nodeHandle) {
	if (nodeHandle == $DTM::NULL) {
		return 0;
	}
	int32_t id = $usr(nodeHandle, $DTMManager::IDENT_DTM_NODE_BITS);
	while (id >= 2 && $nc(this->_adapters)->get(id) == $nc(this->_adapters)->get(id - 1)) {
		--id;
	}
	return id;
}

$DOM* MultiDOM::getDTM(int32_t nodeHandle) {
	return $nc(this->_adapters)->get(getDTMId(nodeHandle));
}

int32_t MultiDOM::getNodeIdent(int32_t nodeHandle) {
	return $nc($nc(this->_adapters)->get($usr(nodeHandle, $DTMManager::IDENT_DTM_NODE_BITS)))->getNodeIdent(nodeHandle);
}

int32_t MultiDOM::getNodeHandle(int32_t nodeId) {
	return $nc(this->_main)->getNodeHandle(nodeId);
}

$DOM* MultiDOM::getResultTreeFrag(int32_t initSize, int32_t rtfType) {
	return $nc(this->_main)->getResultTreeFrag(initSize, rtfType);
}

$DOM* MultiDOM::getResultTreeFrag(int32_t initSize, int32_t rtfType, bool addToManager) {
	return $nc(this->_main)->getResultTreeFrag(initSize, rtfType, addToManager);
}

$DOM* MultiDOM::getMain() {
	return this->_main;
}

$SerializationHandler* MultiDOM::getOutputDomBuilder() {
	return $nc(this->_main)->getOutputDomBuilder();
}

$String* MultiDOM::lookupNamespace(int32_t node, $String* prefix) {
	return $nc(this->_main)->lookupNamespace(node, prefix);
}

$String* MultiDOM::getUnparsedEntityURI($String* entity) {
	return $nc(this->_main)->getUnparsedEntityURI(entity);
}

$Map* MultiDOM::getElementsWithIDs() {
	return $nc(this->_main)->getElementsWithIDs();
}

void MultiDOM::release() {
	$nc(this->_main)->release();
}

bool MultiDOM::isMatchingAdapterEntry($DOM* entry, $DOMAdapter* adapter) {
	$var($DOM, dom, $nc(adapter)->getDOMImpl());
	bool var$0 = ($equals(entry, adapter));
	if (!var$0) {
		bool var$1 = ($instanceOf($AdaptiveResultTreeImpl, dom)) && ($instanceOf($DOMAdapter, entry));
		if (var$1) {
			var$1 = ($nc(($cast($AdaptiveResultTreeImpl, dom)))->getNestedDOM() == $nc(($cast($DOMAdapter, entry)))->getDOMImpl());
		}
		var$0 = (var$1);
	}
	return var$0;
}

void MultiDOM::removeDOMAdapter($DOMAdapter* adapter) {
	$useLocalCurrentObjectStackCache();
	$nc(this->_documents)->remove($($nc(adapter)->getDocumentURI(0)));
	$var($DOM, dom, $nc(adapter)->getDOMImpl());
	if ($instanceOf($DTMDefaultBase, dom)) {
		$var($SuballocatedIntVector, ids, $nc(($cast($DTMDefaultBase, dom)))->getDTMIDs());
		int32_t idsSize = $nc(ids)->size();
		for (int32_t i = 0; i < idsSize; ++i) {
			$nc(this->_adapters)->set($usr(ids->elementAt(i), $DTMManager::IDENT_DTM_NODE_BITS), nullptr);
		}
	} else {
		int32_t id = $usr($nc(dom)->getDocument(), $DTMManager::IDENT_DTM_NODE_BITS);
		if ((id > 0) && (id < $nc(this->_adapters)->length) && isMatchingAdapterEntry($nc(this->_adapters)->get(id), adapter)) {
			$nc(this->_adapters)->set(id, nullptr);
		} else {
			bool found = false;
			for (int32_t i = 0; i < $nc(this->_adapters)->length; ++i) {
				if (isMatchingAdapterEntry($nc(this->_adapters)->get(id), adapter)) {
					$nc(this->_adapters)->set(i, nullptr);
					found = true;
					break;
				}
			}
		}
	}
}

MultiDOM::MultiDOM() {
}

$Class* MultiDOM::load$($String* name, bool initialize) {
	$loadClass(MultiDOM, name, initialize, &_MultiDOM_ClassInfo_, allocate$MultiDOM);
	return class$;
}

$Class* MultiDOM::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com