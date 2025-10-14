#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef CHANGED
#undef DOM_DOMAIN
#undef HASDEFAULTS
#undef NOT_FOUND_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef READONLY
#undef WRONG_DOCUMENT_ERR

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $DOMException = ::org::w3c::dom::DOMException;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _NamedNodeMapImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NamedNodeMapImpl, serialVersionUID)},
	{"flags", "S", nullptr, $PROTECTED, $field(NamedNodeMapImpl, flags)},
	{"READONLY", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NamedNodeMapImpl, READONLY)},
	{"CHANGED", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NamedNodeMapImpl, CHANGED)},
	{"HASDEFAULTS", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NamedNodeMapImpl, HASDEFAULTS)},
	{"nodes", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Node;>;", $PROTECTED, $field(NamedNodeMapImpl, nodes)},
	{"ownerNode", "Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;", nullptr, $PROTECTED, $field(NamedNodeMapImpl, ownerNode)},
	{}
};

$MethodInfo _NamedNodeMapImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, $PROTECTED, $method(static_cast<void(NamedNodeMapImpl::*)($NodeImpl*)>(&NamedNodeMapImpl::init$))},
	{"addItem", "(Lorg/w3c/dom/Node;)I", nullptr, $PROTECTED},
	{"changed", "()Z", nullptr, $FINAL, $method(static_cast<bool(NamedNodeMapImpl::*)()>(&NamedNodeMapImpl::changed))},
	{"changed", "(Z)V", nullptr, $FINAL, $method(static_cast<void(NamedNodeMapImpl::*)(bool)>(&NamedNodeMapImpl::changed))},
	{"cloneContent", "(Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;)V", nullptr, $PROTECTED},
	{"cloneMap", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)Lcom/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl;", nullptr, $PUBLIC},
	{"cloneMap", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Lorg/w3c/dom/Node;>;)Ljava/util/List<Lorg/w3c/dom/Node;>;", $PROTECTED},
	{"findNamePoint", "(Ljava/lang/String;I)I", nullptr, $PROTECTED},
	{"findNamePoint", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"getItem", "(I)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNamedItemIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"getNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getReadOnly", "()Z", nullptr, 0},
	{"hasDefaults", "()Z", nullptr, $FINAL, $method(static_cast<bool(NamedNodeMapImpl::*)()>(&NamedNodeMapImpl::hasDefaults))},
	{"hasDefaults", "(Z)V", nullptr, $FINAL, $method(static_cast<void(NamedNodeMapImpl::*)(bool)>(&NamedNodeMapImpl::hasDefaults))},
	{"isReadOnly", "()Z", nullptr, $FINAL, $method(static_cast<bool(NamedNodeMapImpl::*)()>(&NamedNodeMapImpl::isReadOnly))},
	{"isReadOnly", "(Z)V", nullptr, $FINAL, $method(static_cast<void(NamedNodeMapImpl::*)(bool)>(&NamedNodeMapImpl::isReadOnly))},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"precedes", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Z", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NamedNodeMapImpl::*)($ObjectInputStream*)>(&NamedNodeMapImpl::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeItem", "(I)V", nullptr, $PROTECTED},
	{"removeNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"removeNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setNamedItem", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setNamedItemNS", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setOwnerDocument", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;)V", nullptr, $PROTECTED},
	{"setReadOnly", "(ZZ)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NamedNodeMapImpl::*)($ObjectOutputStream*)>(&NamedNodeMapImpl::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _NamedNodeMapImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.NamedNodeMapImpl",
	"java.lang.Object",
	"org.w3c.dom.NamedNodeMap,java.io.Serializable",
	_NamedNodeMapImpl_FieldInfo_,
	_NamedNodeMapImpl_MethodInfo_
};

$Object* allocate$NamedNodeMapImpl($Class* clazz) {
	return $of($alloc(NamedNodeMapImpl));
}

int32_t NamedNodeMapImpl::hashCode() {
	 return this->$NamedNodeMap::hashCode();
}

