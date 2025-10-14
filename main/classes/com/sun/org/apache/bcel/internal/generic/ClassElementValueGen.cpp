#include <com/sun/org/apache/bcel/internal/generic/ClassElementValueGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/ClassElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CLASS

using $ClassElementValue = ::com::sun::org::apache::bcel::internal::classfile::ClassElementValue;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ElementValueGen;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
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
						namespace generic {

$FieldInfo _ClassElementValueGen_FieldInfo_[] = {
	{"idx", "I", nullptr, $PRIVATE, $field(ClassElementValueGen, idx)},
	{}
};

$MethodInfo _ClassElementValueGen_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PROTECTED, $method(static_cast<void(ClassElementValueGen::*)(int32_t,$ConstantPoolGen*)>(&ClassElementValueGen::init$))},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassElementValueGen::*)($ObjectType*,$ConstantPoolGen*)>(&ClassElementValueGen::init$))},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ClassElementValue;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ClassElementValueGen::*)($ClassElementValue*,$ConstantPoolGen*,bool)>(&ClassElementValueGen::init$))},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getClassString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getElementValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClassElementValueGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ClassElementValueGen",
	"com.sun.org.apache.bcel.internal.generic.ElementValueGen",
	nullptr,
	_ClassElementValueGen_FieldInfo_,
	_ClassElementValueGen_MethodInfo_
};

$Object* allocate$ClassElementValueGen($Class* clazz) {
	return $of($alloc(ClassElementValueGen));
}

void ClassElementValueGen::init$(int32_t typeIdx, $ConstantPoolGen* cpool) {
	$ElementValueGen::init$($ElementValueGen::CLASS, cpool);
	this->idx = typeIdx;
}

void ClassElementValueGen::init$($ObjectType* t, $ConstantPoolGen* cpool) {
	$ElementValueGen::init$($ElementValueGen::CLASS, cpool);
	this->idx = $nc(cpool)->addUtf8($($nc(t)->getSignature()));
}

$ElementValue* ClassElementValueGen::getElementValue() {
	int32_t var$0 = $ElementValueGen::getElementValueType();
	int32_t var$1 = this->idx;
	return $new($ClassElementValue, var$0, var$1, $($nc($(getConstantPool()))->getConstantPool()));
}

void ClassElementValueGen::init$($ClassElementValue* value, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$ElementValueGen::init$($ElementValueGen::CLASS, cpool);
	if (copyPoolEntries) {
		this->idx = $nc(cpool)->addUtf8($($nc(value)->getClassString()));
	} else {
		this->idx = $nc(value)->getIndex();
	}
}

int32_t ClassElementValueGen::getIndex() {
	return this->idx;
}

$String* ClassElementValueGen::getClassString() {
	$var($ConstantUtf8, cu8, $cast($ConstantUtf8, $nc($(getConstantPool()))->getConstant(this->idx)));
	return $nc(cu8)->getBytes();
}

$String* ClassElementValueGen::stringifyValue() {
	return getClassString();
}

void ClassElementValueGen::dump($DataOutputStream* dos) {
	$nc(dos)->writeByte($ElementValueGen::getElementValueType());
	dos->writeShort(this->idx);
}

ClassElementValueGen::ClassElementValueGen() {
}

$Class* ClassElementValueGen::load$($String* name, bool initialize) {
	$loadClass(ClassElementValueGen, name, initialize, &_ClassElementValueGen_ClassInfo_, allocate$ClassElementValueGen);
	return class$;
}

$Class* ClassElementValueGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com