#include <com/sun/org/apache/xerces/internal/dom/DOMInputImpl.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DOMInputImpl_FieldInfo_[] = {
	{"fPublicId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DOMInputImpl, fPublicId)},
	{"fSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DOMInputImpl, fSystemId)},
	{"fBaseSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DOMInputImpl, fBaseSystemId)},
	{"fByteStream", "Ljava/io/InputStream;", nullptr, $PROTECTED, $field(DOMInputImpl, fByteStream)},
	{"fCharStream", "Ljava/io/Reader;", nullptr, $PROTECTED, $field(DOMInputImpl, fCharStream)},
	{"fData", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DOMInputImpl, fData)},
	{"fEncoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DOMInputImpl, fEncoding)},
	{"fCertifiedText", "Z", nullptr, $PROTECTED, $field(DOMInputImpl, fCertifiedText)},
	{}
};

$MethodInfo _DOMInputImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMInputImpl::*)()>(&DOMInputImpl::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMInputImpl::*)($String*,$String*,$String*)>(&DOMInputImpl::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMInputImpl::*)($String*,$String*,$String*,$InputStream*,$String*)>(&DOMInputImpl::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/io/Reader;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMInputImpl::*)($String*,$String*,$String*,$Reader*,$String*)>(&DOMInputImpl::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMInputImpl::*)($String*,$String*,$String*,$String*,$String*)>(&DOMInputImpl::init$))},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getByteStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getCertifiedText", "()Z", nullptr, $PUBLIC},
	{"getCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStringData", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setByteStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC},
	{"setCertifiedText", "(Z)V", nullptr, $PUBLIC},
	{"setCharacterStream", "(Ljava/io/Reader;)V", nullptr, $PUBLIC},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setStringData", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMInputImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMInputImpl",
	"java.lang.Object",
	"org.w3c.dom.ls.LSInput",
	_DOMInputImpl_FieldInfo_,
	_DOMInputImpl_MethodInfo_
};

$Object* allocate$DOMInputImpl($Class* clazz) {
	return $of($alloc(DOMInputImpl));
}

void DOMInputImpl::init$() {
	$set(this, fPublicId, nullptr);
	$set(this, fSystemId, nullptr);
	$set(this, fBaseSystemId, nullptr);
	$set(this, fByteStream, nullptr);
	$set(this, fCharStream, nullptr);
	$set(this, fData, nullptr);
	$set(this, fEncoding, nullptr);
	this->fCertifiedText = false;
}

void DOMInputImpl::init$($String* publicId, $String* systemId, $String* baseSystemId) {
	$set(this, fPublicId, nullptr);
	$set(this, fSystemId, nullptr);
	$set(this, fBaseSystemId, nullptr);
	$set(this, fByteStream, nullptr);
	$set(this, fCharStream, nullptr);
	$set(this, fData, nullptr);
	$set(this, fEncoding, nullptr);
	this->fCertifiedText = false;
	$set(this, fPublicId, publicId);
	$set(this, fSystemId, systemId);
	$set(this, fBaseSystemId, baseSystemId);
}

void DOMInputImpl::init$($String* publicId, $String* systemId, $String* baseSystemId, $InputStream* byteStream, $String* encoding) {
	$set(this, fPublicId, nullptr);
	$set(this, fSystemId, nullptr);
	$set(this, fBaseSystemId, nullptr);
	$set(this, fByteStream, nullptr);
	$set(this, fCharStream, nullptr);
	$set(this, fData, nullptr);
	$set(this, fEncoding, nullptr);
	this->fCertifiedText = false;
	$set(this, fPublicId, publicId);
	$set(this, fSystemId, systemId);
	$set(this, fBaseSystemId, baseSystemId);
	$set(this, fByteStream, byteStream);
	$set(this, fEncoding, encoding);
}

void DOMInputImpl::init$($String* publicId, $String* systemId, $String* baseSystemId, $Reader* charStream, $String* encoding) {
	$set(this, fPublicId, nullptr);
	$set(this, fSystemId, nullptr);
	$set(this, fBaseSystemId, nullptr);
	$set(this, fByteStream, nullptr);
	$set(this, fCharStream, nullptr);
	$set(this, fData, nullptr);
	$set(this, fEncoding, nullptr);
	this->fCertifiedText = false;
	$set(this, fPublicId, publicId);
	$set(this, fSystemId, systemId);
	$set(this, fBaseSystemId, baseSystemId);
	$set(this, fCharStream, charStream);
	$set(this, fEncoding, encoding);
}

void DOMInputImpl::init$($String* publicId, $String* systemId, $String* baseSystemId, $String* data, $String* encoding) {
	$set(this, fPublicId, nullptr);
	$set(this, fSystemId, nullptr);
	$set(this, fBaseSystemId, nullptr);
	$set(this, fByteStream, nullptr);
	$set(this, fCharStream, nullptr);
	$set(this, fData, nullptr);
	$set(this, fEncoding, nullptr);
	this->fCertifiedText = false;
	$set(this, fPublicId, publicId);
	$set(this, fSystemId, systemId);
	$set(this, fBaseSystemId, baseSystemId);
	$set(this, fData, data);
	$set(this, fEncoding, encoding);
}

$InputStream* DOMInputImpl::getByteStream() {
	return this->fByteStream;
}

void DOMInputImpl::setByteStream($InputStream* byteStream) {
	$set(this, fByteStream, byteStream);
}

$Reader* DOMInputImpl::getCharacterStream() {
	return this->fCharStream;
}

void DOMInputImpl::setCharacterStream($Reader* characterStream) {
	$set(this, fCharStream, characterStream);
}

$String* DOMInputImpl::getStringData() {
	return this->fData;
}

void DOMInputImpl::setStringData($String* stringData) {
	$set(this, fData, stringData);
}

$String* DOMInputImpl::getEncoding() {
	return this->fEncoding;
}

void DOMInputImpl::setEncoding($String* encoding) {
	$set(this, fEncoding, encoding);
}

$String* DOMInputImpl::getPublicId() {
	return this->fPublicId;
}

void DOMInputImpl::setPublicId($String* publicId) {
	$set(this, fPublicId, publicId);
}

$String* DOMInputImpl::getSystemId() {
	return this->fSystemId;
}

void DOMInputImpl::setSystemId($String* systemId) {
	$set(this, fSystemId, systemId);
}

$String* DOMInputImpl::getBaseURI() {
	return this->fBaseSystemId;
}

void DOMInputImpl::setBaseURI($String* baseURI) {
	$set(this, fBaseSystemId, baseURI);
}

bool DOMInputImpl::getCertifiedText() {
	return this->fCertifiedText;
}

void DOMInputImpl::setCertifiedText(bool certifiedText) {
	this->fCertifiedText = certifiedText;
}

DOMInputImpl::DOMInputImpl() {
}

$Class* DOMInputImpl::load$($String* name, bool initialize) {
	$loadClass(DOMInputImpl, name, initialize, &_DOMInputImpl_ClassInfo_, allocate$DOMInputImpl);
	return class$;
}

$Class* DOMInputImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com