bool NamedNodeMapImpl::equals(Object$* arg0) {
	 return this->$NamedNodeMap::equals(arg0);
}

$Object* NamedNodeMapImpl::clone() {
	 return this->$NamedNodeMap::clone();
}

$String* NamedNodeMapImpl::toString() {
	 return this->$NamedNodeMap::toString();
}

void NamedNodeMapImpl::finalize() {
	this->$NamedNodeMap::finalize();
}

void NamedNodeMapImpl::init$($NodeImpl* ownerNode) {
	$set(this, ownerNode, ownerNode);
}

int32_t NamedNodeMapImpl::getLength() {
	return (this->nodes != nullptr) ? $nc(this->nodes)->size() : 0;
}

$Node* NamedNodeMapImpl::item(int32_t index) {
	return (this->nodes != nullptr && index < $nc(this->nodes)->size()) ? ($cast($Node, $nc(this->nodes)->get(index))) : ($Node*)nullptr;
}

$Node* NamedNodeMapImpl::getNamedItem($String* name) {
	int32_t i = findNamePoint(name, 0);
	return (i < 0) ? ($Node*)nullptr : ($cast($Node, $nc(this->nodes)->get(i)));
}

$Node* NamedNodeMapImpl::getNamedItemNS($String* namespaceURI, $String* localName) {
	int32_t i = findNamePoint(namespaceURI, localName);
	return (i < 0) ? ($Node*)nullptr : ($cast($Node, $nc(this->nodes)->get(i)));
}

$Node* NamedNodeMapImpl::setNamedItem($Node* arg) {
	$var($CoreDocumentImpl, ownerDocument, $nc(this->ownerNode)->ownerDocument());
	if ($nc(ownerDocument)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(arg)->getOwnerDocument(), ownerDocument)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
		}
	}
	int32_t i = findNamePoint($($nc(arg)->getNodeName()), 0);
	$var($NodeImpl, previous, nullptr);
	if (i >= 0) {
		$assign(previous, $cast($NodeImpl, $nc(this->nodes)->get(i)));
		$nc(this->nodes)->set(i, arg);
	} else {
		i = -1 - i;
		if (nullptr == this->nodes) {
			$set(this, nodes, $new($ArrayList, 5));
		}
		$nc(this->nodes)->add(i, arg);
	}
	return previous;
}

$Node* NamedNodeMapImpl::setNamedItemNS($Node* arg) {
	$var($CoreDocumentImpl, ownerDocument, $nc(this->ownerNode)->ownerDocument());
	if ($nc(ownerDocument)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (!$equals($nc(arg)->getOwnerDocument(), ownerDocument)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
		}
	}
	$var($String, var$0, $nc(arg)->getNamespaceURI());
	int32_t i = findNamePoint(var$0, $(arg->getLocalName()));
	$var($NodeImpl, previous, nullptr);
	if (i >= 0) {
		$assign(previous, $cast($NodeImpl, $nc(this->nodes)->get(i)));
		$nc(this->nodes)->set(i, arg);
	} else {
		i = findNamePoint($($nc(arg)->getNodeName()), 0);
		if (i >= 0) {
			$assign(previous, $cast($NodeImpl, $nc(this->nodes)->get(i)));
			$nc(this->nodes)->add(i, arg);
		} else {
			i = -1 - i;
			if (nullptr == this->nodes) {
				$set(this, nodes, $new($ArrayList, 5));
			}
			$nc(this->nodes)->add(i, arg);
		}
	}
	return previous;
}

$Node* NamedNodeMapImpl::removeNamedItem($String* name) {
	if (isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	int32_t i = findNamePoint(name, 0);
	if (i < 0) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
	}
	$var($NodeImpl, n, $cast($NodeImpl, $nc(this->nodes)->get(i)));
	$nc(this->nodes)->remove(i);
	return n;
}

$Node* NamedNodeMapImpl::removeNamedItemNS($String* namespaceURI, $String* name) {
	if (isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	int32_t i = findNamePoint(namespaceURI, name);
	if (i < 0) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_FOUND_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
	}
	$var($NodeImpl, n, $cast($NodeImpl, $nc(this->nodes)->get(i)));
	$nc(this->nodes)->remove(i);
	return n;
}

