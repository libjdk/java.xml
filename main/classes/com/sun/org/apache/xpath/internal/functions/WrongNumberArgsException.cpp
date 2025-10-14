#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _WrongNumberArgsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WrongNumberArgsException, serialVersionUID)},
	{}
};

$MethodInfo _WrongNumberArgsException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(WrongNumberArgsException::*)($String*)>(&WrongNumberArgsException::init$))},
	{}
};

$ClassInfo _WrongNumberArgsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException",
	"java.lang.Exception",
	nullptr,
	_WrongNumberArgsException_FieldInfo_,
	_WrongNumberArgsException_MethodInfo_
};

$Object* allocate$WrongNumberArgsException($Class* clazz) {
	return $of($alloc(WrongNumberArgsException));
}

void WrongNumberArgsException::init$($String* argsExpected) {
	$Exception::init$(argsExpected);
}

WrongNumberArgsException::WrongNumberArgsException() {
}

WrongNumberArgsException::WrongNumberArgsException(const WrongNumberArgsException& e) {
}

WrongNumberArgsException WrongNumberArgsException::wrapper$() {
	$pendingException(this);
	return *this;
}

void WrongNumberArgsException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* WrongNumberArgsException::load$($String* name, bool initialize) {
	$loadClass(WrongNumberArgsException, name, initialize, &_WrongNumberArgsException_ClassInfo_, allocate$WrongNumberArgsException);
	return class$;
}

$Class* WrongNumberArgsException::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com