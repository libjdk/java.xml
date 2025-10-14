#include <com/sun/org/apache/bcel/internal/generic/FSTORE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FSTORE
#undef FSTORE_0

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
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

$MethodInfo _FSTORE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FSTORE::*)()>(&FSTORE::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(FSTORE::*)(int32_t)>(&FSTORE::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FSTORE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.FSTORE",
	"com.sun.org.apache.bcel.internal.generic.StoreInstruction",
	nullptr,
	nullptr,
	_FSTORE_MethodInfo_
};

$Object* allocate$FSTORE($Class* clazz) {
	return $of($alloc(FSTORE));
}

void FSTORE::init$() {
	$StoreInstruction::init$($Const::FSTORE, $Const::FSTORE_0);
}

void FSTORE::init$(int32_t n) {
	$StoreInstruction::init$($Const::FSTORE, $Const::FSTORE_0, n);
}

void FSTORE::accept($Visitor* v) {
	$StoreInstruction::accept(v);
	$nc(v)->visitFSTORE(this);
}

FSTORE::FSTORE() {
}

$Class* FSTORE::load$($String* name, bool initialize) {
	$loadClass(FSTORE, name, initialize, &_FSTORE_ClassInfo_, allocate$FSTORE);
	return class$;
}

$Class* FSTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com