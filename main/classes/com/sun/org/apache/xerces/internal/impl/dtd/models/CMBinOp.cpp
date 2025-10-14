#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMBinOp.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CONTENTSPECNODE_CHOICE
#undef CONTENTSPECNODE_SEQ

using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {

$FieldInfo _CMBinOp_FieldInfo_[] = {
	{"fLeftChild", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $field(CMBinOp, fLeftChild)},
	{"fRightChild", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $field(CMBinOp, fRightChild)},
	{}
};

$MethodInfo _CMBinOp_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)V", nullptr, $PUBLIC, $method(static_cast<void(CMBinOp::*)(int32_t,$CMNode*,$CMNode*)>(&CMBinOp::init$))},
	{"calcFirstPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED},
	{"calcLastPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED},
	{"getLeft", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $FINAL, $method(static_cast<$CMNode*(CMBinOp::*)()>(&CMBinOp::getLeft))},
	{"getRight", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $FINAL, $method(static_cast<$CMNode*(CMBinOp::*)()>(&CMBinOp::getRight))},
	{"isNullable", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CMBinOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMBinOp",
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode",
	nullptr,
	_CMBinOp_FieldInfo_,
	_CMBinOp_MethodInfo_
};

$Object* allocate$CMBinOp($Class* clazz) {
	return $of($alloc(CMBinOp));
}

void CMBinOp::init$(int32_t type, $CMNode* leftNode, $CMNode* rightNode) {
	$CMNode::init$(type);
	bool var$0 = (this->type() != $XMLContentSpec::CONTENTSPECNODE_CHOICE);
	if (var$0 && (this->type() != $XMLContentSpec::CONTENTSPECNODE_SEQ)) {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_BST"_s);
	}
	$set(this, fLeftChild, leftNode);
	$set(this, fRightChild, rightNode);
}

$CMNode* CMBinOp::getLeft() {
	return this->fLeftChild;
}

$CMNode* CMBinOp::getRight() {
	return this->fRightChild;
}

bool CMBinOp::isNullable() {
	if (type() == $XMLContentSpec::CONTENTSPECNODE_CHOICE) {
		bool var$0 = $nc(this->fLeftChild)->isNullable();
		return (var$0 || $nc(this->fRightChild)->isNullable());
	} else if (type() == $XMLContentSpec::CONTENTSPECNODE_SEQ) {
		bool var$1 = $nc(this->fLeftChild)->isNullable();
		return (var$1 && $nc(this->fRightChild)->isNullable());
	} else {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_BST"_s);
	}
}

void CMBinOp::calcFirstPos($CMStateSet* toSet) {
	if (type() == $XMLContentSpec::CONTENTSPECNODE_CHOICE) {
		$nc(toSet)->setTo($($nc(this->fLeftChild)->firstPos()));
		toSet->union$($($nc(this->fRightChild)->firstPos()));
	} else if (type() == $XMLContentSpec::CONTENTSPECNODE_SEQ) {
		$nc(toSet)->setTo($($nc(this->fLeftChild)->firstPos()));
		if ($nc(this->fLeftChild)->isNullable()) {
			toSet->union$($($nc(this->fRightChild)->firstPos()));
		}
	} else {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_BST"_s);
	}
}

void CMBinOp::calcLastPos($CMStateSet* toSet) {
	if (type() == $XMLContentSpec::CONTENTSPECNODE_CHOICE) {
		$nc(toSet)->setTo($($nc(this->fLeftChild)->lastPos()));
		toSet->union$($($nc(this->fRightChild)->lastPos()));
	} else if (type() == $XMLContentSpec::CONTENTSPECNODE_SEQ) {
		$nc(toSet)->setTo($($nc(this->fRightChild)->lastPos()));
		if ($nc(this->fRightChild)->isNullable()) {
			toSet->union$($($nc(this->fLeftChild)->lastPos()));
		}
	} else {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_BST"_s);
	}
}

CMBinOp::CMBinOp() {
}

$Class* CMBinOp::load$($String* name, bool initialize) {
	$loadClass(CMBinOp, name, initialize, &_CMBinOp_ClassInfo_, allocate$CMBinOp);
	return class$;
}

$Class* CMBinOp::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com