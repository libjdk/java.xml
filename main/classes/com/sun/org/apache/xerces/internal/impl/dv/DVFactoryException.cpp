#include <com/sun/org/apache/xerces/internal/impl/dv/DVFactoryException.h>

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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$FieldInfo _DVFactoryException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DVFactoryException, serialVersionUID)},
	{}
};

$MethodInfo _DVFactoryException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DVFactoryException::*)()>(&DVFactoryException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DVFactoryException::*)($String*)>(&DVFactoryException::init$))},
	{}
};

$ClassInfo _DVFactoryException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.DVFactoryException",
	"java.lang.RuntimeException",
	nullptr,
	_DVFactoryException_FieldInfo_,
	_DVFactoryException_MethodInfo_
};

$Object* allocate$DVFactoryException($Class* clazz) {
	return $of($alloc(DVFactoryException));
}

void DVFactoryException::init$() {
	$RuntimeException::init$();
}

void DVFactoryException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

DVFactoryException::DVFactoryException() {
}

DVFactoryException::DVFactoryException(const DVFactoryException& e) {
}

DVFactoryException DVFactoryException::wrapper$() {
	$pendingException(this);
	return *this;
}

void DVFactoryException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* DVFactoryException::load$($String* name, bool initialize) {
	$loadClass(DVFactoryException, name, initialize, &_DVFactoryException_ClassInfo_, allocate$DVFactoryException);
	return class$;
}

$Class* DVFactoryException::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com