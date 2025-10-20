#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$FieldInfo _XMLParseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XMLParseException, serialVersionUID)},
	{"fPublicId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLParseException, fPublicId)},
	{"fLiteralSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLParseException, fLiteralSystemId)},
	{"fExpandedSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLParseException, fExpandedSystemId)},
	{"fBaseSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLParseException, fBaseSystemId)},
	{"fLineNumber", "I", nullptr, $PROTECTED, $field(XMLParseException, fLineNumber)},
	{"fColumnNumber", "I", nullptr, $PROTECTED, $field(XMLParseException, fColumnNumber)},
	{"fCharacterOffset", "I", nullptr, $PROTECTED, $field(XMLParseException, fCharacterOffset)},
	{}
};

$MethodInfo _XMLParseException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLParseException::*)($XMLLocator*,$String*)>(&XMLParseException::init$))},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLParseException::*)($XMLLocator*,$String*,$Exception*)>(&XMLParseException::init$))},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLParseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLParseException",
	"com.sun.org.apache.xerces.internal.xni.XNIException",
	nullptr,
	_XMLParseException_FieldInfo_,
	_XMLParseException_MethodInfo_
};

$Object* allocate$XMLParseException($Class* clazz) {
	return $of($alloc(XMLParseException));
}

void XMLParseException::init$($XMLLocator* locator, $String* message) {
	$XNIException::init$(message);
	this->fLineNumber = -1;
	this->fColumnNumber = -1;
	this->fCharacterOffset = -1;
	if (locator != nullptr) {
		$set(this, fPublicId, locator->getPublicId());
		$set(this, fLiteralSystemId, locator->getLiteralSystemId());
		$set(this, fExpandedSystemId, locator->getExpandedSystemId());
		$set(this, fBaseSystemId, locator->getBaseSystemId());
		this->fLineNumber = locator->getLineNumber();
		this->fColumnNumber = locator->getColumnNumber();
		this->fCharacterOffset = locator->getCharacterOffset();
	}
}

void XMLParseException::init$($XMLLocator* locator, $String* message, $Exception* exception) {
	$XNIException::init$(message, exception);
	this->fLineNumber = -1;
	this->fColumnNumber = -1;
	this->fCharacterOffset = -1;
	if (locator != nullptr) {
		$set(this, fPublicId, locator->getPublicId());
		$set(this, fLiteralSystemId, locator->getLiteralSystemId());
		$set(this, fExpandedSystemId, locator->getExpandedSystemId());
		$set(this, fBaseSystemId, locator->getBaseSystemId());
		this->fLineNumber = locator->getLineNumber();
		this->fColumnNumber = locator->getColumnNumber();
		this->fCharacterOffset = locator->getCharacterOffset();
	}
}

$String* XMLParseException::getPublicId() {
	return this->fPublicId;
}

$String* XMLParseException::getExpandedSystemId() {
	return this->fExpandedSystemId;
}

$String* XMLParseException::getLiteralSystemId() {
	return this->fLiteralSystemId;
}

$String* XMLParseException::getBaseSystemId() {
	return this->fBaseSystemId;
}

int32_t XMLParseException::getLineNumber() {
	return this->fLineNumber;
}

int32_t XMLParseException::getColumnNumber() {
	return this->fColumnNumber;
}

int32_t XMLParseException::getCharacterOffset() {
	return this->fCharacterOffset;
}

$String* XMLParseException::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, str, $new($StringBuffer));
	if (this->fPublicId != nullptr) {
		str->append(this->fPublicId);
	}
	str->append(u':');
	if (this->fLiteralSystemId != nullptr) {
		str->append(this->fLiteralSystemId);
	}
	str->append(u':');
	if (this->fExpandedSystemId != nullptr) {
		str->append(this->fExpandedSystemId);
	}
	str->append(u':');
	if (this->fBaseSystemId != nullptr) {
		str->append(this->fBaseSystemId);
	}
	str->append(u':');
	str->append(this->fLineNumber);
	str->append(u':');
	str->append(this->fColumnNumber);
	str->append(u':');
	str->append(this->fCharacterOffset);
	str->append(u':');
	$var($String, message, getMessage());
	if (message == nullptr) {
		$var($Exception, exception, getException());
		if (exception != nullptr) {
			$assign(message, exception->getMessage());
		}
	}
	if (message != nullptr) {
		str->append(message);
	}
	return str->toString();
}

XMLParseException::XMLParseException() {
}

XMLParseException::XMLParseException(const XMLParseException& e) {
}

XMLParseException XMLParseException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XMLParseException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XMLParseException::load$($String* name, bool initialize) {
	$loadClass(XMLParseException, name, initialize, &_XMLParseException_ClassInfo_, allocate$XMLParseException);
	return class$;
}

$Class* XMLParseException::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com