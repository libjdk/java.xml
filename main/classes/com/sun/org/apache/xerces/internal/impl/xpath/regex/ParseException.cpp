#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/ParseException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _ParseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ParseException, serialVersionUID)},
	{"location", "I", nullptr, $FINAL, $field(ParseException, location)},
	{}
};

$MethodInfo _ParseException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ParseException::*)($String*,int32_t)>(&ParseException::init$))},
	{"getLocation", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ParseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.ParseException",
	"java.lang.RuntimeException",
	nullptr,
	_ParseException_FieldInfo_,
	_ParseException_MethodInfo_
};

$Object* allocate$ParseException($Class* clazz) {
	return $of($alloc(ParseException));
}

void ParseException::init$($String* mes, int32_t location) {
	$RuntimeException::init$(mes);
	this->location = location;
}

int32_t ParseException::getLocation() {
	return this->location;
}

ParseException::ParseException() {
}

ParseException::ParseException(const ParseException& e) {
}

ParseException ParseException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ParseException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ParseException::load$($String* name, bool initialize) {
	$loadClass(ParseException, name, initialize, &_ParseException_ClassInfo_, allocate$ParseException);
	return class$;
}

$Class* ParseException::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com