#include <com/sun/org/apache/xml/internal/dtm/ref/EmptyIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef END
#undef INSTANCE

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _EmptyIterator_FieldInfo_[] = {
	{"INSTANCE", "Lcom/sun/org/apache/xml/internal/dtm/ref/EmptyIterator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EmptyIterator, INSTANCE)},
	{}
};

$MethodInfo _EmptyIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(EmptyIterator::*)()>(&EmptyIterator::init$))},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $FINAL},
	{"getInstance", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DTMAxisIterator*(*)()>(&EmptyIterator::getInstance))},
	{"getLast", "()I", nullptr, $PUBLIC | $FINAL},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getPosition", "()I", nullptr, $PUBLIC | $FINAL},
	{"getStartNode", "()I", nullptr, $PUBLIC | $FINAL},
	{"gotoMark", "()V", nullptr, $PUBLIC | $FINAL},
	{"isReverse", "()Z", nullptr, $PUBLIC | $FINAL},
	{"next", "()I", nullptr, $PUBLIC | $FINAL},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $FINAL},
	{"setMark", "()V", nullptr, $PUBLIC | $FINAL},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _EmptyIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.EmptyIterator",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisIterator",
	_EmptyIterator_FieldInfo_,
	_EmptyIterator_MethodInfo_
};

$Object* allocate$EmptyIterator($Class* clazz) {
	return $of($alloc(EmptyIterator));
}

EmptyIterator* EmptyIterator::INSTANCE = nullptr;

$DTMAxisIterator* EmptyIterator::getInstance() {
	$init(EmptyIterator);
	return EmptyIterator::INSTANCE;
}

void EmptyIterator::init$() {
}

int32_t EmptyIterator::next() {
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* EmptyIterator::reset() {
	return this;
}

int32_t EmptyIterator::getLast() {
	return 0;
}

int32_t EmptyIterator::getPosition() {
	return 1;
}

void EmptyIterator::setMark() {
}

void EmptyIterator::gotoMark() {
}

$DTMAxisIterator* EmptyIterator::setStartNode(int32_t node) {
	return this;
}

int32_t EmptyIterator::getStartNode() {
	return $DTMAxisIterator::END;
}

bool EmptyIterator::isReverse() {
	return false;
}

$DTMAxisIterator* EmptyIterator::cloneIterator() {
	return this;
}

void EmptyIterator::setRestartable(bool isRestartable) {
}

int32_t EmptyIterator::getNodeByPosition(int32_t position) {
	return $DTMAxisIterator::END;
}

void clinit$EmptyIterator($Class* class$) {
	$assignStatic(EmptyIterator::INSTANCE, $new(EmptyIterator));
}

EmptyIterator::EmptyIterator() {
}

$Class* EmptyIterator::load$($String* name, bool initialize) {
	$loadClass(EmptyIterator, name, initialize, &_EmptyIterator_ClassInfo_, clinit$EmptyIterator, allocate$EmptyIterator);
	return class$;
}

$Class* EmptyIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com