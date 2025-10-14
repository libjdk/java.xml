#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef END

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMAxisIteratorBase_FieldInfo_[] = {
	{"_last", "I", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _last)},
	{"_position", "I", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _position)},
	{"_markedNode", "I", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _markedNode)},
	{"_startNode", "I", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _startNode)},
	{"_includeSelf", "Z", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _includeSelf)},
	{"_isRestartable", "Z", nullptr, $PROTECTED, $field(DTMAxisIteratorBase, _isRestartable)},
	{}
};

$MethodInfo _DTMAxisIteratorBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DTMAxisIteratorBase::*)()>(&DTMAxisIteratorBase::init$))},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getAxis", "()I", nullptr, $PUBLIC},
	{"getLast", "()I", nullptr, $PUBLIC},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC},
	{"getPosition", "()I", nullptr, $PUBLIC},
	{"getStartNode", "()I", nullptr, $PUBLIC},
	{"includeSelf", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC},
	{"isReverse", "()Z", nullptr, $PUBLIC},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"resetPosition", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$DTMAxisIterator*(DTMAxisIteratorBase::*)()>(&DTMAxisIteratorBase::resetPosition))},
	{"returnNode", "(I)I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(DTMAxisIteratorBase::*)(int32_t)>(&DTMAxisIteratorBase::returnNode))},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DTMAxisIteratorBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisIterator",
	_DTMAxisIteratorBase_FieldInfo_,
	_DTMAxisIteratorBase_MethodInfo_
};

$Object* allocate$DTMAxisIteratorBase($Class* clazz) {
	return $of($alloc(DTMAxisIteratorBase));
}

void DTMAxisIteratorBase::init$() {
	this->_last = -1;
	this->_position = 0;
	this->_startNode = $DTMAxisIterator::END;
	this->_includeSelf = false;
	this->_isRestartable = true;
}

int32_t DTMAxisIteratorBase::getStartNode() {
	return this->_startNode;
}

$DTMAxisIterator* DTMAxisIteratorBase::reset() {
	bool temp = this->_isRestartable;
	this->_isRestartable = true;
	setStartNode(this->_startNode);
	this->_isRestartable = temp;
	return this;
}

$DTMAxisIterator* DTMAxisIteratorBase::includeSelf() {
	this->_includeSelf = true;
	return this;
}

int32_t DTMAxisIteratorBase::getLast() {
	if (this->_last == -1) {
		int32_t temp = this->_position;
		setMark();
		reset();
		do {
			++this->_last;
		} while (next() != $DTMAxisIterator::END);
		gotoMark();
		this->_position = temp;
	}
	return this->_last;
}

int32_t DTMAxisIteratorBase::getPosition() {
	return this->_position == 0 ? 1 : this->_position;
}

bool DTMAxisIteratorBase::isReverse() {
	return false;
}

$DTMAxisIterator* DTMAxisIteratorBase::cloneIterator() {
	try {
		$var(DTMAxisIteratorBase, clone, $cast(DTMAxisIteratorBase, $DTMAxisIterator::clone()));
		$nc(clone)->_isRestartable = false;
		return clone;
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($WrappedRuntimeException, e);
	}
	$shouldNotReachHere();
}

int32_t DTMAxisIteratorBase::returnNode(int32_t node) {
	++this->_position;
	return node;
}

$DTMAxisIterator* DTMAxisIteratorBase::resetPosition() {
	this->_position = 0;
	return this;
}

bool DTMAxisIteratorBase::isDocOrdered() {
	return true;
}

int32_t DTMAxisIteratorBase::getAxis() {
	return -1;
}

void DTMAxisIteratorBase::setRestartable(bool isRestartable) {
	this->_isRestartable = isRestartable;
}

int32_t DTMAxisIteratorBase::getNodeByPosition(int32_t position) {
	if (position > 0) {
		int32_t pos = isReverse() ? getLast() - position + 1 : position;
		int32_t node = 0;
		while ((node = next()) != $DTMAxisIterator::END) {
			if (pos == getPosition()) {
				return node;
			}
		}
	}
	return $DTMAxisIterator::END;
}

DTMAxisIteratorBase::DTMAxisIteratorBase() {
}

$Class* DTMAxisIteratorBase::load$($String* name, bool initialize) {
	$loadClass(DTMAxisIteratorBase, name, initialize, &_DTMAxisIteratorBase_ClassInfo_, allocate$DTMAxisIteratorBase);
	return class$;
}

$Class* DTMAxisIteratorBase::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com