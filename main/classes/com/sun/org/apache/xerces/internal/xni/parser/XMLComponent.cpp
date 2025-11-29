#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$MethodInfo _XMLComponent_MethodInfo_[] = {
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{}
};

$ClassInfo _XMLComponent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent",
	nullptr,
	nullptr,
	nullptr,
	_XMLComponent_MethodInfo_
};

$Object* allocate$XMLComponent($Class* clazz) {
	return $of($alloc(XMLComponent));
}

$Class* XMLComponent::load$($String* name, bool initialize) {
	$loadClass(XMLComponent, name, initialize, &_XMLComponent_ClassInfo_, allocate$XMLComponent);
	return class$;
}

$Class* XMLComponent::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com