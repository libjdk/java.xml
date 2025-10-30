#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <jcpp.h>

using $SerializationHandlerArray = $Array<::com::sun::org::apache::xml::internal::serializer::SerializationHandler>;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

$MethodInfo _Translet_MethodInfo_[] = {
	{"addAuxiliaryClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $ABSTRACT},
	{"addParameter", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"buildKeys", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"getAuxiliaryClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"getNamesArray", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceArray", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypesArray", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getUrisArray", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"overrideDefaultParser", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setOverrideDefaultParser", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"transform", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"transform", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;[Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"transform", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{}
};

$ClassInfo _Translet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.Translet",
	nullptr,
	nullptr,
	nullptr,
	_Translet_MethodInfo_
};

$Object* allocate$Translet($Class* clazz) {
	return $of($alloc(Translet));
}

$Class* Translet::load$($String* name, bool initialize) {
	$loadClass(Translet, name, initialize, &_Translet_ClassInfo_, allocate$Translet);
	return class$;
}

$Class* Translet::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com