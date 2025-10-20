#include <com/sun/org/apache/xalan/internal/xsltc/dom/ForwardPositionIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ITERATOR_CLONE_ERR

using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
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
$CompoundAttribute _ForwardPositionIterator_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _ForwardPositionIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(ForwardPositionIterator, _source)},
	{}
};

$MethodInfo _ForwardPositionIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(ForwardPositionIterator::*)($DTMAxisIterator*)>(&ForwardPositionIterator::init$))},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"gotoMark", "()V", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"setMark", "()V", nullptr, $PUBLIC},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ForwardPositionIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.ForwardPositionIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_ForwardPositionIterator_FieldInfo_,
	_ForwardPositionIterator_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ForwardPositionIterator_Annotations_
};

$Object* allocate$ForwardPositionIterator($Class* clazz) {
	return $of($alloc(ForwardPositionIterator));
}

void ForwardPositionIterator::init$($DTMAxisIterator* source) {
	$DTMAxisIteratorBase::init$();
	$set(this, _source, source);
}

$DTMAxisIterator* ForwardPositionIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(ForwardPositionIterator, clone, $cast(ForwardPositionIterator, $DTMAxisIteratorBase::clone()));
		$set($nc(clone), _source, $nc(this->_source)->cloneIterator());
		clone->_isRestartable = false;
		return clone->reset();
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$init($BasisLibrary);
		$BasisLibrary::runTimeError($BasisLibrary::ITERATOR_CLONE_ERR, $($of(e->toString())));
		return nullptr;
	}
	$shouldNotReachHere();
}

int32_t ForwardPositionIterator::next() {
	return returnNode($nc(this->_source)->next());
}

$DTMAxisIterator* ForwardPositionIterator::setStartNode(int32_t node) {
	$nc(this->_source)->setStartNode(node);
	return this;
}

$DTMAxisIterator* ForwardPositionIterator::reset() {
	$nc(this->_source)->reset();
	return resetPosition();
}

void ForwardPositionIterator::setMark() {
	$nc(this->_source)->setMark();
}

void ForwardPositionIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

ForwardPositionIterator::ForwardPositionIterator() {
}

$Class* ForwardPositionIterator::load$($String* name, bool initialize) {
	$loadClass(ForwardPositionIterator, name, initialize, &_ForwardPositionIterator_ClassInfo_, allocate$ForwardPositionIterator);
	return class$;
}

$Class* ForwardPositionIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com