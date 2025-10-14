#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort.h>

#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef INSTANCE

using $AbstractDOMParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _AbstractDOMParser$Abort_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractDOMParser$Abort, serialVersionUID)},
	{"INSTANCE", "Lcom/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort;", nullptr, $STATIC | $FINAL, $staticField(AbstractDOMParser$Abort, INSTANCE)},
	{}
};

$MethodInfo _AbstractDOMParser$Abort_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDOMParser$Abort::*)()>(&AbstractDOMParser$Abort::init$))},
	{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractDOMParser$Abort_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser$Abort", "com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser", "Abort", $STATIC | $FINAL},
	{}
};

$ClassInfo _AbstractDOMParser$Abort_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser$Abort",
	"java.lang.RuntimeException",
	nullptr,
	_AbstractDOMParser$Abort_FieldInfo_,
	_AbstractDOMParser$Abort_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDOMParser$Abort_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser"
};

$Object* allocate$AbstractDOMParser$Abort($Class* clazz) {
	return $of($alloc(AbstractDOMParser$Abort));
}

AbstractDOMParser$Abort* AbstractDOMParser$Abort::INSTANCE = nullptr;

void AbstractDOMParser$Abort::init$() {
	$RuntimeException::init$();
}

$Throwable* AbstractDOMParser$Abort::fillInStackTrace() {
	return this;
}

void clinit$AbstractDOMParser$Abort($Class* class$) {
	$assignStatic(AbstractDOMParser$Abort::INSTANCE, $new(AbstractDOMParser$Abort));
}

AbstractDOMParser$Abort::AbstractDOMParser$Abort() {
}

AbstractDOMParser$Abort::AbstractDOMParser$Abort(const AbstractDOMParser$Abort& e) {
}

AbstractDOMParser$Abort AbstractDOMParser$Abort::wrapper$() {
	$pendingException(this);
	return *this;
}

void AbstractDOMParser$Abort::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AbstractDOMParser$Abort::load$($String* name, bool initialize) {
	$loadClass(AbstractDOMParser$Abort, name, initialize, &_AbstractDOMParser$Abort_ClassInfo_, clinit$AbstractDOMParser$Abort, allocate$AbstractDOMParser$Abort);
	return class$;
}

$Class* AbstractDOMParser$Abort::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com