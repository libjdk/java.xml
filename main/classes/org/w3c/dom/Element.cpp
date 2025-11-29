#include <org/w3c/dom/Element.h>

#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/TypeInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _Element_MethodInfo_[] = {
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"getAttributeNode", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeNodeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasAttribute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hasAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"removeAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"removeAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"removeAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setAttributeNodeNS", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setIdAttribute", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setIdAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"setIdAttributeNode", "(Lorg/w3c/dom/Attr;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _Element_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Element",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_Element_MethodInfo_
};

$Object* allocate$Element($Class* clazz) {
	return $of($alloc(Element));
}

$Class* Element::load$($String* name, bool initialize) {
	$loadClass(Element, name, initialize, &_Element_ClassInfo_, allocate$Element);
	return class$;
}

$Class* Element::class$ = nullptr;

		} // dom
	} // w3c
} // org