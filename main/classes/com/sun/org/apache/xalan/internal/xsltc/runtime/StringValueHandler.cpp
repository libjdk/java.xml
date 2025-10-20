#include <com/sun/org/apache/xalan/internal/xsltc/runtime/StringValueHandler.h>

#include <com/sun/org/apache/xml/internal/serializer/EmptySerializer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EMPTY_STR

using $EmptySerializer = ::com::sun::org::apache::xml::internal::serializer::EmptySerializer;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$FieldInfo _StringValueHandler_FieldInfo_[] = {
	{"_buffer", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(StringValueHandler, _buffer)},
	{"_str", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringValueHandler, _str)},
	{"EMPTY_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringValueHandler, EMPTY_STR)},
	{"m_escaping", "Z", nullptr, $PRIVATE, $field(StringValueHandler, m_escaping)},
	{"_nestedLevel", "I", nullptr, $PRIVATE, $field(StringValueHandler, _nestedLevel)},
	{}
};

$MethodInfo _StringValueHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringValueHandler::*)()>(&StringValueHandler::init$))},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(StringValueHandler::*)()>(&StringValueHandler::getValue))},
	{"getValueOfPI", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(StringValueHandler::*)()>(&StringValueHandler::getValueOfPI))},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _StringValueHandler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.StringValueHandler",
	"com.sun.org.apache.xml.internal.serializer.EmptySerializer",
	nullptr,
	_StringValueHandler_FieldInfo_,
	_StringValueHandler_MethodInfo_
};

$Object* allocate$StringValueHandler($Class* clazz) {
	return $of($alloc(StringValueHandler));
}

$String* StringValueHandler::EMPTY_STR = nullptr;

void StringValueHandler::init$() {
	$EmptySerializer::init$();
	$set(this, _buffer, $new($StringBuilder));
	$set(this, _str, nullptr);
	this->m_escaping = false;
	this->_nestedLevel = 0;
}

void StringValueHandler::characters($chars* ch, int32_t off, int32_t len) {
	if (this->_nestedLevel > 0) {
		return;
	}
	if (this->_str != nullptr) {
		$nc(this->_buffer)->append(this->_str);
		$set(this, _str, nullptr);
	}
	$nc(this->_buffer)->append(ch, off, len);
}

$String* StringValueHandler::getValue() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->_buffer)->length() != 0) {
		$var($String, result, $nc(this->_buffer)->toString());
		$nc(this->_buffer)->setLength(0);
		return result;
	} else {
		$var($String, result, this->_str);
		$set(this, _str, nullptr);
		return (result != nullptr) ? result : StringValueHandler::EMPTY_STR;
	}
}

void StringValueHandler::characters($String* characters) {
	if (this->_nestedLevel > 0) {
		return;
	}
	if (this->_str == nullptr && $nc(this->_buffer)->length() == 0) {
		$set(this, _str, characters);
	} else {
		if (this->_str != nullptr) {
			$nc(this->_buffer)->append(this->_str);
			$set(this, _str, nullptr);
		}
		$nc(this->_buffer)->append(characters);
	}
}

void StringValueHandler::startElement($String* qname) {
	++this->_nestedLevel;
}

void StringValueHandler::endElement($String* qname) {
	--this->_nestedLevel;
}

bool StringValueHandler::setEscaping(bool bool$) {
	bool oldEscaping = this->m_escaping;
	this->m_escaping = bool$;
	return bool$;
}

$String* StringValueHandler::getValueOfPI() {
	$useLocalCurrentObjectStackCache();
	$var($String, value, getValue());
	if ($nc(value)->indexOf("?>"_s) > 0) {
		int32_t n = value->length();
		$var($StringBuilder, valueOfPI, $new($StringBuilder));
		for (int32_t i = 0; i < n;) {
			char16_t ch = value->charAt(i++);
			if (ch == u'?' && value->charAt(i) == u'>') {
				valueOfPI->append("? >"_s);
				++i;
			} else {
				valueOfPI->append(ch);
			}
		}
		return valueOfPI->toString();
	}
	return value;
}

StringValueHandler::StringValueHandler() {
}

void clinit$StringValueHandler($Class* class$) {
	$assignStatic(StringValueHandler::EMPTY_STR, ""_s);
}

$Class* StringValueHandler::load$($String* name, bool initialize) {
	$loadClass(StringValueHandler, name, initialize, &_StringValueHandler_ClassInfo_, clinit$StringValueHandler, allocate$StringValueHandler);
	return class$;
}

$Class* StringValueHandler::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com