#include <com/sun/org/apache/bcel/internal/generic/ElementValuePairGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValuePair.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $ElementValuePair = ::com::sun::org::apache::bcel::internal::classfile::ElementValuePair;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ElementValueGen;
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

$FieldInfo _ElementValuePairGen_FieldInfo_[] = {
	{"nameIdx", "I", nullptr, $PRIVATE, $field(ElementValuePairGen, nameIdx)},
	{"value", "Lcom/sun/org/apache/bcel/internal/generic/ElementValueGen;", nullptr, $PRIVATE | $FINAL, $field(ElementValuePairGen, value)},
	{"constantPoolGen", "Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PRIVATE | $FINAL, $field(ElementValuePairGen, constantPoolGen)},
	{}
};

$MethodInfo _ElementValuePairGen_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ElementValuePair;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ElementValuePairGen::*)($ElementValuePair*,$ConstantPoolGen*,bool)>(&ElementValuePairGen::init$))},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ElementValueGen;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PROTECTED, $method(static_cast<void(ElementValuePairGen::*)(int32_t,$ElementValueGen*,$ConstantPoolGen*)>(&ElementValuePairGen::init$))},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ElementValueGen;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(static_cast<void(ElementValuePairGen::*)($String*,$ElementValueGen*,$ConstantPoolGen*)>(&ElementValuePairGen::init$))},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getElementNameValuePair", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValuePair;", nullptr, $PUBLIC},
	{"getNameIndex", "()I", nullptr, $PUBLIC},
	{"getNameString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(ElementValuePairGen::*)()>(&ElementValuePairGen::getNameString))},
	{"getValue", "()Lcom/sun/org/apache/bcel/internal/generic/ElementValueGen;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ElementValueGen*(ElementValuePairGen::*)()>(&ElementValuePairGen::getValue))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ElementValuePairGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ElementValuePairGen",
	"java.lang.Object",
	nullptr,
	_ElementValuePairGen_FieldInfo_,
	_ElementValuePairGen_MethodInfo_
};

$Object* allocate$ElementValuePairGen($Class* clazz) {
	return $of($alloc(ElementValuePairGen));
}

void ElementValuePairGen::init$($ElementValuePair* nvp, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$set(this, constantPoolGen, cpool);
	if (copyPoolEntries) {
		this->nameIdx = $nc(cpool)->addUtf8($($nc(nvp)->getNameString()));
	} else {
		this->nameIdx = $nc(nvp)->getNameIndex();
	}
	$set(this, value, $ElementValueGen::copy($($nc(nvp)->getValue()), cpool, copyPoolEntries));
}

$ElementValuePair* ElementValuePairGen::getElementNameValuePair() {
	$var($ElementValue, immutableValue, $nc(this->value)->getElementValue());
	return $new($ElementValuePair, this->nameIdx, immutableValue, $($nc(this->constantPoolGen)->getConstantPool()));
}

void ElementValuePairGen::init$(int32_t idx, $ElementValueGen* value, $ConstantPoolGen* cpool) {
	this->nameIdx = idx;
	$set(this, value, value);
	$set(this, constantPoolGen, cpool);
}

void ElementValuePairGen::init$($String* name, $ElementValueGen* value, $ConstantPoolGen* cpool) {
	this->nameIdx = $nc(cpool)->addUtf8(name);
	$set(this, value, value);
	$set(this, constantPoolGen, cpool);
}

void ElementValuePairGen::dump($DataOutputStream* dos) {
	$nc(dos)->writeShort(this->nameIdx);
	$nc(this->value)->dump(dos);
}

int32_t ElementValuePairGen::getNameIndex() {
	return this->nameIdx;
}

$String* ElementValuePairGen::getNameString() {
	return $nc(($cast($ConstantUtf8, $($nc(this->constantPoolGen)->getConstant(this->nameIdx)))))->getBytes();
}

$ElementValueGen* ElementValuePairGen::getValue() {
	return this->value;
}

$String* ElementValuePairGen::toString() {
	$var($String, var$1, $$str({"ElementValuePair:["_s, $(getNameString()), "="_s}));
	$var($String, var$0, $$concat(var$1, $($nc(this->value)->stringifyValue())));
	return $concat(var$0, "]");
}

ElementValuePairGen::ElementValuePairGen() {
}

$Class* ElementValuePairGen::load$($String* name, bool initialize) {
	$loadClass(ElementValuePairGen, name, initialize, &_ElementValuePairGen_ClassInfo_, allocate$ElementValuePairGen);
	return class$;
}

$Class* ElementValuePairGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com