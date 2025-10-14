#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader.h>

#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

$MethodInfo _XMLGrammarLoader_MethodInfo_[] = {
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC | $ABSTRACT},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"loadGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{}
};

$ClassInfo _XMLGrammarLoader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarLoader",
	nullptr,
	nullptr,
	nullptr,
	_XMLGrammarLoader_MethodInfo_
};

$Object* allocate$XMLGrammarLoader($Class* clazz) {
	return $of($alloc(XMLGrammarLoader));
}

$Class* XMLGrammarLoader::load$($String* name, bool initialize) {
	$loadClass(XMLGrammarLoader, name, initialize, &_XMLGrammarLoader_ClassInfo_, allocate$XMLGrammarLoader);
	return class$;
}

$Class* XMLGrammarLoader::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com