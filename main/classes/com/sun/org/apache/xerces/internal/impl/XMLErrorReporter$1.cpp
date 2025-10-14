#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter$1.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerProxy.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $ErrorHandlerProxy = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerProxy;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLErrorReporter$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $FINAL | $SYNTHETIC, $field(XMLErrorReporter$1, this$0)},
	{}
};

$MethodInfo _XMLErrorReporter$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, 0, $method(static_cast<void(XMLErrorReporter$1::*)($XMLErrorReporter*)>(&XMLErrorReporter$1::init$))},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _XMLErrorReporter$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter",
	"getSAXErrorHandler",
	"()Lorg/xml/sax/ErrorHandler;"
};

$InnerClassInfo _XMLErrorReporter$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLErrorReporter$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter$1",
	"com.sun.org.apache.xerces.internal.util.ErrorHandlerProxy",
	nullptr,
	_XMLErrorReporter$1_FieldInfo_,
	_XMLErrorReporter$1_MethodInfo_,
	nullptr,
	&_XMLErrorReporter$1_EnclosingMethodInfo_,
	_XMLErrorReporter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter"
};

$Object* allocate$XMLErrorReporter$1($Class* clazz) {
	return $of($alloc(XMLErrorReporter$1));
}

void XMLErrorReporter$1::init$($XMLErrorReporter* this$0) {
	$set(this, this$0, this$0);
	$ErrorHandlerProxy::init$();
}

$XMLErrorHandler* XMLErrorReporter$1::getErrorHandler() {
	return this->this$0->fErrorHandler;
}

XMLErrorReporter$1::XMLErrorReporter$1() {
}

$Class* XMLErrorReporter$1::load$($String* name, bool initialize) {
	$loadClass(XMLErrorReporter$1, name, initialize, &_XMLErrorReporter$1_ClassInfo_, allocate$XMLErrorReporter$1);
	return class$;
}

$Class* XMLErrorReporter$1::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com