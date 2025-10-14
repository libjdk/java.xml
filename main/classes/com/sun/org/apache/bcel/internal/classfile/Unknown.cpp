#include <com/sun/org/apache/bcel/internal/classfile/Unknown.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ATTR_UNKNOWN

using $UnknownArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Unknown>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _Unknown_FieldInfo_[] = {
	{"bytes", "[B", nullptr, $PRIVATE, $field(Unknown, bytes)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Unknown, name)},
	{"unknownAttributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/Unknown;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Unknown, unknownAttributes)},
	{}
};

$MethodInfo _Unknown_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/Unknown;)V", nullptr, $PUBLIC, $method(static_cast<void(Unknown::*)(Unknown*)>(&Unknown::init$))},
	{"<init>", "(II[BLcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(static_cast<void(Unknown::*)(int32_t,int32_t,$bytes*,$ConstantPool*)>(&Unknown::init$))},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(static_cast<void(Unknown::*)(int32_t,int32_t,$DataInput*,$ConstantPool*)>(&Unknown::init$)), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBytes", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(Unknown::*)()>(&Unknown::getBytes))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUnknownAttributes", "()[Lcom/sun/org/apache/bcel/internal/classfile/Unknown;", nullptr, $STATIC, $method(static_cast<$UnknownArray*(*)()>(&Unknown::getUnknownAttributes))},
	{"setBytes", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(Unknown::*)($bytes*)>(&Unknown::setBytes))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Unknown_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Unknown",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_Unknown_FieldInfo_,
	_Unknown_MethodInfo_
};

$Object* allocate$Unknown($Class* clazz) {
	return $of($alloc(Unknown));
}

$Map* Unknown::unknownAttributes = nullptr;

$UnknownArray* Unknown::getUnknownAttributes() {
	$init(Unknown);
	$var($UnknownArray, unknowns, $new($UnknownArray, $nc(Unknown::unknownAttributes)->size()));
	$nc($($nc(Unknown::unknownAttributes)->values()))->toArray(unknowns);
	$nc(Unknown::unknownAttributes)->clear();
	return unknowns;
}

void Unknown::init$(Unknown* c) {
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($bytes, var$2, c->getBytes());
	Unknown::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void Unknown::init$(int32_t name_index, int32_t length, $bytes* bytes, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_UNKNOWN, name_index, length, constant_pool);
	$set(this, bytes, bytes);
	$set(this, name, $nc(($cast($ConstantUtf8, $($nc(constant_pool)->getConstant(name_index, $Const::CONSTANT_Utf8)))))->getBytes());
	$nc(Unknown::unknownAttributes)->put(this->name, this);
}

void Unknown::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	Unknown::init$(name_index, length, ($bytes*)nullptr, constant_pool);
	if (length > 0) {
		$set(this, bytes, $new($bytes, length));
		$nc(input)->readFully(this->bytes);
	}
}

void Unknown::accept($Visitor* v) {
	$nc(v)->visitUnknown(this);
}

void Unknown::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	if ($Attribute::getLength() > 0) {
		$nc(file)->write(this->bytes, 0, $Attribute::getLength());
	}
}

$bytes* Unknown::getBytes() {
	return this->bytes;
}

$String* Unknown::getName() {
	return this->name;
}

void Unknown::setBytes($bytes* bytes) {
	$set(this, bytes, bytes);
}

$String* Unknown::toString() {
	if ($Attribute::getLength() == 0 || this->bytes == nullptr) {
		return $str({"(Unknown attribute "_s, this->name, ")"_s});
	}
	$var($String, hex, nullptr);
	if ($Attribute::getLength() > 10) {
		$var($bytes, tmp, $new($bytes, 10));
		$System::arraycopy(this->bytes, 0, tmp, 0, 10);
		$assign(hex, $str({$($Utility::toHexString(tmp)), "... (truncated)"_s}));
	} else {
		$assign(hex, $Utility::toHexString(this->bytes));
	}
	return $str({"(Unknown attribute "_s, this->name, ": "_s, hex, ")"_s});
}

$Attribute* Unknown::copy($ConstantPool* _constant_pool) {
	$var(Unknown, c, $cast(Unknown, clone()));
	if (this->bytes != nullptr) {
		$set($nc(c), bytes, $new($bytes, $nc(this->bytes)->length));
		$System::arraycopy(this->bytes, 0, c->bytes, 0, $nc(this->bytes)->length);
	}
	$nc(c)->setConstantPool(_constant_pool);
	return c;
}

void clinit$Unknown($Class* class$) {
	$assignStatic(Unknown::unknownAttributes, $new($HashMap));
}

Unknown::Unknown() {
}

$Class* Unknown::load$($String* name, bool initialize) {
	$loadClass(Unknown, name, initialize, &_Unknown_ClassInfo_, clinit$Unknown, allocate$Unknown);
	return class$;
}

$Class* Unknown::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com