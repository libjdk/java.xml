#include <com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EMPTY_LIST
#undef NOTATION_DECLARATION

using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSNotationDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSNotationDecl_FieldInfo_[] = {
	{"fName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSNotationDecl, fName)},
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSNotationDecl, fTargetNamespace)},
	{"fPublicId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSNotationDecl, fPublicId)},
	{"fSystemId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSNotationDecl, fSystemId)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSNotationDecl, fAnnotations)},
	{"fNamespaceItem", "Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PRIVATE, $field(XSNotationDecl, fNamespaceItem)},
	{}
};

$MethodInfo _XSNotationDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XSNotationDecl::*)()>(&XSNotationDecl::init$))},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()S", nullptr, $PUBLIC},
	{"setNamespaceItem", "(Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;)V", nullptr, 0},
	{}
};

$ClassInfo _XSNotationDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSNotationDecl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSNotationDeclaration",
	_XSNotationDecl_FieldInfo_,
	_XSNotationDecl_MethodInfo_
};

$Object* allocate$XSNotationDecl($Class* clazz) {
	return $of($alloc(XSNotationDecl));
}

void XSNotationDecl::init$() {
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	$set(this, fPublicId, nullptr);
	$set(this, fSystemId, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fNamespaceItem, nullptr);
}

int16_t XSNotationDecl::getType() {
	return $XSConstants::NOTATION_DECLARATION;
}

$String* XSNotationDecl::getName() {
	return this->fName;
}

$String* XSNotationDecl::getNamespace() {
	return this->fTargetNamespace;
}

$String* XSNotationDecl::getSystemId() {
	return this->fSystemId;
}

$String* XSNotationDecl::getPublicId() {
	return this->fPublicId;
}

$XSAnnotation* XSNotationDecl::getAnnotation() {
	return (this->fAnnotations != nullptr) ? $cast($XSAnnotation, $nc(this->fAnnotations)->item(0)) : ($XSAnnotation*)nullptr;
}

$XSObjectList* XSNotationDecl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$XSNamespaceItem* XSNotationDecl::getNamespaceItem() {
	return this->fNamespaceItem;
}

void XSNotationDecl::setNamespaceItem($XSNamespaceItem* namespaceItem) {
	$set(this, fNamespaceItem, namespaceItem);
}

XSNotationDecl::XSNotationDecl() {
}

$Class* XSNotationDecl::load$($String* name, bool initialize) {
	$loadClass(XSNotationDecl, name, initialize, &_XSNotationDecl_ClassInfo_, allocate$XSNotationDecl);
	return class$;
}

$Class* XSNotationDecl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com