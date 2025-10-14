#include <com/sun/org/apache/bcel/internal/classfile/ConstantFloat.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantObject = ::com::sun::org::apache::bcel::internal::classfile::ConstantObject;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ConstantFloat_FieldInfo_[] = {
	{"bytes", "F", nullptr, $PRIVATE, $field(ConstantFloat, bytes)},
	{}
};

$MethodInfo _ConstantFloat_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantFloat::*)(float)>(&ConstantFloat::init$))},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFloat;)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantFloat::*)(ConstantFloat*)>(&ConstantFloat::init$))},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ConstantFloat::*)($DataInput*)>(&ConstantFloat::init$)), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBytes", "()F", nullptr, $PUBLIC, $method(static_cast<float(ConstantFloat::*)()>(&ConstantFloat::getBytes))},
	{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setBytes", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantFloat::*)(float)>(&ConstantFloat::setBytes))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConstantFloat_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantFloat",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
	_ConstantFloat_FieldInfo_,
	_ConstantFloat_MethodInfo_
};

$Object* allocate$ConstantFloat($Class* clazz) {
	return $of($alloc(ConstantFloat));
}

$Object* ConstantFloat::clone() {
	 return this->$Constant::clone();
}

bool ConstantFloat::equals(Object$* obj) {
	 return this->$Constant::equals(obj);
}

int32_t ConstantFloat::hashCode() {
	 return this->$Constant::hashCode();
}

void ConstantFloat::finalize() {
	this->$Constant::finalize();
}

void ConstantFloat::init$(float bytes) {
	$Constant::init$($Const::CONSTANT_Float);
	this->bytes = bytes;
}

void ConstantFloat::init$(ConstantFloat* c) {
	ConstantFloat::init$($nc(c)->getBytes());
}

void ConstantFloat::init$($DataInput* file) {
	ConstantFloat::init$($nc(file)->readFloat());
}

void ConstantFloat::accept($Visitor* v) {
	$nc(v)->visitConstantFloat(this);
}

void ConstantFloat::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeFloat(this->bytes);
}

float ConstantFloat::getBytes() {
	return this->bytes;
}

void ConstantFloat::setBytes(float bytes) {
	this->bytes = bytes;
}

$String* ConstantFloat::toString() {
	return $str({$($Constant::toString()), "(bytes = "_s, $$str(this->bytes), ")"_s});
}

$Object* ConstantFloat::getConstantValue($ConstantPool* cp) {
	return $of($Float::valueOf(this->bytes));
}

ConstantFloat::ConstantFloat() {
}

$Class* ConstantFloat::load$($String* name, bool initialize) {
	$loadClass(ConstantFloat, name, initialize, &_ConstantFloat_ClassInfo_, allocate$ConstantFloat);
	return class$;
}

$Class* ConstantFloat::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com