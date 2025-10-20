#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/Repository.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef T_REFERENCE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Repository = ::com::sun::org::apache::bcel::internal::Repository;
using $AccessFlags = ::com::sun::org::apache::bcel::internal::classfile::AccessFlags;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$CompoundAttribute _ObjectType_MethodAnnotations_referencesClass6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ObjectType_MethodAnnotations_referencesInterface8[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ObjectType_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ObjectType, className)},
	{}
};

$MethodInfo _ObjectType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectType::*)($String*)>(&ObjectType::init$))},
	{"accessibleTo", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;)Z", nullptr, $PUBLIC, nullptr, "java.lang.ClassNotFoundException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInstance", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ObjectType*(*)($String*)>(&ObjectType::getInstance))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"referencesClass", "()Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _ObjectType_MethodAnnotations_referencesClass6},
	{"referencesClassExact", "()Z", nullptr, $PUBLIC, nullptr, "java.lang.ClassNotFoundException"},
	{"referencesInterface", "()Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _ObjectType_MethodAnnotations_referencesInterface8},
	{"referencesInterfaceExact", "()Z", nullptr, $PUBLIC, nullptr, "java.lang.ClassNotFoundException"},
	{"subclassOf", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;)Z", nullptr, $PUBLIC, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _ObjectType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ObjectType",
	"com.sun.org.apache.bcel.internal.generic.ReferenceType",
	nullptr,
	_ObjectType_FieldInfo_,
	_ObjectType_MethodInfo_
};

$Object* allocate$ObjectType($Class* clazz) {
	return $of($alloc(ObjectType));
}

ObjectType* ObjectType::getInstance($String* className) {
	$init(ObjectType);
	return $new(ObjectType, className);
}

void ObjectType::init$($String* className) {
	$useLocalCurrentObjectStackCache();
	$ReferenceType::init$($Const::T_REFERENCE, $$str({"L"_s, $($nc(className)->replace(u'.', u'/')), ";"_s}));
	$set(this, className, $nc(className)->replace(u'/', u'.'));
}

$String* ObjectType::getClassName() {
	return this->className;
}

int32_t ObjectType::hashCode() {
	return $nc(this->className)->hashCode();
}

bool ObjectType::equals(Object$* type) {
	return ($instanceOf(ObjectType, type)) ? $nc($nc(($cast(ObjectType, type)))->className)->equals(this->className) : false;
}

bool ObjectType::referencesClass() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($JavaClass, jc, $Repository::lookupClass(this->className));
		return $nc(jc)->isClass();
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool ObjectType::referencesInterface() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($JavaClass, jc, $Repository::lookupClass(this->className));
		return !$nc(jc)->isClass();
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool ObjectType::referencesClassExact() {
	$var($JavaClass, jc, $Repository::lookupClass(this->className));
	return $nc(jc)->isClass();
}

bool ObjectType::referencesInterfaceExact() {
	$var($JavaClass, jc, $Repository::lookupClass(this->className));
	return !$nc(jc)->isClass();
}

bool ObjectType::subclassOf(ObjectType* superclass) {
	bool var$0 = this->referencesInterfaceExact();
	if (var$0 || $nc(superclass)->referencesInterfaceExact()) {
		return false;
	}
	return $Repository::instanceOf(this->className, $nc(superclass)->className);
}

bool ObjectType::accessibleTo(ObjectType* accessor) {
	$useLocalCurrentObjectStackCache();
	$var($JavaClass, jc, $Repository::lookupClass(this->className));
	if ($nc(jc)->isPublic()) {
		return true;
	}
	$var($JavaClass, acc, $Repository::lookupClass($nc(accessor)->className));
	return $nc($($nc(acc)->getPackageName()))->equals($($nc(jc)->getPackageName()));
}

ObjectType::ObjectType() {
}

$Class* ObjectType::load$($String* name, bool initialize) {
	$loadClass(ObjectType, name, initialize, &_ObjectType_ClassInfo_, allocate$ObjectType);
	return class$;
}

$Class* ObjectType::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com