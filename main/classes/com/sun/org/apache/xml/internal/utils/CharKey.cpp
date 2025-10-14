#include <com/sun/org/apache/xml/internal/utils/CharKey.h>

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
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _CharKey_FieldInfo_[] = {
	{"m_char", "C", nullptr, $PRIVATE, $field(CharKey, m_char)},
	{}
};

$MethodInfo _CharKey_MethodInfo_[] = {
	{"<init>", "(C)V", nullptr, $PUBLIC, $method(static_cast<void(CharKey::*)(char16_t)>(&CharKey::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharKey::*)()>(&CharKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"setChar", "(C)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CharKey::*)(char16_t)>(&CharKey::setChar))},
	{}
};

$ClassInfo _CharKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.CharKey",
	"java.lang.Object",
	nullptr,
	_CharKey_FieldInfo_,
	_CharKey_MethodInfo_
};

$Object* allocate$CharKey($Class* clazz) {
	return $of($alloc(CharKey));
}

void CharKey::init$(char16_t key) {
	this->m_char = key;
}

void CharKey::init$() {
}

void CharKey::setChar(char16_t c) {
	this->m_char = c;
}

int32_t CharKey::hashCode() {
	return (int32_t)this->m_char;
}

bool CharKey::equals(Object$* obj) {
	return $nc(($cast(CharKey, obj)))->m_char == this->m_char;
}

CharKey::CharKey() {
}

$Class* CharKey::load$($String* name, bool initialize) {
	$loadClass(CharKey, name, initialize, &_CharKey_ClassInfo_, allocate$CharKey);
	return class$;
}

$Class* CharKey::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com