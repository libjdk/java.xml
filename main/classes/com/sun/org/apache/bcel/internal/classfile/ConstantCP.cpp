#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
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
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
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

$FieldInfo _ConstantCP_FieldInfo_[] = {
	{"class_index", "I", nullptr, $PRIVATE, $field(ConstantCP, class_index)},
	{"name_and_type_index", "I", nullptr, $PRIVATE, $field(ConstantCP, name_and_type_index)},
	{}
};

$MethodInfo _ConstantCP_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantCP;)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantCP::*)(ConstantCP*)>(&ConstantCP::init$))},
	{"<init>", "(BLjava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ConstantCP::*)(int8_t,$DataInput*)>(&ConstantCP::init$)), "java.io.IOException"},
	{"<init>", "(BII)V", nullptr, $PROTECTED, $method(static_cast<void(ConstantCP::*)(int8_t,int32_t,int32_t)>(&ConstantCP::init$))},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"getClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getClassIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ConstantCP::*)()>(&ConstantCP::getClassIndex))},
	{"getNameAndTypeIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ConstantCP::*)()>(&ConstantCP::getNameAndTypeIndex))},
	{"setClassIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ConstantCP::*)(int32_t)>(&ConstantCP::setClassIndex))},
	{"setNameAndTypeIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ConstantCP::*)(int32_t)>(&ConstantCP::setNameAndTypeIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConstantCP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.ConstantCP",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	nullptr,
	_ConstantCP_FieldInfo_,
	_ConstantCP_MethodInfo_
};

$Object* allocate$ConstantCP($Class* clazz) {
	return $of($alloc(ConstantCP));
}

void ConstantCP::init$(ConstantCP* c) {
	int8_t var$0 = $nc(c)->getTag();
	int32_t var$1 = c->getClassIndex();
	ConstantCP::init$(var$0, var$1, c->getNameAndTypeIndex());
}

void ConstantCP::init$(int8_t tag, $DataInput* file) {
	int8_t var$0 = tag;
	int32_t var$1 = $nc(file)->readUnsignedShort();
	ConstantCP::init$(var$0, var$1, file->readUnsignedShort());
}

void ConstantCP::init$(int8_t tag, int32_t class_index, int32_t name_and_type_index) {
	$Constant::init$(tag);
	this->class_index = class_index;
	this->name_and_type_index = name_and_type_index;
}

void ConstantCP::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeShort(this->class_index);
	file->writeShort(this->name_and_type_index);
}

int32_t ConstantCP::getClassIndex() {
	return this->class_index;
}

void ConstantCP::setClassIndex(int32_t class_index) {
	this->class_index = class_index;
}

int32_t ConstantCP::getNameAndTypeIndex() {
	return this->name_and_type_index;
}

void ConstantCP::setNameAndTypeIndex(int32_t name_and_type_index) {
	this->name_and_type_index = name_and_type_index;
}

$String* ConstantCP::getClass($ConstantPool* cp) {
	return $nc(cp)->constantToString(this->class_index, $Const::CONSTANT_Class);
}

$String* ConstantCP::toString() {
	return $str({$($Constant::toString()), "(class_index = "_s, $$str(this->class_index), ", name_and_type_index = "_s, $$str(this->name_and_type_index), ")"_s});
}

ConstantCP::ConstantCP() {
}

$Class* ConstantCP::load$($String* name, bool initialize) {
	$loadClass(ConstantCP, name, initialize, &_ConstantCP_ClassInfo_, allocate$ConstantCP);
	return class$;
}

$Class* ConstantCP::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com