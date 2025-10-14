#include <com/sun/org/apache/bcel/internal/generic/NamedAndTyped.h>

#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _NamedAndTyped_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setType", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NamedAndTyped_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.NamedAndTyped",
	nullptr,
	nullptr,
	nullptr,
	_NamedAndTyped_MethodInfo_
};

$Object* allocate$NamedAndTyped($Class* clazz) {
	return $of($alloc(NamedAndTyped));
}

$Class* NamedAndTyped::load$($String* name, bool initialize) {
	$loadClass(NamedAndTyped, name, initialize, &_NamedAndTyped_ClassInfo_, allocate$NamedAndTyped);
	return class$;
}

$Class* NamedAndTyped::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com