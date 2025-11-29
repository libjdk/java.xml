#include <com/sun/org/apache/bcel/internal/classfile/InnerClass.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _InnerClass_FieldInfo_[] = {
	{"innerClassIndex", "I", nullptr, $PRIVATE, $field(InnerClass, innerClassIndex)},
	{"outerClassIndex", "I", nullptr, $PRIVATE, $field(InnerClass, outerClassIndex)},
	{"innerNameIndex", "I", nullptr, $PRIVATE, $field(InnerClass, innerNameIndex)},
	{"innerAccessFlags", "I", nullptr, $PRIVATE, $field(InnerClass, innerAccessFlags)},
	{}
};

$MethodInfo _InnerClass_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;)V", nullptr, $PUBLIC, $method(static_cast<void(InnerClass::*)(InnerClass*)>(&InnerClass::init$))},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(InnerClass::*)($DataInput*)>(&InnerClass::init$)), "java.io.IOException"},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(InnerClass::*)(int32_t,int32_t,int32_t,int32_t)>(&InnerClass::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;", nullptr, $PUBLIC, $method(static_cast<InnerClass*(InnerClass::*)()>(&InnerClass::copy))},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(InnerClass::*)($DataOutputStream*)>(&InnerClass::dump)), "java.io.IOException"},
	{"getInnerAccessFlags", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(InnerClass::*)()>(&InnerClass::getInnerAccessFlags))},
	{"getInnerClassIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(InnerClass::*)()>(&InnerClass::getInnerClassIndex))},
	{"getInnerNameIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(InnerClass::*)()>(&InnerClass::getInnerNameIndex))},
	{"getOuterClassIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(InnerClass::*)()>(&InnerClass::getOuterClassIndex))},
	{"setInnerAccessFlags", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(InnerClass::*)(int32_t)>(&InnerClass::setInnerAccessFlags))},
	{"setInnerClassIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(InnerClass::*)(int32_t)>(&InnerClass::setInnerClassIndex))},
	{"setInnerNameIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(InnerClass::*)(int32_t)>(&InnerClass::setInnerNameIndex))},
	{"setOuterClassIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(InnerClass::*)(int32_t)>(&InnerClass::setOuterClassIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(InnerClass::*)($ConstantPool*)>(&InnerClass::toString))},
	{}
};

$ClassInfo _InnerClass_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.InnerClass",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_InnerClass_FieldInfo_,
	_InnerClass_MethodInfo_
};

$Object* allocate$InnerClass($Class* clazz) {
	return $of($alloc(InnerClass));
}

int32_t InnerClass::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool InnerClass::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* InnerClass::clone() {
	 return this->$Cloneable::clone();
}

void InnerClass::finalize() {
	this->$Cloneable::finalize();
}

void InnerClass::init$(InnerClass* c) {
	int32_t var$0 = $nc(c)->getInnerClassIndex();
	int32_t var$1 = c->getOuterClassIndex();
	int32_t var$2 = c->getInnerNameIndex();
	InnerClass::init$(var$0, var$1, var$2, c->getInnerAccessFlags());
}

void InnerClass::init$($DataInput* file) {
	int32_t var$0 = $nc(file)->readUnsignedShort();
	int32_t var$1 = file->readUnsignedShort();
	int32_t var$2 = file->readUnsignedShort();
	InnerClass::init$(var$0, var$1, var$2, file->readUnsignedShort());
}

void InnerClass::init$(int32_t innerClassIndex, int32_t outerClassIndex, int32_t innerNameIndex, int32_t innerAccessFlags) {
	this->innerClassIndex = innerClassIndex;
	this->outerClassIndex = outerClassIndex;
	this->innerNameIndex = innerNameIndex;
	this->innerAccessFlags = innerAccessFlags;
}

void InnerClass::accept($Visitor* v) {
	$nc(v)->visitInnerClass(this);
}

void InnerClass::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->innerClassIndex);
	file->writeShort(this->outerClassIndex);
	file->writeShort(this->innerNameIndex);
	file->writeShort(this->innerAccessFlags);
}

int32_t InnerClass::getInnerAccessFlags() {
	return this->innerAccessFlags;
}

int32_t InnerClass::getInnerClassIndex() {
	return this->innerClassIndex;
}

int32_t InnerClass::getInnerNameIndex() {
	return this->innerNameIndex;
}

int32_t InnerClass::getOuterClassIndex() {
	return this->outerClassIndex;
}

void InnerClass::setInnerAccessFlags(int32_t innerAccessFlags) {
	this->innerAccessFlags = innerAccessFlags;
}

void InnerClass::setInnerClassIndex(int32_t innerClassIndex) {
	this->innerClassIndex = innerClassIndex;
}

void InnerClass::setInnerNameIndex(int32_t innerNameIndex) {
	this->innerNameIndex = innerNameIndex;
}

void InnerClass::setOuterClassIndex(int32_t outerClassIndex) {
	this->outerClassIndex = outerClassIndex;
}

$String* InnerClass::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"InnerClass("_s, $$str(this->innerClassIndex), ", "_s, $$str(this->outerClassIndex), ", "_s, $$str(this->innerNameIndex), ", "_s, $$str(this->innerAccessFlags), ")"_s});
}

$String* InnerClass::toString($ConstantPool* constantPool) {
	$useLocalCurrentObjectStackCache();
	$var($String, outer_class_name, nullptr);
	$var($String, inner_name, nullptr);
	$var($String, inner_class_name, $nc(constantPool)->getConstantString(this->innerClassIndex, $Const::CONSTANT_Class));
	$assign(inner_class_name, $Utility::compactClassName(inner_class_name, false));
	if (this->outerClassIndex != 0) {
		$assign(outer_class_name, constantPool->getConstantString(this->outerClassIndex, $Const::CONSTANT_Class));
		$assign(outer_class_name, $str({" of class "_s, $($Utility::compactClassName(outer_class_name, false))}));
	} else {
		$assign(outer_class_name, ""_s);
	}
	if (this->innerNameIndex != 0) {
		$assign(inner_name, $nc(($cast($ConstantUtf8, $(constantPool->getConstant(this->innerNameIndex, $Const::CONSTANT_Utf8)))))->getBytes());
	} else {
		$assign(inner_name, "(anonymous)"_s);
	}
	$var($String, access, $Utility::accessToString(this->innerAccessFlags, true));
	$assign(access, $nc(access)->isEmpty() ? ""_s : ($str({access, " "_s})));
	return $str({"  "_s, access, inner_name, "=class "_s, inner_class_name, outer_class_name});
}

InnerClass* InnerClass::copy() {
	try {
		return $cast(InnerClass, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

InnerClass::InnerClass() {
}

$Class* InnerClass::load$($String* name, bool initialize) {
	$loadClass(InnerClass, name, initialize, &_InnerClass_ClassInfo_, allocate$InnerClass);
	return class$;
}

$Class* InnerClass::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com