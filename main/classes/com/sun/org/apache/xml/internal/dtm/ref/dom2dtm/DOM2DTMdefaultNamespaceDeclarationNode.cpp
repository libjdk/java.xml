#include <com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTMdefaultNamespaceDeclarationNode.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef NOTATION_NODE
#undef NOT_SUPPORTED_ERR

using $DTMException = ::com::sun::org::apache::xml::internal::dtm::DTMException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
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
								namespace dom2dtm {

$FieldInfo _DOM2DTMdefaultNamespaceDeclarationNode_FieldInfo_[] = {
	{"NOT_SUPPORTED_ERR", "Ljava/lang/String;", nullptr, $FINAL, $field(DOM2DTMdefaultNamespaceDeclarationNode, NOT_SUPPORTED_ERR)},
	{"pseudoparent", "Lorg/w3c/dom/Element;", nullptr, 0, $field(DOM2DTMdefaultNamespaceDeclarationNode, pseudoparent)},
	{"prefix", "Ljava/lang/String;", nullptr, 0, $field(DOM2DTMdefaultNamespaceDeclarationNode, prefix)},
	{"uri", "Ljava/lang/String;", nullptr, 0, $field(DOM2DTMdefaultNamespaceDeclarationNode, uri)},
	{"nodename", "Ljava/lang/String;", nullptr, 0, $field(DOM2DTMdefaultNamespaceDeclarationNode, nodename)},
	{"handle", "I", nullptr, 0, $field(DOM2DTMdefaultNamespaceDeclarationNode, handle)},
	{}
};

$MethodInfo _DOM2DTMdefaultNamespaceDeclarationNode_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(DOM2DTMdefaultNamespaceDeclarationNode::*)($Element*,$String*,$String*,int32_t)>(&DOM2DTMdefaultNamespaceDeclarationNode::init$))},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getHandleOfNode", "()I", nullptr, $PUBLIC},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeType", "()S", nullptr, $PUBLIC},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
	{"getOwnerElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC},
	{"getSpecified", "()Z", nullptr, $PUBLIC},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTypeNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasAttributes", "()Z", nullptr, $PUBLIC},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"isId", "()Z", nullptr, $PUBLIC},
	{"isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"normalize", "()V", nullptr, $PUBLIC},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOM2DTMdefaultNamespaceDeclarationNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTMdefaultNamespaceDeclarationNode",
	"java.lang.Object",
	"org.w3c.dom.Attr,org.w3c.dom.TypeInfo",
	_DOM2DTMdefaultNamespaceDeclarationNode_FieldInfo_,
	_DOM2DTMdefaultNamespaceDeclarationNode_MethodInfo_
};

$Object* allocate$DOM2DTMdefaultNamespaceDeclarationNode($Class* clazz) {
	return $of($alloc(DOM2DTMdefaultNamespaceDeclarationNode));
}

int32_t DOM2DTMdefaultNamespaceDeclarationNode::hashCode() {
	 return this->$Attr::hashCode();
}

bool DOM2DTMdefaultNamespaceDeclarationNode::equals(Object$* arg0) {
	 return this->$Attr::equals(arg0);
}

$Object* DOM2DTMdefaultNamespaceDeclarationNode::clone() {
	 return this->$Attr::clone();
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::toString() {
	 return this->$Attr::toString();
}

void DOM2DTMdefaultNamespaceDeclarationNode::finalize() {
	this->$Attr::finalize();
}

void DOM2DTMdefaultNamespaceDeclarationNode::init$($Element* pseudoparent, $String* prefix, $String* uri, int32_t handle) {
	$set(this, NOT_SUPPORTED_ERR, "Unsupported operation on pseudonode"_s);
	$set(this, pseudoparent, pseudoparent);
	$set(this, prefix, prefix);
	$set(this, uri, uri);
	this->handle = handle;
	$set(this, nodename, $str({"xmlns:"_s, prefix}));
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getNodeName() {
	return this->nodename;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getName() {
	return this->nodename;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getNamespaceURI() {
	return "http://www.w3.org/2000/xmlns/"_s;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getPrefix() {
	return this->prefix;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getLocalName() {
	return this->prefix;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getNodeValue() {
	return this->uri;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getValue() {
	return this->uri;
}

$Element* DOM2DTMdefaultNamespaceDeclarationNode::getOwnerElement() {
	return this->pseudoparent;
}

bool DOM2DTMdefaultNamespaceDeclarationNode::isSupported($String* feature, $String* version) {
	return false;
}

bool DOM2DTMdefaultNamespaceDeclarationNode::hasChildNodes() {
	return false;
}

bool DOM2DTMdefaultNamespaceDeclarationNode::hasAttributes() {
	return false;
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::getParentNode() {
	return nullptr;
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::getFirstChild() {
	return nullptr;
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::getLastChild() {
	return nullptr;
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::getPreviousSibling() {
	return nullptr;
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::getNextSibling() {
	return nullptr;
}

bool DOM2DTMdefaultNamespaceDeclarationNode::getSpecified() {
	return false;
}

void DOM2DTMdefaultNamespaceDeclarationNode::normalize() {
	return;
}

$NodeList* DOM2DTMdefaultNamespaceDeclarationNode::getChildNodes() {
	return nullptr;
}

$NamedNodeMap* DOM2DTMdefaultNamespaceDeclarationNode::getAttributes() {
	return nullptr;
}

int16_t DOM2DTMdefaultNamespaceDeclarationNode::getNodeType() {
	return $Node::ATTRIBUTE_NODE;
}

void DOM2DTMdefaultNamespaceDeclarationNode::setNodeValue($String* value) {
	$throwNew($DTMException, this->NOT_SUPPORTED_ERR);
}

void DOM2DTMdefaultNamespaceDeclarationNode::setValue($String* value) {
	$throwNew($DTMException, this->NOT_SUPPORTED_ERR);
}

void DOM2DTMdefaultNamespaceDeclarationNode::setPrefix($String* value) {
	$throwNew($DTMException, this->NOT_SUPPORTED_ERR);
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::insertBefore($Node* a, $Node* b) {
	$throwNew($DTMException, this->NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::replaceChild($Node* a, $Node* b) {
	$throwNew($DTMException, this->NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::appendChild($Node* a) {
	$throwNew($DTMException, this->NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::removeChild($Node* a) {
	$throwNew($DTMException, this->NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Document* DOM2DTMdefaultNamespaceDeclarationNode::getOwnerDocument() {
	return $nc(this->pseudoparent)->getOwnerDocument();
}

$Node* DOM2DTMdefaultNamespaceDeclarationNode::cloneNode(bool deep) {
	$throwNew($DTMException, this->NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

int32_t DOM2DTMdefaultNamespaceDeclarationNode::getHandleOfNode() {
	return this->handle;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getTypeName() {
	return nullptr;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getTypeNamespace() {
	return nullptr;
}

bool DOM2DTMdefaultNamespaceDeclarationNode::isDerivedFrom($String* ns, $String* localName, int32_t derivationMethod) {
	return false;
}

$TypeInfo* DOM2DTMdefaultNamespaceDeclarationNode::getSchemaTypeInfo() {
	return this;
}

bool DOM2DTMdefaultNamespaceDeclarationNode::isId() {
	return false;
}

$Object* DOM2DTMdefaultNamespaceDeclarationNode::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	return $of($nc($(getOwnerDocument()))->setUserData(key, data, handler));
}

$Object* DOM2DTMdefaultNamespaceDeclarationNode::getUserData($String* key) {
	return $of($nc($(getOwnerDocument()))->getUserData(key));
}

$Object* DOM2DTMdefaultNamespaceDeclarationNode::getFeature($String* feature, $String* version) {
	return $of(isSupported(feature, version) ? $of(this) : ($Object*)nullptr);
}

bool DOM2DTMdefaultNamespaceDeclarationNode::isEqualNode($Node* arg) {
	$useLocalCurrentObjectStackCache();
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

$String* DOM2DTMdefaultNamespaceDeclarationNode::lookupNamespaceURI($String* specifiedPrefix) {
	$useLocalCurrentObjectStackCache();
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

bool DOM2DTMdefaultNamespaceDeclarationNode::isDefaultNamespace($String* namespaceURI) {
	return false;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::lookupPrefix($String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
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

bool DOM2DTMdefaultNamespaceDeclarationNode::isSameNode($Node* other) {
	return $equals(this, other);
}

void DOM2DTMdefaultNamespaceDeclarationNode::setTextContent($String* textContent) {
	setNodeValue(textContent);
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getTextContent() {
	return getNodeValue();
}

int16_t DOM2DTMdefaultNamespaceDeclarationNode::compareDocumentPosition($Node* other) {
	return (int16_t)0;
}

$String* DOM2DTMdefaultNamespaceDeclarationNode::getBaseURI() {
	return nullptr;
}

DOM2DTMdefaultNamespaceDeclarationNode::DOM2DTMdefaultNamespaceDeclarationNode() {
}

$Class* DOM2DTMdefaultNamespaceDeclarationNode::load$($String* name, bool initialize) {
	$loadClass(DOM2DTMdefaultNamespaceDeclarationNode, name, initialize, &_DOM2DTMdefaultNamespaceDeclarationNode_ClassInfo_, allocate$DOM2DTMdefaultNamespaceDeclarationNode);
	return class$;
}

$Class* DOM2DTMdefaultNamespaceDeclarationNode::class$ = nullptr;

								} // dom2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com