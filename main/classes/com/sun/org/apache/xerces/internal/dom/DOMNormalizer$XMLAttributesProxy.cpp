#include <com/sun/org/apache/xerces/internal/dom/DOMNormalizer$XMLAttributesProxy.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/AttributeMap.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMNormalizer.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <java/util/Vector.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $AttributeMap = ::com::sun::org::apache::xerces::internal::dom::AttributeMap;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMNormalizer = ::com::sun::org::apache::xerces::internal::dom::DOMNormalizer;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $NamedNodeMapImpl = ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DOMNormalizer$XMLAttributesProxy_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/dom/DOMNormalizer;", nullptr, $FINAL | $SYNTHETIC, $field(DOMNormalizer$XMLAttributesProxy, this$0)},
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/dom/AttributeMap;", nullptr, $PROTECTED, $field(DOMNormalizer$XMLAttributesProxy, fAttributes)},
	{"fDocument", "Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, $PROTECTED, $field(DOMNormalizer$XMLAttributesProxy, fDocument)},
	{"fElement", "Lcom/sun/org/apache/xerces/internal/dom/ElementImpl;", nullptr, $PROTECTED, $field(DOMNormalizer$XMLAttributesProxy, fElement)},
	{"fDTDTypes", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", $PROTECTED, $field(DOMNormalizer$XMLAttributesProxy, fDTDTypes)},
	{"fAugmentations", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/org/apache/xerces/internal/xni/Augmentations;>;", $PROTECTED, $field(DOMNormalizer$XMLAttributesProxy, fAugmentations)},
	{}
};

$MethodInfo _DOMNormalizer$XMLAttributesProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DOMNormalizer;)V", nullptr, $PROTECTED, $method(static_cast<void(DOMNormalizer$XMLAttributesProxy::*)($DOMNormalizer*)>(&DOMNormalizer$XMLAttributesProxy::init$))},
	{"addAttribute", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getAugmentations", "(I)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC},
	{"getAugmentations", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC},
	{"getAugmentations", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "(ILcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC},
	{"getNonNormalizedValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getQualifiedName", "(I)Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC},
	{"getReportableType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DOMNormalizer$XMLAttributesProxy::*)($String*)>(&DOMNormalizer$XMLAttributesProxy::getReportableType))},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC},
	{"removeAllAttributes", "()V", nullptr, $PUBLIC},
	{"removeAttributeAt", "(I)V", nullptr, $PUBLIC},
	{"setAttributes", "(Lcom/sun/org/apache/xerces/internal/dom/AttributeMap;Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Lcom/sun/org/apache/xerces/internal/dom/ElementImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMNormalizer$XMLAttributesProxy::*)($AttributeMap*,$CoreDocumentImpl*,$ElementImpl*)>(&DOMNormalizer$XMLAttributesProxy::setAttributes))},
	{"setAugmentations", "(ILcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC},
	{"setName", "(ILcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC},
	{"setNonNormalizedValue", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setSpecified", "(IZ)V", nullptr, $PUBLIC},
	{"setType", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setValue", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setValue", "(ILjava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DOMNormalizer$XMLAttributesProxy_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.DOMNormalizer$XMLAttributesProxy", "com.sun.org.apache.xerces.internal.dom.DOMNormalizer", "XMLAttributesProxy", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _DOMNormalizer$XMLAttributesProxy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMNormalizer$XMLAttributesProxy",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLAttributes",
	_DOMNormalizer$XMLAttributesProxy_FieldInfo_,
	_DOMNormalizer$XMLAttributesProxy_MethodInfo_,
	nullptr,
	nullptr,
	_DOMNormalizer$XMLAttributesProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.DOMNormalizer"
};

$Object* allocate$DOMNormalizer$XMLAttributesProxy($Class* clazz) {
	return $of($alloc(DOMNormalizer$XMLAttributesProxy));
}

void DOMNormalizer$XMLAttributesProxy::init$($DOMNormalizer* this$0) {
	$set(this, this$0, this$0);
	$set(this, fDTDTypes, $new($Vector, 5));
	$set(this, fAugmentations, $new($Vector, 5));
}

void DOMNormalizer$XMLAttributesProxy::setAttributes($AttributeMap* attributes, $CoreDocumentImpl* doc, $ElementImpl* elem) {
	$useLocalCurrentObjectStackCache();
	$set(this, fDocument, doc);
	$set(this, fAttributes, attributes);
	$set(this, fElement, elem);
	if (attributes != nullptr) {
		int32_t length = attributes->getLength();
		$nc(this->fDTDTypes)->setSize(length);
		$nc(this->fAugmentations)->setSize(length);
		for (int32_t i = 0; i < length; ++i) {
			$nc(this->fAugmentations)->setElementAt($$new($AugmentationsImpl), i);
		}
	} else {
		$nc(this->fDTDTypes)->setSize(0);
		$nc(this->fAugmentations)->setSize(0);
	}
}

int32_t DOMNormalizer$XMLAttributesProxy::addAttribute($QName* qname, $String* attrType, $String* attrValue) {
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(this->fElement)->getXercesAttribute($nc(qname)->uri, qname->localpart);
	if (index < 0) {
		$var($AttrImpl, attr, $cast($AttrImpl, $nc(($cast($CoreDocumentImpl, $($nc(this->fElement)->getOwnerDocument()))))->createAttributeNS($nc(qname)->uri, qname->rawname, qname->localpart)));
		$nc(attr)->setNodeValue(attrValue);
		index = $nc(this->fElement)->setXercesAttributeNode(attr);
		$nc(this->fDTDTypes)->insertElementAt(attrType, index);
		$nc(this->fAugmentations)->insertElementAt($$new($AugmentationsImpl), index);
		attr->setSpecified(false);
	} else {
	}
	return index;
}

void DOMNormalizer$XMLAttributesProxy::removeAllAttributes() {
}

void DOMNormalizer$XMLAttributesProxy::removeAttributeAt(int32_t attrIndex) {
}

int32_t DOMNormalizer$XMLAttributesProxy::getLength() {
	return (this->fAttributes != nullptr) ? $nc(this->fAttributes)->getLength() : 0;
}

int32_t DOMNormalizer$XMLAttributesProxy::getIndex($String* qName) {
	return -1;
}

int32_t DOMNormalizer$XMLAttributesProxy::getIndex($String* uri, $String* localPart) {
	return -1;
}

void DOMNormalizer$XMLAttributesProxy::setName(int32_t attrIndex, $QName* attrName) {
}

void DOMNormalizer$XMLAttributesProxy::getName(int32_t attrIndex, $QName* attrName) {
	if (this->fAttributes != nullptr) {
		this->this$0->updateQName($cast($Node, $($nc(this->fAttributes)->getItem(attrIndex))), attrName);
	}
}

$String* DOMNormalizer$XMLAttributesProxy::getPrefix(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (this->fAttributes != nullptr) {
		$var($Node, node, $cast($Node, $nc(this->fAttributes)->getItem(index)));
		$var($String, prefix, $nc(node)->getPrefix());
		$assign(prefix, (prefix != nullptr && prefix->length() != 0) ? $nc(this->this$0->fSymbolTable)->addSymbol(prefix) : ($String*)nullptr);
		return prefix;
	}
	return nullptr;
}

$String* DOMNormalizer$XMLAttributesProxy::getURI(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (this->fAttributes != nullptr) {
		$var($Node, node, $cast($Node, $nc(this->fAttributes)->getItem(index)));
		$var($String, namespace$, $nc(node)->getNamespaceURI());
		$assign(namespace$, (namespace$ != nullptr) ? $nc(this->this$0->fSymbolTable)->addSymbol(namespace$) : ($String*)nullptr);
		return namespace$;
	}
	return nullptr;
}

$String* DOMNormalizer$XMLAttributesProxy::getLocalName(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (this->fAttributes != nullptr) {
		$var($Node, node, $cast($Node, $nc(this->fAttributes)->getItem(index)));
		$var($String, localName, $nc(node)->getLocalName());
		$assign(localName, (localName != nullptr) ? $nc(this->this$0->fSymbolTable)->addSymbol(localName) : ($String*)nullptr);
		return localName;
	}
	return nullptr;
}

$String* DOMNormalizer$XMLAttributesProxy::getQName(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (this->fAttributes != nullptr) {
		$var($Node, node, $cast($Node, $nc(this->fAttributes)->getItem(index)));
		$var($String, rawname, $nc(this->this$0->fSymbolTable)->addSymbol($($nc(node)->getNodeName())));
		return rawname;
	}
	return nullptr;
}

$QName* DOMNormalizer$XMLAttributesProxy::getQualifiedName(int32_t index) {
	return nullptr;
}

void DOMNormalizer$XMLAttributesProxy::setType(int32_t attrIndex, $String* attrType) {
	$nc(this->fDTDTypes)->setElementAt(attrType, attrIndex);
}

$String* DOMNormalizer$XMLAttributesProxy::getType(int32_t index) {
	$var($String, type, $cast($String, $nc(this->fDTDTypes)->elementAt(index)));
	return (type != nullptr) ? getReportableType(type) : "CDATA"_s;
}

$String* DOMNormalizer$XMLAttributesProxy::getType($String* qName) {
	return "CDATA"_s;
}

$String* DOMNormalizer$XMLAttributesProxy::getType($String* uri, $String* localName) {
	return "CDATA"_s;
}

$String* DOMNormalizer$XMLAttributesProxy::getReportableType($String* type) {
	if ($nc(type)->charAt(0) == u'(') {
		return "NMTOKEN"_s;
	}
	return type;
}

void DOMNormalizer$XMLAttributesProxy::setValue(int32_t attrIndex, $String* attrValue) {
	if (this->fAttributes != nullptr) {
		$var($AttrImpl, attr, $cast($AttrImpl, $nc(this->fAttributes)->getItem(attrIndex)));
		bool specified = $nc(attr)->getSpecified();
		attr->setValue(attrValue);
		attr->setSpecified(specified);
	}
}

void DOMNormalizer$XMLAttributesProxy::setValue(int32_t attrIndex, $String* attrValue, $XMLString* value) {
	setValue(attrIndex, $($nc(value)->toString()));
}

$String* DOMNormalizer$XMLAttributesProxy::getValue(int32_t index) {
	return (this->fAttributes != nullptr) ? $nc($($nc(this->fAttributes)->item(index)))->getNodeValue() : ""_s;
}

$String* DOMNormalizer$XMLAttributesProxy::getValue($String* qName) {
	return nullptr;
}

$String* DOMNormalizer$XMLAttributesProxy::getValue($String* uri, $String* localName) {
	if (this->fAttributes != nullptr) {
		$var($Node, node, $nc(this->fAttributes)->getNamedItemNS(uri, localName));
		return (node != nullptr) ? $nc(node)->getNodeValue() : ($String*)nullptr;
	}
	return nullptr;
}

void DOMNormalizer$XMLAttributesProxy::setNonNormalizedValue(int32_t attrIndex, $String* attrValue) {
}

$String* DOMNormalizer$XMLAttributesProxy::getNonNormalizedValue(int32_t attrIndex) {
	return nullptr;
}

void DOMNormalizer$XMLAttributesProxy::setSpecified(int32_t attrIndex, bool specified) {
	$var($AttrImpl, attr, $cast($AttrImpl, $nc(this->fAttributes)->getItem(attrIndex)));
	$nc(attr)->setSpecified(specified);
}

bool DOMNormalizer$XMLAttributesProxy::isSpecified(int32_t attrIndex) {
	return $nc(($cast($Attr, $($nc(this->fAttributes)->getItem(attrIndex)))))->getSpecified();
}

$Augmentations* DOMNormalizer$XMLAttributesProxy::getAugmentations(int32_t attributeIndex) {
	return $cast($Augmentations, $nc(this->fAugmentations)->elementAt(attributeIndex));
}

$Augmentations* DOMNormalizer$XMLAttributesProxy::getAugmentations($String* uri, $String* localPart) {
	return nullptr;
}

$Augmentations* DOMNormalizer$XMLAttributesProxy::getAugmentations($String* qName) {
	return nullptr;
}

void DOMNormalizer$XMLAttributesProxy::setAugmentations(int32_t attrIndex, $Augmentations* augs) {
	$nc(this->fAugmentations)->setElementAt(augs, attrIndex);
}

DOMNormalizer$XMLAttributesProxy::DOMNormalizer$XMLAttributesProxy() {
}

$Class* DOMNormalizer$XMLAttributesProxy::load$($String* name, bool initialize) {
	$loadClass(DOMNormalizer$XMLAttributesProxy, name, initialize, &_DOMNormalizer$XMLAttributesProxy_ClassInfo_, allocate$DOMNormalizer$XMLAttributesProxy);
	return class$;
}

$Class* DOMNormalizer$XMLAttributesProxy::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com