#include <com/sun/org/apache/bcel/internal/generic/LDC_W.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <jcpp.h>

#undef LDC_W

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $LDC = ::com::sun::org::apache::bcel::internal::generic::LDC;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataInputStream = ::java::io::DataInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _LDC_W_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LDC_W::*)()>(&LDC_W::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(LDC_W::*)(int32_t)>(&LDC_W::init$))},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _LDC_W_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LDC_W",
	"com.sun.org.apache.bcel.internal.generic.LDC",
	nullptr,
	nullptr,
	_LDC_W_MethodInfo_
};

$Object* allocate$LDC_W($Class* clazz) {
	return $of($alloc(LDC_W));
}

void LDC_W::init$() {
	$LDC::init$();
}

void LDC_W::init$(int32_t index) {
	$LDC::init$(index);
}

void LDC_W::initFromFile($ByteSequence* bytes, bool wide) {
	setIndex($nc(bytes)->readUnsignedShort());
	$LDC::setOpcode($Const::LDC_W);
	$LDC::setLength(3);
}

LDC_W::LDC_W() {
}

$Class* LDC_W::load$($String* name, bool initialize) {
	$loadClass(LDC_W, name, initialize, &_LDC_W_ClassInfo_, allocate$LDC_W);
	return class$;
}

$Class* LDC_W::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com