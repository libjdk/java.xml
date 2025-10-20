#include <com/sun/org/apache/xalan/internal/xsltc/dom/AdaptiveResultTreeImpl.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/serializer/EmptySerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef EMPTY_STRING
#undef STRAY_ATTRIBUTE_ERR

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $SimpleResultTreeImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $EmptySerializer = ::com::sun::org::apache::xml::internal::serializer::EmptySerializer;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Source = ::javax::xml::transform::Source;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $DeclHandler = ::org::xml::sax::ext::DeclHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _AdaptiveResultTreeImpl_FieldInfo_[] = {
	{"_documentURIIndex", "I", nullptr, $PRIVATE | $STATIC, $staticField(AdaptiveResultTreeImpl, _documentURIIndex)},
	{"EMPTY_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AdaptiveResultTreeImpl, EMPTY_STRING)},
	{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $PRIVATE, $field(AdaptiveResultTreeImpl, _dom)},
	{"_wsfilter", "Lcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;", nullptr, $PRIVATE, $field(AdaptiveResultTreeImpl, _wsfilter)},
	{"_initSize", "I", nullptr, $PRIVATE, $field(AdaptiveResultTreeImpl, _initSize)},
	{"_buildIdIndex", "Z", nullptr, $PRIVATE, $field(AdaptiveResultTreeImpl, _buildIdIndex)},
	{"_attributes", "Lorg/xml/sax/helpers/AttributesImpl;", nullptr, $PRIVATE | $FINAL, $field(AdaptiveResultTreeImpl, _attributes)},
	{"_openElementName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AdaptiveResultTreeImpl, _openElementName)},
	{}
};

$MethodInfo _AdaptiveResultTreeImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(AdaptiveResultTreeImpl::*)($XSLTCDTMManager*,int32_t,$DTMWSFilter*,int32_t,bool)>(&AdaptiveResultTreeImpl::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addUniqueAttribute", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"appendChild", "(IZZ)V", nullptr, $PUBLIC},
	{"appendTextChild", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"characters", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"copy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"dispatchCharactersEvents", "(ILorg/xml/sax/ContentHandler;Z)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"dispatchToEvents", "(ILorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"documentRegistration", "()V", nullptr, $PUBLIC},
	{"documentRelease", "()V", nullptr, $PUBLIC},
	{"endDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"getAttributeNode", "(II)I", nullptr, $PUBLIC},
	{"getAttributeNode", "(ILjava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getAxisTraverser", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PUBLIC},
	{"getChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC},
	{"getDeclHandler", "()Lorg/xml/sax/ext/DeclHandler;", nullptr, $PUBLIC},
	{"getDocument", "()I", nullptr, $PUBLIC},
	{"getDocumentAllDeclarationsProcessed", "()Z", nullptr, $PUBLIC},
	{"getDocumentBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocumentEncoding", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocumentRoot", "(I)I", nullptr, $PUBLIC},
	{"getDocumentStandalone", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocumentSystemIdentifier", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocumentTypeDeclarationPublicIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocumentTypeDeclarationSystemIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocumentURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDocumentVersion", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getElementsWithIDs", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC},
	{"getExpandedTypeID", "(Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"getFirstAttribute", "(I)I", nullptr, $PUBLIC},
	{"getFirstChild", "(I)I", nullptr, $PUBLIC},
	{"getFirstNamespaceNode", "(IZ)I", nullptr, $PUBLIC},
	{"getIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getLanguage", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLastChild", "(I)I", nullptr, $PUBLIC},
	{"getLevel", "(I)S", nullptr, $PUBLIC},
	{"getLexicalHandler", "()Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PUBLIC},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocalNameFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNSType", "(I)I", nullptr, $PUBLIC},
	{"getNamespaceAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getNamespaceFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceType", "(I)I", nullptr, $PUBLIC},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNestedDOM", "()Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC},
	{"getNextAttribute", "(I)I", nullptr, $PUBLIC},
	{"getNextNamespaceNode", "(IIZ)I", nullptr, $PUBLIC},
	{"getNextSibling", "(I)I", nullptr, $PUBLIC},
	{"getNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNodeHandle", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getNodeIdent", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeType", "(I)S", nullptr, $PUBLIC},
	{"getNodeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeValueIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILjava/lang/String;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getNthDescendant", "(IIZ)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getOutputDomBuilder", "()Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC},
	{"getOwnerDocument", "(I)I", nullptr, $PUBLIC},
	{"getParent", "(I)I", nullptr, $PUBLIC},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPreviousSibling", "(I)I", nullptr, $PUBLIC},
	{"getResultTreeFrag", "(II)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"getSourceLocatorFor", "(I)Ljavax/xml/transform/SourceLocator;", nullptr, $PUBLIC},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStringValue", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"getStringValueChunk", "(II[I)[C", nullptr, $PUBLIC},
	{"getStringValueChunkCount", "(I)I", nullptr, $PUBLIC},
	{"getStringValueX", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getTypedChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasChildNodes", "(I)Z", nullptr, $PUBLIC},
	{"isAttribute", "(I)Z", nullptr, $PUBLIC},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC},
	{"isCharacterElementContentWhitespace", "(I)Z", nullptr, $PUBLIC},
	{"isDocumentAllDeclarationsProcessed", "(I)Z", nullptr, $PUBLIC},
	{"isElement", "(I)Z", nullptr, $PUBLIC},
	{"isNodeAfter", "(II)Z", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"lessThan", "(II)Z", nullptr, $PUBLIC},
	{"lookupNamespace", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"makeNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"makeNode", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"makeNodeList", "(I)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"makeNodeList", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"maybeEmitStartElement", "()V", nullptr, $PRIVATE, $method(static_cast<void(AdaptiveResultTreeImpl::*)()>(&AdaptiveResultTreeImpl::maybeEmitStartElement)), "org.xml.sax.SAXException"},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"needsTwoThreads", "()Z", nullptr, $PUBLIC},
	{"orderNodes", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"prepareNewDOM", "()V", nullptr, $PRIVATE, $method(static_cast<void(AdaptiveResultTreeImpl::*)()>(&AdaptiveResultTreeImpl::prepareNewDOM)), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"release", "()V", nullptr, $PUBLIC},
	{"setDocumentBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"setFilter", "(Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;)V", nullptr, $PUBLIC},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setupMapping", "([Ljava/lang/String;[Ljava/lang/String;[I[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"shallowCopy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"startDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"supportsPreStripping", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AdaptiveResultTreeImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.AdaptiveResultTreeImpl",
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl",
	nullptr,
	_AdaptiveResultTreeImpl_FieldInfo_,
	_AdaptiveResultTreeImpl_MethodInfo_
};

$Object* allocate$AdaptiveResultTreeImpl($Class* clazz) {
	return $of($alloc(AdaptiveResultTreeImpl));
}

int32_t AdaptiveResultTreeImpl::_documentURIIndex = 0;
$String* AdaptiveResultTreeImpl::EMPTY_STRING = nullptr;

void AdaptiveResultTreeImpl::init$($XSLTCDTMManager* dtmManager, int32_t documentID, $DTMWSFilter* wsfilter, int32_t initSize, bool buildIdIndex) {
	$SimpleResultTreeImpl::init$(dtmManager, documentID);
	$set(this, _attributes, $new($AttributesImpl));
	$set(this, _wsfilter, wsfilter);
	this->_initSize = initSize;
	this->_buildIdIndex = buildIdIndex;
}

$DOM* AdaptiveResultTreeImpl::getNestedDOM() {
	return this->_dom;
}

int32_t AdaptiveResultTreeImpl::getDocument() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocument();
	} else {
		return $SimpleResultTreeImpl::getDocument();
	}
}

$String* AdaptiveResultTreeImpl::getStringValue() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getStringValue();
	} else {
		return $SimpleResultTreeImpl::getStringValue();
	}
}

$DTMAxisIterator* AdaptiveResultTreeImpl::getIterator() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getIterator();
	} else {
		return $SimpleResultTreeImpl::getIterator();
	}
}

$DTMAxisIterator* AdaptiveResultTreeImpl::getChildren(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getChildren(node);
	} else {
		return $SimpleResultTreeImpl::getChildren(node);
	}
}

$DTMAxisIterator* AdaptiveResultTreeImpl::getTypedChildren(int32_t type) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getTypedChildren(type);
	} else {
		return $SimpleResultTreeImpl::getTypedChildren(type);
	}
}

