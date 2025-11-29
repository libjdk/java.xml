#include <com/sun/org/apache/xml/internal/utils/XMLString.h>

#include <java/util/Locale.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _XMLString_MethodInfo_[] = {
	{"charAt", "(I)C", nullptr, $PUBLIC | $ABSTRACT},
	{"compareTo", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"compareToIgnoreCase", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"concat", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"dispatchAsComment", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"dispatchCharactersEvents", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"endsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"equalsIgnoreCase", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"fixWhiteSpace", "(ZZZ)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC | $ABSTRACT},
	{"hasString", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"indexOf", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"indexOf", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"indexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"indexOf", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"indexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"lastIndexOf", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"lastIndexOf", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"lastIndexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"lastIndexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"length", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"startsWith", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"startsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"startsWith", "(Lcom/sun/org/apache/xml/internal/utils/XMLString;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"substring", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"substring", "(II)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"toDouble", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"toLowerCase", "(Ljava/util/Locale;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"toLowerCase", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"toUpperCase", "(Ljava/util/Locale;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"toUpperCase", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"trim", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLString_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.utils.XMLString",
	nullptr,
	nullptr,
	nullptr,
	_XMLString_MethodInfo_
};

$Object* allocate$XMLString($Class* clazz) {
	return $of($alloc(XMLString));
}

bool XMLString::equals(Object$* anObject) {
	 return this->$Object::equals(anObject);
}

int32_t XMLString::hashCode() {
	 return this->$Object::hashCode();
}

$String* XMLString::toString() {
	 return this->$Object::toString();
}

$Class* XMLString::load$($String* name, bool initialize) {
	$loadClass(XMLString, name, initialize, &_XMLString_ClassInfo_, allocate$XMLString);
	return class$;
}

$Class* XMLString::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com