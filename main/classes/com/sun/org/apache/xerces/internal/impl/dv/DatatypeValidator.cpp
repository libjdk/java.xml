#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$MethodInfo _DatatypeValidator_MethodInfo_[] = {
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _DatatypeValidator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator",
	nullptr,
	nullptr,
	nullptr,
	_DatatypeValidator_MethodInfo_
};

$Object* allocate$DatatypeValidator($Class* clazz) {
	return $of($alloc(DatatypeValidator));
}

$Class* DatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(DatatypeValidator, name, initialize, &_DatatypeValidator_ClassInfo_, allocate$DatatypeValidator);
	return class$;
}

$Class* DatatypeValidator::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com