#include <javax/xml/parsers/FactoryConfigurationError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace parsers {

$FieldInfo _FactoryConfigurationError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FactoryConfigurationError, serialVersionUID)},
	{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(FactoryConfigurationError, exception)},
	{}
};

$MethodInfo _FactoryConfigurationError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FactoryConfigurationError::*)()>(&FactoryConfigurationError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FactoryConfigurationError::*)($String*)>(&FactoryConfigurationError::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(FactoryConfigurationError::*)($Exception*)>(&FactoryConfigurationError::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FactoryConfigurationError::*)($Exception*,$String*)>(&FactoryConfigurationError::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FactoryConfigurationError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.parsers.FactoryConfigurationError",
	"java.lang.Error",
	nullptr,
	_FactoryConfigurationError_FieldInfo_,
	_FactoryConfigurationError_MethodInfo_
};

$Object* allocate$FactoryConfigurationError($Class* clazz) {
	return $of($alloc(FactoryConfigurationError));
}

void FactoryConfigurationError::init$() {
	$Error::init$();
	$set(this, exception, nullptr);
}

void FactoryConfigurationError::init$($String* msg) {
	$Error::init$(msg);
	$set(this, exception, nullptr);
}

void FactoryConfigurationError::init$($Exception* e) {
	$Error::init$($($nc(e)->toString()));
	$set(this, exception, e);
}

void FactoryConfigurationError::init$($Exception* e, $String* msg) {
	$Error::init$(msg);
	$set(this, exception, e);
}

$String* FactoryConfigurationError::getMessage() {
	$var($String, message, $Error::getMessage());
	if (message == nullptr && this->exception != nullptr) {
		return $nc(this->exception)->getMessage();
	}
	return message;
}

$Exception* FactoryConfigurationError::getException() {
	return this->exception;
}

$Throwable* FactoryConfigurationError::getCause() {
	return this->exception;
}

FactoryConfigurationError::FactoryConfigurationError() {
}

FactoryConfigurationError::FactoryConfigurationError(const FactoryConfigurationError& e) {
}

FactoryConfigurationError FactoryConfigurationError::wrapper$() {
	$pendingException(this);
	return *this;
}

void FactoryConfigurationError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* FactoryConfigurationError::load$($String* name, bool initialize) {
	$loadClass(FactoryConfigurationError, name, initialize, &_FactoryConfigurationError_ClassInfo_, allocate$FactoryConfigurationError);
	return class$;
}

$Class* FactoryConfigurationError::class$ = nullptr;

		} // parsers
	} // xml
} // javax