$DTMAxisIterator* AdaptiveResultTreeImpl::getAxisIterator(int32_t axis) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getAxisIterator(axis);
	} else {
		return $SimpleResultTreeImpl::getAxisIterator(axis);
	}
}

$DTMAxisIterator* AdaptiveResultTreeImpl::getTypedAxisIterator(int32_t axis, int32_t type) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getTypedAxisIterator(axis, type);
	} else {
		return $SimpleResultTreeImpl::getTypedAxisIterator(axis, type);
	}
}

$DTMAxisIterator* AdaptiveResultTreeImpl::getNthDescendant(int32_t node, int32_t n, bool includeself) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNthDescendant(node, n, includeself);
	} else {
		return $SimpleResultTreeImpl::getNthDescendant(node, n, includeself);
	}
}

$DTMAxisIterator* AdaptiveResultTreeImpl::getNamespaceAxisIterator(int32_t axis, int32_t ns) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNamespaceAxisIterator(axis, ns);
	} else {
		return $SimpleResultTreeImpl::getNamespaceAxisIterator(axis, ns);
	}
}

$DTMAxisIterator* AdaptiveResultTreeImpl::getNodeValueIterator($DTMAxisIterator* iter, int32_t returnType, $String* value, bool op) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNodeValueIterator(iter, returnType, value, op);
	} else {
		return $SimpleResultTreeImpl::getNodeValueIterator(iter, returnType, value, op);
	}
}

