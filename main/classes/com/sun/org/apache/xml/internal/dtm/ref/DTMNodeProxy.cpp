#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMDOMException.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMChildIterNodeList.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNamedNodeMap.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy$DTMNodeProxyImplementation.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/NodeSet.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef EMPTYSTRING
#undef ENTITY_NODE
#undef NOTATION_NODE
#undef NOT_SUPPORTED_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef NULL
#undef PROCESSING_INSTRUCTION_NODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMDOMException = ::com::sun::org::apache::xml::internal::dtm::DTMDOMException;
using $DTMChildIterNodeList = ::com::sun::org::apache::xml::internal::dtm::ref::DTMChildIterNodeList;
using $DTMNamedNodeMap = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNamedNodeMap;
using $DTMNodeListBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase;
using $DTMNodeProxy$DTMNodeProxyImplementation = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeProxy$DTMNodeProxyImplementation;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $NodeSet = ::com::sun::org::apache::xpath::internal::NodeSet;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $Comment = ::org::w3c::dom::Comment;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $EntityReference = ::org::w3c::dom::EntityReference;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;
using $TypeInfo = ::org::w3c::dom::TypeInfo;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMNodeProxy_FieldInfo_[] = {
	{"dtm", "Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $field(DTMNodeProxy, dtm)},
	{"node", "I", nullptr, 0, $field(DTMNodeProxy, node)},
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DTMNodeProxy, EMPTYSTRING)},
	{"implementation", "Lorg/w3c/dom/DOMImplementation;", nullptr, $STATIC | $FINAL, $staticField(DTMNodeProxy, implementation)},
	{"fDocumentURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DTMNodeProxy, fDocumentURI)},
	{"actualEncoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DTMNodeProxy, actualEncoding)},
	{"xmlEncoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DTMNodeProxy, xmlEncoding)},
	{"xmlStandalone", "Z", nullptr, $PRIVATE, $field(DTMNodeProxy, xmlStandalone)},
	{"xmlVersion", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DTMNodeProxy, xmlVersion)},
	{}
};

$MethodInfo _DTMNodeProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;I)V", nullptr, $PUBLIC, $method(static_cast<void(DTMNodeProxy::*)($DTM*,int32_t)>(&DTMNodeProxy::init$))},
	{"adoptNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"appendData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL},
	{"compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"createAttribute", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"createAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"createCDATASection", "(Ljava/lang/String;)Lorg/w3c/dom/CDATASection;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"createComment", "(Ljava/lang/String;)Lorg/w3c/dom/Comment;", nullptr, $PUBLIC | $FINAL},
	{"createDocumentFragment", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC | $FINAL},
	{"createElement", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"createElementNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"createEntityReference", "(Ljava/lang/String;)Lorg/w3c/dom/EntityReference;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ProcessingInstruction;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"createTextNode", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC | $FINAL},
	{"deleteData", "(II)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"equals", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(DTMNodeProxy::*)($Node*)>(&DTMNodeProxy::equals))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getActualEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getAttributeNode", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $FINAL},
	{"getAttributeNodeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $FINAL},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC | $FINAL},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $FINAL},
	{"getDTM", "()Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$DTM*(DTMNodeProxy::*)()>(&DTMNodeProxy::getDTM))},
	{"getDTMNodeNumber", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(DTMNodeProxy::*)()>(&DTMNodeProxy::getDTMNodeNumber))},
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"getDoctype", "()Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC | $FINAL},
	{"getDocumentElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL},
	{"getDocumentURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC},
	{"getElementById", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $FINAL},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $FINAL},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL},
	{"getImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $FINAL},
	{"getInputEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL},
	{"getLength", "()I", nullptr, $PUBLIC | $FINAL},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getNodeType", "()S", nullptr, $PUBLIC | $FINAL},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $FINAL},
	{"getOwnerElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL},
	{"getOwnerNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Node*(DTMNodeProxy::*)()>(&DTMNodeProxy::getOwnerNode))},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC},
	{"getSpecified", "()Z", nullptr, $PUBLIC | $FINAL},
	{"getStandalone", "()Z", nullptr, $PUBLIC},
	{"getStrictErrorChecking", "()Z", nullptr, $PUBLIC},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(DTMNodeProxy::*)()>(&DTMNodeProxy::getStringValue)), "org.w3c.dom.DOMException"},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getWholeText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getXmlEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getXmlStandalone", "()Z", nullptr, $PUBLIC},
	{"getXmlVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasAttribute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"hasAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"hasAttributes", "()Z", nullptr, $PUBLIC},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"importNode", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"insertData", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isElementContentWhitespace", "()Z", nullptr, $PUBLIC},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"isId", "()Z", nullptr, $PUBLIC},
	{"isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"normalize", "()V", nullptr, $PUBLIC | $FINAL},
	{"normalizeDocument", "()V", nullptr, $PUBLIC},
	{"removeAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"removeAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"removeAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"renameNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"replaceData", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"replaceWholeText", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"sameNodeAs", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(DTMNodeProxy::*)($Node*)>(&DTMNodeProxy::sameNodeAs))},
	{"setActualEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"setAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"setAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"setAttributeNodeNS", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"setDocumentURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setIdAttribute", "(Z)V", nullptr, $PUBLIC},
	{"setIdAttribute", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"setIdAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"setIdAttributeNode", "(Lorg/w3c/dom/Attr;Z)V", nullptr, $PUBLIC},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"setStandalone", "(Z)V", nullptr, $PUBLIC},
	{"setStrictErrorChecking", "(Z)V", nullptr, $PUBLIC},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setXmlEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setXmlStandalone", "(Z)V", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setXmlVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"splitText", "(I)Lorg/w3c/dom/Text;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"substringData", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, nullptr, "org.w3c.dom.DOMException"},
	{"supports", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(DTMNodeProxy::*)($String*,$String*)>(&DTMNodeProxy::supports))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"traverseChildren", "(Ljava/util/List;Lorg/w3c/dom/Node;Ljava/lang/String;Z)V", "(Ljava/util/List<Lorg/w3c/dom/Node;>;Lorg/w3c/dom/Node;Ljava/lang/String;Z)V", $PRIVATE | $FINAL, $method(static_cast<void(DTMNodeProxy::*)($List*,$Node*,$String*,bool)>(&DTMNodeProxy::traverseChildren))},
	{"traverseChildren", "(Ljava/util/List;Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;ZZ)V", "(Ljava/util/List<Lorg/w3c/dom/Node;>;Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;ZZ)V", $PRIVATE | $FINAL, $method(static_cast<void(DTMNodeProxy::*)($List*,$Node*,$String*,$String*,bool,bool)>(&DTMNodeProxy::traverseChildren))},
	{}
};

$InnerClassInfo _DTMNodeProxy_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy$DTMNodeProxyImplementation", "com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy", "DTMNodeProxyImplementation", $STATIC},
	{}
};

$ClassInfo _DTMNodeProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy",
	"java.lang.Object",
	"org.w3c.dom.Document,org.w3c.dom.Text,org.w3c.dom.Element,org.w3c.dom.Attr,org.w3c.dom.ProcessingInstruction,org.w3c.dom.Comment,org.w3c.dom.DocumentFragment",
	_DTMNodeProxy_FieldInfo_,
	_DTMNodeProxy_MethodInfo_,
	nullptr,
	nullptr,
	_DTMNodeProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeProxy$DTMNodeProxyImplementation"
};

$Object* allocate$DTMNodeProxy($Class* clazz) {
	return $of($alloc(DTMNodeProxy));
}

$Object* DTMNodeProxy::clone() {
	 return this->$Document::clone();
}

$String* DTMNodeProxy::toString() {
	 return this->$Document::toString();
}

void DTMNodeProxy::finalize() {
	this->$Document::finalize();
}


$String* DTMNodeProxy::EMPTYSTRING = nullptr;

$DOMImplementation* DTMNodeProxy::implementation = nullptr;

void DTMNodeProxy::init$($DTM* dtm, int32_t node) {
	$set(this, dtm, dtm);
	this->node = node;
}

$DTM* DTMNodeProxy::getDTM() {
	return this->dtm;
}

int32_t DTMNodeProxy::getDTMNodeNumber() {
	return this->node;
}

bool DTMNodeProxy::equals($Node* node) {
	try {
		$var(DTMNodeProxy, dtmp, $cast(DTMNodeProxy, node));
		return ($nc(dtmp)->node == this->node) && (dtmp->dtm == this->dtm);
	} catch ($ClassCastException&) {
		$var($ClassCastException, cce, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool DTMNodeProxy::equals(Object$* node) {
	return $instanceOf($Node, node) && equals($cast($Node, node));
}

int32_t DTMNodeProxy::hashCode() {
	int32_t hash = 7;
	hash = 29 * hash + $Objects::hashCode(this->dtm);
	hash = 29 * hash + this->node;
	return hash;
}

bool DTMNodeProxy::sameNodeAs($Node* other) {
	if (!($instanceOf(DTMNodeProxy, other))) {
		return false;
	}
	$var(DTMNodeProxy, that, $cast(DTMNodeProxy, other));
	return this->dtm == $nc(that)->dtm && this->node == that->node;
}

$String* DTMNodeProxy::getNodeName() {
	return $nc(this->dtm)->getNodeName(this->node);
}

$String* DTMNodeProxy::getTarget() {
	return $nc(this->dtm)->getNodeName(this->node);
}

$String* DTMNodeProxy::getLocalName() {
	return $nc(this->dtm)->getLocalName(this->node);
}

$String* DTMNodeProxy::getPrefix() {
	return $nc(this->dtm)->getPrefix(this->node);
}

void DTMNodeProxy::setPrefix($String* prefix) {
	$throwNew($DTMDOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR);
}

$String* DTMNodeProxy::getNamespaceURI() {
	return $nc(this->dtm)->getNamespaceURI(this->node);
}

bool DTMNodeProxy::supports($String* feature, $String* version) {
	return $nc(DTMNodeProxy::implementation)->hasFeature(feature, version);
}

bool DTMNodeProxy::isSupported($String* feature, $String* version) {
	return $nc(DTMNodeProxy::implementation)->hasFeature(feature, version);
}

$String* DTMNodeProxy::getNodeValue() {
	return $nc(this->dtm)->getNodeValue(this->node);
}

$String* DTMNodeProxy::getStringValue() {
	return $nc($($nc(this->dtm)->getStringValue(this->node)))->toString();
}

void DTMNodeProxy::setNodeValue($String* nodeValue) {
	$throwNew($DTMDOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR);
}

int16_t DTMNodeProxy::getNodeType() {
	return $nc(this->dtm)->getNodeType(this->node);
}

$Node* DTMNodeProxy::getParentNode() {
	if (getNodeType() == $Node::ATTRIBUTE_NODE) {
		return nullptr;
	}
	int32_t newnode = $nc(this->dtm)->getParent(this->node);
	return (newnode == $DTM::NULL) ? ($Node*)nullptr : $nc(this->dtm)->getNode(newnode);
}

$Node* DTMNodeProxy::getOwnerNode() {
	int32_t newnode = $nc(this->dtm)->getParent(this->node);
	return (newnode == $DTM::NULL) ? ($Node*)nullptr : $nc(this->dtm)->getNode(newnode);
}

$NodeList* DTMNodeProxy::getChildNodes() {
	return $new($DTMChildIterNodeList, this->dtm, this->node);
}

$Node* DTMNodeProxy::getFirstChild() {
	int32_t newnode = $nc(this->dtm)->getFirstChild(this->node);
	return (newnode == $DTM::NULL) ? ($Node*)nullptr : $nc(this->dtm)->getNode(newnode);
}

$Node* DTMNodeProxy::getLastChild() {
	int32_t newnode = $nc(this->dtm)->getLastChild(this->node);
	return (newnode == $DTM::NULL) ? ($Node*)nullptr : $nc(this->dtm)->getNode(newnode);
}

$Node* DTMNodeProxy::getPreviousSibling() {
	int32_t newnode = $nc(this->dtm)->getPreviousSibling(this->node);
	return (newnode == $DTM::NULL) ? ($Node*)nullptr : $nc(this->dtm)->getNode(newnode);
}

$Node* DTMNodeProxy::getNextSibling() {
	if ($nc(this->dtm)->getNodeType(this->node) == $Node::ATTRIBUTE_NODE) {
		return nullptr;
	}
	int32_t newnode = $nc(this->dtm)->getNextSibling(this->node);
	return (newnode == $DTM::NULL) ? ($Node*)nullptr : $nc(this->dtm)->getNode(newnode);
}

$NamedNodeMap* DTMNodeProxy::getAttributes() {
	return $new($DTMNamedNodeMap, this->dtm, this->node);
}

bool DTMNodeProxy::hasAttribute($String* name) {
	return $DTM::NULL != $nc(this->dtm)->getAttributeNode(this->node, nullptr, name);
}

bool DTMNodeProxy::hasAttributeNS($String* namespaceURI, $String* localName) {
	return $DTM::NULL != $nc(this->dtm)->getAttributeNode(this->node, namespaceURI, localName);
}

$Document* DTMNodeProxy::getOwnerDocument() {
	return ($cast($Document, $nc(this->dtm)->getNode($nc(this->dtm)->getOwnerDocument(this->node))));
}

$Node* DTMNodeProxy::insertBefore($Node* newChild, $Node* refChild) {
	$throwNew($DTMDOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR);
	$shouldNotReachHere();
}

$Node* DTMNodeProxy::replaceChild($Node* newChild, $Node* oldChild) {
	$throwNew($DTMDOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR);
	$shouldNotReachHere();
}

$Node* DTMNodeProxy::removeChild($Node* oldChild) {
	$throwNew($DTMDOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR);
	$shouldNotReachHere();
}

$Node* DTMNodeProxy::appendChild($Node* newChild) {
	$throwNew($DTMDOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR);
	$shouldNotReachHere();
}

bool DTMNodeProxy::hasChildNodes() {
	return ($DTM::NULL != $nc(this->dtm)->getFirstChild(this->node));
}

$Node* DTMNodeProxy::cloneNode(bool deep) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$DocumentType* DTMNodeProxy::getDoctype() {
	return nullptr;
}

$DOMImplementation* DTMNodeProxy::getImplementation() {
	return DTMNodeProxy::implementation;
}

$Element* DTMNodeProxy::getDocumentElement() {
	int32_t dochandle = $nc(this->dtm)->getDocument();
	int32_t elementhandle = $DTM::NULL;
	for (int32_t kidhandle = $nc(this->dtm)->getFirstChild(dochandle); kidhandle != $DTM::NULL; kidhandle = $nc(this->dtm)->getNextSibling(kidhandle)) {
		switch ($nc(this->dtm)->getNodeType(kidhandle)) {
		case $Node::ELEMENT_NODE:
			{
				if (elementhandle != $DTM::NULL) {
					elementhandle = $DTM::NULL;
					kidhandle = $nc(this->dtm)->getLastChild(dochandle);
				} else {
					elementhandle = kidhandle;
				}
				break;
			}
		case $Node::COMMENT_NODE:
			{}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{}
		case $Node::DOCUMENT_TYPE_NODE:
			{
				break;
			}
		default:
			{
				elementhandle = $DTM::NULL;
				kidhandle = $nc(this->dtm)->getLastChild(dochandle);
				break;
			}
		}
	}
	if (elementhandle == $DTM::NULL) {
		$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	} else {
		return ($cast($Element, $nc(this->dtm)->getNode(elementhandle)));
	}
}

$Element* DTMNodeProxy::createElement($String* tagName) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$DocumentFragment* DTMNodeProxy::createDocumentFragment() {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Text* DTMNodeProxy::createTextNode($String* data) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Comment* DTMNodeProxy::createComment($String* data) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$CDATASection* DTMNodeProxy::createCDATASection($String* data) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$ProcessingInstruction* DTMNodeProxy::createProcessingInstruction($String* target, $String* data) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Attr* DTMNodeProxy::createAttribute($String* name) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$EntityReference* DTMNodeProxy::createEntityReference($String* name) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$NodeList* DTMNodeProxy::getElementsByTagName($String* tagname) {
	$var($List, listVector, $new($ArrayList));
	$var($Node, retNode, $nc(this->dtm)->getNode(this->node));
	if (retNode != nullptr) {
		bool isTagNameWildCard = "*"_s->equals(tagname);
		if ($DTM::ELEMENT_NODE == retNode->getNodeType()) {
			$var($NodeList, nodeList, retNode->getChildNodes());
			for (int32_t i = 0; i < $nc(nodeList)->getLength(); ++i) {
				traverseChildren(listVector, $(nodeList->item(i)), tagname, isTagNameWildCard);
			}
		} else if ($DTM::DOCUMENT_NODE == retNode->getNodeType()) {
			traverseChildren(listVector, $($nc(this->dtm)->getNode(this->node)), tagname, isTagNameWildCard);
		}
	}
	int32_t size = listVector->size();
	$var($NodeSet, nodeSet, $new($NodeSet, size));
	for (int32_t i = 0; i < size; ++i) {
		nodeSet->addNode($cast($Node, $(listVector->get(i))));
	}
	return static_cast<$NodeList*>(nodeSet);
}

void DTMNodeProxy::traverseChildren($List* listVector, $Node* tempNode, $String* tagname, bool isTagNameWildCard) {
	if (tempNode == nullptr) {
		return;
	} else {
		bool var$0 = $nc(tempNode)->getNodeType() == $DTM::ELEMENT_NODE;
		if (var$0 && (isTagNameWildCard || $nc($($nc(tempNode)->getNodeName()))->equals(tagname))) {
			$nc(listVector)->add(tempNode);
		}
		if ($nc(tempNode)->hasChildNodes()) {
			$var($NodeList, nodeList, tempNode->getChildNodes());
			for (int32_t i = 0; i < $nc(nodeList)->getLength(); ++i) {
				traverseChildren(listVector, $(nodeList->item(i)), tagname, isTagNameWildCard);
			}
		}
	}
}

$Node* DTMNodeProxy::importNode($Node* importedNode, bool deep) {
	$throwNew($DTMDOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR);
	$shouldNotReachHere();
}

$Element* DTMNodeProxy::createElementNS($String* namespaceURI, $String* qualifiedName) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Attr* DTMNodeProxy::createAttributeNS($String* namespaceURI, $String* qualifiedName) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$NodeList* DTMNodeProxy::getElementsByTagNameNS($String* namespaceURI, $String* localName) {
	$var($List, listVector, $new($ArrayList));
	$var($Node, retNode, $nc(this->dtm)->getNode(this->node));
	if (retNode != nullptr) {
		bool isNamespaceURIWildCard = "*"_s->equals(namespaceURI);
		bool isLocalNameWildCard = "*"_s->equals(localName);
		if ($DTM::ELEMENT_NODE == retNode->getNodeType()) {
			$var($NodeList, nodeList, retNode->getChildNodes());
			for (int32_t i = 0; i < $nc(nodeList)->getLength(); ++i) {
				traverseChildren(listVector, $(nodeList->item(i)), namespaceURI, localName, isNamespaceURIWildCard, isLocalNameWildCard);
			}
		} else if ($DTM::DOCUMENT_NODE == retNode->getNodeType()) {
			traverseChildren(listVector, $($nc(this->dtm)->getNode(this->node)), namespaceURI, localName, isNamespaceURIWildCard, isLocalNameWildCard);
		}
	}
	int32_t size = listVector->size();
	$var($NodeSet, nodeSet, $new($NodeSet, size));
	for (int32_t i = 0; i < size; ++i) {
		nodeSet->addNode($cast($Node, $(listVector->get(i))));
	}
	return static_cast<$NodeList*>(nodeSet);
}

void DTMNodeProxy::traverseChildren($List* listVector, $Node* tempNode, $String* namespaceURI, $String* localname, bool isNamespaceURIWildCard, bool isLocalNameWildCard) {
	if (tempNode == nullptr) {
		return;
	} else {
		bool var$0 = $nc(tempNode)->getNodeType() == $DTM::ELEMENT_NODE;
		if (var$0 && (isLocalNameWildCard || $nc($($nc(tempNode)->getLocalName()))->equals(localname))) {
			$var($String, nsURI, tempNode->getNamespaceURI());
			if ((namespaceURI == nullptr && nsURI == nullptr) || isNamespaceURIWildCard || (namespaceURI != nullptr && namespaceURI->equals(nsURI))) {
				$nc(listVector)->add(tempNode);
			}
		}
		if ($nc(tempNode)->hasChildNodes()) {
			$var($NodeList, nl, tempNode->getChildNodes());
			for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
				traverseChildren(listVector, $(nl->item(i)), namespaceURI, localname, isNamespaceURIWildCard, isLocalNameWildCard);
			}
		}
	}
}

$Element* DTMNodeProxy::getElementById($String* elementId) {
	return $cast($Element, $nc(this->dtm)->getNode($nc(this->dtm)->getElementById(elementId)));
}

$Text* DTMNodeProxy::splitText(int32_t offset) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$String* DTMNodeProxy::getData() {
	return $nc(this->dtm)->getNodeValue(this->node);
}

void DTMNodeProxy::setData($String* data) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

int32_t DTMNodeProxy::getLength() {
	return $nc($($nc(this->dtm)->getNodeValue(this->node)))->length();
}

$String* DTMNodeProxy::substringData(int32_t offset, int32_t count) {
	return $nc($(getData()))->substring(offset, offset + count);
}

void DTMNodeProxy::appendData($String* arg) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

void DTMNodeProxy::insertData(int32_t offset, $String* arg) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

void DTMNodeProxy::deleteData(int32_t offset, int32_t count) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

void DTMNodeProxy::replaceData(int32_t offset, int32_t count, $String* arg) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

$String* DTMNodeProxy::getTagName() {
	return $nc(this->dtm)->getNodeName(this->node);
}

$String* DTMNodeProxy::getAttribute($String* name) {
	$var($DTMNamedNodeMap, map, $new($DTMNamedNodeMap, this->dtm, this->node));
	$var($Node, n, map->getNamedItem(name));
	return (nullptr == n) ? DTMNodeProxy::EMPTYSTRING : $nc(n)->getNodeValue();
}

void DTMNodeProxy::setAttribute($String* name, $String* value) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

void DTMNodeProxy::removeAttribute($String* name) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

$Attr* DTMNodeProxy::getAttributeNode($String* name) {
	$var($DTMNamedNodeMap, map, $new($DTMNamedNodeMap, this->dtm, this->node));
	return $cast($Attr, map->getNamedItem(name));
}

$Attr* DTMNodeProxy::setAttributeNode($Attr* newAttr) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Attr* DTMNodeProxy::removeAttributeNode($Attr* oldAttr) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

bool DTMNodeProxy::hasAttributes() {
	return $DTM::NULL != $nc(this->dtm)->getFirstAttribute(this->node);
}

void DTMNodeProxy::normalize() {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

$String* DTMNodeProxy::getAttributeNS($String* namespaceURI, $String* localName) {
	$var($Node, retNode, nullptr);
	int32_t n = $nc(this->dtm)->getAttributeNode(this->node, namespaceURI, localName);
	if (n != $DTM::NULL) {
		$assign(retNode, $nc(this->dtm)->getNode(n));
	}
	return (nullptr == retNode) ? DTMNodeProxy::EMPTYSTRING : $nc(retNode)->getNodeValue();
}

void DTMNodeProxy::setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

void DTMNodeProxy::removeAttributeNS($String* namespaceURI, $String* localName) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

$Attr* DTMNodeProxy::getAttributeNodeNS($String* namespaceURI, $String* localName) {
	$var($Attr, retAttr, nullptr);
	int32_t n = $nc(this->dtm)->getAttributeNode(this->node, namespaceURI, localName);
	if (n != $DTM::NULL) {
		$assign(retAttr, $cast($Attr, $nc(this->dtm)->getNode(n)));
	}
	return retAttr;
}

$Attr* DTMNodeProxy::setAttributeNodeNS($Attr* newAttr) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$String* DTMNodeProxy::getName() {
	return $nc(this->dtm)->getNodeName(this->node);
}

bool DTMNodeProxy::getSpecified() {
	return true;
}

$String* DTMNodeProxy::getValue() {
	return $nc(this->dtm)->getNodeValue(this->node);
}

void DTMNodeProxy::setValue($String* value) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

$Element* DTMNodeProxy::getOwnerElement() {
	if (getNodeType() != $Node::ATTRIBUTE_NODE) {
		return nullptr;
	}
	int32_t newnode = $nc(this->dtm)->getParent(this->node);
	return (newnode == $DTM::NULL) ? ($Element*)nullptr : ($cast($Element, $nc(this->dtm)->getNode(newnode)));
}

$Node* DTMNodeProxy::adoptNode($Node* source) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$String* DTMNodeProxy::getInputEncoding() {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

void DTMNodeProxy::setEncoding($String* encoding) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

bool DTMNodeProxy::getStandalone() {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

void DTMNodeProxy::setStandalone(bool standalone) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

bool DTMNodeProxy::getStrictErrorChecking() {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

void DTMNodeProxy::setStrictErrorChecking(bool strictErrorChecking) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

$String* DTMNodeProxy::getVersion() {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

void DTMNodeProxy::setVersion($String* version) {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
}

$Object* DTMNodeProxy::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	return $of($nc($(getOwnerDocument()))->setUserData(key, data, handler));
}

$Object* DTMNodeProxy::getUserData($String* key) {
	return $of($nc($(getOwnerDocument()))->getUserData(key));
}

$Object* DTMNodeProxy::getFeature($String* feature, $String* version) {
	return $of(isSupported(feature, version) ? $of(this) : ($Object*)nullptr);
}

bool DTMNodeProxy::isEqualNode($Node* arg) {
	if ($equals(arg, this)) {
		return true;
	}
	int16_t var$0 = $nc(arg)->getNodeType();
	if (var$0 != getNodeType()) {
		return false;
	}
	if (getNodeName() == nullptr) {
		if ($nc(arg)->getNodeName() != nullptr) {
			return false;
		}
	} else if (!$nc($(getNodeName()))->equals($($nc(arg)->getNodeName()))) {
		return false;
	}
	if (getLocalName() == nullptr) {
		if ($nc(arg)->getLocalName() != nullptr) {
			return false;
		}
	} else if (!$nc($(getLocalName()))->equals($($nc(arg)->getLocalName()))) {
		return false;
	}
	if (getNamespaceURI() == nullptr) {
		if ($nc(arg)->getNamespaceURI() != nullptr) {
			return false;
		}
	} else if (!$nc($(getNamespaceURI()))->equals($($nc(arg)->getNamespaceURI()))) {
		return false;
	}
	if (getPrefix() == nullptr) {
		if ($nc(arg)->getPrefix() != nullptr) {
			return false;
		}
	} else if (!$nc($(getPrefix()))->equals($($nc(arg)->getPrefix()))) {
		return false;
	}
	if (getNodeValue() == nullptr) {
		if ($nc(arg)->getNodeValue() != nullptr) {
			return false;
		}
	} else if (!$nc($(getNodeValue()))->equals($($nc(arg)->getNodeValue()))) {
		return false;
	}
	return true;
}

$String* DTMNodeProxy::lookupNamespaceURI($String* specifiedPrefix) {
	int16_t type = this->getNodeType();
	switch (type) {
	case $Node::ELEMENT_NODE:
		{
			{
				$var($String, namespace$, this->getNamespaceURI());
				$var($String, prefix, this->getPrefix());
				if (namespace$ != nullptr) {
					if (specifiedPrefix == nullptr && prefix == specifiedPrefix) {
						return namespace$;
					} else if (prefix != nullptr && prefix->equals(specifiedPrefix)) {
						return namespace$;
					}
				}
				if (this->hasAttributes()) {
					$var($NamedNodeMap, map, this->getAttributes());
					int32_t length = $nc(map)->getLength();
					for (int32_t i = 0; i < length; ++i) {
						$var($Node, attr, map->item(i));
						$var($String, attrPrefix, $nc(attr)->getPrefix());
						$var($String, value, attr->getNodeValue());
						$assign(namespace$, attr->getNamespaceURI());
						if (namespace$ != nullptr && namespace$->equals("http://www.w3.org/2000/xmlns/"_s)) {
							if (specifiedPrefix == nullptr && $nc($(attr->getNodeName()))->equals("xmlns"_s)) {
								return value;
							} else {
								bool var$1 = attrPrefix != nullptr && attrPrefix->equals("xmlns"_s);
								if (var$1 && $nc($(attr->getLocalName()))->equals(specifiedPrefix)) {
									return value;
								}
							}
						}
					}
				}
				return nullptr;
			}
		}
	case $Node::ENTITY_NODE:
		{}
	case $Node::NOTATION_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			return nullptr;
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				if ($nc($(this->getOwnerElement()))->getNodeType() == $Node::ELEMENT_NODE) {
					return $nc($(getOwnerElement()))->lookupNamespaceURI(specifiedPrefix);
				}
				return nullptr;
			}
		}
	default:
		{
			{
				return nullptr;
			}
		}
	}
}

bool DTMNodeProxy::isDefaultNamespace($String* namespaceURI) {
	return false;
}

$String* DTMNodeProxy::lookupPrefix($String* namespaceURI) {
	if (namespaceURI == nullptr) {
		return nullptr;
	}
	int16_t type = this->getNodeType();
	switch (type) {
	case $Node::ENTITY_NODE:
		{}
	case $Node::NOTATION_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			return nullptr;
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				if ($nc($(this->getOwnerElement()))->getNodeType() == $Node::ELEMENT_NODE) {
					return $nc($(getOwnerElement()))->lookupPrefix(namespaceURI);
				}
				return nullptr;
			}
		}
	default:
		{
			{
				return nullptr;
			}
		}
	}
}

bool DTMNodeProxy::isSameNode($Node* other) {
	return $equals(this, other);
}

void DTMNodeProxy::setTextContent($String* textContent) {
	setNodeValue(textContent);
}

$String* DTMNodeProxy::getTextContent() {
	return $nc($($nc(this->dtm)->getStringValue(this->node)))->toString();
}

int16_t DTMNodeProxy::compareDocumentPosition($Node* other) {
	return (int16_t)0;
}

$String* DTMNodeProxy::getBaseURI() {
	return nullptr;
}

$Node* DTMNodeProxy::renameNode($Node* n, $String* namespaceURI, $String* name) {
	return n;
}

void DTMNodeProxy::normalizeDocument() {
}

$DOMConfiguration* DTMNodeProxy::getDomConfig() {
	return nullptr;
}

void DTMNodeProxy::setDocumentURI($String* documentURI) {
	$set(this, fDocumentURI, documentURI);
}

$String* DTMNodeProxy::getDocumentURI() {
	return this->fDocumentURI;
}

$String* DTMNodeProxy::getActualEncoding() {
	return this->actualEncoding;
}

void DTMNodeProxy::setActualEncoding($String* value) {
	$set(this, actualEncoding, value);
}

$Text* DTMNodeProxy::replaceWholeText($String* content) {
	return nullptr;
}

$String* DTMNodeProxy::getWholeText() {
	return nullptr;
}

bool DTMNodeProxy::isElementContentWhitespace() {
	return false;
}

void DTMNodeProxy::setIdAttribute(bool id) {
}

void DTMNodeProxy::setIdAttribute($String* name, bool makeId) {
}

void DTMNodeProxy::setIdAttributeNode($Attr* at, bool makeId) {
}

void DTMNodeProxy::setIdAttributeNS($String* namespaceURI, $String* localName, bool makeId) {
}

$TypeInfo* DTMNodeProxy::getSchemaTypeInfo() {
	return nullptr;
}

bool DTMNodeProxy::isId() {
	return false;
}

$String* DTMNodeProxy::getXmlEncoding() {
	return this->xmlEncoding;
}

void DTMNodeProxy::setXmlEncoding($String* xmlEncoding) {
	$set(this, xmlEncoding, xmlEncoding);
}

bool DTMNodeProxy::getXmlStandalone() {
	return this->xmlStandalone;
}

void DTMNodeProxy::setXmlStandalone(bool xmlStandalone) {
	this->xmlStandalone = xmlStandalone;
}

$String* DTMNodeProxy::getXmlVersion() {
	return this->xmlVersion;
}

void DTMNodeProxy::setXmlVersion($String* xmlVersion) {
	$set(this, xmlVersion, xmlVersion);
}

void clinit$DTMNodeProxy($Class* class$) {
	$assignStatic(DTMNodeProxy::EMPTYSTRING, ""_s);
	$assignStatic(DTMNodeProxy::implementation, $new($DTMNodeProxy$DTMNodeProxyImplementation));
}

DTMNodeProxy::DTMNodeProxy() {
}

$Class* DTMNodeProxy::load$($String* name, bool initialize) {
	$loadClass(DTMNodeProxy, name, initialize, &_DTMNodeProxy_ClassInfo_, clinit$DTMNodeProxy, allocate$DTMNodeProxy);
	return class$;
}

$Class* DTMNodeProxy::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com