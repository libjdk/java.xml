#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$ClassInfo _PopInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.PopInstruction",
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.StackConsumer"
};

$Object* allocate$PopInstruction($Class* clazz) {
	return $of($alloc(PopInstruction));
}

$Class* PopInstruction::load$($String* name, bool initialize) {
	$loadClass(PopInstruction, name, initialize, &_PopInstruction_ClassInfo_, allocate$PopInstruction);
	return class$;
}

$Class* PopInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com