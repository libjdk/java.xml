#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
							namespace validation {

$MethodInfo _EntityState_MethodInfo_[] = {
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _EntityState_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.validation.EntityState",
	nullptr,
	nullptr,
	nullptr,
	_EntityState_MethodInfo_
};

$Object* allocate$EntityState($Class* clazz) {
	return $of($alloc(EntityState));
}

$Class* EntityState::load$($String* name, bool initialize) {
	$loadClass(EntityState, name, initialize, &_EntityState_ClassInfo_, allocate$EntityState);
	return class$;
}

$Class* EntityState::class$ = nullptr;

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com