$DTMAxisIterator* AdaptiveResultTreeImpl::orderNodes($DTMAxisIterator* source, int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->orderNodes(source, node);
	} else {
		return $SimpleResultTreeImpl::orderNodes(source, node);
	}
}

$String* AdaptiveResultTreeImpl::getNodeName(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNodeName(node);
	} else {
		return $SimpleResultTreeImpl::getNodeName(node);
	}
}

$String* AdaptiveResultTreeImpl::getNodeNameX(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNodeNameX(node);
	} else {
		return $SimpleResultTreeImpl::getNodeNameX(node);
	}
}

$String* AdaptiveResultTreeImpl::getNamespaceName(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNamespaceName(node);
	} else {
		return $SimpleResultTreeImpl::getNamespaceName(node);
	}
}

int32_t AdaptiveResultTreeImpl::getExpandedTypeID(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getExpandedTypeID(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getExpandedTypeID(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getNamespaceType(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNamespaceType(node);
	} else {
		return $SimpleResultTreeImpl::getNamespaceType(node);
	}
}

int32_t AdaptiveResultTreeImpl::getParent(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getParent(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getParent(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getAttributeNode(int32_t gType, int32_t element) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getAttributeNode(gType, element);
	} else {
		return $SimpleResultTreeImpl::getAttributeNode(gType, element);
	}
}

$String* AdaptiveResultTreeImpl::getStringValueX(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getStringValueX(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getStringValueX(nodeHandle);
	}
}

void AdaptiveResultTreeImpl::copy(int32_t node, $SerializationHandler* handler) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->copy(node, handler);
	} else {
		$SimpleResultTreeImpl::copy(node, handler);
	}
}

void AdaptiveResultTreeImpl::copy($DTMAxisIterator* nodes, $SerializationHandler* handler) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->copy(nodes, handler);
	} else {
		$SimpleResultTreeImpl::copy(nodes, handler);
	}
}

$String* AdaptiveResultTreeImpl::shallowCopy(int32_t node, $SerializationHandler* handler) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->shallowCopy(node, handler);
	} else {
		return $SimpleResultTreeImpl::shallowCopy(node, handler);
	}
}

bool AdaptiveResultTreeImpl::lessThan(int32_t node1, int32_t node2) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->lessThan(node1, node2);
	} else {
		return $SimpleResultTreeImpl::lessThan(node1, node2);
	}
}

void AdaptiveResultTreeImpl::characters(int32_t node, $SerializationHandler* handler) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->characters(node, handler);
	} else {
		$SimpleResultTreeImpl::characters(node, handler);
	}
}

$Node* AdaptiveResultTreeImpl::makeNode(int32_t index) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->makeNode(index);
	} else {
		return $SimpleResultTreeImpl::makeNode(index);
	}
}

$Node* AdaptiveResultTreeImpl::makeNode($DTMAxisIterator* iter) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->makeNode(iter);
	} else {
		return $SimpleResultTreeImpl::makeNode(iter);
	}
}

