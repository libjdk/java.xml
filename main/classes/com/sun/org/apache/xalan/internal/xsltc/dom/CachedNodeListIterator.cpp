#include <com/sun/org/apache/xalan/internal/xsltc/dom/CachedNodeListIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/ClonedNodeListIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/util/IntegerArray.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <jcpp.h>

#undef END

using $ClonedNodeListIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::ClonedNodeListIterator;
using $IntegerArray = ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _CachedNodeListIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE, $field(CachedNodeListIterator, _source)},
	{"_nodes", "Lcom/sun/org/apache/xalan/internal/xsltc/util/IntegerArray;", nullptr, $PRIVATE, $field(CachedNodeListIterator, _nodes)},
	{"_numCachedNodes", "I", nullptr, $PRIVATE, $field(CachedNodeListIterator, _numCachedNodes)},
	{"_index", "I", nullptr, $PRIVATE, $field(CachedNodeListIterator, _index)},
	{"_isEnded", "Z", nullptr, $PRIVATE, $field(CachedNodeListIterator, _isEnded)},
	{}
};

$MethodInfo _CachedNodeListIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(CachedNodeListIterator::*)($DTMAxisIterator*)>(&CachedNodeListIterator::init$))},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getNode", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(CachedNodeListIterator::*)(int32_t)>(&CachedNodeListIterator::getNode))},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC},
	{"getPosition", "()I", nullptr, $PUBLIC},
	{"gotoMark", "()V", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"setMark", "()V", nullptr, $PUBLIC},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CachedNodeListIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.CachedNodeListIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_CachedNodeListIterator_FieldInfo_,
	_CachedNodeListIterator_MethodInfo_
};

$Object* allocate$CachedNodeListIterator($Class* clazz) {
	return $of($alloc(CachedNodeListIterator));
}

void CachedNodeListIterator::init$($DTMAxisIterator* source) {
	$DTMAxisIteratorBase::init$();
	$set(this, _nodes, $new($IntegerArray));
	this->_numCachedNodes = 0;
	this->_index = 0;
	this->_isEnded = false;
	$set(this, _source, source);
}

void CachedNodeListIterator::setRestartable(bool isRestartable) {
}

$DTMAxisIterator* CachedNodeListIterator::setStartNode(int32_t node) {
	if (this->_isRestartable) {
		this->_startNode = node;
		$nc(this->_source)->setStartNode(node);
		resetPosition();
		this->_isRestartable = false;
	}
	return this;
}

int32_t CachedNodeListIterator::next() {
	return getNode(this->_index++);
}

int32_t CachedNodeListIterator::getPosition() {
	return this->_index == 0 ? 1 : this->_index;
}

int32_t CachedNodeListIterator::getNodeByPosition(int32_t pos) {
	return getNode(pos);
}

int32_t CachedNodeListIterator::getNode(int32_t index) {
	if (index < this->_numCachedNodes) {
		return $nc(this->_nodes)->at(index);
	} else if (!this->_isEnded) {
		int32_t node = $nc(this->_source)->next();
		if (node != $DTMAxisIterator::END) {
			$nc(this->_nodes)->add(node);
			++this->_numCachedNodes;
		} else {
			this->_isEnded = true;
		}
		return node;
	} else {
		return $DTMAxisIterator::END;
	}
}

$DTMAxisIterator* CachedNodeListIterator::cloneIterator() {
	$var($ClonedNodeListIterator, clone, $new($ClonedNodeListIterator, this));
	return clone;
}

$DTMAxisIterator* CachedNodeListIterator::reset() {
	this->_index = 0;
	return this;
}

void CachedNodeListIterator::setMark() {
	$nc(this->_source)->setMark();
}

void CachedNodeListIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

CachedNodeListIterator::CachedNodeListIterator() {
}

$Class* CachedNodeListIterator::load$($String* name, bool initialize) {
	$loadClass(CachedNodeListIterator, name, initialize, &_CachedNodeListIterator_ClassInfo_, allocate$CachedNodeListIterator);
	return class$;
}

$Class* CachedNodeListIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com