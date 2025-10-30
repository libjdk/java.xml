#include <javax/xml/parsers/DocumentBuilderFactory.h>

#include <com/sun/org/apache/xerces/internal/jaxp/DocumentBuilderFactoryImpl.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Package.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/FactoryFinder.h>
#include <javax/xml/validation/Schema.h>
#include <jcpp.h>

#undef DEFAULT_IMPL

using $DocumentBuilderFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::DocumentBuilderFactoryImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $FactoryFinder = ::javax::xml::parsers::FactoryFinder;
using $Schema = ::javax::xml::validation::Schema;

namespace javax {
	namespace xml {
		namespace parsers {

$FieldInfo _DocumentBuilderFactory_FieldInfo_[] = {
	{"DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentBuilderFactory, DEFAULT_IMPL)},
	{"validating", "Z", nullptr, $PRIVATE, $field(DocumentBuilderFactory, validating)},
	{"namespaceAware", "Z", nullptr, $PRIVATE, $field(DocumentBuilderFactory, namespaceAware)},
	{"whitespace", "Z", nullptr, $PRIVATE, $field(DocumentBuilderFactory, whitespace)},
	{"expandEntityRef", "Z", nullptr, $PRIVATE, $field(DocumentBuilderFactory, expandEntityRef)},
	{"ignoreComments", "Z", nullptr, $PRIVATE, $field(DocumentBuilderFactory, ignoreComments)},
	{"coalescing", "Z", nullptr, $PRIVATE, $field(DocumentBuilderFactory, coalescing)},
	{}
};

$MethodInfo _DocumentBuilderFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DocumentBuilderFactory::*)()>(&DocumentBuilderFactory::init$))},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.parsers.ParserConfigurationException"},
	{"getSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC},
	{"isCoalescing", "()Z", nullptr, $PUBLIC},
	{"isExpandEntityReferences", "()Z", nullptr, $PUBLIC},
	{"isIgnoringComments", "()Z", nullptr, $PUBLIC},
	{"isIgnoringElementContentWhitespace", "()Z", nullptr, $PUBLIC},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC},
	{"isValidating", "()Z", nullptr, $PUBLIC},
	{"isXIncludeAware", "()Z", nullptr, $PUBLIC},
	{"makeNSAware", "(Ljavax/xml/parsers/DocumentBuilderFactory;)Ljavax/xml/parsers/DocumentBuilderFactory;", nullptr, $PRIVATE | $STATIC, $method(static_cast<DocumentBuilderFactory*(*)(DocumentBuilderFactory*)>(&DocumentBuilderFactory::makeNSAware))},
	{"newDefaultInstance", "()Ljavax/xml/parsers/DocumentBuilderFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocumentBuilderFactory*(*)()>(&DocumentBuilderFactory::newDefaultInstance))},
	{"newDefaultNSInstance", "()Ljavax/xml/parsers/DocumentBuilderFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocumentBuilderFactory*(*)()>(&DocumentBuilderFactory::newDefaultNSInstance))},
	{"newDocumentBuilder", "()Ljavax/xml/parsers/DocumentBuilder;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.parsers.ParserConfigurationException"},
	{"newInstance", "()Ljavax/xml/parsers/DocumentBuilderFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocumentBuilderFactory*(*)()>(&DocumentBuilderFactory::newInstance))},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocumentBuilderFactory*(*)($String*,$ClassLoader*)>(&DocumentBuilderFactory::newInstance))},
	{"newNSInstance", "()Ljavax/xml/parsers/DocumentBuilderFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocumentBuilderFactory*(*)()>(&DocumentBuilderFactory::newNSInstance))},
	{"newNSInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/parsers/DocumentBuilderFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocumentBuilderFactory*(*)($String*,$ClassLoader*)>(&DocumentBuilderFactory::newNSInstance))},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"setCoalescing", "(Z)V", nullptr, $PUBLIC},
	{"setExpandEntityReferences", "(Z)V", nullptr, $PUBLIC},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.parsers.ParserConfigurationException"},
	{"setIgnoringComments", "(Z)V", nullptr, $PUBLIC},
	{"setIgnoringElementContentWhitespace", "(Z)V", nullptr, $PUBLIC},
	{"setNamespaceAware", "(Z)V", nullptr, $PUBLIC},
	{"setSchema", "(Ljavax/xml/validation/Schema;)V", nullptr, $PUBLIC},
	{"setValidating", "(Z)V", nullptr, $PUBLIC},
	{"setXIncludeAware", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DocumentBuilderFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.parsers.DocumentBuilderFactory",
	"java.lang.Object",
	nullptr,
	_DocumentBuilderFactory_FieldInfo_,
	_DocumentBuilderFactory_MethodInfo_
};

$Object* allocate$DocumentBuilderFactory($Class* clazz) {
	return $of($alloc(DocumentBuilderFactory));
}

$String* DocumentBuilderFactory::DEFAULT_IMPL = nullptr;

void DocumentBuilderFactory::init$() {
	this->validating = false;
	this->namespaceAware = false;
	this->whitespace = false;
	this->expandEntityRef = true;
	this->ignoreComments = false;
	this->coalescing = false;
}

DocumentBuilderFactory* DocumentBuilderFactory::newDefaultNSInstance() {
	$init(DocumentBuilderFactory);
	return makeNSAware($$new($DocumentBuilderFactoryImpl));
}

DocumentBuilderFactory* DocumentBuilderFactory::newNSInstance() {
	$init(DocumentBuilderFactory);
	return makeNSAware($cast(DocumentBuilderFactory, $($FactoryFinder::find(DocumentBuilderFactory::class$, DocumentBuilderFactory::DEFAULT_IMPL))));
}

DocumentBuilderFactory* DocumentBuilderFactory::newNSInstance($String* factoryClassName, $ClassLoader* classLoader) {
	$init(DocumentBuilderFactory);
	return makeNSAware($cast(DocumentBuilderFactory, $($FactoryFinder::newInstance(DocumentBuilderFactory::class$, factoryClassName, classLoader, false))));
}

DocumentBuilderFactory* DocumentBuilderFactory::newDefaultInstance() {
	$init(DocumentBuilderFactory);
	return $new($DocumentBuilderFactoryImpl);
}

DocumentBuilderFactory* DocumentBuilderFactory::newInstance() {
	$init(DocumentBuilderFactory);
	return $cast(DocumentBuilderFactory, $FactoryFinder::find(DocumentBuilderFactory::class$, DocumentBuilderFactory::DEFAULT_IMPL));
}

DocumentBuilderFactory* DocumentBuilderFactory::newInstance($String* factoryClassName, $ClassLoader* classLoader) {
	$init(DocumentBuilderFactory);
	return $cast(DocumentBuilderFactory, $FactoryFinder::newInstance(DocumentBuilderFactory::class$, factoryClassName, classLoader, false));
}

DocumentBuilderFactory* DocumentBuilderFactory::makeNSAware(DocumentBuilderFactory* dbf) {
	$init(DocumentBuilderFactory);
	$nc(dbf)->setNamespaceAware(true);
	return dbf;
}

void DocumentBuilderFactory::setNamespaceAware(bool awareness) {
	this->namespaceAware = awareness;
}

void DocumentBuilderFactory::setValidating(bool validating) {
	this->validating = validating;
}

void DocumentBuilderFactory::setIgnoringElementContentWhitespace(bool whitespace) {
	this->whitespace = whitespace;
}

void DocumentBuilderFactory::setExpandEntityReferences(bool expandEntityRef) {
	this->expandEntityRef = expandEntityRef;
}

void DocumentBuilderFactory::setIgnoringComments(bool ignoreComments) {
	this->ignoreComments = ignoreComments;
}

void DocumentBuilderFactory::setCoalescing(bool coalescing) {
	this->coalescing = coalescing;
}

bool DocumentBuilderFactory::isNamespaceAware() {
	return this->namespaceAware;
}

bool DocumentBuilderFactory::isValidating() {
	return this->validating;
}

bool DocumentBuilderFactory::isIgnoringElementContentWhitespace() {
	return this->whitespace;
}

bool DocumentBuilderFactory::isExpandEntityReferences() {
	return this->expandEntityRef;
}

bool DocumentBuilderFactory::isIgnoringComments() {
	return this->ignoreComments;
}

bool DocumentBuilderFactory::isCoalescing() {
	return this->coalescing;
}

$Schema* DocumentBuilderFactory::getSchema() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"This parser does not support specification \""_s, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle()), "\" version \""_s}));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""));
	$shouldNotReachHere();
}

