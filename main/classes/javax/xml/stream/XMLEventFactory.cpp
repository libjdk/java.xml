#include <javax/xml/stream/XMLEventFactory.h>

#include <com/sun/xml/internal/stream/events/XMLEventFactoryImpl.h>
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
#include <java/util/Iterator.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/FactoryFinder.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/Comment.h>
#include <javax/xml/stream/events/DTD.h>
#include <javax/xml/stream/events/EndDocument.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/EntityDeclaration.h>
#include <javax/xml/stream/events/EntityReference.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/ProcessingInstruction.h>
#include <javax/xml/stream/events/StartDocument.h>
#include <javax/xml/stream/events/StartElement.h>
#include <jcpp.h>

#undef DEFAULIMPL
#undef JAXPFACTORYID

using $XMLEventFactoryImpl = ::com::sun::xml::internal::stream::events::XMLEventFactoryImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Iterator = ::java::util::Iterator;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $FactoryFinder = ::javax::xml::stream::FactoryFinder;
using $Location = ::javax::xml::stream::Location;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $Characters = ::javax::xml::stream::events::Characters;
using $Comment = ::javax::xml::stream::events::Comment;
using $DTD = ::javax::xml::stream::events::DTD;
using $EndDocument = ::javax::xml::stream::events::EndDocument;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $EntityDeclaration = ::javax::xml::stream::events::EntityDeclaration;
using $EntityReference = ::javax::xml::stream::events::EntityReference;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $ProcessingInstruction = ::javax::xml::stream::events::ProcessingInstruction;
using $StartDocument = ::javax::xml::stream::events::StartDocument;
using $StartElement = ::javax::xml::stream::events::StartElement;

