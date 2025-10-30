#include <com/sun/org/apache/xpath/internal/objects/XString.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xml/internal/utils/XMLCharacterRecognizer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/objects/XMLStringFactoryImpl.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/Math.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/util/Locale.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef CLASS_BOOLEAN
#undef CLASS_NODESET
#undef CLASS_NUMBER
#undef CLASS_STRING
#undef EMPTYSTRING

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XMLCharacterRecognizer = ::com::sun::org::apache::xml::internal::utils::XMLCharacterRecognizer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $XMLStringFactoryImpl = ::com::sun::org::apache::xpath::internal::objects::XMLStringFactoryImpl;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Locale = ::java::util::Locale;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XString_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XString, serialVersionUID)},
	{"EMPTYSTRING", "Lcom/sun/org/apache/xpath/internal/objects/XString;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XString, EMPTYSTRING)},
	{}
};

$MethodInfo _XString_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(static_cast<void(XString::*)(Object$*)>(&XString::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XString::*)($String*)>(&XString::init$))},
	{"bool", "()Z", nullptr, $PUBLIC},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC},
	{"charAt", "(I)C", nullptr, $PUBLIC},
	{"compareTo", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC},
	{"compareToIgnoreCase", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC},
	{"concat", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"dispatchAsComment", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"dispatchCharactersEvents", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"equals", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equalsIgnoreCase", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"fixWhiteSpace", "(ZZZ)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"getTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasString", "()Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"indexOf", "(I)I", nullptr, $PUBLIC},
	{"indexOf", "(II)I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"indexOf", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"isSpace", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&XString::isSpace))},
	{"lastIndexOf", "(I)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(II)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{"num", "()D", nullptr, $PUBLIC},
	{"rtf", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC},
	{"startsWith", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC},
	{"startsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;I)Z", nullptr, $PUBLIC},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"substring", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"substring", "(II)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"toDouble", "()D", nullptr, $PUBLIC},
	{"toLowerCase", "(Ljava/util/Locale;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"toLowerCase", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUpperCase", "(Ljava/util/Locale;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"toUpperCase", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"trim", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{"xstr", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XString",
	"com.sun.org.apache.xpath.internal.objects.XObject",
	"com.sun.org.apache.xml.internal.utils.XMLString",
	_XString_FieldInfo_,
	_XString_MethodInfo_
};

$Object* allocate$XString($Class* clazz) {
	return $of($alloc(XString));
}

$String* XString::toString() {
	 return this->$XObject::toString();
}

$Object* XString::clone() {
	 return this->$XObject::clone();
}

void XString::finalize() {
	this->$XObject::finalize();
}

XString* XString::EMPTYSTRING = nullptr;

void XString::init$(Object$* val) {
	$XObject::init$(val);
}

void XString::init$($String* val) {
	$XObject::init$(val);
}

int32_t XString::getType() {
	return $XObject::CLASS_STRING;
}

$String* XString::getTypeString() {
	return "#STRING"_s;
}

bool XString::hasString() {
	return true;
}

double XString::num() {
	return toDouble();
}

double XString::toDouble() {
	$useLocalCurrentObjectStackCache();
	$var($XMLString, s, trim());
	$init($Double);
	double result = $Double::NaN;
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		char16_t c = s->charAt(i);
		if (c != u'-' && c != u'.' && (c < 48 || c > 57)) {
			return result;
		}
	}
	try {
		result = $Double::parseDouble($($nc(s)->toString()));
	} catch ($NumberFormatException& e) {
	}
	return result;
}

bool XString::bool$() {
	return $nc($(str()))->length() > 0;
}

$XMLString* XString::xstr() {
	return this;
}

$String* XString::str() {
	return (nullptr != this->m_obj) ? ($cast($String, this->m_obj)) : ""_s;
}

int32_t XString::rtf($XPathContext* support) {
	$useLocalCurrentObjectStackCache();
	$var($DTM, frag, $nc(support)->createDocumentFragment());
	$nc(frag)->appendTextChild($(str()));
	return frag->getDocument();
}

void XString::dispatchCharactersEvents($ContentHandler* ch) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, this->str());
	$var($chars, var$0, $nc(str)->toCharArray());
	$nc(ch)->characters(var$0, 0, str->length());
}

