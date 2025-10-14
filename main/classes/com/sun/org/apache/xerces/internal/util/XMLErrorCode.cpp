#include <com/sun/org/apache/xerces/internal/util/XMLErrorCode.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLErrorCode_FieldInfo_[] = {
	{"fDomain", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLErrorCode, fDomain)},
	{"fKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLErrorCode, fKey)},
	{}
};

$MethodInfo _XMLErrorCode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLErrorCode::*)($String*,$String*)>(&XMLErrorCode::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLErrorCode::*)($String*,$String*)>(&XMLErrorCode::setValues))},
	{}
};

$ClassInfo _XMLErrorCode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLErrorCode",
	"java.lang.Object",
	nullptr,
	_XMLErrorCode_FieldInfo_,
	_XMLErrorCode_MethodInfo_
};

$Object* allocate$XMLErrorCode($Class* clazz) {
	return $of($alloc(XMLErrorCode));
}

void XMLErrorCode::init$($String* domain, $String* key) {
	$set(this, fDomain, domain);
	$set(this, fKey, key);
}

void XMLErrorCode::setValues($String* domain, $String* key) {
	$set(this, fDomain, domain);
	$set(this, fKey, key);
}

bool XMLErrorCode::equals(Object$* obj) {
	if (!($instanceOf(XMLErrorCode, obj))) {
		return false;
	}
	$var(XMLErrorCode, err, $cast(XMLErrorCode, obj));
	bool var$0 = $nc(this->fDomain)->equals($nc(err)->fDomain);
	return (var$0 && $nc(this->fKey)->equals($nc(err)->fKey));
}

int32_t XMLErrorCode::hashCode() {
	int32_t var$0 = $nc(this->fDomain)->hashCode();
	return var$0 + $nc(this->fKey)->hashCode();
}

XMLErrorCode::XMLErrorCode() {
}

$Class* XMLErrorCode::load$($String* name, bool initialize) {
	$loadClass(XMLErrorCode, name, initialize, &_XMLErrorCode_ClassInfo_, allocate$XMLErrorCode);
	return class$;
}

$Class* XMLErrorCode::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com