#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedSingletonIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$SingletonIterator.h>
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
#undef NTYPES

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $DTMDefaultBaseIterators$SingletonIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$SingletonIterator;
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

$FieldInfo _DTMDefaultBaseIterators$TypedSingletonIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedSingletonIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedSingletonIterator, _nodeType)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$TypedSingletonIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(static_cast<void(DTMDefaultBaseIterators$TypedSingletonIterator::*)($DTMDefaultBaseIterators*,int32_t)>(&DTMDefaultBaseIterators$TypedSingletonIterator::init$))},
	{"next", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$TypedSingletonIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedSingletonIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedSingletonIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$SingletonIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "SingletonIterator", $PUBLIC},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$TypedSingletonIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedSingletonIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$SingletonIterator",
	nullptr,
	_DTMDefaultBaseIterators$TypedSingletonIterator_FieldInfo_,
	_DTMDefaultBaseIterators$TypedSingletonIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$TypedSingletonIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$TypedSingletonIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$TypedSingletonIterator));
}

void DTMDefaultBaseIterators$TypedSingletonIterator::init$($DTMDefaultBaseIterators* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$SingletonIterator::init$(this$0);
	this->_nodeType = nodeType;
}

int32_t DTMDefaultBaseIterators$TypedSingletonIterator::next() {
	int32_t result = this->_currentNode;
	int32_t nodeType = this->_nodeType;
	this->_currentNode = $DTMAxisIterator::END;
	if (nodeType >= $DTM::NTYPES) {
		if (this->this$0->getExpandedTypeID(result) == nodeType) {
			return returnNode(result);
		}
	} else if (this->this$0->getNodeType(result) == nodeType) {
		return returnNode(result);
	}
	return -1;
}

DTMDefaultBaseIterators$TypedSingletonIterator::DTMDefaultBaseIterators$TypedSingletonIterator() {
}

$Class* DTMDefaultBaseIterators$TypedSingletonIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$TypedSingletonIterator, name, initialize, &_DTMDefaultBaseIterators$TypedSingletonIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$TypedSingletonIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedSingletonIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com