$NodeList* AdaptiveResultTreeImpl::makeNodeList(int32_t index) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->makeNodeList(index);
	} else {
		return $SimpleResultTreeImpl::makeNodeList(index);
	}
}

$NodeList* AdaptiveResultTreeImpl::makeNodeList($DTMAxisIterator* iter) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->makeNodeList(iter);
	} else {
		return $SimpleResultTreeImpl::makeNodeList(iter);
	}
}

$String* AdaptiveResultTreeImpl::getLanguage(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getLanguage(node);
	} else {
		return $SimpleResultTreeImpl::getLanguage(node);
	}
}

int32_t AdaptiveResultTreeImpl::getSize() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getSize();
	} else {
		return $SimpleResultTreeImpl::getSize();
	}
}

$String* AdaptiveResultTreeImpl::getDocumentURI(int32_t node) {
	$useLocalCurrentObjectStackCache();
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentURI(node);
	} else {
		$var($String, var$0, "adaptive_rtf"_s);
		return $concat(var$0, $$str(AdaptiveResultTreeImpl::_documentURIIndex++));
	}
}

void AdaptiveResultTreeImpl::setFilter($StripFilter* filter) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->setFilter(filter);
	} else {
		$SimpleResultTreeImpl::setFilter(filter);
	}
}

void AdaptiveResultTreeImpl::setupMapping($StringArray* names, $StringArray* uris, $ints* types, $StringArray* namespaces) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->setupMapping(names, uris, types, namespaces);
	} else {
		$SimpleResultTreeImpl::setupMapping(names, uris, types, namespaces);
	}
}

bool AdaptiveResultTreeImpl::isElement(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->isElement(node);
	} else {
		return $SimpleResultTreeImpl::isElement(node);
	}
}

bool AdaptiveResultTreeImpl::isAttribute(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->isAttribute(node);
	} else {
		return $SimpleResultTreeImpl::isAttribute(node);
	}
}

$String* AdaptiveResultTreeImpl::lookupNamespace(int32_t node, $String* prefix) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->lookupNamespace(node, prefix);
	} else {
		return $SimpleResultTreeImpl::lookupNamespace(node, prefix);
	}
}

int32_t AdaptiveResultTreeImpl::getNodeIdent(int32_t nodehandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNodeIdent(nodehandle);
	} else {
		return $SimpleResultTreeImpl::getNodeIdent(nodehandle);
	}
}

int32_t AdaptiveResultTreeImpl::getNodeHandle(int32_t nodeId) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNodeHandle(nodeId);
	} else {
		return $SimpleResultTreeImpl::getNodeHandle(nodeId);
	}
}

$DOM* AdaptiveResultTreeImpl::getResultTreeFrag(int32_t initialSize, int32_t rtfType) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getResultTreeFrag(initialSize, rtfType);
	} else {
		return $SimpleResultTreeImpl::getResultTreeFrag(initialSize, rtfType);
	}
}

$SerializationHandler* AdaptiveResultTreeImpl::getOutputDomBuilder() {
	return this;
}

int32_t AdaptiveResultTreeImpl::getNSType(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNSType(node);
	} else {
		return $SimpleResultTreeImpl::getNSType(node);
	}
}

$String* AdaptiveResultTreeImpl::getUnparsedEntityURI($String* name) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getUnparsedEntityURI(name);
	} else {
		return $SimpleResultTreeImpl::getUnparsedEntityURI(name);
	}
}

$Map* AdaptiveResultTreeImpl::getElementsWithIDs() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getElementsWithIDs();
	} else {
		return $SimpleResultTreeImpl::getElementsWithIDs();
	}
}

void AdaptiveResultTreeImpl::maybeEmitStartElement() {
	$useLocalCurrentObjectStackCache();
	if (this->_openElementName != nullptr) {
		int32_t index = 0;
		if ((index = $nc(this->_openElementName)->indexOf((int32_t)u':')) < 0) {
			$nc(this->_dom)->startElement(nullptr, this->_openElementName, this->_openElementName, this->_attributes);
		} else {
			$var($String, uri, $nc(this->_dom)->getNamespaceURI($($nc(this->_openElementName)->substring(0, index))));
			$nc(this->_dom)->startElement(uri, $($nc(this->_openElementName)->substring(index + 1)), this->_openElementName, this->_attributes);
		}
		$set(this, _openElementName, nullptr);
	}
}

