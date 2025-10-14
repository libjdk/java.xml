#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DatatypeException = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$FieldInfo _InvalidDatatypeValueException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(InvalidDatatypeValueException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidDatatypeValueException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDatatypeValueException::*)($String*,$ObjectArray*)>(&InvalidDatatypeValueException::init$))},
	{}
};

$ClassInfo _InvalidDatatypeValueException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException",
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeException",
	nullptr,
	_InvalidDatatypeValueException_FieldInfo_,
	_InvalidDatatypeValueException_MethodInfo_
};

$Object* allocate$InvalidDatatypeValueException($Class* clazz) {
	return $of($alloc(InvalidDatatypeValueException));
}

void InvalidDatatypeValueException::init$($String* key, $ObjectArray* args) {
	$DatatypeException::init$(key, args);
}

InvalidDatatypeValueException::InvalidDatatypeValueException() {
}

InvalidDatatypeValueException::InvalidDatatypeValueException(const InvalidDatatypeValueException& e) {
}

InvalidDatatypeValueException InvalidDatatypeValueException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidDatatypeValueException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidDatatypeValueException::load$($String* name, bool initialize) {
	$loadClass(InvalidDatatypeValueException, name, initialize, &_InvalidDatatypeValueException_ClassInfo_, allocate$InvalidDatatypeValueException);
	return class$;
}

$Class* InvalidDatatypeValueException::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com