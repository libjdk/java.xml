#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedDescendantIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$DescendantIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef END

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$DescendantIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$DescendantIterator;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMDefaultBaseIterators$TypedDescendantIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedDescendantIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedDescendantIterator, _nodeType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$TypedDescendantIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(static_cast<void(DTMDefaultBaseIterators$TypedDescendantIterator::*)($DTMDefaultBaseIterators*,int32_t)>(&DTMDefaultBaseIterators$TypedDescendantIterator::init$))},
	{"next", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$TypedDescendantIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedDescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedDescendantIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$DescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "DescendantIterator", $PUBLIC},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$TypedDescendantIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedDescendantIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$DescendantIterator",
	nullptr,
	_DTMDefaultBaseIterators$TypedDescendantIterator_FieldInfo_,
	_DTMDefaultBaseIterators$TypedDescendantIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$TypedDescendantIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$TypedDescendantIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$TypedDescendantIterator));
}

void DTMDefaultBaseIterators$TypedDescendantIterator::init$($DTMDefaultBaseIterators* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$DescendantIterator::init$(this$0);
	this->_nodeType = nodeType;
}

int32_t DTMDefaultBaseIterators$TypedDescendantIterator::next() {
	int32_t node = 0;
	int32_t type = 0;
	if (this->_startNode == -1) {
		return -1;
	}
	node = this->_currentNode;
	do {
		++node;
		type = this->this$0->_type(node);
		if (-1 == type || !isDescendant(node)) {
			this->_currentNode = -1;
			return $DTMAxisIterator::END;
		}
	} while (type != this->_nodeType && this->this$0->_exptype(node) != this->_nodeType);
	this->_currentNode = node;
	return returnNode(this->this$0->makeNodeHandle(node));
}

DTMDefaultBaseIterators$TypedDescendantIterator::DTMDefaultBaseIterators$TypedDescendantIterator() {
}

$Class* DTMDefaultBaseIterators$TypedDescendantIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$TypedDescendantIterator, name, initialize, &_DTMDefaultBaseIterators$TypedDescendantIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$TypedDescendantIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedDescendantIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com