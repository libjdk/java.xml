#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>

#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _StackConsumer_MethodInfo_[] = {
	{"consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StackConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	nullptr,
	nullptr,
	_StackConsumer_MethodInfo_
};

$Object* allocate$StackConsumer($Class* clazz) {
	return $of($alloc(StackConsumer));
}

$Class* StackConsumer::load$($String* name, bool initialize) {
	$loadClass(StackConsumer, name, initialize, &_StackConsumer_ClassInfo_, allocate$StackConsumer);
	return class$;
}

$Class* StackConsumer::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com