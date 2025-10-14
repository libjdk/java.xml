#include <com/sun/org/apache/xml/internal/utils/res/CharArrayWrapper.h>

#include <java/lang/Array.h>
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
							namespace res {

$FieldInfo _CharArrayWrapper_FieldInfo_[] = {
	{"m_char", "[C", nullptr, $PRIVATE, $field(CharArrayWrapper, m_char)},
	{}
};

$MethodInfo _CharArrayWrapper_MethodInfo_[] = {
	{"<init>", "([C)V", nullptr, $PUBLIC, $method(static_cast<void(CharArrayWrapper::*)($chars*)>(&CharArrayWrapper::init$))},
	{"getChar", "(I)C", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CharArrayWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.CharArrayWrapper",
	"java.lang.Object",
	nullptr,
	_CharArrayWrapper_FieldInfo_,
	_CharArrayWrapper_MethodInfo_
};

$Object* allocate$CharArrayWrapper($Class* clazz) {
	return $of($alloc(CharArrayWrapper));
}

void CharArrayWrapper::init$($chars* arg) {
	$set(this, m_char, arg);
}

char16_t CharArrayWrapper::getChar(int32_t index) {
	return $nc(this->m_char)->get(index);
}

int32_t CharArrayWrapper::getLength() {
	return $nc(this->m_char)->length;
}

CharArrayWrapper::CharArrayWrapper() {
}

$Class* CharArrayWrapper::load$($String* name, bool initialize) {
	$loadClass(CharArrayWrapper, name, initialize, &_CharArrayWrapper_ClassInfo_, allocate$CharArrayWrapper);
	return class$;
}

$Class* CharArrayWrapper::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com