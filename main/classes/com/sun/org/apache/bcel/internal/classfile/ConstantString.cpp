#include <com/sun/org/apache/bcel/internal/classfile/ConstantString.h>

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

$FieldInfo _ConstantString_FieldInfo_[] = {
	{"stringIndex", "I", nullptr, $PRIVATE, $field(ConstantString, stringIndex)},
	{}
};

$MethodInfo _ConstantString_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantString;)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantString::*)(ConstantString*)>(&ConstantString::init$))},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ConstantString::*)($DataInput*)>(&ConstantString::init$)), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantString::*)(int32_t)>(&ConstantString::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBytes", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ConstantString::*)($ConstantPool*)>(&ConstantString::getBytes))},
	{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getStringIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ConstantString::*)()>(&ConstantString::getStringIndex))},
	{"setStringIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantString::*)(int32_t)>(&ConstantString::setStringIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConstantString_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantString",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
	_ConstantString_FieldInfo_,
	_ConstantString_MethodInfo_
};

$Object* allocate$ConstantString($Class* clazz) {
	return $of($alloc(ConstantString));
}

$Object* ConstantString::clone() {
	 return this->$Constant::clone();
}

bool ConstantString::equals(Object$* obj) {
	 return this->$Constant::equals(obj);
}

int32_t ConstantString::hashCode() {
	 return this->$Constant::hashCode();
}

void ConstantString::finalize() {
	this->$Constant::finalize();
}

void ConstantString::init$(ConstantString* c) {
	ConstantString::init$($nc(c)->getStringIndex());
}

void ConstantString::init$($DataInput* file) {
	ConstantString::init$($nc(file)->readUnsignedShort());
}

void ConstantString::init$(int32_t stringIndex) {
	$Constant::init$($Const::CONSTANT_String);
	this->stringIndex = stringIndex;
}

void ConstantString::accept($Visitor* v) {
	$nc(v)->visitConstantString(this);
}

void ConstantString::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeShort(this->stringIndex);
}

int32_t ConstantString::getStringIndex() {
	return this->stringIndex;
}

void ConstantString::setStringIndex(int32_t stringIndex) {
	this->stringIndex = stringIndex;
}

$String* ConstantString::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(stringIndex = "_s, $$str(this->stringIndex), ")"_s});
}

$Object* ConstantString::getConstantValue($ConstantPool* cp) {
	$var($Constant, c, $nc(cp)->getConstant(this->stringIndex, $Const::CONSTANT_Utf8));
	return $of($nc(($cast($ConstantUtf8, c)))->getBytes());
}

$String* ConstantString::getBytes($ConstantPool* cp) {
	return $cast($String, getConstantValue(cp));
}

ConstantString::ConstantString() {
}

$Class* ConstantString::load$($String* name, bool initialize) {
	$loadClass(ConstantString, name, initialize, &_ConstantString_ClassInfo_, allocate$ConstantString);
	return class$;
}

$Class* ConstantString::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com