NamedNodeMapImpl* NamedNodeMapImpl::cloneMap($NodeImpl* ownerNode) {
	$var(NamedNodeMapImpl, newmap, $new(NamedNodeMapImpl, ownerNode));
	newmap->cloneContent(this);
	return newmap;
}

void NamedNodeMapImpl::cloneContent(NamedNodeMapImpl* srcmap) {
	$var($List, srcnodes, $nc(srcmap)->nodes);
	if (srcnodes != nullptr) {
		int32_t size = srcnodes->size();
		if (size != 0) {
			if (this->nodes == nullptr) {
				$set(this, nodes, $new($ArrayList, size));
			} else {
				$nc(this->nodes)->clear();
			}
			for (int32_t i = 0; i < size; ++i) {
				$var($NodeImpl, n, $cast($NodeImpl, $nc(srcmap->nodes)->get(i)));
				$var($NodeImpl, clone, $cast($NodeImpl, $nc(n)->cloneNode(true)));
				$nc(clone)->isSpecified(n->isSpecified());
				$nc(this->nodes)->add(clone);
			}
		}
	}
}

void NamedNodeMapImpl::setReadOnly(bool readOnly, bool deep) {
	isReadOnly(readOnly);
	if (deep && this->nodes != nullptr) {
		for (int32_t i = $nc(this->nodes)->size() - 1; i >= 0; --i) {
			$nc(($cast($NodeImpl, $($nc(this->nodes)->get(i)))))->setReadOnly(readOnly, deep);
		}
	}
}

bool NamedNodeMapImpl::getReadOnly() {
	return isReadOnly();
}

void NamedNodeMapImpl::setOwnerDocument($CoreDocumentImpl* doc) {
	if (this->nodes != nullptr) {
		int32_t size = $nc(this->nodes)->size();
		for (int32_t i = 0; i < size; ++i) {
			$nc(($cast($NodeImpl, $(item(i)))))->setOwnerDocument(doc);
		}
	}
}

bool NamedNodeMapImpl::isReadOnly() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NamedNodeMapImpl::READONLY)) != 0;
}

void NamedNodeMapImpl::isReadOnly(bool value) {
	this->flags = (int16_t)(value ? this->flags | NamedNodeMapImpl::READONLY : (int32_t)(this->flags & (uint32_t)~NamedNodeMapImpl::READONLY));
}

bool NamedNodeMapImpl::changed() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NamedNodeMapImpl::CHANGED)) != 0;
}

void NamedNodeMapImpl::changed(bool value) {
	this->flags = (int16_t)(value ? this->flags | NamedNodeMapImpl::CHANGED : (int32_t)(this->flags & (uint32_t)~NamedNodeMapImpl::CHANGED));
}

bool NamedNodeMapImpl::hasDefaults() {
	return ((int32_t)(this->flags & (uint32_t)(int32_t)NamedNodeMapImpl::HASDEFAULTS)) != 0;
}

void NamedNodeMapImpl::hasDefaults(bool value) {
	this->flags = (int16_t)(value ? this->flags | NamedNodeMapImpl::HASDEFAULTS : (int32_t)(this->flags & (uint32_t)~NamedNodeMapImpl::HASDEFAULTS));
}

int32_t NamedNodeMapImpl::findNamePoint($String* name, int32_t start) {
	int32_t i = 0;
	if (this->nodes != nullptr) {
		int32_t first = start;
		int32_t last = $nc(this->nodes)->size() - 1;
		while (first <= last) {
			i = (first + last) / 2;
			int32_t test = $nc(name)->compareTo($($nc(($cast($Node, $($nc(this->nodes)->get(i)))))->getNodeName()));
			if (test == 0) {
				return i;
			} else if (test < 0) {
				last = i - 1;
			} else {
				first = i + 1;
			}
		}
		if (first > i) {
			i = first;
		}
	}
	return -1 - i;
}

