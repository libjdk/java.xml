#include <org/xml/sax/HandlerBase.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $AttributeList = ::org::xml::sax::AttributeList;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace org {
	namespace xml {
		namespace sax {

$NamedAttribute HandlerBase_Attribute_var$0[] = {
	{"since", 's', "1.5"},
	{}
};
$CompoundAttribute _HandlerBase_Annotations_[] = {
	{"Ljava/lang/Deprecated;", HandlerBase_Attribute_var$0},
	{}
};


$MethodInfo _HandlerBase_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HandlerBase::*)()>(&HandlerBase::init$))},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC},
	{"startDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _HandlerBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.HandlerBase",
	"java.lang.Object",
	"org.xml.sax.EntityResolver,org.xml.sax.DTDHandler,org.xml.sax.DocumentHandler,org.xml.sax.ErrorHandler",
	nullptr,
	_HandlerBase_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_HandlerBase_Annotations_
};

$Object* allocate$HandlerBase($Class* clazz) {
	return $of($alloc(HandlerBase));
}

int32_t HandlerBase::hashCode() {
	 return this->$EntityResolver::hashCode();
}

bool HandlerBase::equals(Object$* arg0) {
	 return this->$EntityResolver::equals(arg0);
}

$Object* HandlerBase::clone() {
	 return this->$EntityResolver::clone();
}

$String* HandlerBase::toString() {
	 return this->$EntityResolver::toString();
}

void HandlerBase::finalize() {
	this->$EntityResolver::finalize();
}

void HandlerBase::init$() {
}

$InputSource* HandlerBase::resolveEntity($String* publicId, $String* systemId) {
	return nullptr;
}

void HandlerBase::notationDecl($String* name, $String* publicId, $String* systemId) {
}

void HandlerBase::unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {
}

void HandlerBase::setDocumentLocator($Locator* locator) {
}

void HandlerBase::startDocument() {
}

void HandlerBase::endDocument() {
}

void HandlerBase::startElement($String* name, $AttributeList* attributes) {
}

void HandlerBase::endElement($String* name) {
}

void HandlerBase::characters($chars* ch, int32_t start, int32_t length) {
}

void HandlerBase::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
}

void HandlerBase::processingInstruction($String* target, $String* data) {
}

void HandlerBase::warning($SAXParseException* e) {
}

void HandlerBase::error($SAXParseException* e) {
}

void HandlerBase::fatalError($SAXParseException* e) {
	$throw(e);
}

HandlerBase::HandlerBase() {
}

$Class* HandlerBase::load$($String* name, bool initialize) {
	$loadClass(HandlerBase, name, initialize, &_HandlerBase_ClassInfo_, allocate$HandlerBase);
	return class$;
}

$Class* HandlerBase::class$ = nullptr;

		} // sax
	} // xml
} // org