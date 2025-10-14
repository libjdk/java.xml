#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl$1.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$MethodInfo _SimpleResultTreeImpl$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SimpleResultTreeImpl$1::*)()>(&SimpleResultTreeImpl$1::init$))},
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

$EnclosingMethodInfo _SimpleResultTreeImpl$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _SimpleResultTreeImpl$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SimpleResultTreeImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$1",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
	nullptr,
	nullptr,
	_SimpleResultTreeImpl$1_MethodInfo_,
	nullptr,
	&_SimpleResultTreeImpl$1_EnclosingMethodInfo_,
	_SimpleResultTreeImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl"
};

$Object* allocate$SimpleResultTreeImpl$1($Class* clazz) {
	return $of($alloc(SimpleResultTreeImpl$1));
}

void SimpleResultTreeImpl$1::init$() {
	$DTMAxisIteratorBase::init$();
}

$DTMAxisIterator* SimpleResultTreeImpl$1::reset() {
	return this;
}

$DTMAxisIterator* SimpleResultTreeImpl$1::setStartNode(int32_t node) {
	return this;
}

int32_t SimpleResultTreeImpl$1::next() {
	return $DTM::NULL;
}

void SimpleResultTreeImpl$1::setMark() {
}

void SimpleResultTreeImpl$1::gotoMark() {
}

int32_t SimpleResultTreeImpl$1::getLast() {
	return 0;
}

int32_t SimpleResultTreeImpl$1::getPosition() {
	return 0;
}

$DTMAxisIterator* SimpleResultTreeImpl$1::cloneIterator() {
	return this;
}

void SimpleResultTreeImpl$1::setRestartable(bool isRestartable) {
}

SimpleResultTreeImpl$1::SimpleResultTreeImpl$1() {
}

$Class* SimpleResultTreeImpl$1::load$($String* name, bool initialize) {
	$loadClass(SimpleResultTreeImpl$1, name, initialize, &_SimpleResultTreeImpl$1_ClassInfo_, allocate$SimpleResultTreeImpl$1);
	return class$;
}

$Class* SimpleResultTreeImpl$1::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com