void DocumentBuilderFactory::setSchema($Schema* schema) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"This parser does not support specification \""_s, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle()), "\" version \""_s}));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""));
}

void DocumentBuilderFactory::setXIncludeAware(bool state) {
	if (state) {
		$throwNew($UnsupportedOperationException, $$str({" setXIncludeAware is not supported on this JAXP implementation or earlier: "_s, $of(this)->getClass()}));
	}
}

bool DocumentBuilderFactory::isXIncludeAware() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"This parser does not support specification \""_s, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle()), "\" version \""_s}));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""));
	$shouldNotReachHere();
}

DocumentBuilderFactory::DocumentBuilderFactory() {
}

void clinit$DocumentBuilderFactory($Class* class$) {
	$assignStatic(DocumentBuilderFactory::DEFAULT_IMPL, "com.sun.org.apache.xerces.internal.jaxp.DocumentBuilderFactoryImpl"_s);
}

$Class* DocumentBuilderFactory::load$($String* name, bool initialize) {
	$loadClass(DocumentBuilderFactory, name, initialize, &_DocumentBuilderFactory_ClassInfo_, clinit$DocumentBuilderFactory, allocate$DocumentBuilderFactory);
	return class$;
}

$Class* DocumentBuilderFactory::class$ = nullptr;

		} // parsers
	} // xml
} // javax