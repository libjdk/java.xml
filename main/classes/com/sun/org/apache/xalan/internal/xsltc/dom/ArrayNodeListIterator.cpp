#include <com/sun/org/apache/xalan/internal/xsltc/dom/ArrayNodeListIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EMPTY
#undef END

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
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

$FieldInfo _ArrayNodeListIterator_FieldInfo_[] = {
	{"_pos", "I", nullptr, $PRIVATE, $field(ArrayNodeListIterator, _pos)},
	{"_mark", "I", nullptr, $PRIVATE, $field(ArrayNodeListIterator, _mark)},
	{"_nodes", "[I", nullptr, $PRIVATE, $field(ArrayNodeListIterator, _nodes)},
	{"EMPTY", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ArrayNodeListIterator, EMPTY)},
	{}
};

$MethodInfo _ArrayNodeListIterator_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayNodeListIterator::*)($ints*)>(&ArrayNodeListIterator::init$))},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"getLast", "()I", nullptr, $PUBLIC},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC},
	{"getPosition", "()I", nullptr, $PUBLIC},
	{"getStartNode", "()I", nullptr, $PUBLIC},
	{"gotoMark", "()V", nullptr, $PUBLIC},
	{"isReverse", "()Z", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{"setMark", "()V", nullptr, $PUBLIC},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArrayNodeListIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.ArrayNodeListIterator",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisIterator",
	_ArrayNodeListIterator_FieldInfo_,
	_ArrayNodeListIterator_MethodInfo_
};

$Object* allocate$ArrayNodeListIterator($Class* clazz) {
	return $of($alloc(ArrayNodeListIterator));
}

$ints* ArrayNodeListIterator::EMPTY = nullptr;

void ArrayNodeListIterator::init$($ints* nodes) {
	this->_pos = 0;
	this->_mark = 0;
	$set(this, _nodes, nodes);
}

int32_t ArrayNodeListIterator::next() {
	return this->_pos < $nc(this->_nodes)->length ? $nc(this->_nodes)->get(this->_pos++) : $DTMAxisIterator::END;
}

$DTMAxisIterator* ArrayNodeListIterator::reset() {
	this->_pos = 0;
	return this;
}

int32_t ArrayNodeListIterator::getLast() {
	return $nc(this->_nodes)->length;
}

int32_t ArrayNodeListIterator::getPosition() {
	return this->_pos;
}

void ArrayNodeListIterator::setMark() {
	this->_mark = this->_pos;
}

void ArrayNodeListIterator::gotoMark() {
	this->_pos = this->_mark;
}

$DTMAxisIterator* ArrayNodeListIterator::setStartNode(int32_t node) {
	if (node == $DTMAxisIterator::END) {
		$set(this, _nodes, ArrayNodeListIterator::EMPTY);
	}
	return this;
}

int32_t ArrayNodeListIterator::getStartNode() {
	return $DTMAxisIterator::END;
}

bool ArrayNodeListIterator::isReverse() {
	return false;
}

$DTMAxisIterator* ArrayNodeListIterator::cloneIterator() {
	return $new(ArrayNodeListIterator, this->_nodes);
}

void ArrayNodeListIterator::setRestartable(bool isRestartable) {
}

int32_t ArrayNodeListIterator::getNodeByPosition(int32_t position) {
	return $nc(this->_nodes)->get(position - 1);
}

void clinit$ArrayNodeListIterator($Class* class$) {
	$assignStatic(ArrayNodeListIterator::EMPTY, $new($ints, 0));
}

ArrayNodeListIterator::ArrayNodeListIterator() {
}

$Class* ArrayNodeListIterator::load$($String* name, bool initialize) {
	$loadClass(ArrayNodeListIterator, name, initialize, &_ArrayNodeListIterator_ClassInfo_, clinit$ArrayNodeListIterator, allocate$ArrayNodeListIterator);
	return class$;
}

$Class* ArrayNodeListIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com