int32_t NamedNodeMapImpl::findNamePoint($String* namespaceURI, $String* name) {
	if (this->nodes == nullptr) {
		return -1;
	}
	if (name == nullptr) {
		return -1;
	}
	int32_t size = $nc(this->nodes)->size();
	for (int32_t i = 0; i < size; ++i) {
		$var($NodeImpl, a, $cast($NodeImpl, $nc(this->nodes)->get(i)));
		$var($String, aNamespaceURI, $nc(a)->getNamespaceURI());
		$var($String, aLocalName, a->getLocalName());
		if (namespaceURI == nullptr) {
			bool var$0 = aNamespaceURI == nullptr;
			if (var$0) {
				bool var$1 = $nc(name)->equals(aLocalName);
				var$0 = (var$1 || (aLocalName == nullptr && $nc(name)->equals($(a->getNodeName()))));
			}
			if (var$0) {
				return i;
			}
		} else {
			bool var$3 = namespaceURI->equals(aNamespaceURI);
			if (var$3 && name->equals(aLocalName)) {
				return i;
			}
		}
	}
	return -1;
}

bool NamedNodeMapImpl::precedes($Node* a, $Node* b) {
	if (this->nodes != nullptr) {
		int32_t size = $nc(this->nodes)->size();
		for (int32_t i = 0; i < size; ++i) {
			$var($Node, n, $cast($Node, $nc(this->nodes)->get(i)));
			if (n == a) {
				return true;
			}
			if (n == b) {
				return false;
			}
		}
	}
	return false;
}

void NamedNodeMapImpl::removeItem(int32_t index) {
	if (this->nodes != nullptr && index < $nc(this->nodes)->size()) {
		$nc(this->nodes)->remove(index);
	}
}

$Object* NamedNodeMapImpl::getItem(int32_t index) {
	if (this->nodes != nullptr) {
		return $of($nc(this->nodes)->get(index));
	}
	return $of(nullptr);
}

int32_t NamedNodeMapImpl::addItem($Node* arg) {
	$var($String, var$0, $nc(arg)->getNamespaceURI());
	int32_t i = findNamePoint(var$0, $(arg->getLocalName()));
	if (i >= 0) {
		$nc(this->nodes)->set(i, arg);
	} else {
		i = findNamePoint($($nc(arg)->getNodeName()), 0);
		if (i >= 0) {
			$nc(this->nodes)->add(i, arg);
		} else {
			i = -1 - i;
			if (nullptr == this->nodes) {
				$set(this, nodes, $new($ArrayList, 5));
			}
			$nc(this->nodes)->add(i, arg);
		}
	}
	return i;
}

$List* NamedNodeMapImpl::cloneMap($List* list$renamed) {
	$var($List, list, list$renamed);
	if (this->nodes != nullptr) {
		$assign(list, $new($ArrayList, static_cast<$Collection*>(this->nodes)));
	}
	return list;
}

int32_t NamedNodeMapImpl::getNamedItemIndex($String* namespaceURI, $String* localName) {
	return findNamePoint(namespaceURI, localName);
}

void NamedNodeMapImpl::removeAll() {
	if (this->nodes != nullptr) {
		$nc(this->nodes)->clear();
	}
}

void NamedNodeMapImpl::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
	if (this->nodes != nullptr) {
		$set(this, nodes, $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($cast($Vector, this->nodes))))));
	}
}

void NamedNodeMapImpl::writeObject($ObjectOutputStream* out) {
	$var($List, oldNodes, this->nodes);
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (oldNodes != nullptr) {
				$set(this, nodes, $new($Vector, static_cast<$Collection*>(oldNodes)));
			}
			$nc(out)->defaultWriteObject();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$set(this, nodes, oldNodes);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

NamedNodeMapImpl::NamedNodeMapImpl() {
}

$Class* NamedNodeMapImpl::load$($String* name, bool initialize) {
	$loadClass(NamedNodeMapImpl, name, initialize, &_NamedNodeMapImpl_ClassInfo_, allocate$NamedNodeMapImpl);
	return class$;
}

$Class* NamedNodeMapImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com