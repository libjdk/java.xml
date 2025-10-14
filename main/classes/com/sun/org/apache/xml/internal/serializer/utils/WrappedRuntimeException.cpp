#include <com/sun/org/apache/xml/internal/serializer/utils/WrappedRuntimeException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
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
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$FieldInfo _WrappedRuntimeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WrappedRuntimeException, serialVersionUID)},
	{"m_exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(WrappedRuntimeException, m_exception)},
	{}
};

$MethodInfo _WrappedRuntimeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(WrappedRuntimeException::*)($Exception*)>(&WrappedRuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(WrappedRuntimeException::*)($String*,$Exception*)>(&WrappedRuntimeException::init$))},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $method(static_cast<$Exception*(WrappedRuntimeException::*)()>(&WrappedRuntimeException::getException))},
	{}
};

$ClassInfo _WrappedRuntimeException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.WrappedRuntimeException",
	"java.lang.RuntimeException",
	nullptr,
	_WrappedRuntimeException_FieldInfo_,
	_WrappedRuntimeException_MethodInfo_
};

$Object* allocate$WrappedRuntimeException($Class* clazz) {
	return $of($alloc(WrappedRuntimeException));
}

void WrappedRuntimeException::init$($Exception* e) {
	$RuntimeException::init$($($nc(e)->getMessage()));
	$set(this, m_exception, e);
}

void WrappedRuntimeException::init$($String* msg, $Exception* e) {
	$RuntimeException::init$(msg);
	$set(this, m_exception, e);
}

$Exception* WrappedRuntimeException::getException() {
	return this->m_exception;
}

WrappedRuntimeException::WrappedRuntimeException() {
}

WrappedRuntimeException::WrappedRuntimeException(const WrappedRuntimeException& e) {
}

WrappedRuntimeException WrappedRuntimeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void WrappedRuntimeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* WrappedRuntimeException::load$($String* name, bool initialize) {
	$loadClass(WrappedRuntimeException, name, initialize, &_WrappedRuntimeException_ClassInfo_, allocate$WrappedRuntimeException);
	return class$;
}

$Class* WrappedRuntimeException::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com