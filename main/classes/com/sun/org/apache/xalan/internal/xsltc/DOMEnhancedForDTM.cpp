#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

$MethodInfo _DOMEnhancedForDTM_MethodInfo_[] = {
	{"getDocumentURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getExpandedTypeID2", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMapping", "([Ljava/lang/String;[Ljava/lang/String;[I)[S", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceMapping", "([Ljava/lang/String;)[S", nullptr, $PUBLIC | $ABSTRACT},
	{"getReverseMapping", "([Ljava/lang/String;[Ljava/lang/String;[I)[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getReverseNamespaceMapping", "([Ljava/lang/String;)[S", nullptr, $PUBLIC | $ABSTRACT},
	{"hasDOMSource", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setDocumentURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMEnhancedForDTM_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.DOMEnhancedForDTM",
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.DOM",
	nullptr,
	_DOMEnhancedForDTM_MethodInfo_
};

$Object* allocate$DOMEnhancedForDTM($Class* clazz) {
	return $of($alloc(DOMEnhancedForDTM));
}

$Class* DOMEnhancedForDTM::load$($String* name, bool initialize) {
	$loadClass(DOMEnhancedForDTM, name, initialize, &_DOMEnhancedForDTM_ClassInfo_, allocate$DOMEnhancedForDTM);
	return class$;
}

$Class* DOMEnhancedForDTM::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com