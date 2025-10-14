#include <com/sun/org/apache/xerces/internal/util/DefaultErrorHandler.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _DefaultErrorHandler_FieldInfo_[] = {
	{"fOut", "Ljava/io/PrintWriter;", nullptr, $PROTECTED, $field(DefaultErrorHandler, fOut)},
	{}
};

$MethodInfo _DefaultErrorHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultErrorHandler::*)()>(&DefaultErrorHandler::init$))},
	{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultErrorHandler::*)($PrintWriter*)>(&DefaultErrorHandler::init$))},
	{"error", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"fatalError", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"printError", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultErrorHandler::*)($String*,$XMLParseException*)>(&DefaultErrorHandler::printError))},
	{"warning", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _DefaultErrorHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.DefaultErrorHandler",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler",
	_DefaultErrorHandler_FieldInfo_,
	_DefaultErrorHandler_MethodInfo_
};

$Object* allocate$DefaultErrorHandler($Class* clazz) {
	return $of($alloc(DefaultErrorHandler));
}

void DefaultErrorHandler::init$() {
	$init($System);
	DefaultErrorHandler::init$($$new($PrintWriter, static_cast<$OutputStream*>($System::err)));
}

void DefaultErrorHandler::init$($PrintWriter* out) {
	$set(this, fOut, out);
}

void DefaultErrorHandler::warning($String* domain, $String* key, $XMLParseException* ex) {
	printError("Warning"_s, ex);
}

void DefaultErrorHandler::error($String* domain, $String* key, $XMLParseException* ex) {
	printError("Error"_s, ex);
}

void DefaultErrorHandler::fatalError($String* domain, $String* key, $XMLParseException* ex) {
	printError("Fatal Error"_s, ex);
	$throw(ex);
}

void DefaultErrorHandler::printError($String* type, $XMLParseException* ex) {
	$nc(this->fOut)->print("["_s);
	$nc(this->fOut)->print(type);
	$nc(this->fOut)->print("] "_s);
	$var($String, systemId, $nc(ex)->getExpandedSystemId());
	if (systemId != nullptr) {
		int32_t index = systemId->lastIndexOf((int32_t)u'/');
		if (index != -1) {
			$assign(systemId, systemId->substring(index + 1));
		}
		$nc(this->fOut)->print(systemId);
	}
	$nc(this->fOut)->print(u':');
	$nc(this->fOut)->print(ex->getLineNumber());
	$nc(this->fOut)->print(u':');
	$nc(this->fOut)->print(ex->getColumnNumber());
	$nc(this->fOut)->print(": "_s);
	$nc(this->fOut)->print($(ex->getMessage()));
	$nc(this->fOut)->println();
	$nc(this->fOut)->flush();
}

DefaultErrorHandler::DefaultErrorHandler() {
}

$Class* DefaultErrorHandler::load$($String* name, bool initialize) {
	$loadClass(DefaultErrorHandler, name, initialize, &_DefaultErrorHandler_ClassInfo_, allocate$DefaultErrorHandler);
	return class$;
}

$Class* DefaultErrorHandler::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com