void AdaptiveResultTreeImpl::prepareNewDOM() {
	$useLocalCurrentObjectStackCache();
	$set(this, _dom, $cast($SAXImpl, $nc(this->_dtmManager)->getDTM(nullptr, true, this->_wsfilter, true, false, false, this->_initSize, this->_buildIdIndex)));
	$nc(this->_dom)->startDocument();
	for (int32_t i = 0; i < this->_size; ++i) {
		$var($String, str, $nc(this->_textArray)->get(i));
		$var($chars, var$0, $nc(str)->toCharArray());
		$nc(this->_dom)->characters(var$0, 0, str->length());
	}
	this->_size = 0;
}

void AdaptiveResultTreeImpl::startDocument() {
}

void AdaptiveResultTreeImpl::endDocument() {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->endDocument();
	} else {
		$SimpleResultTreeImpl::endDocument();
	}
}

void AdaptiveResultTreeImpl::characters($String* str) {
	if (this->_dom != nullptr) {
		$var($chars, var$0, $nc(str)->toCharArray());
		characters(var$0, 0, str->length());
	} else {
		$SimpleResultTreeImpl::characters(str);
	}
}

void AdaptiveResultTreeImpl::characters($chars* ch, int32_t offset, int32_t length) {
	if (this->_dom != nullptr) {
		maybeEmitStartElement();
		$nc(this->_dom)->characters(ch, offset, length);
	} else {
		$SimpleResultTreeImpl::characters(ch, offset, length);
	}
}

bool AdaptiveResultTreeImpl::setEscaping(bool escape) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->setEscaping(escape);
	} else {
		return $SimpleResultTreeImpl::setEscaping(escape);
	}
}

void AdaptiveResultTreeImpl::startElement($String* elementName) {
	if (this->_dom == nullptr) {
		prepareNewDOM();
	}
	maybeEmitStartElement();
	$set(this, _openElementName, elementName);
	$nc(this->_attributes)->clear();
}

void AdaptiveResultTreeImpl::startElement($String* uri, $String* localName, $String* qName) {
	startElement(qName);
}

void AdaptiveResultTreeImpl::startElement($String* uri, $String* localName, $String* qName, $Attributes* attributes) {
	startElement(qName);
}

void AdaptiveResultTreeImpl::endElement($String* elementName) {
	maybeEmitStartElement();
	$nc(this->_dom)->endElement(nullptr, nullptr, elementName);
}

void AdaptiveResultTreeImpl::endElement($String* uri, $String* localName, $String* qName) {
	endElement(qName);
}

void AdaptiveResultTreeImpl::addAttribute($String* qName, $String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t colonpos = $nc(qName)->indexOf((int32_t)u':');
	$var($String, uri, AdaptiveResultTreeImpl::EMPTY_STRING);
	$var($String, localName, qName);
	if (colonpos > 0) {
		$var($String, prefix, qName->substring(0, colonpos));
		$assign(localName, qName->substring(colonpos + 1));
		$assign(uri, $nc(this->_dom)->getNamespaceURI(prefix));
	}
	addAttribute(uri, localName, qName, "CDATA"_s, value);
}

void AdaptiveResultTreeImpl::addUniqueAttribute($String* qName, $String* value, int32_t flags) {
	addAttribute(qName, value);
}

void AdaptiveResultTreeImpl::addAttribute($String* uri, $String* localName, $String* qname, $String* type, $String* value) {
	if (this->_openElementName != nullptr) {
		$nc(this->_attributes)->addAttribute(uri, localName, qname, type, value);
	} else {
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::STRAY_ATTRIBUTE_ERR, $of(qname));
	}
}

void AdaptiveResultTreeImpl::namespaceAfterStartElement($String* prefix, $String* uri) {
	if (this->_dom == nullptr) {
		prepareNewDOM();
	}
	$nc(this->_dom)->startPrefixMapping(prefix, uri);
}

void AdaptiveResultTreeImpl::comment($String* comment) {
	if (this->_dom == nullptr) {
		prepareNewDOM();
	}
	maybeEmitStartElement();
	$var($chars, chars, $nc(comment)->toCharArray());
	$nc(this->_dom)->comment(chars, 0, chars->length);
}

