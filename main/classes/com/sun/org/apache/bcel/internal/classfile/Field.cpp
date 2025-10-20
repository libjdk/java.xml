#include <com/sun/org/apache/bcel/internal/classfile/Field.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field$1.h>
#include <com/sun/org/apache/bcel/internal/classfile/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>
#include <java/io/DataInput.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ATTR_CONSTANT_VALUE

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $AccessFlags = ::com::sun::org::apache::bcel::internal::classfile::AccessFlags;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantValue = ::com::sun::org::apache::bcel::internal::classfile::ConstantValue;
using $Field$1 = ::com::sun::org::apache::bcel::internal::classfile::Field$1;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::classfile::FieldOrMethod;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $BCELComparator = ::com::sun::org::apache::bcel::internal::util::BCELComparator;
using $DataInput = ::java::io::DataInput;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _Field_FieldInfo_[] = {
	{"bcelComparator", "Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PRIVATE | $STATIC, $staticField(Field, bcelComparator)},
	{}
};

$MethodInfo _Field_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(Field*)>(&Field::init$))},
	{"<init>", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(static_cast<void(Field::*)($DataInput*,$ConstantPool*)>(&Field::init$)), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"<init>", "(III[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(static_cast<void(Field::*)(int32_t,int32_t,int32_t,$AttributeArray*,$ConstantPool*)>(&Field::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Field;", nullptr, $PUBLIC, $method(static_cast<Field*(Field::*)($ConstantPool*)>(&Field::copy))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getComparator", "()Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BCELComparator*(*)()>(&Field::getComparator))},
	{"getConstantValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantValue;", nullptr, $PUBLIC, $method(static_cast<$ConstantValue*(Field::*)()>(&Field::getConstantValue))},
	{"getType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $method(static_cast<$Type*(Field::*)()>(&Field::getType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setComparator", "(Lcom/sun/org/apache/bcel/internal/util/BCELComparator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($BCELComparator*)>(&Field::setComparator))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Field_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Field$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Field_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Field",
	"com.sun.org.apache.bcel.internal.classfile.FieldOrMethod",
	nullptr,
	_Field_FieldInfo_,
	_Field_MethodInfo_,
	nullptr,
	nullptr,
	_Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Field$1"
};

$Object* allocate$Field($Class* clazz) {
	return $of($alloc(Field));
}

$BCELComparator* Field::bcelComparator = nullptr;

void Field::init$(Field* c) {
	$FieldOrMethod::init$(c);
}

void Field::init$($DataInput* file, $ConstantPool* constant_pool) {
	$FieldOrMethod::init$(file, constant_pool);
}

void Field::init$(int32_t access_flags, int32_t name_index, int32_t signature_index, $AttributeArray* attributes, $ConstantPool* constant_pool) {
	$FieldOrMethod::init$(access_flags, name_index, signature_index, attributes, constant_pool);
}

void Field::accept($Visitor* v) {
	$nc(v)->visitField(this);
}

$ConstantValue* Field::getConstantValue() {
	$useLocalCurrentObjectStackCache();
	{
		$var($AttributeArray, arr$, $FieldOrMethod::getAttributes());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($nc(attribute)->getTag() == $Const::ATTR_CONSTANT_VALUE) {
					return $cast($ConstantValue, attribute);
				}
			}
		}
	}
	return nullptr;
}

$String* Field::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, nullptr);
	$var($String, signature, nullptr);
	$var($String, access, nullptr);
	$assign(access, $Utility::accessToString($FieldOrMethod::getAccessFlags()));
	$assign(access, $nc(access)->isEmpty() ? ""_s : ($str({access, " "_s})));
	$assign(signature, $Utility::signatureToString($(getSignature())));
	$assign(name, getName());
	$var($StringBuilder, buf, $new($StringBuilder, 64));
	buf->append(access)->append(signature)->append(" "_s)->append(name);
	$var($ConstantValue, cv, getConstantValue());
	if (cv != nullptr) {
		buf->append(" = "_s)->append($of(cv));
	}
	{
		$var($AttributeArray, arr$, $FieldOrMethod::getAttributes());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if (!($instanceOf($ConstantValue, attribute))) {
					buf->append(" ["_s)->append($of(attribute))->append("]"_s);
				}
			}
		}
	}
	return buf->toString();
}

Field* Field::copy($ConstantPool* _constant_pool) {
	return $cast(Field, copy_(_constant_pool));
}

$Type* Field::getType() {
	return $Type::getReturnType($(getSignature()));
}

$BCELComparator* Field::getComparator() {
	$init(Field);
	return Field::bcelComparator;
}

void Field::setComparator($BCELComparator* comparator) {
	$init(Field);
	$assignStatic(Field::bcelComparator, comparator);
}

bool Field::equals(Object$* obj) {
	return $nc(Field::bcelComparator)->equals(this, obj);
}

int32_t Field::hashCode() {
	return $nc(Field::bcelComparator)->hashCode(this);
}

void clinit$Field($Class* class$) {
	$assignStatic(Field::bcelComparator, $new($Field$1));
}

Field::Field() {
}

$Class* Field::load$($String* name, bool initialize) {
	$loadClass(Field, name, initialize, &_Field_ClassInfo_, clinit$Field, allocate$Field);
	return class$;
}

$Class* Field::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com