#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo.h>

#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo$EncodingImpl.h>
#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo$InEncoding.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EncodingInfo$EncodingImpl = ::com::sun::org::apache::xml::internal::serializer::EncodingInfo$EncodingImpl;
using $EncodingInfo$InEncoding = ::com::sun::org::apache::xml::internal::serializer::EncodingInfo$InEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _EncodingInfo_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(EncodingInfo, name)},
	{"javaName", "Ljava/lang/String;", nullptr, $FINAL, $field(EncodingInfo, javaName)},
	{"m_encoding", "Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo$InEncoding;", nullptr, $PRIVATE, $field(EncodingInfo, m_encoding)},
	{}
};

$MethodInfo _EncodingInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(EncodingInfo::*)($String*,$String*)>(&EncodingInfo::init$))},
	{"inEncoding", "(CLjava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t,$String*)>(&EncodingInfo::inEncoding))},
	{"inEncoding", "(CCLjava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t,char16_t,$String*)>(&EncodingInfo::inEncoding))},
	{"inEncoding", "(C[B)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t,$bytes*)>(&EncodingInfo::inEncoding))},
	{"isInEncoding", "(C)Z", nullptr, $PUBLIC, $method(static_cast<bool(EncodingInfo::*)(char16_t)>(&EncodingInfo::isInEncoding))},
	{"isInEncoding", "(CC)Z", nullptr, $PUBLIC, $method(static_cast<bool(EncodingInfo::*)(char16_t,char16_t)>(&EncodingInfo::isInEncoding))},
	{}
};

$InnerClassInfo _EncodingInfo_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.EncodingInfo$EncodingImpl", "com.sun.org.apache.xml.internal.serializer.EncodingInfo", "EncodingImpl", $PRIVATE},
	{"com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding", "com.sun.org.apache.xml.internal.serializer.EncodingInfo", "InEncoding", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _EncodingInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.EncodingInfo",
	"java.lang.Object",
	nullptr,
	_EncodingInfo_FieldInfo_,
	_EncodingInfo_MethodInfo_,
	nullptr,
	nullptr,
	_EncodingInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.EncodingInfo$EncodingImpl,com.sun.org.apache.xml.internal.serializer.EncodingInfo$InEncoding"
};

$Object* allocate$EncodingInfo($Class* clazz) {
	return $of($alloc(EncodingInfo));
}

bool EncodingInfo::isInEncoding(char16_t ch) {
	if (this->m_encoding == nullptr) {
		$set(this, m_encoding, $new($EncodingInfo$EncodingImpl, this));
	}
	return $nc(this->m_encoding)->isInEncoding(ch);
}

bool EncodingInfo::isInEncoding(char16_t high, char16_t low) {
	if (this->m_encoding == nullptr) {
		$set(this, m_encoding, $new($EncodingInfo$EncodingImpl, this));
	}
	return $nc(this->m_encoding)->isInEncoding(high, low);
}

void EncodingInfo::init$($String* name, $String* javaName) {
	$set(this, name, name);
	$set(this, javaName, javaName);
}

bool EncodingInfo::inEncoding(char16_t ch, $String* encoding) {
	$useLocalCurrentObjectStackCache();
	bool isInEncoding = false;
	try {
		$var($chars, cArray, $new($chars, 1));
		cArray->set(0, ch);
		$var($String, s, $new($String, cArray));
		$var($bytes, bArray, s->getBytes(encoding));
		isInEncoding = inEncoding(ch, bArray);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		isInEncoding = false;
		if (encoding == nullptr) {
			isInEncoding = true;
		}
	}
	return isInEncoding;
}

bool EncodingInfo::inEncoding(char16_t high, char16_t low, $String* encoding) {
	$useLocalCurrentObjectStackCache();
	bool isInEncoding = false;
	try {
		$var($chars, cArray, $new($chars, 2));
		cArray->set(0, high);
		cArray->set(1, low);
		$var($String, s, $new($String, cArray));
		$var($bytes, bArray, s->getBytes(encoding));
		isInEncoding = inEncoding(high, bArray);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		isInEncoding = false;
	}
	return isInEncoding;
}

bool EncodingInfo::inEncoding(char16_t ch, $bytes* data) {
	bool isInEncoding = false;
	if (data == nullptr || $nc(data)->length == 0) {
		isInEncoding = false;
	} else if (data->get(0) == 0) {
		isInEncoding = false;
	} else if (data->get(0) == u'?' && ch != u'?') {
		isInEncoding = false;
	} else {
		isInEncoding = true;
	}
	return isInEncoding;
}

EncodingInfo::EncodingInfo() {
}

$Class* EncodingInfo::load$($String* name, bool initialize) {
	$loadClass(EncodingInfo, name, initialize, &_EncodingInfo_ClassInfo_, allocate$EncodingInfo);
	return class$;
}

$Class* EncodingInfo::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com