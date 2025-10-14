#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$ValidationContextImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _XSSimpleTypeDecl$ValidationContextImpl_FieldInfo_[] = {
	{"fExternal", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;", nullptr, $FINAL, $field(XSSimpleTypeDecl$ValidationContextImpl, fExternal)},
	{"fNSContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, 0, $field(XSSimpleTypeDecl$ValidationContextImpl, fNSContext)},
	{}
};

$MethodInfo _XSSimpleTypeDecl$ValidationContextImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, 0, $method(static_cast<void(XSSimpleTypeDecl$ValidationContextImpl::*)($ValidationContext*)>(&XSSimpleTypeDecl$ValidationContextImpl::init$))},
	{"addId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addIdRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getSymbol", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isIdDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"needExtraChecking", "()Z", nullptr, $PUBLIC},
	{"needFacetChecking", "()Z", nullptr, $PUBLIC},
	{"needToNormalize", "()Z", nullptr, $PUBLIC},
	{"setNSContext", "(Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, 0, $method(static_cast<void(XSSimpleTypeDecl$ValidationContextImpl::*)($NamespaceContext*)>(&XSSimpleTypeDecl$ValidationContextImpl::setNSContext))},
	{"useNamespaces", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSSimpleTypeDecl$ValidationContextImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$ValidationContextImpl", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "ValidationContextImpl", $STATIC | $FINAL},
	{}
};

$ClassInfo _XSSimpleTypeDecl$ValidationContextImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$ValidationContextImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.ValidationContext",
	_XSSimpleTypeDecl$ValidationContextImpl_FieldInfo_,
	_XSSimpleTypeDecl$ValidationContextImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XSSimpleTypeDecl$ValidationContextImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl"
};

$Object* allocate$XSSimpleTypeDecl$ValidationContextImpl($Class* clazz) {
	return $of($alloc(XSSimpleTypeDecl$ValidationContextImpl));
}

void XSSimpleTypeDecl$ValidationContextImpl::init$($ValidationContext* external) {
	$set(this, fExternal, external);
}

void XSSimpleTypeDecl$ValidationContextImpl::setNSContext($NamespaceContext* nsContext) {
	$set(this, fNSContext, nsContext);
}

bool XSSimpleTypeDecl$ValidationContextImpl::needFacetChecking() {
	return $nc(this->fExternal)->needFacetChecking();
}

bool XSSimpleTypeDecl$ValidationContextImpl::needExtraChecking() {
	return $nc(this->fExternal)->needExtraChecking();
}

bool XSSimpleTypeDecl$ValidationContextImpl::needToNormalize() {
	return $nc(this->fExternal)->needToNormalize();
}

bool XSSimpleTypeDecl$ValidationContextImpl::useNamespaces() {
	return true;
}

bool XSSimpleTypeDecl$ValidationContextImpl::isEntityDeclared($String* name) {
	return $nc(this->fExternal)->isEntityDeclared(name);
}

bool XSSimpleTypeDecl$ValidationContextImpl::isEntityUnparsed($String* name) {
	return $nc(this->fExternal)->isEntityUnparsed(name);
}

bool XSSimpleTypeDecl$ValidationContextImpl::isIdDeclared($String* name) {
	return $nc(this->fExternal)->isIdDeclared(name);
}

void XSSimpleTypeDecl$ValidationContextImpl::addId($String* name) {
	$nc(this->fExternal)->addId(name);
}

void XSSimpleTypeDecl$ValidationContextImpl::addIdRef($String* name) {
	$nc(this->fExternal)->addIdRef(name);
}

$String* XSSimpleTypeDecl$ValidationContextImpl::getSymbol($String* symbol) {
	return $nc(this->fExternal)->getSymbol(symbol);
}

$String* XSSimpleTypeDecl$ValidationContextImpl::getURI($String* prefix) {
	if (this->fNSContext == nullptr) {
		return $nc(this->fExternal)->getURI(prefix);
	} else {
		return $nc(this->fNSContext)->getURI(prefix);
	}
}

$Locale* XSSimpleTypeDecl$ValidationContextImpl::getLocale() {
	return $nc(this->fExternal)->getLocale();
}

XSSimpleTypeDecl$ValidationContextImpl::XSSimpleTypeDecl$ValidationContextImpl() {
}

$Class* XSSimpleTypeDecl$ValidationContextImpl::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDecl$ValidationContextImpl, name, initialize, &_XSSimpleTypeDecl$ValidationContextImpl_ClassInfo_, allocate$XSSimpleTypeDecl$ValidationContextImpl);
	return class$;
}

$Class* XSSimpleTypeDecl$ValidationContextImpl::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com