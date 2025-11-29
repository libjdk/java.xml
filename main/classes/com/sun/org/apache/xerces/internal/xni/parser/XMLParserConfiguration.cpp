#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/util/Locale.h>
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

$MethodInfo _XMLParserConfiguration_MethodInfo_[] = {
	{"addRecognizedFeatures", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addRecognizedProperties", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC | $ABSTRACT},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{}
};

$ClassInfo _XMLParserConfiguration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponentManager",
	nullptr,
	_XMLParserConfiguration_MethodInfo_
};

$Object* allocate$XMLParserConfiguration($Class* clazz) {
	return $of($alloc(XMLParserConfiguration));
}

$Class* XMLParserConfiguration::load$($String* name, bool initialize) {
	$loadClass(XMLParserConfiguration, name, initialize, &_XMLParserConfiguration_ClassInfo_, allocate$XMLParserConfiguration);
	return class$;
}

$Class* XMLParserConfiguration::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com