void XString::dispatchAsComment($LexicalHandler* lh) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, this->str());
	$var($chars, var$0, $nc(str)->toCharArray());
	$nc(lh)->comment(var$0, 0, str->length());
}

int32_t XString::length() {
	return $nc($(str()))->length();
}

char16_t XString::charAt(int32_t index) {
	return $nc($(str()))->charAt(index);
}

void XString::getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
	$nc($(str()))->getChars(srcBegin, srcEnd, dst, dstBegin);
}

bool XString::equals($XObject* obj2) {
	$useLocalCurrentObjectStackCache();
	int32_t t = $nc(obj2)->getType();
	try {
		if ($XObject::CLASS_NODESET == t) {
			return obj2->equals(static_cast<$XObject*>(this));
		} else if ($XObject::CLASS_BOOLEAN == t) {
			bool var$0 = obj2->bool$();
			return var$0 == bool$();
		} else if ($XObject::CLASS_NUMBER == t) {
			double var$1 = obj2->num();
			return var$1 == num();
		}
	} catch ($TransformerException& te) {
		$throwNew($WrappedRuntimeException, te);
	}
	return $nc($(xstr()))->equals($(obj2->xstr()));
}

bool XString::equals($String* obj2) {
	return $nc($(str()))->equals(obj2);
}

bool XString::equals($XMLString* obj2) {
	$useLocalCurrentObjectStackCache();
	if (obj2 != nullptr) {
		if (!obj2->hasString()) {
			return obj2->equals($(str()));
		} else {
			return $nc($(str()))->equals($(obj2->toString()));
		}
	}
	return false;
}

bool XString::equals(Object$* obj2) {
	$useLocalCurrentObjectStackCache();
	if (nullptr == obj2) {
		return false;
	} else if ($instanceOf($XNodeSet, obj2)) {
		return $nc($of(obj2))->equals(this);
	} else if ($instanceOf($XNumber, obj2)) {
		return $nc($of(obj2))->equals(this);
	} else {
		return $nc($(str()))->equals($($nc($of(obj2))->toString()));
	}
}

bool XString::equalsIgnoreCase($String* anotherString) {
	return $nc($(str()))->equalsIgnoreCase(anotherString);
}

int32_t XString::compareTo($XMLString* xstr) {
	int32_t len1 = this->length();
	int32_t len2 = $nc(xstr)->length();
	int32_t n = $Math::min(len1, len2);
	int32_t i = 0;
	int32_t j = 0;
	while (n-- != 0) {
		char16_t c1 = this->charAt(i);
		char16_t c2 = xstr->charAt(j);
		if (c1 != c2) {
			return c1 - c2;
		}
		++i;
		++j;
	}
	return len1 - len2;
}

int32_t XString::compareToIgnoreCase($XMLString* str) {
	$throwNew($WrappedRuntimeException, $$new($NoSuchMethodException, "Java 1.2 method, not yet implemented"_s));
	$shouldNotReachHere();
}

bool XString::startsWith($String* prefix, int32_t toffset) {
	return $nc($(str()))->startsWith(prefix, toffset);
}

bool XString::startsWith($String* prefix) {
	return startsWith(prefix, 0);
}

bool XString::startsWith($XMLString* prefix, int32_t toffset) {
	int32_t to = toffset;
	int32_t tlim = this->length();
	int32_t po = 0;
	int32_t pc = $nc(prefix)->length();
	if ((toffset < 0) || (toffset > tlim - pc)) {
		return false;
	}
	while (--pc >= 0) {
		char16_t var$0 = this->charAt(to);
		if (var$0 != prefix->charAt(po)) {
			return false;
		}
		++to;
		++po;
	}
	return true;
}

bool XString::startsWith($XMLString* prefix) {
	return startsWith(prefix, 0);
}

bool XString::endsWith($String* suffix) {
	return $nc($(str()))->endsWith(suffix);
}

int32_t XString::hashCode() {
	return $nc($(str()))->hashCode();
}

int32_t XString::indexOf(int32_t ch) {
	return $nc($(str()))->indexOf(ch);
}

int32_t XString::indexOf(int32_t ch, int32_t fromIndex) {
	return $nc($(str()))->indexOf(ch, fromIndex);
}

int32_t XString::lastIndexOf(int32_t ch) {
	return $nc($(str()))->lastIndexOf(ch);
}

