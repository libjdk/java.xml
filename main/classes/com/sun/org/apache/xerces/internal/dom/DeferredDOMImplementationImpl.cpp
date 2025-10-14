#include <com/sun/org/apache/xerces/internal/dom/DeferredDOMImplementationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <jcpp.h>

using $CoreDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl;
using $DOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DeferredDOMImplementationImpl_FieldInfo_[] = {
	{"singleton", "Lcom/sun/org/apache/xerces/internal/dom/DeferredDOMImplementationImpl;", nullptr, $STATIC, $staticField(DeferredDOMImplementationImpl, singleton)},
	{}
};

$MethodInfo _DeferredDOMImplementationImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeferredDOMImplementationImpl::*)()>(&DeferredDOMImplementationImpl::init$))},
	{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DOMImplementation*(*)()>(&DeferredDOMImplementationImpl::getDOMImplementation))},
	{}
};

$ClassInfo _DeferredDOMImplementationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredDOMImplementationImpl",
	"com.sun.org.apache.xerces.internal.dom.DOMImplementationImpl",
	nullptr,
	_DeferredDOMImplementationImpl_FieldInfo_,
	_DeferredDOMImplementationImpl_MethodInfo_
};

$Object* allocate$DeferredDOMImplementationImpl($Class* clazz) {
	return $of($alloc(DeferredDOMImplementationImpl));
}


DeferredDOMImplementationImpl* DeferredDOMImplementationImpl::singleton = nullptr;

void DeferredDOMImplementationImpl::init$() {
	$DOMImplementationImpl::init$();
}

$DOMImplementation* DeferredDOMImplementationImpl::getDOMImplementation() {
	$init(DeferredDOMImplementationImpl);
	return DeferredDOMImplementationImpl::singleton;
}

void clinit$DeferredDOMImplementationImpl($Class* class$) {
	$assignStatic(DeferredDOMImplementationImpl::singleton, $new(DeferredDOMImplementationImpl));
}

DeferredDOMImplementationImpl::DeferredDOMImplementationImpl() {
}

$Class* DeferredDOMImplementationImpl::load$($String* name, bool initialize) {
	$loadClass(DeferredDOMImplementationImpl, name, initialize, &_DeferredDOMImplementationImpl_ClassInfo_, clinit$DeferredDOMImplementationImpl, allocate$DeferredDOMImplementationImpl);
	return class$;
}

$Class* DeferredDOMImplementationImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com