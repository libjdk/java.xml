#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
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

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
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

$FieldInfo _ConstantNameAndType_FieldInfo_[] = {
	{"nameIndex", "I", nullptr, $PRIVATE, $field(ConstantNameAndType, nameIndex)},
	{"signatureIndex", "I", nullptr, $PRIVATE, $field(ConstantNameAndType, signatureIndex)},
	{}
};

$MethodInfo _ConstantNameAndType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantNameAndType;)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantNameAndType::*)(ConstantNameAndType*)>(&ConstantNameAndType::init$))},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ConstantNameAndType::*)($DataInput*)>(&ConstantNameAndType::init$)), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantNameAndType::*)(int32_t,int32_t)>(&ConstantNameAndType::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getName", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ConstantNameAndType::*)($ConstantPool*)>(&ConstantNameAndType::getName))},
	{"getNameIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ConstantNameAndType::*)()>(&ConstantNameAndType::getNameIndex))},
	{"getSignature", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ConstantNameAndType::*)($ConstantPool*)>(&ConstantNameAndType::getSignature))},
	{"getSignatureIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ConstantNameAndType::*)()>(&ConstantNameAndType::getSignatureIndex))},
	{"setNameIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantNameAndType::*)(int32_t)>(&ConstantNameAndType::setNameIndex))},
	{"setSignatureIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantNameAndType::*)(int32_t)>(&ConstantNameAndType::setSignatureIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConstantNameAndType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantNameAndType",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	nullptr,
	_ConstantNameAndType_FieldInfo_,
	_ConstantNameAndType_MethodInfo_
};

$Object* allocate$ConstantNameAndType($Class* clazz) {
	return $of($alloc(ConstantNameAndType));
}

void ConstantNameAndType::init$(ConstantNameAndType* c) {
	int32_t var$0 = $nc(c)->getNameIndex();
	ConstantNameAndType::init$(var$0, c->getSignatureIndex());
}

void ConstantNameAndType::init$($DataInput* file) {
	int32_t var$0 = $nc(file)->readUnsignedShort();
	ConstantNameAndType::init$(var$0, file->readUnsignedShort());
}

void ConstantNameAndType::init$(int32_t nameIndex, int32_t signatureIndex) {
	$Constant::init$($Const::CONSTANT_NameAndType);
	this->nameIndex = nameIndex;
	this->signatureIndex = signatureIndex;
}

void ConstantNameAndType::accept($Visitor* v) {
	$nc(v)->visitConstantNameAndType(this);
}

void ConstantNameAndType::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeShort(this->nameIndex);
	file->writeShort(this->signatureIndex);
}

int32_t ConstantNameAndType::getNameIndex() {
	return this->nameIndex;
}

$String* ConstantNameAndType::getName($ConstantPool* cp) {
	return $nc(cp)->constantToString(getNameIndex(), $Const::CONSTANT_Utf8);
}

int32_t ConstantNameAndType::getSignatureIndex() {
	return this->signatureIndex;
}

$String* ConstantNameAndType::getSignature($ConstantPool* cp) {
	return $nc(cp)->constantToString(getSignatureIndex(), $Const::CONSTANT_Utf8);
}

void ConstantNameAndType::setNameIndex(int32_t nameIndex) {
	this->nameIndex = nameIndex;
}

void ConstantNameAndType::setSignatureIndex(int32_t signatureIndex) {
	this->signatureIndex = signatureIndex;
}

$String* ConstantNameAndType::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(nameIndex = "_s, $$str(this->nameIndex), ", signatureIndex = "_s, $$str(this->signatureIndex), ")"_s});
}

ConstantNameAndType::ConstantNameAndType() {
}

$Class* ConstantNameAndType::load$($String* name, bool initialize) {
	$loadClass(ConstantNameAndType, name, initialize, &_ConstantNameAndType_ClassInfo_, allocate$ConstantNameAndType);
	return class$;
}

$Class* ConstantNameAndType::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com