#include <com/sun/org/apache/xerces/internal/dom/RangeExceptionImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/ranges/RangeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RangeException = ::org::w3c::dom::ranges::RangeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _RangeExceptionImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(RangeExceptionImpl, serialVersionUID)},
	{}
};

$MethodInfo _RangeExceptionImpl_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RangeExceptionImpl::*)(int16_t,$String*)>(&RangeExceptionImpl::init$))},
	{}
};

$ClassInfo _RangeExceptionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.RangeExceptionImpl",
	"org.w3c.dom.ranges.RangeException",
	nullptr,
	_RangeExceptionImpl_FieldInfo_,
	_RangeExceptionImpl_MethodInfo_
};

$Object* allocate$RangeExceptionImpl($Class* clazz) {
	return $of($alloc(RangeExceptionImpl));
}

void RangeExceptionImpl::init$(int16_t code, $String* message) {
	$RangeException::init$(code, message);
}

RangeExceptionImpl::RangeExceptionImpl() {
}

RangeExceptionImpl::RangeExceptionImpl(const RangeExceptionImpl& e) {
}

RangeExceptionImpl RangeExceptionImpl::wrapper$() {
	$pendingException(this);
	return *this;
}

void RangeExceptionImpl::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* RangeExceptionImpl::load$($String* name, bool initialize) {
	$loadClass(RangeExceptionImpl, name, initialize, &_RangeExceptionImpl_ClassInfo_, allocate$RangeExceptionImpl);
	return class$;
}

$Class* RangeExceptionImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com