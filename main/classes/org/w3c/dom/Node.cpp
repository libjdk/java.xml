#include <org/w3c/dom/Node.h>

#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_POSITION_CONTAINED_BY
#undef DOCUMENT_POSITION_CONTAINS
#undef DOCUMENT_POSITION_DISCONNECTED
#undef DOCUMENT_POSITION_FOLLOWING
#undef DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC
#undef DOCUMENT_POSITION_PRECEDING
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $NodeList = ::org::w3c::dom::NodeList;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace org {
	namespace w3c {
		namespace dom {

$FieldInfo _Node_FieldInfo_[] = {
	{"ELEMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, ELEMENT_NODE)},
	{"ATTRIBUTE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, ATTRIBUTE_NODE)},
	{"TEXT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, TEXT_NODE)},
	{"CDATA_SECTION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, CDATA_SECTION_NODE)},
	{"ENTITY_REFERENCE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, ENTITY_REFERENCE_NODE)},
	{"ENTITY_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, ENTITY_NODE)},
	{"PROCESSING_INSTRUCTION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, PROCESSING_INSTRUCTION_NODE)},
	{"COMMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, COMMENT_NODE)},
	{"DOCUMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_NODE)},
	{"DOCUMENT_TYPE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_TYPE_NODE)},
	{"DOCUMENT_FRAGMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_FRAGMENT_NODE)},
	{"NOTATION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, NOTATION_NODE)},
	{"DOCUMENT_POSITION_DISCONNECTED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_DISCONNECTED)},
	{"DOCUMENT_POSITION_PRECEDING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_PRECEDING)},
	{"DOCUMENT_POSITION_FOLLOWING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_FOLLOWING)},
	{"DOCUMENT_POSITION_CONTAINS", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_CONTAINS)},
	{"DOCUMENT_POSITION_CONTAINED_BY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_CONTAINED_BY)},
	{"DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Node, DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC)},
	{}
};

$MethodInfo _Node_MethodInfo_[] = {
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeType", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasAttributes", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"normalize", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Node_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Node",
	nullptr,
	nullptr,
	_Node_FieldInfo_,
	_Node_MethodInfo_
};

$Object* allocate$Node($Class* clazz) {
	return $of($alloc(Node));
}

$Class* Node::load$($String* name, bool initialize) {
	$loadClass(Node, name, initialize, &_Node_ClassInfo_, allocate$Node);
	return class$;
}

$Class* Node::class$ = nullptr;

		} // dom
	} // w3c
} // org