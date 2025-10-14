#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$FieldInfo _XNIException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XNIException, serialVersionUID)},
	{"fException", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(XNIException, fException)},
	{}
};

$MethodInfo _XNIException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XNIException::*)($String*)>(&XNIException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XNIException::*)($Exception*)>(&XNIException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XNIException::*)($String*,$Exception*)>(&XNIException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XNIException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xni.XNIException",
	"java.lang.RuntimeException",
	nullptr,
	_XNIException_FieldInfo_,
	_XNIException_MethodInfo_
};

$Object* allocate$XNIException($Class* clazz) {
	return $of($alloc(XNIException));
}

void XNIException::init$($String* message) {
	$RuntimeException::init$(message);
}

void XNIException::init$($Exception* exception) {
	$RuntimeException::init$($($nc(exception)->getMessage()));
	$set(this, fException, exception);
}

void XNIException::init$($String* message, $Exception* exception) {
	$RuntimeException::init$(message);
	$set(this, fException, exception);
}

$Exception* XNIException::getException() {
	return this->fException;
}

$Throwable* XNIException::getCause() {
	return this->fException;
}

XNIException::XNIException() {
}

XNIException::XNIException(const XNIException& e) {
}

XNIException XNIException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XNIException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XNIException::load$($String* name, bool initialize) {
	$loadClass(XNIException, name, initialize, &_XNIException_ClassInfo_, allocate$XNIException);
	return class$;
}

$Class* XNIException::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com