void AdaptiveResultTreeImpl::comment($chars* chars, int32_t offset, int32_t length) {
	if (this->_dom == nullptr) {
		prepareNewDOM();
	}
	maybeEmitStartElement();
	$nc(this->_dom)->comment(chars, offset, length);
}

void AdaptiveResultTreeImpl::processingInstruction($String* target, $String* data) {
	if (this->_dom == nullptr) {
		prepareNewDOM();
	}
	maybeEmitStartElement();
	$nc(this->_dom)->processingInstruction(target, data);
}

void AdaptiveResultTreeImpl::setFeature($String* featureId, bool state) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->setFeature(featureId, state);
	}
}

void AdaptiveResultTreeImpl::setProperty($String* property, Object$* value) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->setProperty(property, value);
	}
}

$DTMAxisTraverser* AdaptiveResultTreeImpl::getAxisTraverser(int32_t axis) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getAxisTraverser(axis);
	} else {
		return $SimpleResultTreeImpl::getAxisTraverser(axis);
	}
}

bool AdaptiveResultTreeImpl::hasChildNodes(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->hasChildNodes(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::hasChildNodes(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getFirstChild(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getFirstChild(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getFirstChild(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getLastChild(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getLastChild(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getLastChild(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getAttributeNode(int32_t elementHandle, $String* namespaceURI, $String* name) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getAttributeNode(elementHandle, namespaceURI, name);
	} else {
		return $SimpleResultTreeImpl::getAttributeNode(elementHandle, namespaceURI, name);
	}
}

int32_t AdaptiveResultTreeImpl::getFirstAttribute(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getFirstAttribute(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getFirstAttribute(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getFirstNamespaceNode(int32_t nodeHandle, bool inScope) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getFirstNamespaceNode(nodeHandle, inScope);
	} else {
		return $SimpleResultTreeImpl::getFirstNamespaceNode(nodeHandle, inScope);
	}
}

int32_t AdaptiveResultTreeImpl::getNextSibling(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNextSibling(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getNextSibling(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getPreviousSibling(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getPreviousSibling(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getPreviousSibling(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getNextAttribute(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNextAttribute(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getNextAttribute(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getNextNamespaceNode(int32_t baseHandle, int32_t namespaceHandle, bool inScope) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNextNamespaceNode(baseHandle, namespaceHandle, inScope);
	} else {
		return $SimpleResultTreeImpl::getNextNamespaceNode(baseHandle, namespaceHandle, inScope);
	}
}

int32_t AdaptiveResultTreeImpl::getOwnerDocument(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getOwnerDocument(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getOwnerDocument(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getDocumentRoot(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentRoot(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getDocumentRoot(nodeHandle);
	}
}

$XMLString* AdaptiveResultTreeImpl::getStringValue(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getStringValue(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getStringValue(nodeHandle);
	}
}

int32_t AdaptiveResultTreeImpl::getStringValueChunkCount(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getStringValueChunkCount(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getStringValueChunkCount(nodeHandle);
	}
}

$chars* AdaptiveResultTreeImpl::getStringValueChunk(int32_t nodeHandle, int32_t chunkIndex, $ints* startAndLen) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getStringValueChunk(nodeHandle, chunkIndex, startAndLen);
	} else {
		return $SimpleResultTreeImpl::getStringValueChunk(nodeHandle, chunkIndex, startAndLen);
	}
}

int32_t AdaptiveResultTreeImpl::getExpandedTypeID($String* namespace$, $String* localName, int32_t type) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getExpandedTypeID(namespace$, localName, type);
	} else {
		return $SimpleResultTreeImpl::getExpandedTypeID(namespace$, localName, type);
	}
}

$String* AdaptiveResultTreeImpl::getLocalNameFromExpandedNameID(int32_t ExpandedNameID) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getLocalNameFromExpandedNameID(ExpandedNameID);
	} else {
		return $SimpleResultTreeImpl::getLocalNameFromExpandedNameID(ExpandedNameID);
	}
}

$String* AdaptiveResultTreeImpl::getNamespaceFromExpandedNameID(int32_t ExpandedNameID) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNamespaceFromExpandedNameID(ExpandedNameID);
	} else {
		return $SimpleResultTreeImpl::getNamespaceFromExpandedNameID(ExpandedNameID);
	}
}

$String* AdaptiveResultTreeImpl::getLocalName(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getLocalName(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getLocalName(nodeHandle);
	}
}

$String* AdaptiveResultTreeImpl::getPrefix(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getPrefix(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getPrefix(nodeHandle);
	}
}

$String* AdaptiveResultTreeImpl::getNamespaceURI(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNamespaceURI(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getNamespaceURI(nodeHandle);
	}
}

$String* AdaptiveResultTreeImpl::getNodeValue(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNodeValue(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getNodeValue(nodeHandle);
	}
}

int16_t AdaptiveResultTreeImpl::getNodeType(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNodeType(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getNodeType(nodeHandle);
	}
}

int16_t AdaptiveResultTreeImpl::getLevel(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getLevel(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getLevel(nodeHandle);
	}
}

bool AdaptiveResultTreeImpl::isSupported($String* feature, $String* version) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->isSupported(feature, version);
	} else {
		return $SimpleResultTreeImpl::isSupported(feature, version);
	}
}

$String* AdaptiveResultTreeImpl::getDocumentBaseURI() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentBaseURI();
	} else {
		return $SimpleResultTreeImpl::getDocumentBaseURI();
	}
}

void AdaptiveResultTreeImpl::setDocumentBaseURI($String* baseURI) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->setDocumentBaseURI(baseURI);
	} else {
		$SimpleResultTreeImpl::setDocumentBaseURI(baseURI);
	}
}

$String* AdaptiveResultTreeImpl::getDocumentSystemIdentifier(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentSystemIdentifier(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getDocumentSystemIdentifier(nodeHandle);
	}
}

$String* AdaptiveResultTreeImpl::getDocumentEncoding(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentEncoding(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getDocumentEncoding(nodeHandle);
	}
}

$String* AdaptiveResultTreeImpl::getDocumentStandalone(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentStandalone(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getDocumentStandalone(nodeHandle);
	}
}

$String* AdaptiveResultTreeImpl::getDocumentVersion(int32_t documentHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentVersion(documentHandle);
	} else {
		return $SimpleResultTreeImpl::getDocumentVersion(documentHandle);
	}
}

bool AdaptiveResultTreeImpl::getDocumentAllDeclarationsProcessed() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentAllDeclarationsProcessed();
	} else {
		return $SimpleResultTreeImpl::getDocumentAllDeclarationsProcessed();
	}
}

$String* AdaptiveResultTreeImpl::getDocumentTypeDeclarationSystemIdentifier() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentTypeDeclarationSystemIdentifier();
	} else {
		return $SimpleResultTreeImpl::getDocumentTypeDeclarationSystemIdentifier();
	}
}

