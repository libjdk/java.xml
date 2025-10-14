#include <com/sun/xml/internal/stream/XMLInputFactoryImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLStreamFilterImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLStreamReaderImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/EventFilterSupport.h>
#include <com/sun/xml/internal/stream/XMLEventReaderImpl.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/stream/EventFilter.h>
#include <javax/xml/stream/StreamFilter.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/XMLReporter.h>
#include <javax/xml/stream/XMLResolver.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/util/EventReaderDelegate.h>
#include <javax/xml/stream/util/XMLEventAllocator.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <jcpp.h>

#undef ALLOCATOR
#undef CONTEXT_READER
#undef DEBUG
#undef REPORTER
#undef RESOLVER
#undef REUSE_INSTANCE

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLStreamFilterImpl = ::com::sun::org::apache::xerces::internal::impl::XMLStreamFilterImpl;
using $XMLStreamReaderImpl = ::com::sun::org::apache::xerces::internal::impl::XMLStreamReaderImpl;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $EventFilterSupport = ::com::sun::xml::internal::stream::EventFilterSupport;
using $XMLEventReaderImpl = ::com::sun::xml::internal::stream::XMLEventReaderImpl;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $EventFilter = ::javax::xml::stream::EventFilter;
using $StreamFilter = ::javax::xml::stream::StreamFilter;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLReporter = ::javax::xml::stream::XMLReporter;
using $XMLResolver = ::javax::xml::stream::XMLResolver;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $EventReaderDelegate = ::javax::xml::stream::util::EventReaderDelegate;
using $XMLEventAllocator = ::javax::xml::stream::util::XMLEventAllocator;
using $Source = ::javax::xml::transform::Source;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _XMLInputFactoryImpl_FieldInfo_[] = {
	{"fPropertyManager", "Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;", nullptr, $PRIVATE, $field(XMLInputFactoryImpl, fPropertyManager)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLInputFactoryImpl, DEBUG)},
	{"fTempReader", "Lcom/sun/org/apache/xerces/internal/impl/XMLStreamReaderImpl;", nullptr, $PRIVATE, $field(XMLInputFactoryImpl, fTempReader)},
	{"fPropertyChanged", "Z", nullptr, 0, $field(XMLInputFactoryImpl, fPropertyChanged)},
	{"fReuseInstance", "Z", nullptr, 0, $field(XMLInputFactoryImpl, fReuseInstance)},
	{}
};

