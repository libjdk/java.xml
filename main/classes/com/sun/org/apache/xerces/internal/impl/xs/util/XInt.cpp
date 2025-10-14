#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

$FieldInfo _XInt_FieldInfo_[] = {
	{"fValue", "I", nullptr, $PRIVATE, $field(XInt, fValue)},
	{}
};

$MethodInfo _XInt_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(XInt::*)(int32_t)>(&XInt::init$))},
	{"equals", "(Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(XInt::*)(XInt*)>(&XInt::equals))},
	{"intValue", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(XInt::*)()>(&XInt::intValue))},
	{"shortValue", "()S", nullptr, $PUBLIC | $FINAL, $method(static_cast<int16_t(XInt::*)()>(&XInt::shortValue))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XInt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XInt",
	"java.lang.Object",
	nullptr,
	_XInt_FieldInfo_,
	_XInt_MethodInfo_
};

$Object* allocate$XInt($Class* clazz) {
	return $of($alloc(XInt));
}

void XInt::init$(int32_t value) {
	this->fValue = value;
}

int32_t XInt::intValue() {
	return this->fValue;
}

int16_t XInt::shortValue() {
	return (int16_t)this->fValue;
}

bool XInt::equals(XInt* compareVal) {
	return (this->fValue == $nc(compareVal)->fValue);
}

$String* XInt::toString() {
	return $Integer::toString(this->fValue);
}

XInt::XInt() {
}

$Class* XInt::load$($String* name, bool initialize) {
	$loadClass(XInt, name, initialize, &_XInt_ClassInfo_, allocate$XInt);
	return class$;
}

$Class* XInt::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com