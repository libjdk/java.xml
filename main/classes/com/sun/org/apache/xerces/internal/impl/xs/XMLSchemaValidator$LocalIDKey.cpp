#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$LocalIDKey.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaValidator$LocalIDKey_FieldInfo_[] = {
	{"fId", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PUBLIC, $field(XMLSchemaValidator$LocalIDKey, fId)},
	{"fDepth", "I", nullptr, $PUBLIC, $field(XMLSchemaValidator$LocalIDKey, fDepth)},
	{}
};

$MethodInfo _XMLSchemaValidator$LocalIDKey_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLSchemaValidator$LocalIDKey::*)()>(&XMLSchemaValidator$LocalIDKey::init$))},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;I)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSchemaValidator$LocalIDKey::*)($IdentityConstraint*,int32_t)>(&XMLSchemaValidator$LocalIDKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLSchemaValidator$LocalIDKey_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$LocalIDKey", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "LocalIDKey", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _XMLSchemaValidator$LocalIDKey_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$LocalIDKey",
	"java.lang.Object",
	nullptr,
	_XMLSchemaValidator$LocalIDKey_FieldInfo_,
	_XMLSchemaValidator$LocalIDKey_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaValidator$LocalIDKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
};

$Object* allocate$XMLSchemaValidator$LocalIDKey($Class* clazz) {
	return $of($alloc(XMLSchemaValidator$LocalIDKey));
}

void XMLSchemaValidator$LocalIDKey::init$() {
}

void XMLSchemaValidator$LocalIDKey::init$($IdentityConstraint* id, int32_t depth) {
	$set(this, fId, id);
	this->fDepth = depth;
}

int32_t XMLSchemaValidator$LocalIDKey::hashCode() {
	return $nc($of(this->fId))->hashCode() + this->fDepth;
}

bool XMLSchemaValidator$LocalIDKey::equals(Object$* localIDKey) {
	if ($instanceOf(XMLSchemaValidator$LocalIDKey, localIDKey)) {
		$var(XMLSchemaValidator$LocalIDKey, lIDKey, $cast(XMLSchemaValidator$LocalIDKey, localIDKey));
		return ($nc(lIDKey)->fId == this->fId && lIDKey->fDepth == this->fDepth);
	}
	return false;
}

XMLSchemaValidator$LocalIDKey::XMLSchemaValidator$LocalIDKey() {
}

$Class* XMLSchemaValidator$LocalIDKey::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidator$LocalIDKey, name, initialize, &_XMLSchemaValidator$LocalIDKey_ClassInfo_, allocate$XMLSchemaValidator$LocalIDKey);
	return class$;
}

$Class* XMLSchemaValidator$LocalIDKey::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com