$MethodInfo _XMLInputFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLInputFactoryImpl::*)()>(&XMLInputFactoryImpl::init$))},
	{"createFilteredReader", "(Ljavax/xml/stream/XMLEventReader;Ljavax/xml/stream/EventFilter;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createFilteredReader", "(Ljavax/xml/stream/XMLStreamReader;Ljavax/xml/stream/StreamFilter;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/io/InputStream;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/io/Reader;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljavax/xml/transform/Source;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/lang/String;Ljava/io/InputStream;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/io/InputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljava/lang/String;Ljava/io/Reader;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLEventReader", "(Ljavax/xml/stream/XMLStreamReader;)Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/io/InputStream;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/io/Reader;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/lang/String;Ljava/io/Reader;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljavax/xml/transform/Source;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/lang/String;Ljava/io/InputStream;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"createXMLStreamReader", "(Ljava/io/InputStream;Ljava/lang/String;)Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getEventAllocator", "()Ljavax/xml/stream/util/XMLEventAllocator;", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getXMLReporter", "()Ljavax/xml/stream/XMLReporter;", nullptr, $PUBLIC},
	{"getXMLResolver", "()Ljavax/xml/stream/XMLResolver;", nullptr, $PUBLIC},
	{"getXMLStreamReaderImpl", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Ljavax/xml/stream/XMLStreamReader;", nullptr, 0, nullptr, "javax.xml.stream.XMLStreamException"},
	{"initEventReader", "()V", nullptr, 0},
	{"isPropertySupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"jaxpSourcetoXMLInputSource", "(Ljavax/xml/transform/Source;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, 0},
	{"setEventAllocator", "(Ljavax/xml/stream/util/XMLEventAllocator;)V", nullptr, $PUBLIC},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setXMLReporter", "(Ljavax/xml/stream/XMLReporter;)V", nullptr, $PUBLIC},
	{"setXMLResolver", "(Ljavax/xml/stream/XMLResolver;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLInputFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.XMLInputFactoryImpl",
	"javax.xml.stream.XMLInputFactory",
	nullptr,
	_XMLInputFactoryImpl_FieldInfo_,
	_XMLInputFactoryImpl_MethodInfo_
};

$Object* allocate$XMLInputFactoryImpl($Class* clazz) {
	return $of($alloc(XMLInputFactoryImpl));
}

void XMLInputFactoryImpl::init$() {
	$XMLInputFactory::init$();
	$set(this, fPropertyManager, $new($PropertyManager, $PropertyManager::CONTEXT_READER));
	$set(this, fTempReader, nullptr);
	this->fPropertyChanged = false;
	this->fReuseInstance = false;
}

void XMLInputFactoryImpl::initEventReader() {
	this->fPropertyChanged = true;
}

$XMLEventReader* XMLInputFactoryImpl::createXMLEventReader($InputStream* inputstream) {
	initEventReader();
	return $new($XMLEventReaderImpl, $(createXMLStreamReader(inputstream)));
}

$XMLEventReader* XMLInputFactoryImpl::createXMLEventReader($Reader* reader) {
	initEventReader();
	return $new($XMLEventReaderImpl, $(createXMLStreamReader(reader)));
}

$XMLEventReader* XMLInputFactoryImpl::createXMLEventReader($Source* source) {
	initEventReader();
	return $new($XMLEventReaderImpl, $(createXMLStreamReader(source)));
}

$XMLEventReader* XMLInputFactoryImpl::createXMLEventReader($String* systemId, $InputStream* inputstream) {
	initEventReader();
	return $new($XMLEventReaderImpl, $(createXMLStreamReader(systemId, inputstream)));
}

$XMLEventReader* XMLInputFactoryImpl::createXMLEventReader($InputStream* stream, $String* encoding) {
	initEventReader();
	return $new($XMLEventReaderImpl, $(createXMLStreamReader(stream, encoding)));
}

$XMLEventReader* XMLInputFactoryImpl::createXMLEventReader($String* systemId, $Reader* reader) {
	initEventReader();
	return $new($XMLEventReaderImpl, $(createXMLStreamReader(systemId, reader)));
}

$XMLEventReader* XMLInputFactoryImpl::createXMLEventReader($XMLStreamReader* reader) {
	return $new($XMLEventReaderImpl, reader);
}

$XMLStreamReader* XMLInputFactoryImpl::createXMLStreamReader($InputStream* inputstream) {
	$var($XMLInputSource, inputSource, $new($XMLInputSource, ($String*)nullptr, ($String*)nullptr, ($String*)nullptr, inputstream, ($String*)nullptr));
	return getXMLStreamReaderImpl(inputSource);
}

$XMLStreamReader* XMLInputFactoryImpl::createXMLStreamReader($Reader* reader) {
	$var($XMLInputSource, inputSource, $new($XMLInputSource, ($String*)nullptr, ($String*)nullptr, ($String*)nullptr, reader, ($String*)nullptr));
	return getXMLStreamReaderImpl(inputSource);
}

$XMLStreamReader* XMLInputFactoryImpl::createXMLStreamReader($String* systemId, $Reader* reader) {
	$var($XMLInputSource, inputSource, $new($XMLInputSource, ($String*)nullptr, systemId, ($String*)nullptr, reader, ($String*)nullptr));
	return getXMLStreamReaderImpl(inputSource);
}

$XMLStreamReader* XMLInputFactoryImpl::createXMLStreamReader($Source* source) {
	$var($XMLInputSource, var$0, jaxpSourcetoXMLInputSource(source));
	return $new($XMLStreamReaderImpl, var$0, $$new($PropertyManager, this->fPropertyManager));
}

$XMLStreamReader* XMLInputFactoryImpl::createXMLStreamReader($String* systemId, $InputStream* inputstream) {
	$var($XMLInputSource, inputSource, $new($XMLInputSource, ($String*)nullptr, systemId, ($String*)nullptr, inputstream, ($String*)nullptr));
	return getXMLStreamReaderImpl(inputSource);
}

$XMLStreamReader* XMLInputFactoryImpl::createXMLStreamReader($InputStream* inputstream, $String* encoding) {
	$var($XMLInputSource, inputSource, $new($XMLInputSource, ($String*)nullptr, ($String*)nullptr, ($String*)nullptr, inputstream, encoding));
	return getXMLStreamReaderImpl(inputSource);
}

$XMLEventAllocator* XMLInputFactoryImpl::getEventAllocator() {
	$init($XMLInputFactory);
	return $cast($XMLEventAllocator, getProperty($XMLInputFactory::ALLOCATOR));
}

$XMLReporter* XMLInputFactoryImpl::getXMLReporter() {
	$init($XMLInputFactory);
	return $cast($XMLReporter, $nc(this->fPropertyManager)->getProperty($XMLInputFactory::REPORTER));
}

$XMLResolver* XMLInputFactoryImpl::getXMLResolver() {
	$init($XMLInputFactory);
	$var($Object, object, $nc(this->fPropertyManager)->getProperty($XMLInputFactory::RESOLVER));
	return $cast($XMLResolver, object);
}

void XMLInputFactoryImpl::setXMLReporter($XMLReporter* xmlreporter) {
	$init($XMLInputFactory);
	$nc(this->fPropertyManager)->setProperty($XMLInputFactory::REPORTER, xmlreporter);
}

void XMLInputFactoryImpl::setXMLResolver($XMLResolver* xmlresolver) {
	$init($XMLInputFactory);
	$nc(this->fPropertyManager)->setProperty($XMLInputFactory::RESOLVER, xmlresolver);
}

$XMLEventReader* XMLInputFactoryImpl::createFilteredReader($XMLEventReader* reader, $EventFilter* filter) {
	return $new($EventFilterSupport, reader, filter);
}

$XMLStreamReader* XMLInputFactoryImpl::createFilteredReader($XMLStreamReader* reader, $StreamFilter* filter) {
	if (reader != nullptr && filter != nullptr) {
		return $new($XMLStreamFilterImpl, reader, filter);
	}
	return nullptr;
}

$Object* XMLInputFactoryImpl::getProperty($String* name) {
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "Property not supported"_s);
	}
	if ($nc(this->fPropertyManager)->containsProperty(name)) {
		return $of($nc(this->fPropertyManager)->getProperty(name));
	}
	$throwNew($IllegalArgumentException, "Property not supported"_s);
}

