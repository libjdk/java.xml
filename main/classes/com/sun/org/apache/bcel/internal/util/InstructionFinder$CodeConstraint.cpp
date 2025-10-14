#include <com/sun/org/apache/bcel/internal/util/InstructionFinder$CodeConstraint.h>

#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/util/InstructionFinder.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $InstructionFinder = ::com::sun::org::apache::bcel::internal::util::InstructionFinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$MethodInfo _InstructionFinder$CodeConstraint_MethodInfo_[] = {
	{"checkCode", "([Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _InstructionFinder$CodeConstraint_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.util.InstructionFinder$CodeConstraint", "com.sun.org.apache.bcel.internal.util.InstructionFinder", "CodeConstraint", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InstructionFinder$CodeConstraint_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.util.InstructionFinder$CodeConstraint",
	nullptr,
	nullptr,
	nullptr,
	_InstructionFinder$CodeConstraint_MethodInfo_,
	nullptr,
	nullptr,
	_InstructionFinder$CodeConstraint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.util.InstructionFinder"
};

$Object* allocate$InstructionFinder$CodeConstraint($Class* clazz) {
	return $of($alloc(InstructionFinder$CodeConstraint));
}

$Class* InstructionFinder$CodeConstraint::load$($String* name, bool initialize) {
	$loadClass(InstructionFinder$CodeConstraint, name, initialize, &_InstructionFinder$CodeConstraint_ClassInfo_, allocate$InstructionFinder$CodeConstraint);
	return class$;
}

$Class* InstructionFinder$CodeConstraint::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com