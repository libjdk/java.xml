#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl$RevalidationHandlerHolder.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CoreDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl;
using $RevalidationHandler = ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _CoreDOMImplementationImpl$RevalidationHandlerHolder_FieldInfo_[] = {
	{"handler", "Lcom/sun/org/apache/xerces/internal/impl/RevalidationHandler;", nullptr, 0, $field(CoreDOMImplementationImpl$RevalidationHandlerHolder, handler)},
	{}
};

$MethodInfo _CoreDOMImplementationImpl$RevalidationHandlerHolder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/RevalidationHandler;)V", nullptr, 0, $method(static_cast<void(CoreDOMImplementationImpl$RevalidationHandlerHolder::*)($RevalidationHandler*)>(&CoreDOMImplementationImpl$RevalidationHandlerHolder::init$))},
	{}
};

$InnerClassInfo _CoreDOMImplementationImpl$RevalidationHandlerHolder_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$RevalidationHandlerHolder", "com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl", "RevalidationHandlerHolder", $STATIC | $FINAL},
	{}
};

$ClassInfo _CoreDOMImplementationImpl$RevalidationHandlerHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$RevalidationHandlerHolder",
	"java.lang.Object",
	nullptr,
	_CoreDOMImplementationImpl$RevalidationHandlerHolder_FieldInfo_,
	_CoreDOMImplementationImpl$RevalidationHandlerHolder_MethodInfo_,
	nullptr,
	nullptr,
	_CoreDOMImplementationImpl$RevalidationHandlerHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl"
};

$Object* allocate$CoreDOMImplementationImpl$RevalidationHandlerHolder($Class* clazz) {
	return $of($alloc(CoreDOMImplementationImpl$RevalidationHandlerHolder));
}

void CoreDOMImplementationImpl$RevalidationHandlerHolder::init$($RevalidationHandler* handler) {
	$set(this, handler, handler);
}

CoreDOMImplementationImpl$RevalidationHandlerHolder::CoreDOMImplementationImpl$RevalidationHandlerHolder() {
}

$Class* CoreDOMImplementationImpl$RevalidationHandlerHolder::load$($String* name, bool initialize) {
	$loadClass(CoreDOMImplementationImpl$RevalidationHandlerHolder, name, initialize, &_CoreDOMImplementationImpl$RevalidationHandlerHolder_ClassInfo_, allocate$CoreDOMImplementationImpl$RevalidationHandlerHolder);
	return class$;
}

$Class* CoreDOMImplementationImpl$RevalidationHandlerHolder::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com