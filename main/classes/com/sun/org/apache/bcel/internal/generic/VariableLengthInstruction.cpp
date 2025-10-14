#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$ClassInfo _VariableLengthInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction"
};

$Object* allocate$VariableLengthInstruction($Class* clazz) {
	return $of($alloc(VariableLengthInstruction));
}

$Class* VariableLengthInstruction::load$($String* name, bool initialize) {
	$loadClass(VariableLengthInstruction, name, initialize, &_VariableLengthInstruction_ClassInfo_, allocate$VariableLengthInstruction);
	return class$;
}

$Class* VariableLengthInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com