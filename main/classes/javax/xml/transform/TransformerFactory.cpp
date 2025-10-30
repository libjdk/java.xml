#include <javax/xml/transform/TransformerFactory.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>
#include <java/lang/ClassLoader.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/FactoryFinder.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Templates.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/URIResolver.h>
#include <javax/xml/transform/sax/SAXTransformerFactory.h>
#include <jcpp.h>

using $TransformerFactoryImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $FactoryFinder = ::javax::xml::transform::FactoryFinder;
using $Source = ::javax::xml::transform::Source;
using $Templates = ::javax::xml::transform::Templates;
using $Transformer = ::javax::xml::transform::Transformer;
using $URIResolver = ::javax::xml::transform::URIResolver;
using $SAXTransformerFactory = ::javax::xml::transform::sax::SAXTransformerFactory;

namespace javax {
	namespace xml {
		namespace transform {

$MethodInfo _TransformerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TransformerFactory::*)()>(&TransformerFactory::init$))},
	{"getAssociatedStylesheet", "(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerConfigurationException"},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getURIResolver", "()Ljavax/xml/transform/URIResolver;", nullptr, $PUBLIC | $ABSTRACT},
	{"newDefaultInstance", "()Ljavax/xml/transform/TransformerFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransformerFactory*(*)()>(&TransformerFactory::newDefaultInstance))},
	{"newInstance", "()Ljavax/xml/transform/TransformerFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransformerFactory*(*)()>(&TransformerFactory::newInstance)), "javax.xml.transform.TransformerFactoryConfigurationError"},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/transform/TransformerFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransformerFactory*(*)($String*,$ClassLoader*)>(&TransformerFactory::newInstance)), "javax.xml.transform.TransformerFactoryConfigurationError"},
	{"newTemplates", "(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Templates;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerConfigurationException"},
	{"newTransformer", "(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerConfigurationException"},
	{"newTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerConfigurationException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setErrorListener", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerConfigurationException"},
	{"setURIResolver", "(Ljavax/xml/transform/URIResolver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TransformerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.transform.TransformerFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TransformerFactory_MethodInfo_
};

$Object* allocate$TransformerFactory($Class* clazz) {
	return $of($alloc(TransformerFactory));
}

void TransformerFactory::init$() {
}

TransformerFactory* TransformerFactory::newDefaultInstance() {
	return $new($TransformerFactoryImpl);
}

TransformerFactory* TransformerFactory::newInstance() {
	$load(TransformerFactory);
	return $cast(TransformerFactory, $FactoryFinder::find(TransformerFactory::class$, "com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl"_s));
}

TransformerFactory* TransformerFactory::newInstance($String* factoryClassName, $ClassLoader* classLoader) {
	$load(TransformerFactory);
	return $cast(TransformerFactory, $FactoryFinder::newInstance(TransformerFactory::class$, factoryClassName, classLoader, false));
}

TransformerFactory::TransformerFactory() {
}

$Class* TransformerFactory::load$($String* name, bool initialize) {
	$loadClass(TransformerFactory, name, initialize, &_TransformerFactory_ClassInfo_, allocate$TransformerFactory);
	return class$;
}

$Class* TransformerFactory::class$ = nullptr;

		} // transform
	} // xml
} // javax