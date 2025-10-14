#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDComplexTypeTraverser$ComplexTypeRecoverableError.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDComplexTypeTraverser.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $XSDComplexTypeTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDComplexTypeTraverser;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _XSDComplexTypeTraverser$ComplexTypeRecoverableError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDComplexTypeTraverser$ComplexTypeRecoverableError, serialVersionUID)},
	{"errorSubstText", "[Ljava/lang/Object;", nullptr, 0, $field(XSDComplexTypeTraverser$ComplexTypeRecoverableError, errorSubstText)},
	{"errorElem", "Lorg/w3c/dom/Element;", nullptr, 0, $field(XSDComplexTypeTraverser$ComplexTypeRecoverableError, errorElem)},
	{}
};

$MethodInfo _XSDComplexTypeTraverser$ComplexTypeRecoverableError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XSDComplexTypeTraverser$ComplexTypeRecoverableError::*)()>(&XSDComplexTypeTraverser$ComplexTypeRecoverableError::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(XSDComplexTypeTraverser$ComplexTypeRecoverableError::*)($String*,$ObjectArray*,$Element*)>(&XSDComplexTypeTraverser$ComplexTypeRecoverableError::init$))},
	{}
};

$InnerClassInfo _XSDComplexTypeTraverser$ComplexTypeRecoverableError_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser", "ComplexTypeRecoverableError", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XSDComplexTypeTraverser$ComplexTypeRecoverableError_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError",
	"java.lang.Exception",
	nullptr,
	_XSDComplexTypeTraverser$ComplexTypeRecoverableError_FieldInfo_,
	_XSDComplexTypeTraverser$ComplexTypeRecoverableError_MethodInfo_,
	nullptr,
	nullptr,
	_XSDComplexTypeTraverser$ComplexTypeRecoverableError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser"
};

$Object* allocate$XSDComplexTypeTraverser$ComplexTypeRecoverableError($Class* clazz) {
	return $of($alloc(XSDComplexTypeTraverser$ComplexTypeRecoverableError));
}

void XSDComplexTypeTraverser$ComplexTypeRecoverableError::init$() {
	$Exception::init$();
	$set(this, errorSubstText, nullptr);
	$set(this, errorElem, nullptr);
}

void XSDComplexTypeTraverser$ComplexTypeRecoverableError::init$($String* msgKey, $ObjectArray* args, $Element* e) {
	$Exception::init$(msgKey);
	$set(this, errorSubstText, nullptr);
	$set(this, errorElem, nullptr);
	$set(this, errorSubstText, args);
	$set(this, errorElem, e);
}

XSDComplexTypeTraverser$ComplexTypeRecoverableError::XSDComplexTypeTraverser$ComplexTypeRecoverableError() {
}

XSDComplexTypeTraverser$ComplexTypeRecoverableError::XSDComplexTypeTraverser$ComplexTypeRecoverableError(const XSDComplexTypeTraverser$ComplexTypeRecoverableError& e) {
}

XSDComplexTypeTraverser$ComplexTypeRecoverableError XSDComplexTypeTraverser$ComplexTypeRecoverableError::wrapper$() {
	$pendingException(this);
	return *this;
}

void XSDComplexTypeTraverser$ComplexTypeRecoverableError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XSDComplexTypeTraverser$ComplexTypeRecoverableError::load$($String* name, bool initialize) {
	$loadClass(XSDComplexTypeTraverser$ComplexTypeRecoverableError, name, initialize, &_XSDComplexTypeTraverser$ComplexTypeRecoverableError_ClassInfo_, allocate$XSDComplexTypeTraverser$ComplexTypeRecoverableError);
	return class$;
}

$Class* XSDComplexTypeTraverser$ComplexTypeRecoverableError::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com