#include <org/xml/sax/Parser.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Locale = ::java::util::Locale;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;

namespace org {
	namespace xml {
		namespace sax {

$NamedAttribute Parser_Attribute_var$0[] = {
	{"since", 's', "1.5"},
	{}
};
$CompoundAttribute _Parser_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Parser_Attribute_var$0},
	{}
};


$MethodInfo _Parser_MethodInfo_[] = {
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException,java.io.IOException"},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDocumentHandler", "(Lorg/xml/sax/DocumentHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _Parser_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.Parser",
	nullptr,
	nullptr,
	nullptr,
	_Parser_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Parser_Annotations_
};

$Object* allocate$Parser($Class* clazz) {
	return $of($alloc(Parser));
}

$Class* Parser::load$($String* name, bool initialize) {
	$loadClass(Parser, name, initialize, &_Parser_ClassInfo_, allocate$Parser);
	return class$;
}

$Class* Parser::class$ = nullptr;

		} // sax
	} // xml
} // org