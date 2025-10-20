#include <com/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultDocument.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultElement.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultNode.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NamedNodeMapImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOM.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE

using $NodeImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl>;
using $AttrArray = $Array<::org::w3c::dom::Attr>;
using $NodeImplArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, 2>;
using $DefaultDocument = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultDocument;
using $DefaultElement = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultElement;
using $DefaultNode = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultNode;
using $NamedNodeMapImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::NamedNodeMapImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl;
using $SchemaDOM = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOM;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _ElementImpl_FieldInfo_[] = {
	{"schemaDOM", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOM;", nullptr, 0, $field(ElementImpl, schemaDOM)},
	{"attrs", "[Lorg/w3c/dom/Attr;", nullptr, 0, $field(ElementImpl, attrs)},
	{"row", "I", nullptr, 0, $field(ElementImpl, row)},
	{"col", "I", nullptr, 0, $field(ElementImpl, col)},
	{"parentRow", "I", nullptr, 0, $field(ElementImpl, parentRow)},
	{"line", "I", nullptr, 0, $field(ElementImpl, line)},
	{"column", "I", nullptr, 0, $field(ElementImpl, column)},
	{"charOffset", "I", nullptr, 0, $field(ElementImpl, charOffset)},
	{"fAnnotation", "Ljava/lang/String;", nullptr, 0, $field(ElementImpl, fAnnotation)},
	{"fSyntheticAnnotation", "Ljava/lang/String;", nullptr, 0, $field(ElementImpl, fSyntheticAnnotation)},
	{}
};

$MethodInfo _ElementImpl_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(ElementImpl::*)(int32_t,int32_t,int32_t)>(&ElementImpl::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(ElementImpl::*)(int32_t,int32_t)>(&ElementImpl::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;III)V", nullptr, $PUBLIC, $method(static_cast<void(ElementImpl::*)($String*,$String*,$String*,$String*,int32_t,int32_t,int32_t)>(&ElementImpl::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(ElementImpl::*)($String*,$String*,$String*,$String*,int32_t,int32_t)>(&ElementImpl::init$))},
	{"getAnnotation", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeNode", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"getAttributeNodeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getSyntheticAnnotation", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasAttribute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"hasAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"hasAttributes", "()Z", nullptr, $PUBLIC},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"nsEquals", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&ElementImpl::nsEquals))},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ElementImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.ElementImpl",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultElement",
	nullptr,
	_ElementImpl_FieldInfo_,
	_ElementImpl_MethodInfo_
};

$Object* allocate$ElementImpl($Class* clazz) {
	return $of($alloc(ElementImpl));
}

void ElementImpl::init$(int32_t line, int32_t column, int32_t offset) {
	$DefaultElement::init$();
	this->row = -1;
	this->col = -1;
	this->parentRow = -1;
	this->nodeType = $Node::ELEMENT_NODE;
	this->line = line;
	this->column = column;
	this->charOffset = offset;
}

void ElementImpl::init$(int32_t line, int32_t column) {
	ElementImpl::init$(line, column, -1);
}

void ElementImpl::init$($String* prefix, $String* localpart, $String* rawname, $String* uri, int32_t line, int32_t column, int32_t offset) {
	$DefaultElement::init$(prefix, localpart, rawname, uri, $Node::ELEMENT_NODE);
	this->row = -1;
	this->col = -1;
	this->parentRow = -1;
	this->line = line;
	this->column = column;
	this->charOffset = offset;
}

void ElementImpl::init$($String* prefix, $String* localpart, $String* rawname, $String* uri, int32_t line, int32_t column) {
	ElementImpl::init$(prefix, localpart, rawname, uri, line, column, -1);
}

$Document* ElementImpl::getOwnerDocument() {
	return this->schemaDOM;
}

$Node* ElementImpl::getParentNode() {
	return $nc($nc($nc(this->schemaDOM)->relations)->get(this->row))->get(0);
}

bool ElementImpl::hasChildNodes() {
	if (this->parentRow == -1) {
		return false;
	} else {
		return true;
	}
}

$Node* ElementImpl::getFirstChild() {
	if (this->parentRow == -1) {
		return nullptr;
	}
	return $nc($nc($nc(this->schemaDOM)->relations)->get(this->parentRow))->get(1);
}

$Node* ElementImpl::getLastChild() {
	if (this->parentRow == -1) {
		return nullptr;
	}
	int32_t i = 1;
	for (; i < $nc($nc($nc(this->schemaDOM)->relations)->get(this->parentRow))->length; ++i) {
		if ($nc($nc($nc(this->schemaDOM)->relations)->get(this->parentRow))->get(i) == nullptr) {
			return $nc($nc($nc(this->schemaDOM)->relations)->get(this->parentRow))->get(i - 1);
		}
	}
	if (i == 1) {
		++i;
	}
	return $nc($nc($nc(this->schemaDOM)->relations)->get(this->parentRow))->get(i - 1);
}

