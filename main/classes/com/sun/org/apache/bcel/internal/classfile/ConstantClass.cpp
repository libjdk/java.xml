#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantObject = ::com::sun::org::apache::bcel::internal::classfile::ConstantObject;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
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

$FieldInfo _ConstantClass_FieldInfo_[] = {
	{"nameIndex", "I", nullptr, $PRIVATE, $field(ConstantClass, nameIndex)},
	{}
};

$MethodInfo _ConstantClass_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantClass;)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantClass::*)(ConstantClass*)>(&ConstantClass::init$))},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ConstantClass::*)($DataInput*)>(&ConstantClass::init$)), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantClass::*)(int32_t)>(&ConstantClass::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBytes", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ConstantClass::*)($ConstantPool*)>(&ConstantClass::getBytes))},
	{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getNameIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ConstantClass::*)()>(&ConstantClass::getNameIndex))},
	{"setNameIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantClass::*)(int32_t)>(&ConstantClass::setNameIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConstantClass_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantClass",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
	_ConstantClass_FieldInfo_,
	_ConstantClass_MethodInfo_
};

$Object* allocate$ConstantClass($Class* clazz) {
	return $of($alloc(ConstantClass));
}

$Object* ConstantClass::clone() {
	 return this->$Constant::clone();
}

bool ConstantClass::equals(Object$* obj) {
	 return this->$Constant::equals(obj);
}

int32_t ConstantClass::hashCode() {
	 return this->$Constant::hashCode();
}

void ConstantClass::finalize() {
	this->$Constant::finalize();
}

void ConstantClass::init$(ConstantClass* c) {
	ConstantClass::init$($nc(c)->getNameIndex());
}

void ConstantClass::init$($DataInput* dataInput) {
	ConstantClass::init$($nc(dataInput)->readUnsignedShort());
}

void ConstantClass::init$(int32_t nameIndex) {
	$Constant::init$($Const::CONSTANT_Class);
	this->nameIndex = nameIndex;
}

void ConstantClass::accept($Visitor* v) {
	$nc(v)->visitConstantClass(this);
}

void ConstantClass::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeShort(this->nameIndex);
}

int32_t ConstantClass::getNameIndex() {
	return this->nameIndex;
}

void ConstantClass::setNameIndex(int32_t nameIndex) {
	this->nameIndex = nameIndex;
}

$Object* ConstantClass::getConstantValue($ConstantPool* cp) {
	$var($Constant, c, $nc(cp)->getConstant(this->nameIndex, $Const::CONSTANT_Utf8));
	return $of($nc(($cast($ConstantUtf8, c)))->getBytes());
}

$String* ConstantClass::getBytes($ConstantPool* cp) {
	return $cast($String, getConstantValue(cp));
}

$String* ConstantClass::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(nameIndex = "_s, $$str(this->nameIndex), ")"_s});
}

ConstantClass::ConstantClass() {
}

$Class* ConstantClass::load$($String* name, bool initialize) {
	$loadClass(ConstantClass, name, initialize, &_ConstantClass_ClassInfo_, allocate$ConstantClass);
	return class$;
}

$Class* ConstantClass::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com