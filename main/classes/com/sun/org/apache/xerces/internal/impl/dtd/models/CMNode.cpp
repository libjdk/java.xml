#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
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

$FieldInfo _CMNode_FieldInfo_[] = {
	{"fType", "I", nullptr, $PRIVATE | $FINAL, $field(CMNode, fType)},
	{"fFirstPos", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;", nullptr, $PRIVATE, $field(CMNode, fFirstPos)},
	{"fFollowPos", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;", nullptr, $PRIVATE, $field(CMNode, fFollowPos)},
	{"fLastPos", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;", nullptr, $PRIVATE, $field(CMNode, fLastPos)},
	{"fMaxStates", "I", nullptr, $PRIVATE, $field(CMNode, fMaxStates)},
	{"fUserData", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(CMNode, fUserData)},
	{"fCompactedForUPA", "Z", nullptr, $PRIVATE, $field(CMNode, fCompactedForUPA)},
	{}
};

$MethodInfo _CMNode_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CMNode::*)(int32_t)>(&CMNode::init$))},
	{"calcFirstPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"calcLastPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"firstPos", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CMStateSet*(CMNode::*)()>(&CMNode::firstPos))},
	{"getUserData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isCompactedForUPA", "()Z", nullptr, $PUBLIC},
	{"isNullable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lastPos", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CMStateSet*(CMNode::*)()>(&CMNode::lastPos))},
	{"setFollowPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $FINAL, $method(static_cast<void(CMNode::*)($CMStateSet*)>(&CMNode::setFollowPos))},
	{"setIsCompactUPAModel", "(Z)V", nullptr, $PUBLIC},
	{"setMaxStates", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CMNode::*)(int32_t)>(&CMNode::setMaxStates))},
	{"setUserData", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"type", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(CMNode::*)()>(&CMNode::type))},
	{}
};

$ClassInfo _CMNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode",
	"java.lang.Object",
	nullptr,
	_CMNode_FieldInfo_,
	_CMNode_MethodInfo_
};

$Object* allocate$CMNode($Class* clazz) {
	return $of($alloc(CMNode));
}

void CMNode::init$(int32_t type) {
	$set(this, fFirstPos, nullptr);
	$set(this, fFollowPos, nullptr);
	$set(this, fLastPos, nullptr);
	this->fMaxStates = -1;
	$set(this, fUserData, nullptr);
	this->fCompactedForUPA = false;
	this->fType = type;
}

int32_t CMNode::type() {
	return this->fType;
}

$CMStateSet* CMNode::firstPos() {
	if (this->fFirstPos == nullptr) {
		$set(this, fFirstPos, $new($CMStateSet, this->fMaxStates));
		calcFirstPos(this->fFirstPos);
	}
	return this->fFirstPos;
}

$CMStateSet* CMNode::lastPos() {
	if (this->fLastPos == nullptr) {
		$set(this, fLastPos, $new($CMStateSet, this->fMaxStates));
		calcLastPos(this->fLastPos);
	}
	return this->fLastPos;
}

void CMNode::setFollowPos($CMStateSet* setToAdopt) {
	$set(this, fFollowPos, setToAdopt);
}

void CMNode::setMaxStates(int32_t maxStates) {
	this->fMaxStates = maxStates;
}

bool CMNode::isCompactedForUPA() {
	return this->fCompactedForUPA;
}

void CMNode::setIsCompactUPAModel(bool value) {
	this->fCompactedForUPA = value;
}

void CMNode::setUserData(Object$* userData) {
	$set(this, fUserData, userData);
}

$Object* CMNode::getUserData() {
	return $of(this->fUserData);
}

CMNode::CMNode() {
}

$Class* CMNode::load$($String* name, bool initialize) {
	$loadClass(CMNode, name, initialize, &_CMNode_ClassInfo_, allocate$CMNode);
	return class$;
}

$Class* CMNode::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com