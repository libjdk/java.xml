#include <com/sun/org/apache/bcel/internal/classfile/ArrayElementValue.h>

#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ARRAY

using $ElementValueArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ElementValue>;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ArrayElementValue_FieldInfo_[] = {
	{"elementValues", "[Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PRIVATE | $FINAL, $field(ArrayElementValue, elementValues)},
	{}
};

$MethodInfo _ArrayElementValue_MethodInfo_[] = {
	{"<init>", "(I[Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayElementValue::*)(int32_t,$ElementValueArray*,$ConstantPool*)>(&ArrayElementValue::init$))},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElementValuesArray", "()[Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC},
	{"getElementValuesArraySize", "()I", nullptr, $PUBLIC},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArrayElementValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ArrayElementValue",
	"com.sun.org.apache.bcel.internal.classfile.ElementValue",
	nullptr,
	_ArrayElementValue_FieldInfo_,
	_ArrayElementValue_MethodInfo_
};

$Object* allocate$ArrayElementValue($Class* clazz) {
	return $of($alloc(ArrayElementValue));
}

$String* ArrayElementValue::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("{"_s);
	for (int32_t i = 0; i < $nc(this->elementValues)->length; ++i) {
		sb->append($of($nc(this->elementValues)->get(i)));
		if ((i + 1) < $nc(this->elementValues)->length) {
			sb->append(","_s);
		}
	}
	sb->append("}"_s);
	return sb->toString();
}

void ArrayElementValue::init$(int32_t type, $ElementValueArray* datums, $ConstantPool* cpool) {
	$ElementValue::init$(type, cpool);
	if (type != $ElementValue::ARRAY) {
		$throwNew($IllegalArgumentException, $$str({"Only element values of type array can be built with this ctor - type specified: "_s, $$str(type)}));
	}
	$set(this, elementValues, datums);
}

void ArrayElementValue::dump($DataOutputStream* dos) {
	$nc(dos)->writeByte($ElementValue::getType());
	dos->writeShort($nc(this->elementValues)->length);
	{
		$var($ElementValueArray, arr$, this->elementValues);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ElementValue, evalue, arr$->get(i$));
			{
				$nc(evalue)->dump(dos);
			}
		}
	}
}

$String* ArrayElementValue::stringifyValue() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("["_s);
	for (int32_t i = 0; i < $nc(this->elementValues)->length; ++i) {
		sb->append($($nc($nc(this->elementValues)->get(i))->stringifyValue()));
		if ((i + 1) < $nc(this->elementValues)->length) {
			sb->append(","_s);
		}
	}
	sb->append("]"_s);
	return sb->toString();
}

$ElementValueArray* ArrayElementValue::getElementValuesArray() {
	return this->elementValues;
}

int32_t ArrayElementValue::getElementValuesArraySize() {
	return $nc(this->elementValues)->length;
}

ArrayElementValue::ArrayElementValue() {
}

$Class* ArrayElementValue::load$($String* name, bool initialize) {
	$loadClass(ArrayElementValue, name, initialize, &_ArrayElementValue_ClassInfo_, allocate$ArrayElementValue);
	return class$;
}

$Class* ArrayElementValue::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com