$String* AdaptiveResultTreeImpl::getDocumentTypeDeclarationPublicIdentifier() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDocumentTypeDeclarationPublicIdentifier();
	} else {
		return $SimpleResultTreeImpl::getDocumentTypeDeclarationPublicIdentifier();
	}
}

int32_t AdaptiveResultTreeImpl::getElementById($String* elementId) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getElementById(elementId);
	} else {
		return $SimpleResultTreeImpl::getElementById(elementId);
	}
}

bool AdaptiveResultTreeImpl::supportsPreStripping() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->supportsPreStripping();
	} else {
		return $SimpleResultTreeImpl::supportsPreStripping();
	}
}

bool AdaptiveResultTreeImpl::isNodeAfter(int32_t firstNodeHandle, int32_t secondNodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->isNodeAfter(firstNodeHandle, secondNodeHandle);
	} else {
		return $SimpleResultTreeImpl::isNodeAfter(firstNodeHandle, secondNodeHandle);
	}
}

bool AdaptiveResultTreeImpl::isCharacterElementContentWhitespace(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->isCharacterElementContentWhitespace(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::isCharacterElementContentWhitespace(nodeHandle);
	}
}

bool AdaptiveResultTreeImpl::isDocumentAllDeclarationsProcessed(int32_t documentHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->isDocumentAllDeclarationsProcessed(documentHandle);
	} else {
		return $SimpleResultTreeImpl::isDocumentAllDeclarationsProcessed(documentHandle);
	}
}

bool AdaptiveResultTreeImpl::isAttributeSpecified(int32_t attributeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->isAttributeSpecified(attributeHandle);
	} else {
		return $SimpleResultTreeImpl::isAttributeSpecified(attributeHandle);
	}
}