$Node* ElementImpl::getPreviousSibling() {
	if (this->col == 1) {
		return nullptr;
	}
	return $nc($nc($nc(this->schemaDOM)->relations)->get(this->row))->get(this->col - 1);
}

$Node* ElementImpl::getNextSibling() {
	if (this->col == $nc($nc($nc(this->schemaDOM)->relations)->get(this->row))->length - 1) {
		return nullptr;
	}
	return $nc($nc($nc(this->schemaDOM)->relations)->get(this->row))->get(this->col + 1);
}

$NamedNodeMap* ElementImpl::getAttributes() {
	return $new($NamedNodeMapImpl, this->attrs);
}

bool ElementImpl::hasAttributes() {
	return ($nc(this->attrs)->length == 0 ? false : true);
}

$String* ElementImpl::getTagName() {
	return this->rawname;
}

$String* ElementImpl::getAttribute($String* name) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->attrs)->length; ++i) {
		if ($nc($($nc($nc(this->attrs)->get(i))->getName()))->equals(name)) {
			return $nc($nc(this->attrs)->get(i))->getValue();
		}
	}
	return ""_s;
}

$Attr* ElementImpl::getAttributeNode($String* name) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->attrs)->length; ++i) {
		if ($nc($($nc($nc(this->attrs)->get(i))->getName()))->equals(name)) {
			return $nc(this->attrs)->get(i);
		}
	}
	return nullptr;
}

$String* ElementImpl::getAttributeNS($String* namespaceURI, $String* localName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->attrs)->length; ++i) {
		bool var$0 = $nc($($nc($nc(this->attrs)->get(i))->getLocalName()))->equals(localName);
		if (var$0 && nsEquals($($nc($nc(this->attrs)->get(i))->getNamespaceURI()), namespaceURI)) {
			return $nc($nc(this->attrs)->get(i))->getValue();
		}
	}
	return ""_s;
}

$Attr* ElementImpl::getAttributeNodeNS($String* namespaceURI, $String* localName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->attrs)->length; ++i) {
		bool var$0 = $nc($($nc($nc(this->attrs)->get(i))->getName()))->equals(localName);
		if (var$0 && nsEquals($($nc($nc(this->attrs)->get(i))->getNamespaceURI()), namespaceURI)) {
			return $nc(this->attrs)->get(i);
		}
	}
	return nullptr;
}

bool ElementImpl::hasAttribute($String* name) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->attrs)->length; ++i) {
		if ($nc($($nc($nc(this->attrs)->get(i))->getName()))->equals(name)) {
			return true;
		}
	}
	return false;
}

bool ElementImpl::hasAttributeNS($String* namespaceURI, $String* localName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->attrs)->length; ++i) {
		bool var$0 = $nc($($nc($nc(this->attrs)->get(i))->getName()))->equals(localName);
		if (var$0 && nsEquals($($nc($nc(this->attrs)->get(i))->getNamespaceURI()), namespaceURI)) {
			return true;
		}
	}
	return false;
}

void ElementImpl::setAttribute($String* name, $String* value) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->attrs)->length; ++i) {
		if ($nc($($nc($nc(this->attrs)->get(i))->getName()))->equals(name)) {
			$nc($nc(this->attrs)->get(i))->setValue(value);
			return;
		}
	}
}

int32_t ElementImpl::getLineNumber() {
	return this->line;
}

int32_t ElementImpl::getColumnNumber() {
	return this->column;
}

int32_t ElementImpl::getCharacterOffset() {
	return this->charOffset;
}

$String* ElementImpl::getAnnotation() {
	return this->fAnnotation;
}

$String* ElementImpl::getSyntheticAnnotation() {
	return this->fSyntheticAnnotation;
}

bool ElementImpl::nsEquals($String* nsURI_1, $String* nsURI_2) {
	$init(ElementImpl);
	if (nsURI_1 == nullptr) {
		return (nsURI_2 == nullptr);
	} else {
		return $nc(nsURI_1)->equals(nsURI_2);
	}
}

ElementImpl::ElementImpl() {
}

$Class* ElementImpl::load$($String* name, bool initialize) {
	$loadClass(ElementImpl, name, initialize, &_ElementImpl_ClassInfo_, allocate$ElementImpl);
	return class$;
}

$Class* ElementImpl::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com