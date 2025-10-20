#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ConstantMethodHandle_FieldInfo_[] = {
	{"referenceKind", "I", nullptr, $PRIVATE, $field(ConstantMethodHandle, referenceKind)},
	{"referenceIndex", "I", nullptr, $PRIVATE, $field(ConstantMethodHandle, referenceIndex)},
	{}
};

$MethodInfo _ConstantMethodHandle_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle;)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantMethodHandle::*)(ConstantMethodHandle*)>(&ConstantMethodHandle::init$))},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ConstantMethodHandle::*)($DataInput*)>(&ConstantMethodHandle::init$)), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantMethodHandle::*)(int32_t,int32_t)>(&ConstantMethodHandle::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getReferenceIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ConstantMethodHandle::*)()>(&ConstantMethodHandle::getReferenceIndex))},
	{"getReferenceKind", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ConstantMethodHandle::*)()>(&ConstantMethodHandle::getReferenceKind))},
	{"setReferenceIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantMethodHandle::*)(int32_t)>(&ConstantMethodHandle::setReferenceIndex))},
	{"setReferenceKind", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantMethodHandle::*)(int32_t)>(&ConstantMethodHandle::setReferenceKind))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConstantMethodHandle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantMethodHandle",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	nullptr,
	_ConstantMethodHandle_FieldInfo_,
	_ConstantMethodHandle_MethodInfo_
};

$Object* allocate$ConstantMethodHandle($Class* clazz) {
	return $of($alloc(ConstantMethodHandle));
}

void ConstantMethodHandle::init$(ConstantMethodHandle* c) {
	int32_t var$0 = $nc(c)->getReferenceKind();
	ConstantMethodHandle::init$(var$0, c->getReferenceIndex());
}

void ConstantMethodHandle::init$($DataInput* file) {
	int32_t var$0 = $nc(file)->readUnsignedByte();
	ConstantMethodHandle::init$(var$0, file->readUnsignedShort());
}

void ConstantMethodHandle::init$(int32_t reference_kind, int32_t reference_index) {
	$Constant::init$($Const::CONSTANT_MethodHandle);
	this->referenceKind = reference_kind;
	this->referenceIndex = reference_index;
}

void ConstantMethodHandle::accept($Visitor* v) {
	$nc(v)->visitConstantMethodHandle(this);
}

void ConstantMethodHandle::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeByte(this->referenceKind);
	file->writeShort(this->referenceIndex);
}

int32_t ConstantMethodHandle::getReferenceKind() {
	return this->referenceKind;
}

void ConstantMethodHandle::setReferenceKind(int32_t reference_kind) {
	this->referenceKind = reference_kind;
}

int32_t ConstantMethodHandle::getReferenceIndex() {
	return this->referenceIndex;
}

void ConstantMethodHandle::setReferenceIndex(int32_t reference_index) {
	this->referenceIndex = reference_index;
}

$String* ConstantMethodHandle::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(referenceKind = "_s, $$str(this->referenceKind), ", referenceIndex = "_s, $$str(this->referenceIndex), ")"_s});
}

ConstantMethodHandle::ConstantMethodHandle() {
}

$Class* ConstantMethodHandle::load$($String* name, bool initialize) {
	$loadClass(ConstantMethodHandle, name, initialize, &_ConstantMethodHandle_ClassInfo_, allocate$ConstantMethodHandle);
	return class$;
}

$Class* ConstantMethodHandle::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com