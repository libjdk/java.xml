#include <org/xml/sax/SAXParseException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;

namespace org {
	namespace xml {
		namespace sax {

$FieldInfo _SAXParseException_FieldInfo_[] = {
	{"publicId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SAXParseException, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SAXParseException, systemId)},
	{"lineNumber", "I", nullptr, $PRIVATE, $field(SAXParseException, lineNumber)},
	{"columnNumber", "I", nullptr, $PRIVATE, $field(SAXParseException, columnNumber)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SAXParseException, serialVersionUID)},
	{}
};

$MethodInfo _SAXParseException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXParseException::*)($String*,$Locator*)>(&SAXParseException::init$))},
	{"<init>", "(Ljava/lang/String;Lorg/xml/sax/Locator;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXParseException::*)($String*,$Locator*,$Exception*)>(&SAXParseException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(SAXParseException::*)($String*,$String*,$String*,int32_t,int32_t)>(&SAXParseException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXParseException::*)($String*,$String*,$String*,int32_t,int32_t,$Exception*)>(&SAXParseException::init$))},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"init", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PRIVATE, $method(static_cast<void(SAXParseException::*)($String*,$String*,int32_t,int32_t)>(&SAXParseException::init))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SAXParseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.SAXParseException",
	"org.xml.sax.SAXException",
	nullptr,
	_SAXParseException_FieldInfo_,
	_SAXParseException_MethodInfo_
};

$Object* allocate$SAXParseException($Class* clazz) {
	return $of($alloc(SAXParseException));
}

void SAXParseException::init$($String* message, $Locator* locator) {
	$useLocalCurrentObjectStackCache();
	$SAXException::init$(message);
	if (locator != nullptr) {
		$var($String, var$0, locator->getPublicId());
		$var($String, var$1, locator->getSystemId());
		int32_t var$2 = locator->getLineNumber();
		init(var$0, var$1, var$2, locator->getColumnNumber());
	} else {
		init(nullptr, nullptr, -1, -1);
	}
}

void SAXParseException::init$($String* message, $Locator* locator, $Exception* e) {
	$useLocalCurrentObjectStackCache();
	$SAXException::init$(message, e);
	if (locator != nullptr) {
		$var($String, var$0, locator->getPublicId());
		$var($String, var$1, locator->getSystemId());
		int32_t var$2 = locator->getLineNumber();
		init(var$0, var$1, var$2, locator->getColumnNumber());
	} else {
		init(nullptr, nullptr, -1, -1);
	}
}

void SAXParseException::init$($String* message, $String* publicId, $String* systemId, int32_t lineNumber, int32_t columnNumber) {
	$SAXException::init$(message);
	init(publicId, systemId, lineNumber, columnNumber);
}

void SAXParseException::init$($String* message, $String* publicId, $String* systemId, int32_t lineNumber, int32_t columnNumber, $Exception* e) {
	$SAXException::init$(message, e);
	init(publicId, systemId, lineNumber, columnNumber);
}

void SAXParseException::init($String* publicId, $String* systemId, int32_t lineNumber, int32_t columnNumber) {
	$set(this, publicId, publicId);
	$set(this, systemId, systemId);
	this->lineNumber = lineNumber;
	this->columnNumber = columnNumber;
}

$String* SAXParseException::getPublicId() {
	return this->publicId;
}

$String* SAXParseException::getSystemId() {
	return this->systemId;
}

int32_t SAXParseException::getLineNumber() {
	return this->lineNumber;
}

int32_t SAXParseException::getColumnNumber() {
	return this->columnNumber;
}

$String* SAXParseException::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, $($of(this)->getClass()->getName())));
	$var($String, message, getLocalizedMessage());
	if (this->publicId != nullptr) {
		buf->append("publicId: "_s)->append(this->publicId);
	}
	if (this->systemId != nullptr) {
		buf->append("; systemId: "_s)->append(this->systemId);
	}
	if (this->lineNumber != -1) {
		buf->append("; lineNumber: "_s)->append(this->lineNumber);
	}
	if (this->columnNumber != -1) {
		buf->append("; columnNumber: "_s)->append(this->columnNumber);
	}
	if (message != nullptr) {
		buf->append("; "_s)->append(message);
	}
	return buf->toString();
}

SAXParseException::SAXParseException() {
}

SAXParseException::SAXParseException(const SAXParseException& e) {
}

SAXParseException SAXParseException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SAXParseException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SAXParseException::load$($String* name, bool initialize) {
	$loadClass(SAXParseException, name, initialize, &_SAXParseException_ClassInfo_, allocate$SAXParseException);
	return class$;
}

$Class* SAXParseException::class$ = nullptr;

		} // sax
	} // xml
} // org