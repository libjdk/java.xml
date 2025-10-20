#include <com/sun/org/apache/xerces/internal/impl/dv/xs/IntegerDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV$XDecimal.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $DecimalDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DecimalDV;
using $DecimalDV$XDecimal = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DecimalDV$XDecimal;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$MethodInfo _IntegerDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegerDV::*)()>(&IntegerDV::init$))},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _IntegerDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.IntegerDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV",
	nullptr,
	nullptr,
	_IntegerDV_MethodInfo_
};

$Object* allocate$IntegerDV($Class* clazz) {
	return $of($alloc(IntegerDV));
}

void IntegerDV::init$() {
	$DecimalDV::init$();
}

$Object* IntegerDV::getActualValue($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of($new($DecimalDV$XDecimal, content, true));
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("integer"_s)
		}));
	}
	$shouldNotReachHere();
}

IntegerDV::IntegerDV() {
}

$Class* IntegerDV::load$($String* name, bool initialize) {
	$loadClass(IntegerDV, name, initialize, &_IntegerDV_ClassInfo_, allocate$IntegerDV);
	return class$;
}

$Class* IntegerDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com