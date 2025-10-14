#include <com/sun/org/apache/xerces/internal/util/StAXInputSource.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Location = ::javax::xml::stream::Location;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _StAXInputSource_FieldInfo_[] = {
	{"fStreamReader", "Ljavax/xml/stream/XMLStreamReader;", nullptr, $PRIVATE | $FINAL, $field(StAXInputSource, fStreamReader)},
	{"fEventReader", "Ljavax/xml/stream/XMLEventReader;", nullptr, $PRIVATE | $FINAL, $field(StAXInputSource, fEventReader)},
	{"fConsumeRemainingContent", "Z", nullptr, $PRIVATE | $FINAL, $field(StAXInputSource, fConsumeRemainingContent)},
	{}
};

$MethodInfo _StAXInputSource_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PUBLIC, $method(static_cast<void(StAXInputSource::*)($XMLStreamReader*)>(&StAXInputSource::init$))},
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;Z)V", nullptr, $PUBLIC, $method(static_cast<void(StAXInputSource::*)($XMLStreamReader*,bool)>(&StAXInputSource::init$))},
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;)V", nullptr, $PUBLIC, $method(static_cast<void(StAXInputSource::*)($XMLEventReader*)>(&StAXInputSource::init$))},
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;Z)V", nullptr, $PUBLIC, $method(static_cast<void(StAXInputSource::*)($XMLEventReader*,bool)>(&StAXInputSource::init$))},
	{"getEventReaderSystemId", "(Ljavax/xml/stream/XMLEventReader;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($XMLEventReader*)>(&StAXInputSource::getEventReaderSystemId))},
	{"getXMLEventReader", "()Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC, $method(static_cast<$XMLEventReader*(StAXInputSource::*)()>(&StAXInputSource::getXMLEventReader))},
	{"getXMLStreamReader", "()Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC, $method(static_cast<$XMLStreamReader*(StAXInputSource::*)()>(&StAXInputSource::getXMLStreamReader))},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"shouldConsumeRemainingContent", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(StAXInputSource::*)()>(&StAXInputSource::shouldConsumeRemainingContent))},
	{}
};

$ClassInfo _StAXInputSource_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.StAXInputSource",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource",
	nullptr,
	_StAXInputSource_FieldInfo_,
	_StAXInputSource_MethodInfo_
};

$Object* allocate$StAXInputSource($Class* clazz) {
	return $of($alloc(StAXInputSource));
}

void StAXInputSource::init$($XMLStreamReader* source) {
	StAXInputSource::init$(source, false);
}

void StAXInputSource::init$($XMLStreamReader* source, bool consumeRemainingContent) {
	$XMLInputSource::init$(nullptr, $($nc($($nc(source)->getLocation()))->getSystemId()), nullptr, false);
	if (source == nullptr) {
		$throwNew($IllegalArgumentException, "XMLStreamReader parameter cannot be null."_s);
	}
	$set(this, fStreamReader, source);
	$set(this, fEventReader, nullptr);
	this->fConsumeRemainingContent = consumeRemainingContent;
}

void StAXInputSource::init$($XMLEventReader* source) {
	StAXInputSource::init$(source, false);
}

void StAXInputSource::init$($XMLEventReader* source, bool consumeRemainingContent) {
	$XMLInputSource::init$(nullptr, $(getEventReaderSystemId(source)), nullptr, false);
	if (source == nullptr) {
		$throwNew($IllegalArgumentException, "XMLEventReader parameter cannot be null."_s);
	}
	$set(this, fStreamReader, nullptr);
	$set(this, fEventReader, source);
	this->fConsumeRemainingContent = consumeRemainingContent;
}

$XMLStreamReader* StAXInputSource::getXMLStreamReader() {
	return this->fStreamReader;
}

$XMLEventReader* StAXInputSource::getXMLEventReader() {
	return this->fEventReader;
}

bool StAXInputSource::shouldConsumeRemainingContent() {
	return this->fConsumeRemainingContent;
}

void StAXInputSource::setSystemId($String* systemId) {
	$throwNew($UnsupportedOperationException, "Cannot set the system ID on a StAXInputSource"_s);
}

$String* StAXInputSource::getEventReaderSystemId($XMLEventReader* reader) {
	$init(StAXInputSource);
	try {
		if (reader != nullptr) {
			return $nc($($nc($(reader->peek()))->getLocation()))->getSystemId();
		}
	} catch ($XMLStreamException&) {
		$catch();
	}
	return nullptr;
}

StAXInputSource::StAXInputSource() {
}

$Class* StAXInputSource::load$($String* name, bool initialize) {
	$loadClass(StAXInputSource, name, initialize, &_StAXInputSource_ClassInfo_, allocate$StAXInputSource);
	return class$;
}

$Class* StAXInputSource::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com