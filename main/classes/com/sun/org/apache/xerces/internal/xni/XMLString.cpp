#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>

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
				namespace xerces {
					namespace internal {
						namespace xni {

$FieldInfo _XMLString_FieldInfo_[] = {
	{"ch", "[C", nullptr, $PUBLIC, $field(XMLString, ch)},
	{"offset", "I", nullptr, $PUBLIC, $field(XMLString, offset)},
	{"length", "I", nullptr, $PUBLIC, $field(XMLString, length)},
	{}
};

$MethodInfo _XMLString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLString::*)()>(&XMLString::init$))},
	{"<init>", "([CII)V", nullptr, $PUBLIC, $method(static_cast<void(XMLString::*)($chars*,int32_t,int32_t)>(&XMLString::init$))},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLString::*)(XMLString*)>(&XMLString::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"equals", "([CII)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"setValues", "([CII)V", nullptr, $PUBLIC},
	{"setValues", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xni.XMLString",
	"java.lang.Object",
	nullptr,
	_XMLString_FieldInfo_,
	_XMLString_MethodInfo_
};

$Object* allocate$XMLString($Class* clazz) {
	return $of($alloc(XMLString));
}

void XMLString::init$() {
}

void XMLString::init$($chars* ch, int32_t offset, int32_t length) {
	setValues(ch, offset, length);
}

void XMLString::init$(XMLString* string) {
	setValues(string);
}

void XMLString::setValues($chars* ch, int32_t offset, int32_t length) {
	$set(this, ch, ch);
	this->offset = offset;
	this->length = length;
}

void XMLString::setValues(XMLString* s) {
	setValues($nc(s)->ch, s->offset, s->length);
}

void XMLString::clear() {
	$set(this, ch, nullptr);
	this->offset = 0;
	this->length = -1;
}

bool XMLString::equals($chars* ch, int32_t offset, int32_t length) {
	if (ch == nullptr) {
		return false;
	}
	if (this->length != length) {
		return false;
	}
	for (int32_t i = 0; i < length; ++i) {
		if ($nc(this->ch)->get(this->offset + i) != $nc(ch)->get(offset + i)) {
			return false;
		}
	}
	return true;
}

bool XMLString::equals($String* s) {
	if (s == nullptr) {
		return false;
	}
	if (this->length != $nc(s)->length()) {
		return false;
	}
	for (int32_t i = 0; i < this->length; ++i) {
		if ($nc(this->ch)->get(this->offset + i) != $nc(s)->charAt(i)) {
			return false;
		}
	}
	return true;
}

$String* XMLString::toString() {
	return this->length > 0 ? $new($String, this->ch, this->offset, this->length) : ""_s;
}

XMLString::XMLString() {
}

$Class* XMLString::load$($String* name, bool initialize) {
	$loadClass(XMLString, name, initialize, &_XMLString_ClassInfo_, allocate$XMLString);
	return class$;
}

$Class* XMLString::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com