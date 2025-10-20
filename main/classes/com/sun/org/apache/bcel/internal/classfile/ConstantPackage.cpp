#include <com/sun/org/apache/bcel/internal/classfile/ConstantPackage.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
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

$FieldInfo _ConstantPackage_FieldInfo_[] = {
	{"nameIndex", "I", nullptr, $PRIVATE, $field(ConstantPackage, nameIndex)},
	{}
};

$MethodInfo _ConstantPackage_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPackage;)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantPackage::*)(ConstantPackage*)>(&ConstantPackage::init$))},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ConstantPackage::*)($DataInput*)>(&ConstantPackage::init$)), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantPackage::*)(int32_t)>(&ConstantPackage::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBytes", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ConstantPackage::*)($ConstantPool*)>(&ConstantPackage::getBytes))},
	{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getNameIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ConstantPackage::*)()>(&ConstantPackage::getNameIndex))},
	{"setNameIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantPackage::*)(int32_t)>(&ConstantPackage::setNameIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConstantPackage_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantPackage",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
	_ConstantPackage_FieldInfo_,
	_ConstantPackage_MethodInfo_
};

$Object* allocate$ConstantPackage($Class* clazz) {
	return $of($alloc(ConstantPackage));
}

$Object* ConstantPackage::clone() {
	 return this->$Constant::clone();
}

bool ConstantPackage::equals(Object$* obj) {
	 return this->$Constant::equals(obj);
}

int32_t ConstantPackage::hashCode() {
	 return this->$Constant::hashCode();
}

void ConstantPackage::finalize() {
	this->$Constant::finalize();
}

void ConstantPackage::init$(ConstantPackage* c) {
	ConstantPackage::init$($nc(c)->getNameIndex());
}

void ConstantPackage::init$($DataInput* file) {
	ConstantPackage::init$($nc(file)->readUnsignedShort());
}

void ConstantPackage::init$(int32_t nameIndex) {
	$Constant::init$($Const::CONSTANT_Package);
	this->nameIndex = nameIndex;
}

void ConstantPackage::accept($Visitor* v) {
	$nc(v)->visitConstantPackage(this);
}

void ConstantPackage::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeShort(this->nameIndex);
}

int32_t ConstantPackage::getNameIndex() {
	return this->nameIndex;
}

void ConstantPackage::setNameIndex(int32_t nameIndex) {
	this->nameIndex = nameIndex;
}

$Object* ConstantPackage::getConstantValue($ConstantPool* cp) {
	$var($Constant, c, $nc(cp)->getConstant(this->nameIndex, $Const::CONSTANT_Utf8));
	return $of($nc(($cast($ConstantUtf8, c)))->getBytes());
}

$String* ConstantPackage::getBytes($ConstantPool* cp) {
	return $cast($String, getConstantValue(cp));
}

$String* ConstantPackage::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(nameIndex = "_s, $$str(this->nameIndex), ")"_s});
}

ConstantPackage::ConstantPackage() {
}

$Class* ConstantPackage::load$($String* name, bool initialize) {
	$loadClass(ConstantPackage, name, initialize, &_ConstantPackage_ClassInfo_, allocate$ConstantPackage);
	return class$;
}

$Class* ConstantPackage::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com