#include <com/sun/org/apache/xerces/internal/utils/ConfigurationError.h>

#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

$FieldInfo _ConfigurationError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConfigurationError, serialVersionUID)},
	{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(ConfigurationError, exception)},
	{}
};

$MethodInfo _ConfigurationError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, 0, $method(static_cast<void(ConfigurationError::*)($String*,$Exception*)>(&ConfigurationError::init$))},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $method(static_cast<$Exception*(ConfigurationError::*)()>(&ConfigurationError::getException))},
	{}
};

$ClassInfo _ConfigurationError_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.utils.ConfigurationError",
	"java.lang.Error",
	nullptr,
	_ConfigurationError_FieldInfo_,
	_ConfigurationError_MethodInfo_
};

$Object* allocate$ConfigurationError($Class* clazz) {
	return $of($alloc(ConfigurationError));
}

void ConfigurationError::init$($String* msg, $Exception* x) {
	$Error::init$(msg);
	$set(this, exception, x);
}

$Exception* ConfigurationError::getException() {
	return this->exception;
}

ConfigurationError::ConfigurationError() {
}

ConfigurationError::ConfigurationError(const ConfigurationError& e) : $Error(e) {
}

void ConfigurationError::throw$() {
	throw *this;
}

$Class* ConfigurationError::load$($String* name, bool initialize) {
	$loadClass(ConfigurationError, name, initialize, &_ConfigurationError_ClassInfo_, allocate$ConfigurationError);
	return class$;
}

$Class* ConfigurationError::class$ = nullptr;

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com