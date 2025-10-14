#include <org/xml/sax/XMLReader.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;

namespace org {
	namespace xml {
		namespace sax {

$MethodInfo _XMLReader_MethodInfo_[] = {
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC | $ABSTRACT},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,org.xml.sax.SAXException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{}
};

$ClassInfo _XMLReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.XMLReader",
	nullptr,
	nullptr,
	nullptr,
	_XMLReader_MethodInfo_
};

$Object* allocate$XMLReader($Class* clazz) {
	return $of($alloc(XMLReader));
}

$Class* XMLReader::load$($String* name, bool initialize) {
	$loadClass(XMLReader, name, initialize, &_XMLReader_ClassInfo_, allocate$XMLReader);
	return class$;
}

$Class* XMLReader::class$ = nullptr;

		} // sax
	} // xml
} // org