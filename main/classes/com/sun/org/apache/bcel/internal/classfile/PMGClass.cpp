#include <com/sun/org/apache/bcel/internal/classfile/PMGClass.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_PMG

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
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

$FieldInfo _PMGClass_FieldInfo_[] = {
	{"pmgClassIndex", "I", nullptr, $PRIVATE, $field(PMGClass, pmgClassIndex)},
	{"pmgIndex", "I", nullptr, $PRIVATE, $field(PMGClass, pmgIndex)},
	{}
};

$MethodInfo _PMGClass_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/PMGClass;)V", nullptr, $PUBLIC, $method(static_cast<void(PMGClass::*)(PMGClass*)>(&PMGClass::init$))},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(static_cast<void(PMGClass::*)(int32_t,int32_t,$DataInput*,$ConstantPool*)>(&PMGClass::init$)), "java.io.IOException"},
	{"<init>", "(IIIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(static_cast<void(PMGClass::*)(int32_t,int32_t,int32_t,int32_t,$ConstantPool*)>(&PMGClass::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPMGClassIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(PMGClass::*)()>(&PMGClass::getPMGClassIndex))},
	{"getPMGClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(PMGClass::*)()>(&PMGClass::getPMGClassName))},
	{"getPMGIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(PMGClass::*)()>(&PMGClass::getPMGIndex))},
	{"getPMGName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(PMGClass::*)()>(&PMGClass::getPMGName))},
	{"setPMGClassIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PMGClass::*)(int32_t)>(&PMGClass::setPMGClassIndex))},
	{"setPMGIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PMGClass::*)(int32_t)>(&PMGClass::setPMGIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PMGClass_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.PMGClass",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_PMGClass_FieldInfo_,
	_PMGClass_MethodInfo_
};

$Object* allocate$PMGClass($Class* clazz) {
	return $of($alloc(PMGClass));
}

void PMGClass::init$(PMGClass* pgmClass) {
	int32_t var$0 = $nc(pgmClass)->getNameIndex();
	int32_t var$1 = pgmClass->getLength();
	int32_t var$2 = pgmClass->getPMGIndex();
	int32_t var$3 = pgmClass->getPMGClassIndex();
	PMGClass::init$(var$0, var$1, var$2, var$3, $(pgmClass->getConstantPool()));
}

void PMGClass::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	int32_t var$0 = name_index;
	int32_t var$1 = length;
	int32_t var$2 = $nc(input)->readUnsignedShort();
	PMGClass::init$(var$0, var$1, var$2, input->readUnsignedShort(), constant_pool);
}

void PMGClass::init$(int32_t name_index, int32_t length, int32_t pmgIndex, int32_t pmgClassIndex, $ConstantPool* constantPool) {
	$Attribute::init$($Const::ATTR_PMG, name_index, length, constantPool);
	this->pmgIndex = pmgIndex;
	this->pmgClassIndex = pmgClassIndex;
}

void PMGClass::accept($Visitor* v) {
	println("Visiting non-standard PMGClass object"_s);
}

void PMGClass::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort(this->pmgIndex);
	file->writeShort(this->pmgClassIndex);
}

int32_t PMGClass::getPMGClassIndex() {
	return this->pmgClassIndex;
}

void PMGClass::setPMGClassIndex(int32_t pmgClassIndex) {
	this->pmgClassIndex = pmgClassIndex;
}

int32_t PMGClass::getPMGIndex() {
	return this->pmgIndex;
}

void PMGClass::setPMGIndex(int32_t pmgIndex) {
	this->pmgIndex = pmgIndex;
}

$String* PMGClass::getPMGName() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc($($Attribute::getConstantPool()))->getConstant(this->pmgIndex, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

$String* PMGClass::getPMGClassName() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc($($Attribute::getConstantPool()))->getConstant(this->pmgClassIndex, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

$String* PMGClass::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"PMGClass("_s, $(getPMGName()), ", "_s}));
	$var($String, var$0, $$concat(var$1, $(getPMGClassName())));
	return $concat(var$0, ")");
}

$Attribute* PMGClass::copy($ConstantPool* _constant_pool) {
	return $cast($Attribute, clone());
}

PMGClass::PMGClass() {
}

$Class* PMGClass::load$($String* name, bool initialize) {
	$loadClass(PMGClass, name, initialize, &_PMGClass_ClassInfo_, allocate$PMGClass);
	return class$;
}

$Class* PMGClass::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com