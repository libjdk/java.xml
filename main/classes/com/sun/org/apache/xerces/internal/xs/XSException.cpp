#include <com/sun/org/apache/xerces/internal/xs/XSException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef INDEX_SIZE_ERR
#undef NOT_SUPPORTED_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$FieldInfo _XSException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XSException, serialVersionUID)},
	{"code", "S", nullptr, $PUBLIC, $field(XSException, code)},
	{"NOT_SUPPORTED_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSException, NOT_SUPPORTED_ERR)},
	{"INDEX_SIZE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSException, INDEX_SIZE_ERR)},
	{}
};

$MethodInfo _XSException_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XSException::*)(int16_t,$String*)>(&XSException::init$))},
	{}
};

$ClassInfo _XSException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xs.XSException",
	"java.lang.RuntimeException",
	nullptr,
	_XSException_FieldInfo_,
	_XSException_MethodInfo_
};

$Object* allocate$XSException($Class* clazz) {
	return $of($alloc(XSException));
}

void XSException::init$(int16_t code, $String* message) {
	$RuntimeException::init$(message);
	this->code = code;
}

XSException::XSException() {
}

XSException::XSException(const XSException& e) {
}

XSException XSException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XSException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XSException::load$($String* name, bool initialize) {
	$loadClass(XSException, name, initialize, &_XSException_ClassInfo_, allocate$XSException);
	return class$;
}

$Class* XSException::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com