int32_t XString::lastIndexOf(int32_t ch, int32_t fromIndex) {
	return $nc($(str()))->lastIndexOf(ch, fromIndex);
}

int32_t XString::indexOf($String* str) {
	return $nc($(this->str()))->indexOf(str);
}

int32_t XString::indexOf($XMLString* str) {
	$useLocalCurrentObjectStackCache();
	return $nc($(this->str()))->indexOf($($nc(str)->toString()));
}

int32_t XString::indexOf($String* str, int32_t fromIndex) {
	return $nc($(this->str()))->indexOf(str, fromIndex);
}

int32_t XString::lastIndexOf($String* str) {
	return $nc($(this->str()))->lastIndexOf(str);
}

int32_t XString::lastIndexOf($String* str, int32_t fromIndex) {
	return $nc($(this->str()))->lastIndexOf(str, fromIndex);
}

$XMLString* XString::substring(int32_t beginIndex) {
	$useLocalCurrentObjectStackCache();
	return $new(XString, $($nc($(str()))->substring(beginIndex)));
}

$XMLString* XString::substring(int32_t beginIndex, int32_t endIndex) {
	$useLocalCurrentObjectStackCache();
	return $new(XString, $($nc($(str()))->substring(beginIndex, endIndex)));
}

$XMLString* XString::concat($String* str) {
	$useLocalCurrentObjectStackCache();
	return $new(XString, $($nc($(this->str()))->concat(str)));
}

$XMLString* XString::toLowerCase($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return $new(XString, $($nc($(str()))->toLowerCase(locale)));
}

$XMLString* XString::toLowerCase() {
	$useLocalCurrentObjectStackCache();
	return $new(XString, $($nc($(str()))->toLowerCase()));
}

$XMLString* XString::toUpperCase($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	return $new(XString, $($nc($(str()))->toUpperCase(locale)));
}

$XMLString* XString::toUpperCase() {
	$useLocalCurrentObjectStackCache();
	return $new(XString, $($nc($(str()))->toUpperCase()));
}

$XMLString* XString::trim() {
	$useLocalCurrentObjectStackCache();
	return $new(XString, $($nc($(str()))->trim()));
}

bool XString::isSpace(char16_t ch) {
	$init(XString);
	return $XMLCharacterRecognizer::isWhiteSpace(ch);
}

$XMLString* XString::fixWhiteSpace(bool trimHead, bool trimTail, bool doublePunctuationSpaces) {
	$useLocalCurrentObjectStackCache();
	int32_t len = this->length();
	$var($chars, buf, $new($chars, len));
	this->getChars(0, len, buf, 0);
	bool edit = false;
	int32_t s = 0;
	for (s = 0; s < len; ++s) {
		if (isSpace(buf->get(s))) {
			break;
		}
	}
	int32_t d = s;
	bool pres = false;
	for (; s < len; ++s) {
		char16_t c = buf->get(s);
		if (isSpace(c)) {
			if (!pres) {
				if (u' ' != c) {
					edit = true;
				}
				buf->set(d++, u' ');
				if (doublePunctuationSpaces && (s != 0)) {
					char16_t prevChar = buf->get(s - 1);
					if (!((prevChar == u'.') || (prevChar == u'!') || (prevChar == u'?'))) {
						pres = true;
					}
				} else {
					pres = true;
				}
			} else {
				edit = true;
				pres = true;
			}
		} else {
			buf->set(d++, c);
			pres = false;
		}
	}
	if (trimTail && 1 <= d && u' ' == buf->get(d - 1)) {
		edit = true;
		--d;
	}
	int32_t start = 0;
	if (trimHead && 0 < d && u' ' == buf->get(0)) {
		edit = true;
		++start;
	}
	$var($XMLStringFactory, xsf, $XMLStringFactoryImpl::getFactory());
	return edit ? $nc(xsf)->newstr($$new($String, buf, start, d - start)) : static_cast<$XMLString*>(this);
}

void XString::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	$nc(visitor)->visitStringLiteral(owner, this);
}

void clinit$XString($Class* class$) {
	$assignStatic(XString::EMPTYSTRING, $new(XString, ""_s));
}

XString::XString() {
}

$Class* XString::load$($String* name, bool initialize) {
	$loadClass(XString, name, initialize, &_XString_ClassInfo_, clinit$XString, allocate$XString);
	return class$;
}

$Class* XString::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com