#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8$Cache.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

#undef CACHE
#undef MAX_ENTRY_SIZE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantUtf8$Cache = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8$Cache;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$CompoundAttribute _ConstantUtf8_MethodAnnotations_setBytes10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ConstantUtf8_FieldInfo_[] = {
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ConstantUtf8, value)},
	{}
};

$MethodInfo _ConstantUtf8_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantUtf8::*)(ConstantUtf8*)>(&ConstantUtf8::init$))},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ConstantUtf8::*)($DataInput*)>(&ConstantUtf8::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ConstantUtf8::*)($String*)>(&ConstantUtf8::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"clearCache", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&ConstantUtf8::clearCache))},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBytes", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ConstantUtf8::*)()>(&ConstantUtf8::getBytes))},
	{"getCachedInstance", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ConstantUtf8*(*)($String*)>(&ConstantUtf8::getCachedInstance))},
	{"getInstance", "(Ljava/io/DataInput;)Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ConstantUtf8*(*)($DataInput*)>(&ConstantUtf8::getInstance)), "java.io.IOException"},
	{"getInstance", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ConstantUtf8*(*)($String*)>(&ConstantUtf8::getInstance))},
	{"setBytes", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(ConstantUtf8::*)($String*)>(&ConstantUtf8::setBytes)), nullptr, nullptr, _ConstantUtf8_MethodAnnotations_setBytes10},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ConstantUtf8_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache", "com.sun.org.apache.bcel.internal.classfile.ConstantUtf8", "Cache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ConstantUtf8_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	nullptr,
	_ConstantUtf8_FieldInfo_,
	_ConstantUtf8_MethodInfo_,
	nullptr,
	nullptr,
	_ConstantUtf8_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache,com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache$1"
};

$Object* allocate$ConstantUtf8($Class* clazz) {
	return $of($alloc(ConstantUtf8));
}

void ConstantUtf8::clearCache() {
	$load(ConstantUtf8);
	$synchronized(class$) {
		$init(ConstantUtf8);
		$init($ConstantUtf8$Cache);
		$nc($ConstantUtf8$Cache::CACHE)->clear();
	}
}

ConstantUtf8* ConstantUtf8::getCachedInstance($String* value) {
	$init(ConstantUtf8);
	if ($nc(value)->length() > $ConstantUtf8$Cache::MAX_ENTRY_SIZE) {
		return $new(ConstantUtf8, value);
	}
	$synchronized(ConstantUtf8::class$) {
		$init($ConstantUtf8$Cache);
		$var(ConstantUtf8, result, $cast(ConstantUtf8, $nc($ConstantUtf8$Cache::CACHE)->get(value)));
		if (result != nullptr) {
			return result;
		}
		$assign(result, $new(ConstantUtf8, value));
		$nc($ConstantUtf8$Cache::CACHE)->put(value, result);
		return result;
	}
}

ConstantUtf8* ConstantUtf8::getInstance($DataInput* dataInput) {
	$init(ConstantUtf8);
	return getInstance($($nc(dataInput)->readUTF()));
}

ConstantUtf8* ConstantUtf8::getInstance($String* value) {
	$init(ConstantUtf8);
	return $ConstantUtf8$Cache::isEnabled() ? getCachedInstance(value) : $new(ConstantUtf8, value);
}

void ConstantUtf8::init$(ConstantUtf8* constantUtf8) {
	ConstantUtf8::init$($($nc(constantUtf8)->getBytes()));
}

void ConstantUtf8::init$($DataInput* dataInput) {
	$Constant::init$($Const::CONSTANT_Utf8);
	$set(this, value, $nc(dataInput)->readUTF());
}

void ConstantUtf8::init$($String* value) {
	$Constant::init$($Const::CONSTANT_Utf8);
	if (value == nullptr) {
		$throwNew($IllegalArgumentException, "Value must not be null."_s);
	}
	$set(this, value, value);
}

void ConstantUtf8::accept($Visitor* v) {
	$nc(v)->visitConstantUtf8(this);
}

void ConstantUtf8::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeUTF(this->value);
}

$String* ConstantUtf8::getBytes() {
	return this->value;
}

void ConstantUtf8::setBytes($String* bytes) {
	$throwNew($UnsupportedOperationException);
}

$String* ConstantUtf8::toString() {
	$var($String, var$1, $$str({$($Constant::toString()), "(\""_s}));
	$var($String, var$0, $$concat(var$1, $($Utility::replace(this->value, "\n"_s, "\\n"_s))));
	return $concat(var$0, "\")");
}

ConstantUtf8::ConstantUtf8() {
}

$Class* ConstantUtf8::load$($String* name, bool initialize) {
	$loadClass(ConstantUtf8, name, initialize, &_ConstantUtf8_ClassInfo_, allocate$ConstantUtf8);
	return class$;
}

$Class* ConstantUtf8::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com