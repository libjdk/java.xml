#include <com/sun/org/apache/xml/internal/utils/XMLStringDefault.h>

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/Locale.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Locale = ::java::util::Locale;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _XMLStringDefault_FieldInfo_[] = {
	{"m_str", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLStringDefault, m_str)},
	{}
};

$MethodInfo _XMLStringDefault_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLStringDefault::*)($String*)>(&XMLStringDefault::init$))},
	{"charAt", "(I)C", nullptr, $PUBLIC},
	{"compareTo", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC},
	{"compareToIgnoreCase", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC},
	{"concat", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"dispatchAsComment", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"dispatchCharactersEvents", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"equals", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equalsIgnoreCase", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"fixWhiteSpace", "(ZZZ)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC},
	{"hasString", "()Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"indexOf", "(I)I", nullptr, $PUBLIC},
	{"indexOf", "(II)I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"indexOf", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(I)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(II)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{"startsWith", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;I)Z", nullptr, $PUBLIC},
	{"startsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC},
	{"substring", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"substring", "(II)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"toDouble", "()D", nullptr, $PUBLIC},
	{"toLowerCase", "(Ljava/util/Locale;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"toLowerCase", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUpperCase", "(Ljava/util/Locale;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"toUpperCase", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"trim", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLStringDefault_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.XMLStringDefault",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.utils.XMLString",
	_XMLStringDefault_FieldInfo_,
	_XMLStringDefault_MethodInfo_
};

$Object* allocate$XMLStringDefault($Class* clazz) {
	return $of($alloc(XMLStringDefault));
}

void XMLStringDefault::init$($String* str) {
	$set(this, m_str, str);
}

void XMLStringDefault::dispatchCharactersEvents($ContentHandler* ch) {
}

void XMLStringDefault::dispatchAsComment($LexicalHandler* lh) {
}

$XMLString* XMLStringDefault::fixWhiteSpace(bool trimHead, bool trimTail, bool doublePunctuationSpaces) {
	return $new(XMLStringDefault, $($nc(this->m_str)->trim()));
}

int32_t XMLStringDefault::length() {
	return $nc(this->m_str)->length();
}

char16_t XMLStringDefault::charAt(int32_t index) {
	return $nc(this->m_str)->charAt(index);
}

void XMLStringDefault::getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
	int32_t destIndex = dstBegin;
	for (int32_t i = srcBegin; i < srcEnd; ++i) {
		$nc(dst)->set(destIndex++, $nc(this->m_str)->charAt(i));
	}
}

bool XMLStringDefault::equals($String* obj2) {
	return $nc(this->m_str)->equals(obj2);
}

bool XMLStringDefault::equals($XMLString* anObject) {
	return $nc(this->m_str)->equals($($nc(anObject)->toString()));
}

bool XMLStringDefault::equals(Object$* anObject) {
	return $nc(this->m_str)->equals(anObject);
}

bool XMLStringDefault::equalsIgnoreCase($String* anotherString) {
	return $nc(this->m_str)->equalsIgnoreCase(anotherString);
}

int32_t XMLStringDefault::compareTo($XMLString* anotherString) {
	return $nc(this->m_str)->compareTo($($nc(anotherString)->toString()));
}

int32_t XMLStringDefault::compareToIgnoreCase($XMLString* str) {
	return $nc(this->m_str)->compareToIgnoreCase($($nc(str)->toString()));
}

bool XMLStringDefault::startsWith($String* prefix, int32_t toffset) {
	return $nc(this->m_str)->startsWith(prefix, toffset);
}

bool XMLStringDefault::startsWith($XMLString* prefix, int32_t toffset) {
	return $nc(this->m_str)->startsWith($($nc(prefix)->toString()), toffset);
}

bool XMLStringDefault::startsWith($String* prefix) {
	return $nc(this->m_str)->startsWith(prefix);
}

bool XMLStringDefault::startsWith($XMLString* prefix) {
	return $nc(this->m_str)->startsWith($($nc(prefix)->toString()));
}

bool XMLStringDefault::endsWith($String* suffix) {
	return $nc(this->m_str)->endsWith(suffix);
}

int32_t XMLStringDefault::hashCode() {
	return $nc(this->m_str)->hashCode();
}

int32_t XMLStringDefault::indexOf(int32_t ch) {
	return $nc(this->m_str)->indexOf(ch);
}

int32_t XMLStringDefault::indexOf(int32_t ch, int32_t fromIndex) {
	return $nc(this->m_str)->indexOf(ch, fromIndex);
}

int32_t XMLStringDefault::lastIndexOf(int32_t ch) {
	return $nc(this->m_str)->lastIndexOf(ch);
}

int32_t XMLStringDefault::lastIndexOf(int32_t ch, int32_t fromIndex) {
	return $nc(this->m_str)->lastIndexOf(ch, fromIndex);
}

int32_t XMLStringDefault::indexOf($String* str) {
	return $nc(this->m_str)->indexOf(str);
}

int32_t XMLStringDefault::indexOf($XMLString* str) {
	return $nc(this->m_str)->indexOf($($nc(str)->toString()));
}

int32_t XMLStringDefault::indexOf($String* str, int32_t fromIndex) {
	return $nc(this->m_str)->indexOf(str, fromIndex);
}

int32_t XMLStringDefault::lastIndexOf($String* str) {
	return $nc(this->m_str)->lastIndexOf(str);
}

int32_t XMLStringDefault::lastIndexOf($String* str, int32_t fromIndex) {
	return $nc(this->m_str)->lastIndexOf(str, fromIndex);
}

$XMLString* XMLStringDefault::substring(int32_t beginIndex) {
	return $new(XMLStringDefault, $($nc(this->m_str)->substring(beginIndex)));
}

$XMLString* XMLStringDefault::substring(int32_t beginIndex, int32_t endIndex) {
	return $new(XMLStringDefault, $($nc(this->m_str)->substring(beginIndex, endIndex)));
}

$XMLString* XMLStringDefault::concat($String* str) {
	return $new(XMLStringDefault, $($nc(this->m_str)->concat(str)));
}

$XMLString* XMLStringDefault::toLowerCase($Locale* locale) {
	return $new(XMLStringDefault, $($nc(this->m_str)->toLowerCase(locale)));
}

$XMLString* XMLStringDefault::toLowerCase() {
	return $new(XMLStringDefault, $($nc(this->m_str)->toLowerCase()));
}

$XMLString* XMLStringDefault::toUpperCase($Locale* locale) {
	return $new(XMLStringDefault, $($nc(this->m_str)->toUpperCase(locale)));
}

$XMLString* XMLStringDefault::toUpperCase() {
	return $new(XMLStringDefault, $($nc(this->m_str)->toUpperCase()));
}

$XMLString* XMLStringDefault::trim() {
	return $new(XMLStringDefault, $($nc(this->m_str)->trim()));
}

$String* XMLStringDefault::toString() {
	return this->m_str;
}

bool XMLStringDefault::hasString() {
	return true;
}

double XMLStringDefault::toDouble() {
	try {
		return $nc($($Double::valueOf(this->m_str)))->doubleValue();
	} catch ($NumberFormatException& nfe) {
		$init($Double);
		return $Double::NaN;
	}
	$shouldNotReachHere();
}

XMLStringDefault::XMLStringDefault() {
}

$Class* XMLStringDefault::load$($String* name, bool initialize) {
	$loadClass(XMLStringDefault, name, initialize, &_XMLStringDefault_ClassInfo_, allocate$XMLStringDefault);
	return class$;
}

$Class* XMLStringDefault::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com