#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>

#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
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

$MethodInfo _XMLComponentManager_MethodInfo_[] = {
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getFeature", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLComponentManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponentManager",
	nullptr,
	nullptr,
	nullptr,
	_XMLComponentManager_MethodInfo_
};

$Object* allocate$XMLComponentManager($Class* clazz) {
	return $of($alloc(XMLComponentManager));
}

$Class* XMLComponentManager::load$($String* name, bool initialize) {
	$loadClass(XMLComponentManager, name, initialize, &_XMLComponentManager_ClassInfo_, allocate$XMLComponentManager);
	return class$;
}

$Class* XMLComponentManager::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com