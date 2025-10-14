#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/NOTATIONDatatypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
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
								namespace dtd {

$MethodInfo _NOTATIONDatatypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NOTATIONDatatypeValidator::*)()>(&NOTATIONDatatypeValidator::init$))},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _NOTATIONDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.NOTATIONDatatypeValidator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator",
	nullptr,
	_NOTATIONDatatypeValidator_MethodInfo_
};

$Object* allocate$NOTATIONDatatypeValidator($Class* clazz) {
	return $of($alloc(NOTATIONDatatypeValidator));
}

void NOTATIONDatatypeValidator::init$() {
}

void NOTATIONDatatypeValidator::validate($String* content, $ValidationContext* context) {
}

NOTATIONDatatypeValidator::NOTATIONDatatypeValidator() {
}

$Class* NOTATIONDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(NOTATIONDatatypeValidator, name, initialize, &_NOTATIONDatatypeValidator_ClassInfo_, allocate$NOTATIONDatatypeValidator);
	return class$;
}

$Class* NOTATIONDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com