bool XMLInputFactoryImpl::isPropertySupported($String* name) {
	if (name == nullptr) {
		return false;
	} else {
		return $nc(this->fPropertyManager)->containsProperty(name);
	}
}

void XMLInputFactoryImpl::setEventAllocator($XMLEventAllocator* allocator) {
	$init($XMLInputFactory);
	$nc(this->fPropertyManager)->setProperty($XMLInputFactory::ALLOCATOR, allocator);
}

void XMLInputFactoryImpl::setProperty($String* name, Object$* value) {
	if (name == nullptr || value == nullptr || !$nc(this->fPropertyManager)->containsProperty(name)) {
		$throwNew($IllegalArgumentException, $$str({"Property "_s, name, " is not supported"_s}));
	}
	$init($Constants);
	if (name == $Constants::REUSE_INSTANCE || $nc(name)->equals($Constants::REUSE_INSTANCE)) {
		this->fReuseInstance = $nc(($cast($Boolean, value)))->booleanValue();
	} else {
		this->fPropertyChanged = true;
	}
	$nc(this->fPropertyManager)->setProperty(name, value);
}

$XMLStreamReader* XMLInputFactoryImpl::getXMLStreamReaderImpl($XMLInputSource* inputSource) {
	if (this->fTempReader == nullptr) {
		this->fPropertyChanged = false;
		return ($assignField(this, fTempReader, $new($XMLStreamReaderImpl, inputSource, $$new($PropertyManager, this->fPropertyManager))));
	}
	if (this->fReuseInstance && $nc(this->fTempReader)->canReuse() && !this->fPropertyChanged) {
		$nc(this->fTempReader)->reset();
		$nc(this->fTempReader)->setInputSource(inputSource);
		this->fPropertyChanged = false;
		return this->fTempReader;
	} else {
		this->fPropertyChanged = false;
		return ($assignField(this, fTempReader, $new($XMLStreamReaderImpl, inputSource, $$new($PropertyManager, this->fPropertyManager))));
	}
}

$XMLInputSource* XMLInputFactoryImpl::jaxpSourcetoXMLInputSource($Source* source) {
	if ($instanceOf($StreamSource, source)) {
		$var($StreamSource, stSource, $cast($StreamSource, source));
		$var($String, systemId, $nc(stSource)->getSystemId());
		$var($String, publicId, stSource->getPublicId());
		$var($InputStream, istream, stSource->getInputStream());
		$var($Reader, reader, stSource->getReader());
		if (istream != nullptr) {
			return $new($XMLInputSource, publicId, systemId, ($String*)nullptr, istream, ($String*)nullptr);
		} else if (reader != nullptr) {
			return $new($XMLInputSource, publicId, systemId, ($String*)nullptr, reader, ($String*)nullptr);
		} else {
			return $new($XMLInputSource, publicId, systemId, nullptr, false);
		}
	}
	$throwNew($UnsupportedOperationException, $$str({"Cannot create XMLStreamReader or XMLEventReader from a "_s, $($nc($of(source))->getClass()->getName())}));
}

XMLInputFactoryImpl::XMLInputFactoryImpl() {
}

$Class* XMLInputFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(XMLInputFactoryImpl, name, initialize, &_XMLInputFactoryImpl_ClassInfo_, allocate$XMLInputFactoryImpl);
	return class$;
}

$Class* XMLInputFactoryImpl::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com