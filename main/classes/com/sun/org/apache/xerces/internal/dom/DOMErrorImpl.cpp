#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMLocatorImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMLocator.h>
#include <jcpp.h>

#undef SEVERITY_WARNING

using $DOMLocatorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMLocator = ::org::w3c::dom::DOMLocator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DOMErrorImpl_FieldInfo_[] = {
	{"fSeverity", "S", nullptr, $PUBLIC, $field(DOMErrorImpl, fSeverity)},
	{"fMessage", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DOMErrorImpl, fMessage)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;", nullptr, $PUBLIC, $field(DOMErrorImpl, fLocator)},
	{"fException", "Ljava/lang/Exception;", nullptr, $PUBLIC, $field(DOMErrorImpl, fException)},
	{"fType", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DOMErrorImpl, fType)},
	{"fRelatedData", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DOMErrorImpl, fRelatedData)},
	{}
};

$MethodInfo _DOMErrorImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMErrorImpl::*)()>(&DOMErrorImpl::init$))},
	{"<init>", "(SLcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMErrorImpl::*)(int16_t,$XMLParseException*)>(&DOMErrorImpl::init$))},
	{"createDOMLocator", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;", nullptr, $PRIVATE, $method(static_cast<$DOMLocatorImpl*(DOMErrorImpl::*)($XMLParseException*)>(&DOMErrorImpl::createDOMLocator))},
	{"getLocation", "()Lorg/w3c/dom/DOMLocator;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRelatedData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getRelatedException", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSeverity", "()S", nullptr, $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMErrorImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMErrorImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMError",
	_DOMErrorImpl_FieldInfo_,
	_DOMErrorImpl_MethodInfo_
};

$Object* allocate$DOMErrorImpl($Class* clazz) {
	return $of($alloc(DOMErrorImpl));
}

void DOMErrorImpl::init$() {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fMessage, nullptr);
	$set(this, fLocator, $new($DOMLocatorImpl));
	$set(this, fException, nullptr);
}

void DOMErrorImpl::init$(int16_t severity, $XMLParseException* exception) {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fMessage, nullptr);
	$set(this, fLocator, $new($DOMLocatorImpl));
	$set(this, fException, nullptr);
	this->fSeverity = severity;
	$set(this, fException, exception);
	$set(this, fLocator, createDOMLocator(exception));
}

int16_t DOMErrorImpl::getSeverity() {
	return this->fSeverity;
}

$String* DOMErrorImpl::getMessage() {
	return this->fMessage;
}

$DOMLocator* DOMErrorImpl::getLocation() {
	return this->fLocator;
}

$DOMLocatorImpl* DOMErrorImpl::createDOMLocator($XMLParseException* exception) {
	int32_t var$0 = $nc(exception)->getLineNumber();
	int32_t var$1 = exception->getColumnNumber();
	int32_t var$2 = exception->getCharacterOffset();
	return $new($DOMLocatorImpl, var$0, var$1, var$2, $(exception->getExpandedSystemId()));
}

$Object* DOMErrorImpl::getRelatedException() {
	return $of(this->fException);
}

void DOMErrorImpl::reset() {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fException, nullptr);
}

$String* DOMErrorImpl::getType() {
	return this->fType;
}

$Object* DOMErrorImpl::getRelatedData() {
	return $of(this->fRelatedData);
}

DOMErrorImpl::DOMErrorImpl() {
}

$Class* DOMErrorImpl::load$($String* name, bool initialize) {
	$loadClass(DOMErrorImpl, name, initialize, &_DOMErrorImpl_ClassInfo_, allocate$DOMErrorImpl);
	return class$;
}

$Class* DOMErrorImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com