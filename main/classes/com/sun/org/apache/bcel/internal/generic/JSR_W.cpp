#include <com/sun/org/apache/bcel/internal/generic/JSR_W.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/JsrInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef JSR_W

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $JsrInstruction = ::com::sun::org::apache::bcel::internal::generic::JsrInstruction;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _JSR_W_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JSR_W::*)()>(&JSR_W::init$))},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(static_cast<void(JSR_W::*)($InstructionHandle*)>(&JSR_W::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _JSR_W_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.JSR_W",
	"com.sun.org.apache.bcel.internal.generic.JsrInstruction",
	nullptr,
	nullptr,
	_JSR_W_MethodInfo_
};

$Object* allocate$JSR_W($Class* clazz) {
	return $of($alloc(JSR_W));
}

void JSR_W::init$() {
	$JsrInstruction::init$();
}

void JSR_W::init$($InstructionHandle* target) {
	$JsrInstruction::init$($Const::JSR_W, target);
	$JsrInstruction::setLength(5);
}

void JSR_W::dump($DataOutputStream* out) {
	$JsrInstruction::setIndex(getTargetOffset());
	$nc(out)->writeByte($JsrInstruction::getOpcode());
	out->writeInt($JsrInstruction::getIndex());
}

void JSR_W::initFromFile($ByteSequence* bytes, bool wide) {
	$JsrInstruction::setIndex($nc(bytes)->readInt());
	$JsrInstruction::setLength(5);
}

void JSR_W::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitBranchInstruction(this);
	v->visitJsrInstruction(this);
	v->visitJSR_W(this);
}

JSR_W::JSR_W() {
}

$Class* JSR_W::load$($String* name, bool initialize) {
	$loadClass(JSR_W, name, initialize, &_JSR_W_ClassInfo_, allocate$JSR_W);
	return class$;
}

$Class* JSR_W::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com