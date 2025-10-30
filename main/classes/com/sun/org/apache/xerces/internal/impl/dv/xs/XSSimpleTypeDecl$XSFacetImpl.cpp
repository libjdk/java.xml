#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$XSFacetImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef EMPTY_LIST
#undef FACET

using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSFacet = ::com::sun::org::apache::xerces::internal::xs::XSFacet;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _XSSimpleTypeDecl$XSFacetImpl_FieldInfo_[] = {
	{"kind", "S", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, kind)},
	{"svalue", "Ljava/lang/String;", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, svalue)},
	{"ivalue", "I", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, ivalue)},
	{"avalue", "Ljava/lang/Object;", nullptr, 0, $field(XSSimpleTypeDecl$XSFacetImpl, avalue)},
	{"fixed", "Z", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, fixed)},
	{"annotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, annotations)},
	{}
};

$MethodInfo _XSSimpleTypeDecl$XSFacetImpl_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;ILjava/lang/Object;ZLcom/sun/org/apache/xerces/internal/xs/XSAnnotation;)V", nullptr, $PUBLIC, $method(static_cast<void(XSSimpleTypeDecl$XSFacetImpl::*)(int16_t,$String*,int32_t,Object$*,bool,$XSAnnotation*)>(&XSSimpleTypeDecl$XSFacetImpl::init$))},
	{"getActualFacetValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC},
	{"getFacetKind", "()S", nullptr, $PUBLIC},
	{"getFixed", "()Z", nullptr, $PUBLIC},
	{"getIntFacetValue", "()I", nullptr, $PUBLIC},
	{"getLexicalFacetValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC},
	{"getType", "()S", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSSimpleTypeDecl$XSFacetImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSFacetImpl", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "XSFacetImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XSSimpleTypeDecl$XSFacetImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSFacetImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSFacet",
	_XSSimpleTypeDecl$XSFacetImpl_FieldInfo_,
	_XSSimpleTypeDecl$XSFacetImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XSSimpleTypeDecl$XSFacetImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl"
};

$Object* allocate$XSSimpleTypeDecl$XSFacetImpl($Class* clazz) {
	return $of($alloc(XSSimpleTypeDecl$XSFacetImpl));
}

void XSSimpleTypeDecl$XSFacetImpl::init$(int16_t kind, $String* svalue, int32_t ivalue, Object$* avalue, bool fixed, $XSAnnotation* annotation) {
	this->kind = kind;
	$set(this, svalue, svalue);
	this->ivalue = ivalue;
	$set(this, avalue, avalue);
	this->fixed = fixed;
	if (annotation != nullptr) {
		$set(this, annotations, $new($XSObjectListImpl));
		$nc(($cast($XSObjectListImpl, this->annotations)))->addXSObject(annotation);
	} else {
		$init($XSObjectListImpl);
		$set(this, annotations, $XSObjectListImpl::EMPTY_LIST);
	}
}

$XSAnnotation* XSSimpleTypeDecl$XSFacetImpl::getAnnotation() {
	return $cast($XSAnnotation, $nc(this->annotations)->item(0));
}

$XSObjectList* XSSimpleTypeDecl$XSFacetImpl::getAnnotations() {
	return this->annotations;
}

int16_t XSSimpleTypeDecl$XSFacetImpl::getFacetKind() {
	return this->kind;
}

$String* XSSimpleTypeDecl$XSFacetImpl::getLexicalFacetValue() {
	return this->svalue;
}

$Object* XSSimpleTypeDecl$XSFacetImpl::getActualFacetValue() {
	if (this->avalue == nullptr) {
		if (this->kind == (int16_t)16) {
			$set(this, avalue, this->svalue);
		} else {
			$set(this, avalue, $BigInteger::valueOf((int64_t)this->ivalue));
		}
	}
	return $of(this->avalue);
}

int32_t XSSimpleTypeDecl$XSFacetImpl::getIntFacetValue() {
	return this->ivalue;
}

bool XSSimpleTypeDecl$XSFacetImpl::getFixed() {
	return this->fixed;
}

$String* XSSimpleTypeDecl$XSFacetImpl::getName() {
	return nullptr;
}

$String* XSSimpleTypeDecl$XSFacetImpl::getNamespace() {
	return nullptr;
}

$XSNamespaceItem* XSSimpleTypeDecl$XSFacetImpl::getNamespaceItem() {
	return nullptr;
}

int16_t XSSimpleTypeDecl$XSFacetImpl::getType() {
	return $XSConstants::FACET;
}

XSSimpleTypeDecl$XSFacetImpl::XSSimpleTypeDecl$XSFacetImpl() {
}

$Class* XSSimpleTypeDecl$XSFacetImpl::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDecl$XSFacetImpl, name, initialize, &_XSSimpleTypeDecl$XSFacetImpl_ClassInfo_, allocate$XSSimpleTypeDecl$XSFacetImpl);
	return class$;
}

$Class* XSSimpleTypeDecl$XSFacetImpl::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com