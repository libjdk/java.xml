#include <com/sun/org/apache/xerces/internal/dom/DOMLocatorImpl.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMLocator = ::org::w3c::dom::DOMLocator;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DOMLocatorImpl_FieldInfo_[] = {
	{"fColumnNumber", "I", nullptr, $PUBLIC, $field(DOMLocatorImpl, fColumnNumber)},
	{"fLineNumber", "I", nullptr, $PUBLIC, $field(DOMLocatorImpl, fLineNumber)},
	{"fRelatedNode", "Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $field(DOMLocatorImpl, fRelatedNode)},
	{"fUri", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DOMLocatorImpl, fUri)},
	{"fByteOffset", "I", nullptr, $PUBLIC, $field(DOMLocatorImpl, fByteOffset)},
	{"fUtf16Offset", "I", nullptr, $PUBLIC, $field(DOMLocatorImpl, fUtf16Offset)},
	{}
};

$MethodInfo _DOMLocatorImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMLocatorImpl::*)()>(&DOMLocatorImpl::init$))},
	{"<init>", "(IILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMLocatorImpl::*)(int32_t,int32_t,$String*)>(&DOMLocatorImpl::init$))},
	{"<init>", "(IIILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMLocatorImpl::*)(int32_t,int32_t,int32_t,$String*)>(&DOMLocatorImpl::init$))},
	{"<init>", "(IIILorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMLocatorImpl::*)(int32_t,int32_t,int32_t,$Node*,$String*)>(&DOMLocatorImpl::init$))},
	{"<init>", "(IIILorg/w3c/dom/Node;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(DOMLocatorImpl::*)(int32_t,int32_t,int32_t,$Node*,$String*,int32_t)>(&DOMLocatorImpl::init$))},
	{"getByteOffset", "()I", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getRelatedNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getUri", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUtf16Offset", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMLocatorImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMLocatorImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMLocator",
	_DOMLocatorImpl_FieldInfo_,
	_DOMLocatorImpl_MethodInfo_
};

$Object* allocate$DOMLocatorImpl($Class* clazz) {
	return $of($alloc(DOMLocatorImpl));
}

void DOMLocatorImpl::init$() {
	this->fColumnNumber = -1;
	this->fLineNumber = -1;
	$set(this, fRelatedNode, nullptr);
	$set(this, fUri, nullptr);
	this->fByteOffset = -1;
	this->fUtf16Offset = -1;
}

void DOMLocatorImpl::init$(int32_t lineNumber, int32_t columnNumber, $String* uri) {
	this->fColumnNumber = -1;
	this->fLineNumber = -1;
	$set(this, fRelatedNode, nullptr);
	$set(this, fUri, nullptr);
	this->fByteOffset = -1;
	this->fUtf16Offset = -1;
	this->fLineNumber = lineNumber;
	this->fColumnNumber = columnNumber;
	$set(this, fUri, uri);
}

void DOMLocatorImpl::init$(int32_t lineNumber, int32_t columnNumber, int32_t utf16Offset, $String* uri) {
	this->fColumnNumber = -1;
	this->fLineNumber = -1;
	$set(this, fRelatedNode, nullptr);
	$set(this, fUri, nullptr);
	this->fByteOffset = -1;
	this->fUtf16Offset = -1;
	this->fLineNumber = lineNumber;
	this->fColumnNumber = columnNumber;
	$set(this, fUri, uri);
	this->fUtf16Offset = utf16Offset;
}

void DOMLocatorImpl::init$(int32_t lineNumber, int32_t columnNumber, int32_t byteoffset, $Node* relatedData, $String* uri) {
	this->fColumnNumber = -1;
	this->fLineNumber = -1;
	$set(this, fRelatedNode, nullptr);
	$set(this, fUri, nullptr);
	this->fByteOffset = -1;
	this->fUtf16Offset = -1;
	this->fLineNumber = lineNumber;
	this->fColumnNumber = columnNumber;
	this->fByteOffset = byteoffset;
	$set(this, fRelatedNode, relatedData);
	$set(this, fUri, uri);
}

void DOMLocatorImpl::init$(int32_t lineNumber, int32_t columnNumber, int32_t byteoffset, $Node* relatedData, $String* uri, int32_t utf16Offset) {
	this->fColumnNumber = -1;
	this->fLineNumber = -1;
	$set(this, fRelatedNode, nullptr);
	$set(this, fUri, nullptr);
	this->fByteOffset = -1;
	this->fUtf16Offset = -1;
	this->fLineNumber = lineNumber;
	this->fColumnNumber = columnNumber;
	this->fByteOffset = byteoffset;
	$set(this, fRelatedNode, relatedData);
	$set(this, fUri, uri);
	this->fUtf16Offset = utf16Offset;
}

int32_t DOMLocatorImpl::getLineNumber() {
	return this->fLineNumber;
}

int32_t DOMLocatorImpl::getColumnNumber() {
	return this->fColumnNumber;
}

$String* DOMLocatorImpl::getUri() {
	return this->fUri;
}

$Node* DOMLocatorImpl::getRelatedNode() {
	return this->fRelatedNode;
}

int32_t DOMLocatorImpl::getByteOffset() {
	return this->fByteOffset;
}

int32_t DOMLocatorImpl::getUtf16Offset() {
	return this->fUtf16Offset;
}

DOMLocatorImpl::DOMLocatorImpl() {
}

$Class* DOMLocatorImpl::load$($String* name, bool initialize) {
	$loadClass(DOMLocatorImpl, name, initialize, &_DOMLocatorImpl_ClassInfo_, allocate$DOMLocatorImpl);
	return class$;
}

$Class* DOMLocatorImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com