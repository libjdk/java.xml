#include <com/sun/org/apache/bcel/internal/generic/IMPDEP1.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef IMPDEP1

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _IMPDEP1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IMPDEP1::*)()>(&IMPDEP1::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IMPDEP1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IMPDEP1",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	nullptr,
	nullptr,
	_IMPDEP1_MethodInfo_
};

$Object* allocate$IMPDEP1($Class* clazz) {
	return $of($alloc(IMPDEP1));
}

void IMPDEP1::init$() {
	$Instruction::init$($Const::IMPDEP1, (int16_t)1);
}

void IMPDEP1::accept($Visitor* v) {
	$nc(v)->visitIMPDEP1(this);
}

IMPDEP1::IMPDEP1() {
}

$Class* IMPDEP1::load$($String* name, bool initialize) {
	$loadClass(IMPDEP1, name, initialize, &_IMPDEP1_ClassInfo_, allocate$IMPDEP1);
	return class$;
}

$Class* IMPDEP1::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com