void AdaptiveResultTreeImpl::dispatchCharactersEvents(int32_t nodeHandle, $ContentHandler* ch, bool normalize) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->dispatchCharactersEvents(nodeHandle, ch, normalize);
	} else {
		$SimpleResultTreeImpl::dispatchCharactersEvents(nodeHandle, ch, normalize);
	}
}

void AdaptiveResultTreeImpl::dispatchToEvents(int32_t nodeHandle, $ContentHandler* ch) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->dispatchToEvents(nodeHandle, ch);
	} else {
		$SimpleResultTreeImpl::dispatchToEvents(nodeHandle, ch);
	}
}

$Node* AdaptiveResultTreeImpl::getNode(int32_t nodeHandle) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getNode(nodeHandle);
	} else {
		return $SimpleResultTreeImpl::getNode(nodeHandle);
	}
}

bool AdaptiveResultTreeImpl::needsTwoThreads() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->needsTwoThreads();
	} else {
		return $SimpleResultTreeImpl::needsTwoThreads();
	}
}

$ContentHandler* AdaptiveResultTreeImpl::getContentHandler() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getContentHandler();
	} else {
		return $SimpleResultTreeImpl::getContentHandler();
	}
}

$LexicalHandler* AdaptiveResultTreeImpl::getLexicalHandler() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getLexicalHandler();
	} else {
		return $SimpleResultTreeImpl::getLexicalHandler();
	}
}

$EntityResolver* AdaptiveResultTreeImpl::getEntityResolver() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getEntityResolver();
	} else {
		return $SimpleResultTreeImpl::getEntityResolver();
	}
}

$DTDHandler* AdaptiveResultTreeImpl::getDTDHandler() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDTDHandler();
	} else {
		return $SimpleResultTreeImpl::getDTDHandler();
	}
}

$ErrorHandler* AdaptiveResultTreeImpl::getErrorHandler() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getErrorHandler();
	} else {
		return $SimpleResultTreeImpl::getErrorHandler();
	}
}

$DeclHandler* AdaptiveResultTreeImpl::getDeclHandler() {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getDeclHandler();
	} else {
		return $SimpleResultTreeImpl::getDeclHandler();
	}
}

void AdaptiveResultTreeImpl::appendChild(int32_t newChild, bool clone, bool cloneDepth) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->appendChild(newChild, clone, cloneDepth);
	} else {
		$SimpleResultTreeImpl::appendChild(newChild, clone, cloneDepth);
	}
}

void AdaptiveResultTreeImpl::appendTextChild($String* str) {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->appendTextChild(str);
	} else {
		$SimpleResultTreeImpl::appendTextChild(str);
	}
}

$SourceLocator* AdaptiveResultTreeImpl::getSourceLocatorFor(int32_t node) {
	if (this->_dom != nullptr) {
		return $nc(this->_dom)->getSourceLocatorFor(node);
	} else {
		return $SimpleResultTreeImpl::getSourceLocatorFor(node);
	}
}

void AdaptiveResultTreeImpl::documentRegistration() {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->documentRegistration();
	} else {
		$SimpleResultTreeImpl::documentRegistration();
	}
}

void AdaptiveResultTreeImpl::documentRelease() {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->documentRelease();
	} else {
		$SimpleResultTreeImpl::documentRelease();
	}
}

void AdaptiveResultTreeImpl::release() {
	if (this->_dom != nullptr) {
		$nc(this->_dom)->release();
		$set(this, _dom, nullptr);
	}
	$SimpleResultTreeImpl::release();
}

void clinit$AdaptiveResultTreeImpl($Class* class$) {
	AdaptiveResultTreeImpl::_documentURIIndex = 0;
	$assignStatic(AdaptiveResultTreeImpl::EMPTY_STRING, ""_s->intern());
}

AdaptiveResultTreeImpl::AdaptiveResultTreeImpl() {
}

$Class* AdaptiveResultTreeImpl::load$($String* name, bool initialize) {
	$loadClass(AdaptiveResultTreeImpl, name, initialize, &_AdaptiveResultTreeImpl_ClassInfo_, clinit$AdaptiveResultTreeImpl, allocate$AdaptiveResultTreeImpl);
	return class$;
}

$Class* AdaptiveResultTreeImpl::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com