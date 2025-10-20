#include <javax/xml/validation/SchemaFactory.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <javax/xml/validation/Schema.h>
#include <javax/xml/validation/SchemaFactoryFinder.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <jcpp.h>

using $SourceArray = $Array<::javax::xml::transform::Source>;
using $XMLSchemaFactory = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaFactory;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URL = ::java::net::URL;
using $Source = ::javax::xml::transform::Source;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $Schema = ::javax::xml::validation::Schema;
using $SchemaFactoryFinder = ::javax::xml::validation::SchemaFactoryFinder;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;

namespace javax {
	namespace xml {
		namespace validation {

$MethodInfo _SchemaFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SchemaFactory::*)()>(&SchemaFactory::init$))},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PUBLIC | $ABSTRACT},
	{"isSchemaLanguageSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"newDefaultInstance", "()Ljavax/xml/validation/SchemaFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SchemaFactory*(*)()>(&SchemaFactory::newDefaultInstance))},
	{"newInstance", "(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SchemaFactory*(*)($String*)>(&SchemaFactory::newInstance))},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/validation/SchemaFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SchemaFactory*(*)($String*,$String*,$ClassLoader*)>(&SchemaFactory::newInstance))},
	{"newSchema", "(Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"newSchema", "(Ljava/io/File;)Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"newSchema", "(Ljava/net/URL;)Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"newSchema", "([Ljavax/xml/transform/Source;)Ljavax/xml/validation/Schema;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"newSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SchemaFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.validation.SchemaFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SchemaFactory_MethodInfo_
};

$Object* allocate$SchemaFactory($Class* clazz) {
	return $of($alloc(SchemaFactory));
}

void SchemaFactory::init$() {
}

SchemaFactory* SchemaFactory::newDefaultInstance() {
	return $new($XMLSchemaFactory);
}

SchemaFactory* SchemaFactory::newInstance($String* schemaLanguage) {
	$load(SchemaFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, cl, nullptr);
	$assign(cl, $SecuritySupport::getContextClassLoader());
	if (cl == nullptr) {
		$assign(cl, SchemaFactory::class$->getClassLoader());
	}
	$var(SchemaFactory, f, $$new($SchemaFactoryFinder, cl)->newFactory(schemaLanguage));
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"No SchemaFactory that implements the schema language specified by: "_s, schemaLanguage, " could be loaded"_s}));
	}
	return f;
}

SchemaFactory* SchemaFactory::newInstance($String* schemaLanguage, $String* factoryClassName, $ClassLoader* classLoader) {
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, cl, classLoader);
	if (cl == nullptr) {
		$assign(cl, $SecuritySupport::getContextClassLoader());
	}
	$var(SchemaFactory, f, $$new($SchemaFactoryFinder, cl)->createInstance(factoryClassName));
	if (f == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Factory "_s, factoryClassName, " could not be loaded to implement the schema language specified by: "_s, schemaLanguage}));
	}
	if ($nc(f)->isSchemaLanguageSupported(schemaLanguage)) {
		return f;
	} else {
		$throwNew($IllegalArgumentException, $$str({"Factory "_s, $($of(f)->getClass()->getName()), " does not implement the schema language specified by: "_s, schemaLanguage}));
	}
}

bool SchemaFactory::getFeature($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "the name parameter is null"_s);
	}
	$throwNew($SAXNotRecognizedException, name);
	$shouldNotReachHere();
}

void SchemaFactory::setFeature($String* name, bool value) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "the name parameter is null"_s);
	}
	$throwNew($SAXNotRecognizedException, name);
}

void SchemaFactory::setProperty($String* name, Object$* object) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "the name parameter is null"_s);
	}
	$throwNew($SAXNotRecognizedException, name);
}

$Object* SchemaFactory::getProperty($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "the name parameter is null"_s);
	}
	$throwNew($SAXNotRecognizedException, name);
	$shouldNotReachHere();
}

$Schema* SchemaFactory::newSchema($Source* schema) {
	return newSchema($$new($SourceArray, {schema}));
}

$Schema* SchemaFactory::newSchema($File* schema) {
	return newSchema(static_cast<$Source*>($$new($StreamSource, schema)));
}

$Schema* SchemaFactory::newSchema($URL* schema) {
	$useLocalCurrentObjectStackCache();
	return newSchema(static_cast<$Source*>($$new($StreamSource, $($nc(schema)->toExternalForm()))));
}

SchemaFactory::SchemaFactory() {
}

$Class* SchemaFactory::load$($String* name, bool initialize) {
	$loadClass(SchemaFactory, name, initialize, &_SchemaFactory_ClassInfo_, allocate$SchemaFactory);
	return class$;
}

$Class* SchemaFactory::class$ = nullptr;

		} // validation
	} // xml
} // javax