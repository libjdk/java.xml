#include <com/sun/org/apache/xalan/internal/xsltc/dom/AbsoluteIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ITERATOR_CLONE_ERR
#undef ROOTNODE

using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _AbsoluteIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(AbsoluteIterator, _source)},
	{}
};

$MethodInfo _AbsoluteIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(AbsoluteIterator::*)($DTMAxisIterator*)>(&AbsoluteIterator::init$))},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"gotoMark", "()V", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"setMark", "()V", nullptr, $PUBLIC},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbsoluteIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.AbsoluteIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_AbsoluteIterator_FieldInfo_,
	_AbsoluteIterator_MethodInfo_
};

$Object* allocate$AbsoluteIterator($Class* clazz) {
	return $of($alloc(AbsoluteIterator));
}

void AbsoluteIterator::init$($DTMAxisIterator* source) {
	$DTMAxisIteratorBase::init$();
	$set(this, _source, source);
}

void AbsoluteIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
}

$DTMAxisIterator* AbsoluteIterator::setStartNode(int32_t node) {
	this->_startNode = $DTMDefaultBase::ROOTNODE;
	if (this->_isRestartable) {
		$nc(this->_source)->setStartNode(this->_startNode);
		resetPosition();
	}
	return this;
}

int32_t AbsoluteIterator::next() {
	return returnNode($nc(this->_source)->next());
}

$DTMAxisIterator* AbsoluteIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(AbsoluteIterator, clone, $cast(AbsoluteIterator, $DTMAxisIteratorBase::clone()));
		$set($nc(clone), _source, $nc(this->_source)->cloneIterator());
		clone->resetPosition();
		clone->_isRestartable = false;
		return clone;
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* AbsoluteIterator::reset() {
	$nc(this->_source)->reset();
	return resetPosition();
}

void AbsoluteIterator::setMark() {
	$nc(this->_source)->setMark();
}

void AbsoluteIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

AbsoluteIterator::AbsoluteIterator() {
}

$Class* AbsoluteIterator::load$($String* name, bool initialize) {
	$loadClass(AbsoluteIterator, name, initialize, &_AbsoluteIterator_ClassInfo_, allocate$AbsoluteIterator);
	return class$;
}

$Class* AbsoluteIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com