#include <com/sun/xml/internal/stream/XMLEntityReader.h>

#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/xml/internal/stream/XMLBufferListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$MethodInfo _XMLEntityReader_MethodInfo_[] = {
	{"getCharacterOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLEntityReader::*)()>(&XMLEntityReader::init$))},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isExternal", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"peekChar", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"registerListener", "(Lcom/sun/xml/internal/stream/XMLBufferListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"scanChar", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"scanContent", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"scanData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"scanLiteral", "(ILcom/sun/org/apache/xerces/internal/xni/XMLString;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"scanName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"scanNmtoken", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"scanQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"skipChar", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"skipSpaces", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"skipString", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _XMLEntityReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.xml.internal.stream.XMLEntityReader",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	nullptr,
	_XMLEntityReader_MethodInfo_
};

$Object* allocate$XMLEntityReader($Class* clazz) {
	return $of($alloc(XMLEntityReader));
}

void XMLEntityReader::init$() {
}

XMLEntityReader::XMLEntityReader() {
}

$Class* XMLEntityReader::load$($String* name, bool initialize) {
	$loadClass(XMLEntityReader, name, initialize, &_XMLEntityReader_ClassInfo_, allocate$XMLEntityReader);
	return class$;
}

$Class* XMLEntityReader::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com