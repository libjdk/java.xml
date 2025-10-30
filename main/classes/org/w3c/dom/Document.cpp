#include <org/w3c/dom/Document.h>

#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $Comment = ::org::w3c::dom::Comment;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $EntityReference = ::org::w3c::dom::EntityReference;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _Document_MethodInfo_[] = {
	{"adoptNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createAttribute", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createCDATASection", "(Ljava/lang/String;)Lorg/w3c/dom/CDATASection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createComment", "(Ljava/lang/String;)Lorg/w3c/dom/Comment;", nullptr, $PUBLIC | $ABSTRACT},
	{"createDocumentFragment", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC | $ABSTRACT},
	{"createElement", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createElementNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createEntityReference", "(Ljava/lang/String;)Lorg/w3c/dom/EntityReference;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ProcessingInstruction;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createTextNode", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDoctype", "()Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementById", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInputEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStrictErrorChecking", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getXmlEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getXmlStandalone", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getXmlVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"importNode", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"normalizeDocument", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"renameNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setDocumentURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setStrictErrorChecking", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setXmlStandalone", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setXmlVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _Document_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Document",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_Document_MethodInfo_
};

$Object* allocate$Document($Class* clazz) {
	return $of($alloc(Document));
}

$Class* Document::load$($String* name, bool initialize) {
	$loadClass(Document, name, initialize, &_Document_ClassInfo_, allocate$Document);
	return class$;
}

$Class* Document::class$ = nullptr;

		} // dom
	} // w3c
} // org