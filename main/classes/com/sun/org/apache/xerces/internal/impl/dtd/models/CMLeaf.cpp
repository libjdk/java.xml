#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMLeaf.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CONTENTSPECNODE_LEAF

using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
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
							namespace dtd {
								namespace models {

$FieldInfo _CMLeaf_FieldInfo_[] = {
	{"fElement", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(CMLeaf, fElement)},
	{"fPosition", "I", nullptr, $PRIVATE, $field(CMLeaf, fPosition)},
	{}
};

$MethodInfo _CMLeaf_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/QName;I)V", nullptr, $PUBLIC, $method(static_cast<void(CMLeaf::*)($QName*,int32_t)>(&CMLeaf::init$))},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC, $method(static_cast<void(CMLeaf::*)($QName*)>(&CMLeaf::init$))},
	{"calcFirstPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED},
	{"calcLastPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED},
	{"getElement", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $FINAL, $method(static_cast<$QName*(CMLeaf::*)()>(&CMLeaf::getElement))},
	{"getPosition", "()I", nullptr, $FINAL, $method(static_cast<int32_t(CMLeaf::*)()>(&CMLeaf::getPosition))},
	{"isNullable", "()Z", nullptr, $PUBLIC},
	{"setPosition", "(I)V", nullptr, $FINAL, $method(static_cast<void(CMLeaf::*)(int32_t)>(&CMLeaf::setPosition))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CMLeaf_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMLeaf",
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode",
	nullptr,
	_CMLeaf_FieldInfo_,
	_CMLeaf_MethodInfo_
};

$Object* allocate$CMLeaf($Class* clazz) {
	return $of($alloc(CMLeaf));
}

void CMLeaf::init$($QName* element, int32_t position) {
	$CMNode::init$($XMLContentSpec::CONTENTSPECNODE_LEAF);
	$set(this, fElement, $new($QName));
	this->fPosition = -1;
	$nc(this->fElement)->setValues(element);
	this->fPosition = position;
}

void CMLeaf::init$($QName* element) {
	$CMNode::init$($XMLContentSpec::CONTENTSPECNODE_LEAF);
	$set(this, fElement, $new($QName));
	this->fPosition = -1;
	$nc(this->fElement)->setValues(element);
}

$QName* CMLeaf::getElement() {
	return this->fElement;
}

int32_t CMLeaf::getPosition() {
	return this->fPosition;
}

void CMLeaf::setPosition(int32_t newPosition) {
	this->fPosition = newPosition;
}

bool CMLeaf::isNullable() {
	return (this->fPosition == -1);
}

$String* CMLeaf::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, strRet, $new($StringBuilder, $($nc(this->fElement)->toString())));
	strRet->append(" ("_s);
	strRet->append($nc(this->fElement)->uri);
	strRet->append(u',');
	strRet->append($nc(this->fElement)->localpart);
	strRet->append(u')');
	if (this->fPosition >= 0) {
		strRet->append($$str({" (Pos:"_s, $$str(this->fPosition), ")"_s}));
	}
	return strRet->toString();
}

void CMLeaf::calcFirstPos($CMStateSet* toSet) {
	if (this->fPosition == -1) {
		$nc(toSet)->zeroBits();
	} else {
		$nc(toSet)->setBit(this->fPosition);
	}
}

void CMLeaf::calcLastPos($CMStateSet* toSet) {
	if (this->fPosition == -1) {
		$nc(toSet)->zeroBits();
	} else {
		$nc(toSet)->setBit(this->fPosition);
	}
}

CMLeaf::CMLeaf() {
}

$Class* CMLeaf::load$($String* name, bool initialize) {
	$loadClass(CMLeaf, name, initialize, &_CMLeaf_ClassInfo_, allocate$CMLeaf);
	return class$;
}

$Class* CMLeaf::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com