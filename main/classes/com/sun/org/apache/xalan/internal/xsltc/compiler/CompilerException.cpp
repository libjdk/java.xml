#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CompilerException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _CompilerException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CompilerException, serialVersionUID)},
	{"_msg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CompilerException, _msg)},
	{}
};

$MethodInfo _CompilerException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompilerException::*)()>(&CompilerException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(CompilerException::*)($Exception*)>(&CompilerException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CompilerException::*)($String*)>(&CompilerException::init$))},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompilerException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.CompilerException",
	"java.lang.Exception",
	nullptr,
	_CompilerException_FieldInfo_,
	_CompilerException_MethodInfo_
};

$Object* allocate$CompilerException($Class* clazz) {
	return $of($alloc(CompilerException));
}

void CompilerException::init$() {
	$Exception::init$();
}

void CompilerException::init$($Exception* e) {
	$Exception::init$($($nc(e)->toString()));
	$set(this, _msg, $nc(e)->toString());
}

void CompilerException::init$($String* message) {
	$Exception::init$(message);
	$set(this, _msg, message);
}

$String* CompilerException::getMessage() {
	int32_t col = $nc(this->_msg)->indexOf((int32_t)u':');
	if (col > -1) {
		return ($nc(this->_msg)->substring(col));
	} else {
		return (this->_msg);
	}
}

CompilerException::CompilerException() {
}

CompilerException::CompilerException(const CompilerException& e) {
}

CompilerException CompilerException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CompilerException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CompilerException::load$($String* name, bool initialize) {
	$loadClass(CompilerException, name, initialize, &_CompilerException_ClassInfo_, allocate$CompilerException);
	return class$;
}

$Class* CompilerException::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com