#include <com/sun/xml/internal/stream/StaxXMLInputSource.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <jcpp.h>

using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _StaxXMLInputSource_FieldInfo_[] = {
	{"fStreamReader", "Ljavax/xml/stream/XMLStreamReader;", nullptr, 0, $field(StaxXMLInputSource, fStreamReader)},
	{"fEventReader", "Ljavax/xml/stream/XMLEventReader;", nullptr, 0, $field(StaxXMLInputSource, fEventReader)},
	{"fInputSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, 0, $field(StaxXMLInputSource, fInputSource)},
	{"fIsCreatedByResolver", "Z", nullptr, 0, $field(StaxXMLInputSource, fIsCreatedByResolver)},
	{}
};

$MethodInfo _StaxXMLInputSource_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/XMLStreamReader;Z)V", nullptr, $PUBLIC, $method(static_cast<void(StaxXMLInputSource::*)($XMLStreamReader*,bool)>(&StaxXMLInputSource::init$))},
	{"<init>", "(Ljavax/xml/stream/XMLEventReader;Z)V", nullptr, $PUBLIC, $method(static_cast<void(StaxXMLInputSource::*)($XMLEventReader*,bool)>(&StaxXMLInputSource::init$))},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Z)V", nullptr, $PUBLIC, $method(static_cast<void(StaxXMLInputSource::*)($XMLInputSource*,bool)>(&StaxXMLInputSource::init$))},
	{"getXMLEventReader", "()Ljavax/xml/stream/XMLEventReader;", nullptr, $PUBLIC},
	{"getXMLInputSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC},
	{"getXMLStreamReader", "()Ljavax/xml/stream/XMLStreamReader;", nullptr, $PUBLIC},
	{"hasXMLStreamOrXMLEventReader", "()Z", nullptr, $PUBLIC},
	{"isCreatedByResolver", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StaxXMLInputSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.StaxXMLInputSource",
	"java.lang.Object",
	nullptr,
	_StaxXMLInputSource_FieldInfo_,
	_StaxXMLInputSource_MethodInfo_
};

$Object* allocate$StaxXMLInputSource($Class* clazz) {
	return $of($alloc(StaxXMLInputSource));
}

void StaxXMLInputSource::init$($XMLStreamReader* streamReader, bool byResolver) {
	this->fIsCreatedByResolver = false;
	$set(this, fStreamReader, streamReader);
}

void StaxXMLInputSource::init$($XMLEventReader* eventReader, bool byResolver) {
	this->fIsCreatedByResolver = false;
	$set(this, fEventReader, eventReader);
}

void StaxXMLInputSource::init$($XMLInputSource* inputSource, bool byResolver) {
	this->fIsCreatedByResolver = false;
	$set(this, fInputSource, inputSource);
	this->fIsCreatedByResolver = byResolver;
}

$XMLStreamReader* StaxXMLInputSource::getXMLStreamReader() {
	return this->fStreamReader;
}

$XMLEventReader* StaxXMLInputSource::getXMLEventReader() {
	return this->fEventReader;
}

$XMLInputSource* StaxXMLInputSource::getXMLInputSource() {
	return this->fInputSource;
}

bool StaxXMLInputSource::hasXMLStreamOrXMLEventReader() {
	return (this->fStreamReader == nullptr) && (this->fEventReader == nullptr) ? false : true;
}

bool StaxXMLInputSource::isCreatedByResolver() {
	return this->fIsCreatedByResolver;
}

StaxXMLInputSource::StaxXMLInputSource() {
}

$Class* StaxXMLInputSource::load$($String* name, bool initialize) {
	$loadClass(StaxXMLInputSource, name, initialize, &_StaxXMLInputSource_ClassInfo_, allocate$StaxXMLInputSource);
	return class$;
}

$Class* StaxXMLInputSource::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com