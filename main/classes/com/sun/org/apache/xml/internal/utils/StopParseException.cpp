#include <com/sun/org/apache/xml/internal/utils/StopParseException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _StopParseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(StopParseException, serialVersionUID)},
	{}
};

$MethodInfo _StopParseException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StopParseException::*)()>(&StopParseException::init$))},
	{}
};

$ClassInfo _StopParseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.StopParseException",
	"org.xml.sax.SAXException",
	nullptr,
	_StopParseException_FieldInfo_,
	_StopParseException_MethodInfo_
};

$Object* allocate$StopParseException($Class* clazz) {
	return $of($alloc(StopParseException));
}

void StopParseException::init$() {
	$SAXException::init$("Stylesheet PIs found, stop the parse"_s);
}

StopParseException::StopParseException() {
}

StopParseException::StopParseException(const StopParseException& e) {
}

StopParseException StopParseException::wrapper$() {
	$pendingException(this);
	return *this;
}

void StopParseException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* StopParseException::load$($String* name, bool initialize) {
	$loadClass(StopParseException, name, initialize, &_StopParseException_ClassInfo_, allocate$StopParseException);
	return class$;
}

$Class* StopParseException::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com