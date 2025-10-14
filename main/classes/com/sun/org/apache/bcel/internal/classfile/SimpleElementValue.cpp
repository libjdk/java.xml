#include <com/sun/org/apache/bcel/internal/classfile/SimpleElementValue.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDouble.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFloat.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInteger.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantLong.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef PRIMITIVE_BOOLEAN
#undef PRIMITIVE_BYTE
#undef PRIMITIVE_CHAR
#undef PRIMITIVE_DOUBLE
#undef PRIMITIVE_FLOAT
#undef PRIMITIVE_INT
#undef PRIMITIVE_LONG
#undef PRIMITIVE_SHORT
#undef STRING

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantDouble = ::com::sun::org::apache::bcel::internal::classfile::ConstantDouble;
using $ConstantFloat = ::com::sun::org::apache::bcel::internal::classfile::ConstantFloat;
using $ConstantInteger = ::com::sun::org::apache::bcel::internal::classfile::ConstantInteger;
using $ConstantLong = ::com::sun::org::apache::bcel::internal::classfile::ConstantLong;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _SimpleElementValue_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE, $field(SimpleElementValue, index)},
	{}
};

$MethodInfo _SimpleElementValue_MethodInfo_[] = {
	{"<init>", "(IILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleElementValue::*)(int32_t,int32_t,$ConstantPool*)>(&SimpleElementValue::init$))},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"getValueBoolean", "()Z", nullptr, $PUBLIC},
	{"getValueByte", "()B", nullptr, $PUBLIC},
	{"getValueChar", "()C", nullptr, $PUBLIC},
	{"getValueDouble", "()D", nullptr, $PUBLIC},
	{"getValueFloat", "()F", nullptr, $PUBLIC},
	{"getValueInt", "()I", nullptr, $PUBLIC},
	{"getValueLong", "()J", nullptr, $PUBLIC},
	{"getValueShort", "()S", nullptr, $PUBLIC},
	{"getValueString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setIndex", "(I)V", nullptr, $PUBLIC},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleElementValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.SimpleElementValue",
	"com.sun.org.apache.bcel.internal.classfile.ElementValue",
	nullptr,
	_SimpleElementValue_FieldInfo_,
	_SimpleElementValue_MethodInfo_
};

$Object* allocate$SimpleElementValue($Class* clazz) {
	return $of($alloc(SimpleElementValue));
}

void SimpleElementValue::init$(int32_t type, int32_t index, $ConstantPool* cpool) {
	$ElementValue::init$(type, cpool);
	this->index = index;
}

int32_t SimpleElementValue::getIndex() {
	return this->index;
}

void SimpleElementValue::setIndex(int32_t index) {
	this->index = index;
}

$String* SimpleElementValue::getValueString() {
	if ($ElementValue::getType() != $ElementValue::STRING) {
		$throwNew($IllegalStateException, "Dont call getValueString() on a non STRING ElementValue"_s);
	}
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc($($ElementValue::getConstantPool()))->getConstant(getIndex(), $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

int32_t SimpleElementValue::getValueInt() {
	if ($ElementValue::getType() != $ElementValue::PRIMITIVE_INT) {
		$throwNew($IllegalStateException, "Dont call getValueString() on a non STRING ElementValue"_s);
	}
	$var($ConstantInteger, c, $cast($ConstantInteger, $nc($($ElementValue::getConstantPool()))->getConstant(getIndex(), $Const::CONSTANT_Integer)));
	return $nc(c)->getBytes();
}

int8_t SimpleElementValue::getValueByte() {
	if ($ElementValue::getType() != $ElementValue::PRIMITIVE_BYTE) {
		$throwNew($IllegalStateException, "Dont call getValueByte() on a non BYTE ElementValue"_s);
	}
	$var($ConstantInteger, c, $cast($ConstantInteger, $nc($($ElementValue::getConstantPool()))->getConstant(getIndex(), $Const::CONSTANT_Integer)));
	return (int8_t)$nc(c)->getBytes();
}

char16_t SimpleElementValue::getValueChar() {
	if ($ElementValue::getType() != $ElementValue::PRIMITIVE_CHAR) {
		$throwNew($IllegalStateException, "Dont call getValueChar() on a non CHAR ElementValue"_s);
	}
	$var($ConstantInteger, c, $cast($ConstantInteger, $nc($($ElementValue::getConstantPool()))->getConstant(getIndex(), $Const::CONSTANT_Integer)));
	return (char16_t)$nc(c)->getBytes();
}

int64_t SimpleElementValue::getValueLong() {
	if ($ElementValue::getType() != $ElementValue::PRIMITIVE_LONG) {
		$throwNew($IllegalStateException, "Dont call getValueLong() on a non LONG ElementValue"_s);
	}
	$var($ConstantLong, j, $cast($ConstantLong, $nc($($ElementValue::getConstantPool()))->getConstant(getIndex())));
	return $nc(j)->getBytes();
}

float SimpleElementValue::getValueFloat() {
	if ($ElementValue::getType() != $ElementValue::PRIMITIVE_FLOAT) {
		$throwNew($IllegalStateException, "Dont call getValueFloat() on a non FLOAT ElementValue"_s);
	}
	$var($ConstantFloat, f, $cast($ConstantFloat, $nc($($ElementValue::getConstantPool()))->getConstant(getIndex())));
	return $nc(f)->getBytes();
}

double SimpleElementValue::getValueDouble() {
	if ($ElementValue::getType() != $ElementValue::PRIMITIVE_DOUBLE) {
		$throwNew($IllegalStateException, "Dont call getValueDouble() on a non DOUBLE ElementValue"_s);
	}
	$var($ConstantDouble, d, $cast($ConstantDouble, $nc($($ElementValue::getConstantPool()))->getConstant(getIndex())));
	return $nc(d)->getBytes();
}

bool SimpleElementValue::getValueBoolean() {
	if ($ElementValue::getType() != $ElementValue::PRIMITIVE_BOOLEAN) {
		$throwNew($IllegalStateException, "Dont call getValueBoolean() on a non BOOLEAN ElementValue"_s);
	}
	$var($ConstantInteger, bo, $cast($ConstantInteger, $nc($($ElementValue::getConstantPool()))->getConstant(getIndex())));
	return $nc(bo)->getBytes() != 0;
}

int16_t SimpleElementValue::getValueShort() {
	if ($ElementValue::getType() != $ElementValue::PRIMITIVE_SHORT) {
		$throwNew($IllegalStateException, "Dont call getValueShort() on a non SHORT ElementValue"_s);
	}
	$var($ConstantInteger, s, $cast($ConstantInteger, $nc($($ElementValue::getConstantPool()))->getConstant(getIndex())));
	return (int16_t)$nc(s)->getBytes();
}

$String* SimpleElementValue::toString() {
	return stringifyValue();
}

$String* SimpleElementValue::stringifyValue() {
	$var($ConstantPool, cpool, $ElementValue::getConstantPool());
	int32_t _type = $ElementValue::getType();
	{
		$var($ConstantInteger, c, nullptr)
		$var($ConstantLong, j, nullptr)
		$var($ConstantDouble, d, nullptr)
		$var($ConstantFloat, f, nullptr)
		$var($ConstantInteger, s, nullptr)
		$var($ConstantInteger, b, nullptr)
		$var($ConstantInteger, ch, nullptr)
		$var($ConstantInteger, bo, nullptr)
		$var($ConstantUtf8, cu8, nullptr)
		switch (_type) {
		case $ElementValue::PRIMITIVE_INT:
			{
				$assign(c, $cast($ConstantInteger, $nc(cpool)->getConstant(getIndex(), $Const::CONSTANT_Integer)));
				return $Integer::toString($nc(c)->getBytes());
			}
		case $ElementValue::PRIMITIVE_LONG:
			{
				$assign(j, $cast($ConstantLong, cpool->getConstant(getIndex(), $Const::CONSTANT_Long)));
				return $Long::toString($nc(j)->getBytes());
			}
		case $ElementValue::PRIMITIVE_DOUBLE:
			{
				$assign(d, $cast($ConstantDouble, cpool->getConstant(getIndex(), $Const::CONSTANT_Double)));
				return $Double::toString($nc(d)->getBytes());
			}
		case $ElementValue::PRIMITIVE_FLOAT:
			{
				$assign(f, $cast($ConstantFloat, cpool->getConstant(getIndex(), $Const::CONSTANT_Float)));
				return $Float::toString($nc(f)->getBytes());
			}
		case $ElementValue::PRIMITIVE_SHORT:
			{
				$assign(s, $cast($ConstantInteger, cpool->getConstant(getIndex(), $Const::CONSTANT_Integer)));
				return $Integer::toString($nc(s)->getBytes());
			}
		case $ElementValue::PRIMITIVE_BYTE:
			{
				$assign(b, $cast($ConstantInteger, cpool->getConstant(getIndex(), $Const::CONSTANT_Integer)));
				return $Integer::toString($nc(b)->getBytes());
			}
		case $ElementValue::PRIMITIVE_CHAR:
			{
				$assign(ch, $cast($ConstantInteger, cpool->getConstant(getIndex(), $Const::CONSTANT_Integer)));
				return $String::valueOf((char16_t)$nc(ch)->getBytes());
			}
		case $ElementValue::PRIMITIVE_BOOLEAN:
			{
				$assign(bo, $cast($ConstantInteger, cpool->getConstant(getIndex(), $Const::CONSTANT_Integer)));
				if ($nc(bo)->getBytes() == 0) {
					return "false"_s;
				}
				return "true"_s;
			}
		case $ElementValue::STRING:
			{
				$assign(cu8, $cast($ConstantUtf8, cpool->getConstant(getIndex(), $Const::CONSTANT_Utf8)));
				return $nc(cu8)->getBytes();
			}
		default:
			{
				$throwNew($IllegalStateException, $$str({"SimpleElementValue class does not know how to stringify type "_s, $$str(_type)}));
			}
		}
	}
}

void SimpleElementValue::dump($DataOutputStream* dos) {
	int32_t _type = $ElementValue::getType();
	$nc(dos)->writeByte(_type);
	switch (_type) {
	case $ElementValue::PRIMITIVE_INT:
		{}
	case $ElementValue::PRIMITIVE_BYTE:
		{}
	case $ElementValue::PRIMITIVE_CHAR:
		{}
	case $ElementValue::PRIMITIVE_FLOAT:
		{}
	case $ElementValue::PRIMITIVE_LONG:
		{}
	case $ElementValue::PRIMITIVE_BOOLEAN:
		{}
	case $ElementValue::PRIMITIVE_SHORT:
		{}
	case $ElementValue::PRIMITIVE_DOUBLE:
		{}
	case $ElementValue::STRING:
		{
			dos->writeShort(getIndex());
			break;
		}
	default:
		{
			$throwNew($IllegalStateException, $$str({"SimpleElementValue doesnt know how to write out type "_s, $$str(_type)}));
		}
	}
}

SimpleElementValue::SimpleElementValue() {
}

$Class* SimpleElementValue::load$($String* name, bool initialize) {
	$loadClass(SimpleElementValue, name, initialize, &_SimpleElementValue_ClassInfo_, allocate$SimpleElementValue);
	return class$;
}

$Class* SimpleElementValue::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com