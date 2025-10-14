#include <com/sun/org/apache/xalan/internal/xsltc/dom/ClonedNodeListIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/CachedNodeListIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CachedNodeListIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::CachedNodeListIterator;
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

$FieldInfo _ClonedNodeListIterator_FieldInfo_[] = {
	{"_source", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/CachedNodeListIterator;", nullptr, $PRIVATE, $field(ClonedNodeListIterator, _source)},
	{"_index", "I", nullptr, $PRIVATE, $field(ClonedNodeListIterator, _index)},
	{}
};

$MethodInfo _ClonedNodeListIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/CachedNodeListIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(ClonedNodeListIterator::*)($CachedNodeListIterator*)>(&ClonedNodeListIterator::init$))},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
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

$ClassInfo _ClonedNodeListIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.ClonedNodeListIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	_ClonedNodeListIterator_FieldInfo_,
	_ClonedNodeListIterator_MethodInfo_
};

$Object* allocate$ClonedNodeListIterator($Class* clazz) {
	return $of($alloc(ClonedNodeListIterator));
}

void ClonedNodeListIterator::init$($CachedNodeListIterator* source) {
	$DTMAxisIteratorBase::init$();
	this->_index = 0;
	$set(this, _source, source);
}

void ClonedNodeListIterator::setRestartable(bool isRestartable) {
}

$DTMAxisIterator* ClonedNodeListIterator::setStartNode(int32_t node) {
	return this;
}

int32_t ClonedNodeListIterator::next() {
	return $nc(this->_source)->getNode(this->_index++);
}

int32_t ClonedNodeListIterator::getPosition() {
	return this->_index == 0 ? 1 : this->_index;
}

int32_t ClonedNodeListIterator::getNodeByPosition(int32_t pos) {
	return $nc(this->_source)->getNode(pos);
}

$DTMAxisIterator* ClonedNodeListIterator::cloneIterator() {
	return $nc(this->_source)->cloneIterator();
}

$DTMAxisIterator* ClonedNodeListIterator::reset() {
	this->_index = 0;
	return this;
}

void ClonedNodeListIterator::setMark() {
	$nc(this->_source)->setMark();
}

void ClonedNodeListIterator::gotoMark() {
	$nc(this->_source)->gotoMark();
}

ClonedNodeListIterator::ClonedNodeListIterator() {
}

$Class* ClonedNodeListIterator::load$($String* name, bool initialize) {
	$loadClass(ClonedNodeListIterator, name, initialize, &_ClonedNodeListIterator_ClassInfo_, allocate$ClonedNodeListIterator);
	return class$;
}

$Class* ClonedNodeListIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com