#include <com/sun/org/apache/bcel/internal/classfile/EnclosingMethod.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
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

#undef ATTR_ENCLOSING_METHOD

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantClass = ::com::sun::org::apache::bcel::internal::classfile::ConstantClass;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
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

$FieldInfo _EnclosingMethod_FieldInfo_[] = {
	{"classIndex", "I", nullptr, $PRIVATE, $field(EnclosingMethod, classIndex)},
	{"methodIndex", "I", nullptr, $PRIVATE, $field(EnclosingMethod, methodIndex)},
	{}
};

$MethodInfo _EnclosingMethod_MethodInfo_[] = {
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(static_cast<void(EnclosingMethod::*)(int32_t,int32_t,$DataInput*,$ConstantPool*)>(&EnclosingMethod::init$)), "java.io.IOException"},
	{"<init>", "(IIIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PRIVATE, $method(static_cast<void(EnclosingMethod::*)(int32_t,int32_t,int32_t,int32_t,$ConstantPool*)>(&EnclosingMethod::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"getEnclosingClass", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantClass;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ConstantClass*(EnclosingMethod::*)()>(&EnclosingMethod::getEnclosingClass))},
	{"getEnclosingClassIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(EnclosingMethod::*)()>(&EnclosingMethod::getEnclosingClassIndex))},
	{"getEnclosingMethod", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantNameAndType;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ConstantNameAndType*(EnclosingMethod::*)()>(&EnclosingMethod::getEnclosingMethod))},
	{"getEnclosingMethodIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(EnclosingMethod::*)()>(&EnclosingMethod::getEnclosingMethodIndex))},
	{"setEnclosingClassIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(EnclosingMethod::*)(int32_t)>(&EnclosingMethod::setEnclosingClassIndex))},
	{"setEnclosingMethodIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(EnclosingMethod::*)(int32_t)>(&EnclosingMethod::setEnclosingMethodIndex))},
	{}
};

$ClassInfo _EnclosingMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.EnclosingMethod",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_EnclosingMethod_FieldInfo_,
	_EnclosingMethod_MethodInfo_
};

$Object* allocate$EnclosingMethod($Class* clazz) {
	return $of($alloc(EnclosingMethod));
}

void EnclosingMethod::init$(int32_t nameIndex, int32_t len, $DataInput* input, $ConstantPool* cpool) {
	int32_t var$0 = nameIndex;
	int32_t var$1 = len;
	int32_t var$2 = $nc(input)->readUnsignedShort();
	EnclosingMethod::init$(var$0, var$1, var$2, input->readUnsignedShort(), cpool);
}

void EnclosingMethod::init$(int32_t nameIndex, int32_t len, int32_t classIdx, int32_t methodIdx, $ConstantPool* cpool) {
	$Attribute::init$($Const::ATTR_ENCLOSING_METHOD, nameIndex, len, cpool);
	this->classIndex = classIdx;
	this->methodIndex = methodIdx;
}

void EnclosingMethod::accept($Visitor* v) {
	$nc(v)->visitEnclosingMethod(this);
}

$Attribute* EnclosingMethod::copy($ConstantPool* constant_pool) {
	return $cast($Attribute, clone());
}

int32_t EnclosingMethod::getEnclosingClassIndex() {
	return this->classIndex;
}

int32_t EnclosingMethod::getEnclosingMethodIndex() {
	return this->methodIndex;
}

void EnclosingMethod::setEnclosingClassIndex(int32_t idx) {
	this->classIndex = idx;
}

void EnclosingMethod::setEnclosingMethodIndex(int32_t idx) {
	this->methodIndex = idx;
}

$ConstantClass* EnclosingMethod::getEnclosingClass() {
	$var($ConstantClass, c, $cast($ConstantClass, $nc($($Attribute::getConstantPool()))->getConstant(this->classIndex, $Const::CONSTANT_Class)));
	return c;
}

$ConstantNameAndType* EnclosingMethod::getEnclosingMethod() {
	if (this->methodIndex == 0) {
		return nullptr;
	}
	$var($ConstantNameAndType, nat, $cast($ConstantNameAndType, $nc($($Attribute::getConstantPool()))->getConstant(this->methodIndex, $Const::CONSTANT_NameAndType)));
	return nat;
}

void EnclosingMethod::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort(this->classIndex);
	file->writeShort(this->methodIndex);
}

EnclosingMethod::EnclosingMethod() {
}

$Class* EnclosingMethod::load$($String* name, bool initialize) {
	$loadClass(EnclosingMethod, name, initialize, &_EnclosingMethod_ClassInfo_, allocate$EnclosingMethod);
	return class$;
}

$Class* EnclosingMethod::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com