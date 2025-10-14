#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$DraconianErrorHandler.h>

#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef ERROR_HANDLER_INSTANCE

using $JAXPValidatorComponent = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _JAXPValidatorComponent$DraconianErrorHandler_FieldInfo_[] = {
	{"ERROR_HANDLER_INSTANCE", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$DraconianErrorHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JAXPValidatorComponent$DraconianErrorHandler, ERROR_HANDLER_INSTANCE)},
	{}
};

$MethodInfo _JAXPValidatorComponent$DraconianErrorHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JAXPValidatorComponent$DraconianErrorHandler::*)()>(&JAXPValidatorComponent$DraconianErrorHandler::init$))},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"getInstance", "()Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$DraconianErrorHandler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JAXPValidatorComponent$DraconianErrorHandler*(*)()>(&JAXPValidatorComponent$DraconianErrorHandler::getInstance))},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _JAXPValidatorComponent$DraconianErrorHandler_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$DraconianErrorHandler", "com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent", "DraconianErrorHandler", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _JAXPValidatorComponent$DraconianErrorHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$DraconianErrorHandler",
	"java.lang.Object",
	"org.xml.sax.ErrorHandler",
	_JAXPValidatorComponent$DraconianErrorHandler_FieldInfo_,
	_JAXPValidatorComponent$DraconianErrorHandler_MethodInfo_,
	nullptr,
	nullptr,
	_JAXPValidatorComponent$DraconianErrorHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent"
};

$Object* allocate$JAXPValidatorComponent$DraconianErrorHandler($Class* clazz) {
	return $of($alloc(JAXPValidatorComponent$DraconianErrorHandler));
}


JAXPValidatorComponent$DraconianErrorHandler* JAXPValidatorComponent$DraconianErrorHandler::ERROR_HANDLER_INSTANCE = nullptr;

void JAXPValidatorComponent$DraconianErrorHandler::init$() {
}

JAXPValidatorComponent$DraconianErrorHandler* JAXPValidatorComponent$DraconianErrorHandler::getInstance() {
	$init(JAXPValidatorComponent$DraconianErrorHandler);
	return JAXPValidatorComponent$DraconianErrorHandler::ERROR_HANDLER_INSTANCE;
}

void JAXPValidatorComponent$DraconianErrorHandler::warning($SAXParseException* e) {
}

void JAXPValidatorComponent$DraconianErrorHandler::error($SAXParseException* e) {
	$throw(e);
}

void JAXPValidatorComponent$DraconianErrorHandler::fatalError($SAXParseException* e) {
	$throw(e);
}

void clinit$JAXPValidatorComponent$DraconianErrorHandler($Class* class$) {
	$assignStatic(JAXPValidatorComponent$DraconianErrorHandler::ERROR_HANDLER_INSTANCE, $new(JAXPValidatorComponent$DraconianErrorHandler));
}

JAXPValidatorComponent$DraconianErrorHandler::JAXPValidatorComponent$DraconianErrorHandler() {
}

$Class* JAXPValidatorComponent$DraconianErrorHandler::load$($String* name, bool initialize) {
	$loadClass(JAXPValidatorComponent$DraconianErrorHandler, name, initialize, &_JAXPValidatorComponent$DraconianErrorHandler_ClassInfo_, clinit$JAXPValidatorComponent$DraconianErrorHandler, allocate$JAXPValidatorComponent$DraconianErrorHandler);
	return class$;
}

$Class* JAXPValidatorComponent$DraconianErrorHandler::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com