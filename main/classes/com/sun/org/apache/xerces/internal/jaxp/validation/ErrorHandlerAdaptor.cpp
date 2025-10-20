#include <com/sun/org/apache/xerces/internal/jaxp/validation/ErrorHandlerAdaptor.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/Util.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/WrappedSAXException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $Util = ::com::sun::org::apache::xerces::internal::jaxp::validation::Util;
using $WrappedSAXException = ::com::sun::org::apache::xerces::internal::jaxp::validation::WrappedSAXException;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _ErrorHandlerAdaptor_FieldInfo_[] = {
	{"hadError", "Z", nullptr, $PRIVATE, $field(ErrorHandlerAdaptor, hadError$)},
	{}
};

$MethodInfo _ErrorHandlerAdaptor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ErrorHandlerAdaptor::*)()>(&ErrorHandlerAdaptor::init$))},
	{"error", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC},
	{"fatalError", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PROTECTED | $ABSTRACT},
	{"hadError", "()Z", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"warning", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ErrorHandlerAdaptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ErrorHandlerAdaptor",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler",
	_ErrorHandlerAdaptor_FieldInfo_,
	_ErrorHandlerAdaptor_MethodInfo_
};

$Object* allocate$ErrorHandlerAdaptor($Class* clazz) {
	return $of($alloc(ErrorHandlerAdaptor));
}

void ErrorHandlerAdaptor::init$() {
	this->hadError$ = false;
}

bool ErrorHandlerAdaptor::hadError() {
	return this->hadError$;
}

void ErrorHandlerAdaptor::reset() {
	this->hadError$ = false;
}

void ErrorHandlerAdaptor::fatalError($String* domain, $String* key, $XMLParseException* e) {
	$useLocalCurrentObjectStackCache();
	try {
		this->hadError$ = true;
		$nc($(getErrorHandler()))->fatalError($($Util::toSAXParseException(e)));
	} catch ($SAXException&) {
		$var($SAXException, se, $catch());
		$throwNew($WrappedSAXException, se);
	}
}

void ErrorHandlerAdaptor::error($String* domain, $String* key, $XMLParseException* e) {
	$useLocalCurrentObjectStackCache();
	try {
		this->hadError$ = true;
		$nc($(getErrorHandler()))->error($($Util::toSAXParseException(e)));
	} catch ($SAXException&) {
		$var($SAXException, se, $catch());
		$throwNew($WrappedSAXException, se);
	}
}

void ErrorHandlerAdaptor::warning($String* domain, $String* key, $XMLParseException* e) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc($(getErrorHandler()))->warning($($Util::toSAXParseException(e)));
	} catch ($SAXException&) {
		$var($SAXException, se, $catch());
		$throwNew($WrappedSAXException, se);
	}
}

ErrorHandlerAdaptor::ErrorHandlerAdaptor() {
}

$Class* ErrorHandlerAdaptor::load$($String* name, bool initialize) {
	$loadClass(ErrorHandlerAdaptor, name, initialize, &_ErrorHandlerAdaptor_ClassInfo_, allocate$ErrorHandlerAdaptor);
	return class$;
}

$Class* ErrorHandlerAdaptor::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com