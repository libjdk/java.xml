#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl$RefCount.h>

#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
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

$FieldInfo _DeferredDocumentImpl$RefCount_FieldInfo_[] = {
	{"fCount", "I", nullptr, 0, $field(DeferredDocumentImpl$RefCount, fCount)},
	{}
};

$MethodInfo _DeferredDocumentImpl$RefCount_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DeferredDocumentImpl$RefCount::*)()>(&DeferredDocumentImpl$RefCount::init$))},
	{}
};

$InnerClassInfo _DeferredDocumentImpl$RefCount_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$RefCount", "com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl", "RefCount", $STATIC | $FINAL},
	{}
};

$ClassInfo _DeferredDocumentImpl$RefCount_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$RefCount",
	"java.lang.Object",
	nullptr,
	_DeferredDocumentImpl$RefCount_FieldInfo_,
	_DeferredDocumentImpl$RefCount_MethodInfo_,
	nullptr,
	nullptr,
	_DeferredDocumentImpl$RefCount_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl"
};

$Object* allocate$DeferredDocumentImpl$RefCount($Class* clazz) {
	return $of($alloc(DeferredDocumentImpl$RefCount));
}

void DeferredDocumentImpl$RefCount::init$() {
}

DeferredDocumentImpl$RefCount::DeferredDocumentImpl$RefCount() {
}

$Class* DeferredDocumentImpl$RefCount::load$($String* name, bool initialize) {
	$loadClass(DeferredDocumentImpl$RefCount, name, initialize, &_DeferredDocumentImpl$RefCount_ClassInfo_, allocate$DeferredDocumentImpl$RefCount);
	return class$;
}

$Class* DeferredDocumentImpl$RefCount::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com