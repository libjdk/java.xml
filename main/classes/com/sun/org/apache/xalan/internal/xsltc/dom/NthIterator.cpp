#include <com/sun/org/apache/xalan/internal/xsltc/dom/NthIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
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

#undef END
#undef ITERATOR_CLONE_ERR

using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
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

$FieldInfo _NthIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(NthIterator, _source)},
	{"_position", "I", nullptr, $PRIVATE | $FINAL, $field(NthIterator, _position)},
	{"_ready", "Z", nullptr, $PRIVATE, $field(NthIterator, _ready)},
	{}
};

$MethodInfo _NthIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)V", nullptr, $PUBLIC, $method(static_cast<void(NthIterator::*)($DTMAxisIterator*,int32_t)>(&NthIterator::init$))},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getLast", "()I", nullptr, $PUBLIC},
	{"getPosition", "()I", nullptr, $PUBLIC},
	{"gotoMark", "()V", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"setMark", "()V", nullptr, $PUBLIC},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NthIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.NthIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_NthIterator_FieldInfo_,
	_NthIterator_MethodInfo_
};

$Object* allocate$NthIterator($Class* clazz) {
	return $of($alloc(NthIterator));
}

void NthIterator::init$($DTMAxisIterator* source, int32_t n) {
	$DTMAxisIteratorBase::init$();
	$set(this, _source, source);
	this->_position = n;
}

void NthIterator::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
	$nc(this->_source)->setRestartable(isRestartable);
}

$DTMAxisIterator* NthIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(NthIterator, clone, $cast(NthIterator, $DTMAxisIteratorBase::clone()));
		$set($nc(clone), _source, $nc(this->_source)->cloneIterator());
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

int32_t NthIterator::next() {
	if (this->_ready) {
		this->_ready = false;
		return $nc(this->_source)->getNodeByPosition(this->_position);
	}
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* NthIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		$nc(this->_source)->setStartNode(node);
		this->_ready = true;
	}
	return this;
}

$DTMAxisIterator* NthIterator::reset() {
	$nc(this->_source)->reset();
	this->_ready = true;
	return this;
}

int32_t NthIterator::getLast() {
	return 1;
}

int32_t NthIterator::getPosition() {
	return 1;
}

void NthIterator::setMark() {
	$nc(this->_source)->setMark();
}

void NthIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

NthIterator::NthIterator() {
}

$Class* NthIterator::load$($String* name, bool initialize) {
	$loadClass(NthIterator, name, initialize, &_NthIterator_ClassInfo_, allocate$NthIterator);
	return class$;
}

$Class* NthIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com