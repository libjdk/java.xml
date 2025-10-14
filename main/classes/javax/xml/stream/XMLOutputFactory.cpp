#include <javax/xml/stream/XMLOutputFactory.h>

#include <com/sun/xml/internal/stream/XMLOutputFactoryImpl.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/stream/FactoryFinder.h>
#include <javax/xml/stream/XMLEventWriter.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/XMLStreamWriter.h>
#include <javax/xml/transform/Result.h>
#include <jcpp.h>

#undef DEFAULIMPL
#undef IS_REPAIRING_NAMESPACES

using $XMLOutputFactoryImpl = ::com::sun::xml::internal::stream::XMLOutputFactoryImpl;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $FactoryFinder = ::javax::xml::stream::FactoryFinder;
using $XMLEventWriter = ::javax::xml::stream::XMLEventWriter;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLStreamWriter = ::javax::xml::stream::XMLStreamWriter;
using $Result = ::javax::xml::transform::Result;

namespace javax {
	namespace xml {
		namespace stream {

$NamedAttribute XMLOutputFactory_Attribute_var$0[] = {
	{"since", 's', "1.7"},
	{}
};

$CompoundAttribute _XMLOutputFactory_MethodAnnotations_newInstance15[] = {
	{"Ljava/lang/Deprecated;", XMLOutputFactory_Attribute_var$0},
	{}
};

$FieldInfo _XMLOutputFactory_FieldInfo_[] = {
	{"IS_REPAIRING_NAMESPACES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLOutputFactory, IS_REPAIRING_NAMESPACES)},
	{"DEFAULIMPL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLOutputFactory, DEFAULIMPL)},
	{}
};

$MethodInfo _XMLOutputFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(XMLOutputFactory::*)()>(&XMLOutputFactory::init$))},
	{"createXMLEventWriter", "(Ljavax/xml/transform/Result;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventWriter", "(Ljava/io/OutputStream;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventWriter", "(Ljava/io/OutputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventWriter", "(Ljava/io/Writer;)Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamWriter", "(Ljava/io/Writer;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamWriter", "(Ljava/io/OutputStream;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamWriter", "(Ljava/io/OutputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamWriter", "(Ljavax/xml/transform/Result;)Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"isPropertySupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"newDefaultFactory", "()Ljavax/xml/stream/XMLOutputFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLOutputFactory*(*)()>(&XMLOutputFactory::newDefaultFactory))},
	{"newFactory", "()Ljavax/xml/stream/XMLOutputFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLOutputFactory*(*)()>(&XMLOutputFactory::newFactory)), "javax.xml.stream.FactoryConfigurationError"},
	{"newFactory", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLOutputFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLOutputFactory*(*)($String*,$ClassLoader*)>(&XMLOutputFactory::newFactory)), "javax.xml.stream.FactoryConfigurationError"},
	{"newInstance", "()Ljavax/xml/stream/XMLOutputFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLOutputFactory*(*)()>(&XMLOutputFactory::newInstance)), "javax.xml.stream.FactoryConfigurationError"},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLInputFactory;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$XMLInputFactory*(*)($String*,$ClassLoader*)>(&XMLOutputFactory::newInstance)), "javax.xml.stream.FactoryConfigurationError", nullptr, _XMLOutputFactory_MethodAnnotations_newInstance15},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _XMLOutputFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.stream.XMLOutputFactory",
	"java.lang.Object",
	nullptr,
	_XMLOutputFactory_FieldInfo_,
	_XMLOutputFactory_MethodInfo_
};

$Object* allocate$XMLOutputFactory($Class* clazz) {
	return $of($alloc(XMLOutputFactory));
}


$String* XMLOutputFactory::IS_REPAIRING_NAMESPACES = nullptr;
$String* XMLOutputFactory::DEFAULIMPL = nullptr;

void XMLOutputFactory::init$() {
}

XMLOutputFactory* XMLOutputFactory::newDefaultFactory() {
	$init(XMLOutputFactory);
	return $new($XMLOutputFactoryImpl);
}

XMLOutputFactory* XMLOutputFactory::newInstance() {
	$init(XMLOutputFactory);
	return $cast(XMLOutputFactory, $FactoryFinder::find(XMLOutputFactory::class$, XMLOutputFactory::DEFAULIMPL));
}

XMLOutputFactory* XMLOutputFactory::newFactory() {
	$init(XMLOutputFactory);
	return $cast(XMLOutputFactory, $FactoryFinder::find(XMLOutputFactory::class$, XMLOutputFactory::DEFAULIMPL));
}

$XMLInputFactory* XMLOutputFactory::newInstance($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLOutputFactory);
	$load($XMLInputFactory);
	return $cast($XMLInputFactory, $FactoryFinder::find($XMLInputFactory::class$, factoryId, classLoader, nullptr));
}

XMLOutputFactory* XMLOutputFactory::newFactory($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLOutputFactory);
	return $cast(XMLOutputFactory, $FactoryFinder::find(XMLOutputFactory::class$, factoryId, classLoader, nullptr));
}

XMLOutputFactory::XMLOutputFactory() {
}

void clinit$XMLOutputFactory($Class* class$) {
	$assignStatic(XMLOutputFactory::IS_REPAIRING_NAMESPACES, "javax.xml.stream.isRepairingNamespaces"_s);
	$assignStatic(XMLOutputFactory::DEFAULIMPL, "com.sun.xml.internal.stream.XMLOutputFactoryImpl"_s);
}

$Class* XMLOutputFactory::load$($String* name, bool initialize) {
	$loadClass(XMLOutputFactory, name, initialize, &_XMLOutputFactory_ClassInfo_, clinit$XMLOutputFactory, allocate$XMLOutputFactory);
	return class$;
}

$Class* XMLOutputFactory::class$ = nullptr;

		} // stream
	} // xml
} // javax