#include <com/sun/org/apache/xalan/internal/xsltc/runtime/MessageHandler.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/ErrorListener.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$MethodInfo _MessageHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MessageHandler::*)()>(&MessageHandler::init$))},
	{"displayMessage", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MessageHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.MessageHandler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MessageHandler_MethodInfo_
};

$Object* allocate$MessageHandler($Class* clazz) {
	return $of($alloc(MessageHandler));
}

void MessageHandler::init$() {
}

void MessageHandler::displayMessage($String* msg) {
	$init($System);
	$nc($System::err)->println(msg);
}

$ErrorListener* MessageHandler::getErrorListener() {
	return nullptr;
}

MessageHandler::MessageHandler() {
}

$Class* MessageHandler::load$($String* name, bool initialize) {
	$loadClass(MessageHandler, name, initialize, &_MessageHandler_ClassInfo_, allocate$MessageHandler);
	return class$;
}

$Class* MessageHandler::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com