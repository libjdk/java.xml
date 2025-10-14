#include <com/sun/org/apache/xml/internal/utils/WrongParserException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _WrongParserException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WrongParserException, serialVersionUID)},
	{}
};

$MethodInfo _WrongParserException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(WrongParserException::*)($String*)>(&WrongParserException::init$))},
	{}
};

$ClassInfo _WrongParserException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.WrongParserException",
	"java.lang.RuntimeException",
	nullptr,
	_WrongParserException_FieldInfo_,
	_WrongParserException_MethodInfo_
};

$Object* allocate$WrongParserException($Class* clazz) {
	return $of($alloc(WrongParserException));
}

void WrongParserException::init$($String* message) {
	$RuntimeException::init$(message);
}

WrongParserException::WrongParserException() {
}

WrongParserException::WrongParserException(const WrongParserException& e) {
}

WrongParserException WrongParserException::wrapper$() {
	$pendingException(this);
	return *this;
}

void WrongParserException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* WrongParserException::load$($String* name, bool initialize) {
	$loadClass(WrongParserException, name, initialize, &_WrongParserException_ClassInfo_, allocate$WrongParserException);
	return class$;
}

$Class* WrongParserException::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com