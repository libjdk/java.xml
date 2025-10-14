#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>

#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$MethodInfo _XSGrammarPoolContainer_MethodInfo_[] = {
	{"getFeature", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGrammarPool", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isFullyComposed", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSGrammarPoolContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.jaxp.validation.XSGrammarPoolContainer",
	nullptr,
	nullptr,
	nullptr,
	_XSGrammarPoolContainer_MethodInfo_
};

$Object* allocate$XSGrammarPoolContainer($Class* clazz) {
	return $of($alloc(XSGrammarPoolContainer));
}

$Class* XSGrammarPoolContainer::load$($String* name, bool initialize) {
	$loadClass(XSGrammarPoolContainer, name, initialize, &_XSGrammarPoolContainer_ClassInfo_, allocate$XSGrammarPoolContainer);
	return class$;
}

$Class* XSGrammarPoolContainer::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com