namespace javax {
	namespace xml {
		namespace stream {

$NamedAttribute XMLEventFactory_Attribute_var$0[] = {
	{"since", 's', "1.7"},
	{}
};

$CompoundAttribute _XMLEventFactory_MethodAnnotations_newInstance30[] = {
	{"Ljava/lang/Deprecated;", XMLEventFactory_Attribute_var$0},
	{}
};

$FieldInfo _XMLEventFactory_FieldInfo_[] = {
	{"JAXPFACTORYID", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLEventFactory, JAXPFACTORYID)},
	{"DEFAULIMPL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLEventFactory, DEFAULIMPL)},
	{}
};

$MethodInfo _XMLEventFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(XMLEventFactory::*)()>(&XMLEventFactory::init$))},
	{"createAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{"createAttribute", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{"createAttribute", "(Ljavax/xml/namespace/QName;Ljava/lang/String;)Ljavax/xml/stream/events/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{"createCData", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT},
	{"createCharacters", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT},
	{"createComment", "(Ljava/lang/String;)Ljavax/xml/stream/events/Comment;", nullptr, $PUBLIC | $ABSTRACT},
	{"createDTD", "(Ljava/lang/String;)Ljavax/xml/stream/events/DTD;", nullptr, $PUBLIC | $ABSTRACT},
	{"createEndDocument", "()Ljavax/xml/stream/events/EndDocument;", nullptr, $PUBLIC | $ABSTRACT},
	{"createEndElement", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator;)Ljavax/xml/stream/events/EndElement;", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/EndElement;", $PUBLIC | $ABSTRACT},
	{"createEndElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/EndElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"createEndElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;)Ljavax/xml/stream/events/EndElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/EndElement;", $PUBLIC | $ABSTRACT},
	{"createEntityReference", "(Ljava/lang/String;Ljavax/xml/stream/events/EntityDeclaration;)Ljavax/xml/stream/events/EntityReference;", nullptr, $PUBLIC | $ABSTRACT},
	{"createIgnorableSpace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT},
	{"createNamespace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Namespace;", nullptr, $PUBLIC | $ABSTRACT},
	{"createNamespace", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/Namespace;", nullptr, $PUBLIC | $ABSTRACT},
	{"createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/ProcessingInstruction;", nullptr, $PUBLIC | $ABSTRACT},
	{"createSpace", "(Ljava/lang/String;)Ljavax/xml/stream/events/Characters;", nullptr, $PUBLIC | $ABSTRACT},
	{"createStartDocument", "()Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC | $ABSTRACT},
	{"createStartDocument", "(Ljava/lang/String;Ljava/lang/String;Z)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC | $ABSTRACT},
	{"createStartDocument", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC | $ABSTRACT},
	{"createStartDocument", "(Ljava/lang/String;)Ljavax/xml/stream/events/StartDocument;", nullptr, $PUBLIC | $ABSTRACT},
	{"createStartElement", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator;Ljava/util/Iterator;)Ljavax/xml/stream/events/StartElement;", "(Ljavax/xml/namespace/QName;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/StartElement;", $PUBLIC | $ABSTRACT},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/stream/events/StartElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;Ljava/util/Iterator;)Ljavax/xml/stream/events/StartElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;)Ljavax/xml/stream/events/StartElement;", $PUBLIC | $ABSTRACT},
	{"createStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator;Ljava/util/Iterator;Ljavax/xml/namespace/NamespaceContext;)Ljavax/xml/stream/events/StartElement;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Iterator<+Ljavax/xml/stream/events/Attribute;>;Ljava/util/Iterator<+Ljavax/xml/stream/events/Namespace;>;Ljavax/xml/namespace/NamespaceContext;)Ljavax/xml/stream/events/StartElement;", $PUBLIC | $ABSTRACT},
	{"newDefaultFactory", "()Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLEventFactory*(*)()>(&XMLEventFactory::newDefaultFactory))},
	{"newFactory", "()Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLEventFactory*(*)()>(&XMLEventFactory::newFactory)), "javax.xml.stream.FactoryConfigurationError"},
	{"newFactory", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLEventFactory*(*)($String*,$ClassLoader*)>(&XMLEventFactory::newFactory)), "javax.xml.stream.FactoryConfigurationError"},
	{"newInstance", "()Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLEventFactory*(*)()>(&XMLEventFactory::newInstance)), "javax.xml.stream.FactoryConfigurationError"},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/stream/XMLEventFactory;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<XMLEventFactory*(*)($String*,$ClassLoader*)>(&XMLEventFactory::newInstance)), "javax.xml.stream.FactoryConfigurationError", nullptr, _XMLEventFactory_MethodAnnotations_newInstance30},
	{"setLocation", "(Ljavax/xml/stream/Location;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLEventFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.stream.XMLEventFactory",
	"java.lang.Object",
	nullptr,
	_XMLEventFactory_FieldInfo_,
	_XMLEventFactory_MethodInfo_
};

$Object* allocate$XMLEventFactory($Class* clazz) {
	return $of($alloc(XMLEventFactory));
}

$String* XMLEventFactory::JAXPFACTORYID = nullptr;
$String* XMLEventFactory::DEFAULIMPL = nullptr;

void XMLEventFactory::init$() {
}

XMLEventFactory* XMLEventFactory::newDefaultFactory() {
	$init(XMLEventFactory);
	return $new($XMLEventFactoryImpl);
}

XMLEventFactory* XMLEventFactory::newInstance() {
	$init(XMLEventFactory);
	return $cast(XMLEventFactory, $FactoryFinder::find(XMLEventFactory::class$, XMLEventFactory::DEFAULIMPL));
}

XMLEventFactory* XMLEventFactory::newFactory() {
	$init(XMLEventFactory);
	return $cast(XMLEventFactory, $FactoryFinder::find(XMLEventFactory::class$, XMLEventFactory::DEFAULIMPL));
}

XMLEventFactory* XMLEventFactory::newInstance($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLEventFactory);
	return $cast(XMLEventFactory, $FactoryFinder::find(XMLEventFactory::class$, factoryId, classLoader, nullptr));
}

XMLEventFactory* XMLEventFactory::newFactory($String* factoryId, $ClassLoader* classLoader) {
	$init(XMLEventFactory);
	return $cast(XMLEventFactory, $FactoryFinder::find(XMLEventFactory::class$, factoryId, classLoader, nullptr));
}

XMLEventFactory::XMLEventFactory() {
}

void clinit$XMLEventFactory($Class* class$) {
	$assignStatic(XMLEventFactory::JAXPFACTORYID, "javax.xml.stream.XMLEventFactory"_s);
	$assignStatic(XMLEventFactory::DEFAULIMPL, "com.sun.xml.internal.stream.events.XMLEventFactoryImpl"_s);
}

$Class* XMLEventFactory::load$($String* name, bool initialize) {
	$loadClass(XMLEventFactory, name, initialize, &_XMLEventFactory_ClassInfo_, clinit$XMLEventFactory, allocate$XMLEventFactory);
	return class$;
}

$Class* XMLEventFactory::class$ = nullptr;

		} // stream
	} // xml
} // javax