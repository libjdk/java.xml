#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/TransletException.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/BitArray.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl$1.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl$SimpleIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl$SingletonIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>
#include <com/sun/org/apache/xml/internal/serializer/EmptySerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringDefault.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Map.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef ANCESTOR
#undef ANCESTORORSELF
#undef CHILD
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DIRECTION_DOWN
#undef DIRECTION_UP
#undef EMPTY_ITERATOR
#undef EMPTY_STR
#undef NULL
#undef NUMBER_OF_NODES
#undef PARENT
#undef ROOT_NODE
#undef RTF_ROOT
#undef RTF_TEXT
#undef SELF
#undef TEXT_NODE

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
using $TransletException = ::com::sun::org::apache::xalan::internal::xsltc::TransletException;
using $BitArray = ::com::sun::org::apache::xalan::internal::xsltc::dom::BitArray;
using $SimpleResultTreeImpl$1 = ::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl$1;
using $SimpleResultTreeImpl$SimpleIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl$SimpleIterator;
using $SimpleResultTreeImpl$SingletonIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl$SingletonIterator;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMManagerDefault = ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault;
using $EmptySerializer = ::com::sun::org::apache::xml::internal::serializer::EmptySerializer;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringDefault = ::com::sun::org::apache::xml::internal::utils::XMLStringDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Map = ::java::util::Map;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXException = ::org::xml::sax::SAXException;
using $DeclHandler = ::org::xml::sax::ext::DeclHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _SimpleResultTreeImpl_FieldInfo_[] = {
	{"EMPTY_ITERATOR", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SimpleResultTreeImpl, EMPTY_ITERATOR)},
	{"RTF_ROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SimpleResultTreeImpl, RTF_ROOT)},
	{"RTF_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SimpleResultTreeImpl, RTF_TEXT)},
	{"NUMBER_OF_NODES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SimpleResultTreeImpl, NUMBER_OF_NODES)},
	{"_documentURIIndex", "I", nullptr, $PRIVATE | $STATIC, $staticField(SimpleResultTreeImpl, _documentURIIndex)},
	{"EMPTY_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SimpleResultTreeImpl, EMPTY_STR)},
	{"_text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SimpleResultTreeImpl, _text)},
	{"_textArray", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(SimpleResultTreeImpl, _textArray)},
	{"_dtmManager", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;", nullptr, $PROTECTED, $field(SimpleResultTreeImpl, _dtmManager)},
	{"_size", "I", nullptr, $PROTECTED, $field(SimpleResultTreeImpl, _size)},
	{"_documentID", "I", nullptr, $PRIVATE, $field(SimpleResultTreeImpl, _documentID)},
	{"_dontEscape", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/BitArray;", nullptr, $PRIVATE, $field(SimpleResultTreeImpl, _dontEscape)},
	{"_escaping", "Z", nullptr, $PRIVATE, $field(SimpleResultTreeImpl, _escaping)},
	{}
};

$MethodInfo _SimpleResultTreeImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;I)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleResultTreeImpl::*)($XSLTCDTMManager*,int32_t)>(&SimpleResultTreeImpl::init$))},
	{"appendChild", "(IZZ)V", nullptr, $PUBLIC},
	{"appendTextChild", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"characters", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"copy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"dispatchCharactersEvents", "(ILorg/xml/sax/ContentHandler;Z)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"dispatchToEvents", "(ILorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"documentRegistration", "()V", nullptr, $PUBLIC},
	{"documentRelease", "()V", nullptr, $PUBLIC},
	{"endDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"getAttributeNode", "(II)I", nullptr, $PUBLIC},
	{"getAttributeNode", "(ILjava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getAxisTraverser", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PUBLIC},
	{"getChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC},
	{"getDTMManager", "()Lcom/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault;", nullptr, $PUBLIC},
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
	{"getNextAttribute", "(I)I", nullptr, $PUBLIC},
	{"getNextNamespaceNode", "(IIZ)I", nullptr, $PUBLIC},
	{"getNextSibling", "(I)I", nullptr, $PUBLIC},
	{"getNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNodeHandle", "(I)I", nullptr, $PUBLIC},
	{"getNodeIdent", "(I)I", nullptr, $PUBLIC},
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
	{"getResultTreeFrag", "(IIZ)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC},
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
	{"migrateTo", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC},
	{"needsTwoThreads", "()Z", nullptr, $PUBLIC},
	{"orderNodes", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"release", "()V", nullptr, $PUBLIC},
	{"setDocumentBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"setFilter", "(Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;)V", nullptr, $PUBLIC},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setupMapping", "([Ljava/lang/String;[Ljava/lang/String;[I[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"shallowCopy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"startDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"supportsPreStripping", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SimpleResultTreeImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$SingletonIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl", "SingletonIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$SimpleIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl", "SimpleIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SimpleResultTreeImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl",
	"com.sun.org.apache.xml.internal.serializer.EmptySerializer",
	"com.sun.org.apache.xalan.internal.xsltc.DOM,com.sun.org.apache.xml.internal.dtm.DTM",
	_SimpleResultTreeImpl_FieldInfo_,
	_SimpleResultTreeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleResultTreeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$SingletonIterator,com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$SimpleIterator,com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$1"
};

$Object* allocate$SimpleResultTreeImpl($Class* clazz) {
	return $of($alloc(SimpleResultTreeImpl));
}

int32_t SimpleResultTreeImpl::hashCode() {
	 return this->$EmptySerializer::hashCode();
}

bool SimpleResultTreeImpl::equals(Object$* arg0) {
	 return this->$EmptySerializer::equals(arg0);
}

$Object* SimpleResultTreeImpl::clone() {
	 return this->$EmptySerializer::clone();
}

$String* SimpleResultTreeImpl::toString() {
	 return this->$EmptySerializer::toString();
}

void SimpleResultTreeImpl::finalize() {
	this->$EmptySerializer::finalize();
}

$DTMAxisIterator* SimpleResultTreeImpl::EMPTY_ITERATOR = nullptr;
int32_t SimpleResultTreeImpl::_documentURIIndex = 0;
$String* SimpleResultTreeImpl::EMPTY_STR = nullptr;

void SimpleResultTreeImpl::init$($XSLTCDTMManager* dtmManager, int32_t documentID) {
	$EmptySerializer::init$();
	this->_size = 0;
	$set(this, _dontEscape, nullptr);
	this->_escaping = true;
	$set(this, _dtmManager, dtmManager);
	this->_documentID = documentID;
	$set(this, _textArray, $new($StringArray, 4));
}

$DTMManagerDefault* SimpleResultTreeImpl::getDTMManager() {
	return this->_dtmManager;
}

int32_t SimpleResultTreeImpl::getDocument() {
	return this->_documentID;
}

$String* SimpleResultTreeImpl::getStringValue() {
	return this->_text;
}

$DTMAxisIterator* SimpleResultTreeImpl::getIterator() {
	return $new($SimpleResultTreeImpl$SingletonIterator, this, getDocument());
}

$DTMAxisIterator* SimpleResultTreeImpl::getChildren(int32_t node) {
	return $$new($SimpleResultTreeImpl$SimpleIterator, this)->setStartNode(node);
}

$DTMAxisIterator* SimpleResultTreeImpl::getTypedChildren(int32_t type) {
	return $new($SimpleResultTreeImpl$SimpleIterator, this, $SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN, type);
}

$DTMAxisIterator* SimpleResultTreeImpl::getAxisIterator(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	switch (axis) {
	case $Axis::CHILD:
		{}
	case $Axis::DESCENDANT:
		{
			return $new($SimpleResultTreeImpl$SimpleIterator, this, $SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN);
		}
	case $Axis::PARENT:
		{}
	case $Axis::ANCESTOR:
		{
			return $new($SimpleResultTreeImpl$SimpleIterator, this, $SimpleResultTreeImpl$SimpleIterator::DIRECTION_UP);
		}
	case $Axis::ANCESTORORSELF:
		{
			return ($$new($SimpleResultTreeImpl$SimpleIterator, this, $SimpleResultTreeImpl$SimpleIterator::DIRECTION_UP))->includeSelf();
		}
	case $Axis::DESCENDANTORSELF:
		{
			return ($$new($SimpleResultTreeImpl$SimpleIterator, this, $SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN))->includeSelf();
		}
	case $Axis::SELF:
		{
			return $new($SimpleResultTreeImpl$SingletonIterator, this);
		}
	default:
		{
			return SimpleResultTreeImpl::EMPTY_ITERATOR;
		}
	}
}

$DTMAxisIterator* SimpleResultTreeImpl::getTypedAxisIterator(int32_t axis, int32_t type) {
	$useLocalCurrentObjectStackCache();
	switch (axis) {
	case $Axis::CHILD:
		{}
	case $Axis::DESCENDANT:
		{
			return $new($SimpleResultTreeImpl$SimpleIterator, this, $SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN, type);
		}
	case $Axis::PARENT:
		{}
	case $Axis::ANCESTOR:
		{
			return $new($SimpleResultTreeImpl$SimpleIterator, this, $SimpleResultTreeImpl$SimpleIterator::DIRECTION_UP, type);
		}
	case $Axis::ANCESTORORSELF:
		{
			return ($$new($SimpleResultTreeImpl$SimpleIterator, this, $SimpleResultTreeImpl$SimpleIterator::DIRECTION_UP, type))->includeSelf();
		}
	case $Axis::DESCENDANTORSELF:
		{
			return ($$new($SimpleResultTreeImpl$SimpleIterator, this, $SimpleResultTreeImpl$SimpleIterator::DIRECTION_DOWN, type))->includeSelf();
		}
	case $Axis::SELF:
		{
			return $new($SimpleResultTreeImpl$SingletonIterator, this, type);
		}
	default:
		{
			return SimpleResultTreeImpl::EMPTY_ITERATOR;
		}
	}
}

$DTMAxisIterator* SimpleResultTreeImpl::getNthDescendant(int32_t node, int32_t n, bool includeself) {
	return nullptr;
}

$DTMAxisIterator* SimpleResultTreeImpl::getNamespaceAxisIterator(int32_t axis, int32_t ns) {
	return nullptr;
}

$DTMAxisIterator* SimpleResultTreeImpl::getNodeValueIterator($DTMAxisIterator* iter, int32_t returnType, $String* value, bool op) {
	return nullptr;
}

$DTMAxisIterator* SimpleResultTreeImpl::orderNodes($DTMAxisIterator* source, int32_t node) {
	return source;
}

$String* SimpleResultTreeImpl::getNodeName(int32_t node) {
	if (getNodeIdent(node) == SimpleResultTreeImpl::RTF_TEXT) {
		return "#text"_s;
	} else {
		return SimpleResultTreeImpl::EMPTY_STR;
	}
}

$String* SimpleResultTreeImpl::getNodeNameX(int32_t node) {
	return SimpleResultTreeImpl::EMPTY_STR;
}

$String* SimpleResultTreeImpl::getNamespaceName(int32_t node) {
	return SimpleResultTreeImpl::EMPTY_STR;
}

int32_t SimpleResultTreeImpl::getExpandedTypeID(int32_t nodeHandle) {
	int32_t nodeID = getNodeIdent(nodeHandle);
	if (nodeID == SimpleResultTreeImpl::RTF_TEXT) {
		return $DTM::TEXT_NODE;
	} else if (nodeID == SimpleResultTreeImpl::RTF_ROOT) {
		return $DTM::ROOT_NODE;
	} else {
		return $DTM::NULL;
	}
}

int32_t SimpleResultTreeImpl::getNamespaceType(int32_t node) {
	return 0;
}

int32_t SimpleResultTreeImpl::getParent(int32_t nodeHandle) {
	int32_t nodeID = getNodeIdent(nodeHandle);
	return (nodeID == SimpleResultTreeImpl::RTF_TEXT) ? getNodeHandle(SimpleResultTreeImpl::RTF_ROOT) : $DTM::NULL;
}

int32_t SimpleResultTreeImpl::getAttributeNode(int32_t gType, int32_t element) {
	return $DTM::NULL;
}

$String* SimpleResultTreeImpl::getStringValueX(int32_t nodeHandle) {
	int32_t nodeID = getNodeIdent(nodeHandle);
	if (nodeID == SimpleResultTreeImpl::RTF_ROOT || nodeID == SimpleResultTreeImpl::RTF_TEXT) {
		return this->_text;
	} else {
		return SimpleResultTreeImpl::EMPTY_STR;
	}
}

void SimpleResultTreeImpl::copy(int32_t node, $SerializationHandler* handler) {
	characters(node, handler);
}

void SimpleResultTreeImpl::copy($DTMAxisIterator* nodes, $SerializationHandler* handler) {
	int32_t node = 0;
	while ((node = $nc(nodes)->next()) != $DTM::NULL) {
		copy(node, handler);
	}
}

$String* SimpleResultTreeImpl::shallowCopy(int32_t node, $SerializationHandler* handler) {
	characters(node, handler);
	return nullptr;
}

bool SimpleResultTreeImpl::lessThan(int32_t node1, int32_t node2) {
	if (node1 == $DTM::NULL) {
		return false;
	} else if (node2 == $DTM::NULL) {
		return true;
	} else {
		return (node1 < node2);
	}
}

void SimpleResultTreeImpl::characters(int32_t node, $SerializationHandler* handler) {
	int32_t nodeID = getNodeIdent(node);
	if (nodeID == SimpleResultTreeImpl::RTF_ROOT || nodeID == SimpleResultTreeImpl::RTF_TEXT) {
		bool escapeBit = false;
		bool oldEscapeSetting = false;
		try {
			for (int32_t i = 0; i < this->_size; ++i) {
				if (this->_dontEscape != nullptr) {
					escapeBit = $nc(this->_dontEscape)->getBit(i);
					if (escapeBit) {
						oldEscapeSetting = $nc(handler)->setEscaping(false);
					}
				}
				$nc(handler)->characters($nc(this->_textArray)->get(i));
				if (escapeBit) {
					handler->setEscaping(oldEscapeSetting);
				}
			}
		} catch ($SAXException& e) {
			$throwNew($TransletException, static_cast<$Exception*>(e));
		}
	}
}

$Node* SimpleResultTreeImpl::makeNode(int32_t index) {
	return nullptr;
}

$Node* SimpleResultTreeImpl::makeNode($DTMAxisIterator* iter) {
	return nullptr;
}

$NodeList* SimpleResultTreeImpl::makeNodeList(int32_t index) {
	return nullptr;
}

$NodeList* SimpleResultTreeImpl::makeNodeList($DTMAxisIterator* iter) {
	return nullptr;
}

$String* SimpleResultTreeImpl::getLanguage(int32_t node) {
	return nullptr;
}

int32_t SimpleResultTreeImpl::getSize() {
	return 2;
}

$String* SimpleResultTreeImpl::getDocumentURI(int32_t node) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, "simple_rtf"_s);
	return $concat(var$0, $$str(SimpleResultTreeImpl::_documentURIIndex++));
}

void SimpleResultTreeImpl::setFilter($StripFilter* filter) {
}

void SimpleResultTreeImpl::setupMapping($StringArray* names, $StringArray* uris, $ints* types, $StringArray* namespaces) {
}

bool SimpleResultTreeImpl::isElement(int32_t node) {
	return false;
}

bool SimpleResultTreeImpl::isAttribute(int32_t node) {
	return false;
}

$String* SimpleResultTreeImpl::lookupNamespace(int32_t node, $String* prefix) {
	return nullptr;
}

int32_t SimpleResultTreeImpl::getNodeIdent(int32_t nodehandle) {
	return (nodehandle != $DTM::NULL) ? (nodehandle - this->_documentID) : $DTM::NULL;
}

int32_t SimpleResultTreeImpl::getNodeHandle(int32_t nodeId) {
	return (nodeId != $DTM::NULL) ? (nodeId + this->_documentID) : $DTM::NULL;
}

$DOM* SimpleResultTreeImpl::getResultTreeFrag(int32_t initialSize, int32_t rtfType) {
	return nullptr;
}

$DOM* SimpleResultTreeImpl::getResultTreeFrag(int32_t initialSize, int32_t rtfType, bool addToManager) {
	return nullptr;
}

$SerializationHandler* SimpleResultTreeImpl::getOutputDomBuilder() {
	return this;
}

int32_t SimpleResultTreeImpl::getNSType(int32_t node) {
	return 0;
}

$String* SimpleResultTreeImpl::getUnparsedEntityURI($String* name) {
	return nullptr;
}

$Map* SimpleResultTreeImpl::getElementsWithIDs() {
	return nullptr;
}

void SimpleResultTreeImpl::startDocument() {
}

void SimpleResultTreeImpl::endDocument() {
	if (this->_size == 1) {
		$set(this, _text, $nc(this->_textArray)->get(0));
	} else {
		$var($StringBuffer, buffer, $new($StringBuffer));
		for (int32_t i = 0; i < this->_size; ++i) {
			buffer->append($nc(this->_textArray)->get(i));
		}
		$set(this, _text, buffer->toString());
	}
}

void SimpleResultTreeImpl::characters($String* str) {
	if (this->_size >= $nc(this->_textArray)->length) {
		$var($StringArray, newTextArray, $new($StringArray, $nc(this->_textArray)->length * 2));
		$System::arraycopy(this->_textArray, 0, newTextArray, 0, $nc(this->_textArray)->length);
		$set(this, _textArray, newTextArray);
	}
	if (!this->_escaping) {
		if (this->_dontEscape == nullptr) {
			$set(this, _dontEscape, $new($BitArray, 8));
		}
		if (this->_size >= $nc(this->_dontEscape)->size()) {
			$nc(this->_dontEscape)->resize($nc(this->_dontEscape)->size() * 2);
		}
		$nc(this->_dontEscape)->setBit(this->_size);
	}
	$nc(this->_textArray)->set(this->_size++, str);
}

void SimpleResultTreeImpl::characters($chars* ch, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (this->_size >= $nc(this->_textArray)->length) {
		$var($StringArray, newTextArray, $new($StringArray, $nc(this->_textArray)->length * 2));
		$System::arraycopy(this->_textArray, 0, newTextArray, 0, $nc(this->_textArray)->length);
		$set(this, _textArray, newTextArray);
	}
	if (!this->_escaping) {
		if (this->_dontEscape == nullptr) {
			$set(this, _dontEscape, $new($BitArray, 8));
		}
		if (this->_size >= $nc(this->_dontEscape)->size()) {
			$nc(this->_dontEscape)->resize($nc(this->_dontEscape)->size() * 2);
		}
		$nc(this->_dontEscape)->setBit(this->_size);
	}
	$nc(this->_textArray)->set(this->_size++, $$new($String, ch, offset, length));
}

bool SimpleResultTreeImpl::setEscaping(bool escape) {
	bool temp = this->_escaping;
	this->_escaping = escape;
	return temp;
}

void SimpleResultTreeImpl::setFeature($String* featureId, bool state) {
}

void SimpleResultTreeImpl::setProperty($String* property, Object$* value) {
}

$DTMAxisTraverser* SimpleResultTreeImpl::getAxisTraverser(int32_t axis) {
	return nullptr;
}

bool SimpleResultTreeImpl::hasChildNodes(int32_t nodeHandle) {
	return (getNodeIdent(nodeHandle) == SimpleResultTreeImpl::RTF_ROOT);
}

int32_t SimpleResultTreeImpl::getFirstChild(int32_t nodeHandle) {
	int32_t nodeID = getNodeIdent(nodeHandle);
	if (nodeID == SimpleResultTreeImpl::RTF_ROOT) {
		return getNodeHandle(SimpleResultTreeImpl::RTF_TEXT);
	} else {
		return $DTM::NULL;
	}
}

int32_t SimpleResultTreeImpl::getLastChild(int32_t nodeHandle) {
	return getFirstChild(nodeHandle);
}

int32_t SimpleResultTreeImpl::getAttributeNode(int32_t elementHandle, $String* namespaceURI, $String* name) {
	return $DTM::NULL;
}

int32_t SimpleResultTreeImpl::getFirstAttribute(int32_t nodeHandle) {
	return $DTM::NULL;
}

int32_t SimpleResultTreeImpl::getFirstNamespaceNode(int32_t nodeHandle, bool inScope) {
	return $DTM::NULL;
}

int32_t SimpleResultTreeImpl::getNextSibling(int32_t nodeHandle) {
	return $DTM::NULL;
}

int32_t SimpleResultTreeImpl::getPreviousSibling(int32_t nodeHandle) {
	return $DTM::NULL;
}

int32_t SimpleResultTreeImpl::getNextAttribute(int32_t nodeHandle) {
	return $DTM::NULL;
}

int32_t SimpleResultTreeImpl::getNextNamespaceNode(int32_t baseHandle, int32_t namespaceHandle, bool inScope) {
	return $DTM::NULL;
}

int32_t SimpleResultTreeImpl::getOwnerDocument(int32_t nodeHandle) {
	return getDocument();
}

int32_t SimpleResultTreeImpl::getDocumentRoot(int32_t nodeHandle) {
	return getDocument();
}

$XMLString* SimpleResultTreeImpl::getStringValue(int32_t nodeHandle) {
	return $new($XMLStringDefault, $(getStringValueX(nodeHandle)));
}

int32_t SimpleResultTreeImpl::getStringValueChunkCount(int32_t nodeHandle) {
	return 0;
}

$chars* SimpleResultTreeImpl::getStringValueChunk(int32_t nodeHandle, int32_t chunkIndex, $ints* startAndLen) {
	return nullptr;
}

int32_t SimpleResultTreeImpl::getExpandedTypeID($String* namespace$, $String* localName, int32_t type) {
	return $DTM::NULL;
}

$String* SimpleResultTreeImpl::getLocalNameFromExpandedNameID(int32_t ExpandedNameID) {
	return SimpleResultTreeImpl::EMPTY_STR;
}

$String* SimpleResultTreeImpl::getNamespaceFromExpandedNameID(int32_t ExpandedNameID) {
	return SimpleResultTreeImpl::EMPTY_STR;
}

$String* SimpleResultTreeImpl::getLocalName(int32_t nodeHandle) {
	return SimpleResultTreeImpl::EMPTY_STR;
}

$String* SimpleResultTreeImpl::getPrefix(int32_t nodeHandle) {
	return nullptr;
}

$String* SimpleResultTreeImpl::getNamespaceURI(int32_t nodeHandle) {
	return SimpleResultTreeImpl::EMPTY_STR;
}

$String* SimpleResultTreeImpl::getNodeValue(int32_t nodeHandle) {
	return (getNodeIdent(nodeHandle) == SimpleResultTreeImpl::RTF_TEXT) ? this->_text : ($String*)nullptr;
}

int16_t SimpleResultTreeImpl::getNodeType(int32_t nodeHandle) {
	int32_t nodeID = getNodeIdent(nodeHandle);
	if (nodeID == SimpleResultTreeImpl::RTF_TEXT) {
		return $DTM::TEXT_NODE;
	} else if (nodeID == SimpleResultTreeImpl::RTF_ROOT) {
		return $DTM::ROOT_NODE;
	} else {
		return (int16_t)$DTM::NULL;
	}
}

int16_t SimpleResultTreeImpl::getLevel(int32_t nodeHandle) {
	int32_t nodeID = getNodeIdent(nodeHandle);
	if (nodeID == SimpleResultTreeImpl::RTF_TEXT) {
		return (int16_t)2;
	} else if (nodeID == SimpleResultTreeImpl::RTF_ROOT) {
		return (int16_t)1;
	} else {
		return (int16_t)$DTM::NULL;
	}
}

bool SimpleResultTreeImpl::isSupported($String* feature, $String* version) {
	return false;
}

$String* SimpleResultTreeImpl::getDocumentBaseURI() {
	return SimpleResultTreeImpl::EMPTY_STR;
}

void SimpleResultTreeImpl::setDocumentBaseURI($String* baseURI) {
}

$String* SimpleResultTreeImpl::getDocumentSystemIdentifier(int32_t nodeHandle) {
	return nullptr;
}

$String* SimpleResultTreeImpl::getDocumentEncoding(int32_t nodeHandle) {
	return nullptr;
}

$String* SimpleResultTreeImpl::getDocumentStandalone(int32_t nodeHandle) {
	return nullptr;
}

$String* SimpleResultTreeImpl::getDocumentVersion(int32_t documentHandle) {
	return nullptr;
}

bool SimpleResultTreeImpl::getDocumentAllDeclarationsProcessed() {
	return false;
}

$String* SimpleResultTreeImpl::getDocumentTypeDeclarationSystemIdentifier() {
	return nullptr;
}

$String* SimpleResultTreeImpl::getDocumentTypeDeclarationPublicIdentifier() {
	return nullptr;
}

int32_t SimpleResultTreeImpl::getElementById($String* elementId) {
	return $DTM::NULL;
}

bool SimpleResultTreeImpl::supportsPreStripping() {
	return false;
}

bool SimpleResultTreeImpl::isNodeAfter(int32_t firstNodeHandle, int32_t secondNodeHandle) {
	return lessThan(firstNodeHandle, secondNodeHandle);
}

bool SimpleResultTreeImpl::isCharacterElementContentWhitespace(int32_t nodeHandle) {
	return false;
}

bool SimpleResultTreeImpl::isDocumentAllDeclarationsProcessed(int32_t documentHandle) {
	return false;
}

bool SimpleResultTreeImpl::isAttributeSpecified(int32_t attributeHandle) {
	return false;
}

void SimpleResultTreeImpl::dispatchCharactersEvents(int32_t nodeHandle, $ContentHandler* ch, bool normalize) {
}

void SimpleResultTreeImpl::dispatchToEvents(int32_t nodeHandle, $ContentHandler* ch) {
}

$Node* SimpleResultTreeImpl::getNode(int32_t nodeHandle) {
	return makeNode(nodeHandle);
}

bool SimpleResultTreeImpl::needsTwoThreads() {
	return false;
}

$ContentHandler* SimpleResultTreeImpl::getContentHandler() {
	return nullptr;
}

$LexicalHandler* SimpleResultTreeImpl::getLexicalHandler() {
	return nullptr;
}

$EntityResolver* SimpleResultTreeImpl::getEntityResolver() {
	return nullptr;
}

$DTDHandler* SimpleResultTreeImpl::getDTDHandler() {
	return nullptr;
}

$ErrorHandler* SimpleResultTreeImpl::getErrorHandler() {
	return nullptr;
}

$DeclHandler* SimpleResultTreeImpl::getDeclHandler() {
	return nullptr;
}

void SimpleResultTreeImpl::appendChild(int32_t newChild, bool clone, bool cloneDepth) {
}

void SimpleResultTreeImpl::appendTextChild($String* str) {
}

$SourceLocator* SimpleResultTreeImpl::getSourceLocatorFor(int32_t node) {
	return nullptr;
}

void SimpleResultTreeImpl::documentRegistration() {
}

void SimpleResultTreeImpl::documentRelease() {
}

void SimpleResultTreeImpl::migrateTo($DTMManager* manager) {
}

void SimpleResultTreeImpl::release() {
	if (this->_documentID != 0) {
		$nc(this->_dtmManager)->release(this, true);
		this->_documentID = 0;
	}
}

void clinit$SimpleResultTreeImpl($Class* class$) {
	$assignStatic(SimpleResultTreeImpl::EMPTY_STR, ""_s);
	$assignStatic(SimpleResultTreeImpl::EMPTY_ITERATOR, $new($SimpleResultTreeImpl$1));
	SimpleResultTreeImpl::_documentURIIndex = 0;
}

SimpleResultTreeImpl::SimpleResultTreeImpl() {
}

$Class* SimpleResultTreeImpl::load$($String* name, bool initialize) {
	$loadClass(SimpleResultTreeImpl, name, initialize, &_SimpleResultTreeImpl_ClassInfo_, clinit$SimpleResultTreeImpl, allocate$SimpleResultTreeImpl);
	return class$;
}

$Class* SimpleResultTreeImpl::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com