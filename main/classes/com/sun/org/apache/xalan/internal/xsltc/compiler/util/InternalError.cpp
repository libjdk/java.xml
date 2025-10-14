#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/InternalError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _InternalError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InternalError, serialVersionUID)},
	{}
};

$MethodInfo _InternalError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InternalError::*)($String*)>(&InternalError::init$))},
	{}
};

$ClassInfo _InternalError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.InternalError",
	"java.lang.Error",
	nullptr,
	_InternalError_FieldInfo_,
	_InternalError_MethodInfo_
};

$Object* allocate$InternalError($Class* clazz) {
	return $of($alloc(InternalError));
}

void InternalError::init$($String* msg) {
	$Error::init$(msg);
}

InternalError::InternalError() {
}

InternalError::InternalError(const InternalError& e) {
}

InternalError InternalError::wrapper$() {
	$pendingException(this);
	return *this;
}

void InternalError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InternalError::load$($String* name, bool initialize) {
	$loadClass(InternalError, name, initialize, &_InternalError_ClassInfo_, allocate$InternalError);
	return class$;
}

$Class* InternalError::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com