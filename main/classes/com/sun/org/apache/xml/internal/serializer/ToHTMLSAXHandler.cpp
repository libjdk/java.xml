#include <com/sun/org/apache/xml/internal/serializer/ToHTMLSAXHandler.h>

#include <com/sun/org/apache/xml/internal/serializer/AttributesImplSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemContext.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/ToSAXHandler.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/Result.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef PI_DISABLE_OUTPUT_ESCAPING
#undef PI_ENABLE_OUTPUT_ESCAPING

using $AttributesImplSerializer = ::com::sun::org::apache::xml::internal::serializer::AttributesImplSerializer;
using $ElemContext = ::com::sun::org::apache::xml::internal::serializer::ElemContext;
using $SerializerBase = ::com::sun::org::apache::xml::internal::serializer::SerializerBase;
using $SerializerConstants = ::com::sun::org::apache::xml::internal::serializer::SerializerConstants;
using $SerializerTrace = ::com::sun::org::apache::xml::internal::serializer::SerializerTrace;
using $ToSAXHandler = ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $Result = ::javax::xml::transform::Result;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToHTMLSAXHandler_FieldInfo_[] = {
	{"m_dtdHandled", "Z", nullptr, $PRIVATE, $field(ToHTMLSAXHandler, m_dtdHandled)},
	{"m_escapeSetting", "Z", nullptr, $PROTECTED, $field(ToHTMLSAXHandler, m_escapeSetting)},
	{}
};

$MethodInfo _ToHTMLSAXHandler_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/ContentHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ToHTMLSAXHandler::*)($ContentHandler*,$String*)>(&ToHTMLSAXHandler::init$))},
	{"<init>", "(Lorg/xml/sax/ContentHandler;Lorg/xml/sax/ext/LexicalHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ToHTMLSAXHandler::*)($ContentHandler*,$LexicalHandler*,$String*)>(&ToHTMLSAXHandler::init$))},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"close", "()V", nullptr, $PUBLIC},
	{"closeStartTag", "()V", nullptr, $PROTECTED, nullptr, "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"flushPending", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"getOutputFormat", "()Ljava/util/Properties;", nullptr, $PUBLIC},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"indent", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ToHTMLSAXHandler::*)(int32_t)>(&ToHTMLSAXHandler::indent)), "org.xml.sax.SAXException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"reset", "()Z", nullptr, $PUBLIC},
	{"resetToHTMLSAXHandler", "()V", nullptr, $PRIVATE, $method(static_cast<void(ToHTMLSAXHandler::*)()>(&ToHTMLSAXHandler::resetToHTMLSAXHandler))},
	{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"setIndent", "(Z)V", nullptr, $PUBLIC},
	{"setOutputFormat", "(Ljava/util/Properties;)V", nullptr, $PUBLIC},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ToHTMLSAXHandler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToHTMLSAXHandler",
	"com.sun.org.apache.xml.internal.serializer.ToSAXHandler",
	nullptr,
	_ToHTMLSAXHandler_FieldInfo_,
	_ToHTMLSAXHandler_MethodInfo_
};

$Object* allocate$ToHTMLSAXHandler($Class* clazz) {
	return $of($alloc(ToHTMLSAXHandler));
}

$Properties* ToHTMLSAXHandler::getOutputFormat() {
	return nullptr;
}

$OutputStream* ToHTMLSAXHandler::getOutputStream() {
	return nullptr;
}

$Writer* ToHTMLSAXHandler::getWriter() {
	return nullptr;
}

void ToHTMLSAXHandler::indent(int32_t n) {
}

void ToHTMLSAXHandler::serialize($Node* node) {
	return;
}

bool ToHTMLSAXHandler::setEscaping(bool escape) {
	bool oldEscapeSetting = this->m_escapeSetting;
	this->m_escapeSetting = escape;
	if (escape) {
		$init($Result);
		processingInstruction($Result::PI_ENABLE_OUTPUT_ESCAPING, ""_s);
	} else {
		$init($Result);
		processingInstruction($Result::PI_DISABLE_OUTPUT_ESCAPING, ""_s);
	}
	return oldEscapeSetting;
}

void ToHTMLSAXHandler::setIndent(bool indent) {
}

void ToHTMLSAXHandler::setOutputFormat($Properties* format) {
}

void ToHTMLSAXHandler::setOutputStream($OutputStream* output) {
}

void ToHTMLSAXHandler::setWriter($Writer* writer) {
}

void ToHTMLSAXHandler::attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) {
}

void ToHTMLSAXHandler::elementDecl($String* name, $String* model) {
	return;
}

void ToHTMLSAXHandler::externalEntityDecl($String* arg0, $String* arg1, $String* arg2) {
}

void ToHTMLSAXHandler::internalEntityDecl($String* name, $String* value) {
}

void ToHTMLSAXHandler::endElement($String* uri, $String* localName, $String* qName) {
	flushPending();
	$nc(this->m_saxHandler)->endElement(uri, localName, qName);
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEndElem(qName);
	}
}

void ToHTMLSAXHandler::endPrefixMapping($String* prefix) {
}

void ToHTMLSAXHandler::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
}

void ToHTMLSAXHandler::processingInstruction($String* target, $String* data) {
	flushPending();
	$nc(this->m_saxHandler)->processingInstruction(target, data);
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEscapingEvent(target, data);
	}
}

void ToHTMLSAXHandler::setDocumentLocator($Locator* arg0) {
	$ToSAXHandler::setDocumentLocator(arg0);
}

void ToHTMLSAXHandler::skippedEntity($String* arg0) {
}

void ToHTMLSAXHandler::startElement($String* namespaceURI, $String* localName, $String* qName, $Attributes* atts) {
	flushPending();
	$ToSAXHandler::startElement(namespaceURI, localName, qName, atts);
	$nc(this->m_saxHandler)->startElement(namespaceURI, localName, qName, atts);
	$nc(this->m_elemContext)->m_startTagOpen = false;
}

void ToHTMLSAXHandler::comment($chars* ch, int32_t start, int32_t length) {
	flushPending();
	if (this->m_lexHandler != nullptr) {
		$nc(this->m_lexHandler)->comment(ch, start, length);
	}
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireCommentEvent(ch, start, length);
	}
	return;
}

void ToHTMLSAXHandler::endCDATA() {
	return;
}

void ToHTMLSAXHandler::endDTD() {
}

void ToHTMLSAXHandler::startCDATA() {
}

void ToHTMLSAXHandler::startEntity($String* arg0) {
}

void ToHTMLSAXHandler::endDocument() {
	flushPending();
	$nc(this->m_saxHandler)->endDocument();
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEndDoc();
	}
}

void ToHTMLSAXHandler::closeStartTag() {
	$nc(this->m_elemContext)->m_startTagOpen = false;
	$init($SerializerConstants);
	$nc(this->m_saxHandler)->startElement($SerializerConstants::EMPTYSTRING, $nc(this->m_elemContext)->m_elementName, $nc(this->m_elemContext)->m_elementName, this->m_attributes);
	$nc(this->m_attributes)->clear();
}

void ToHTMLSAXHandler::close() {
	return;
}

void ToHTMLSAXHandler::characters($String* chars) {
	int32_t length = $nc(chars)->length();
	if (length > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, length * 2 + 1));
	}
	chars->getChars(0, length, this->m_charsBuff, 0);
	this->characters(this->m_charsBuff, 0, length);
}

void ToHTMLSAXHandler::init$($ContentHandler* handler, $String* encoding) {
	$ToSAXHandler::init$(handler, encoding);
	this->m_dtdHandled = false;
	this->m_escapeSetting = true;
}

void ToHTMLSAXHandler::init$($ContentHandler* handler, $LexicalHandler* lex, $String* encoding) {
	$ToSAXHandler::init$(handler, lex, encoding);
	this->m_dtdHandled = false;
	this->m_escapeSetting = true;
}

void ToHTMLSAXHandler::startElement($String* elementNamespaceURI, $String* elementLocalName, $String* elementName) {
	$useLocalCurrentObjectStackCache();
	$ToSAXHandler::startElement(elementNamespaceURI, elementLocalName, elementName);
	flushPending();
	if (!this->m_dtdHandled) {
		$var($String, doctypeSystem, getDoctypeSystem());
		$var($String, doctypePublic, getDoctypePublic());
		if ((doctypeSystem != nullptr) || (doctypePublic != nullptr)) {
			if (this->m_lexHandler != nullptr) {
				$nc(this->m_lexHandler)->startDTD(elementName, doctypePublic, doctypeSystem);
			}
		}
		this->m_dtdHandled = true;
	}
	$set(this, m_elemContext, $nc(this->m_elemContext)->push(elementNamespaceURI, elementLocalName, elementName));
}

void ToHTMLSAXHandler::startElement($String* elementName) {
	this->startElement(nullptr, nullptr, elementName);
}

void ToHTMLSAXHandler::endElement($String* elementName) {
	flushPending();
	$init($SerializerConstants);
	$nc(this->m_saxHandler)->endElement($SerializerConstants::EMPTYSTRING, elementName, elementName);
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireEndElem(elementName);
	}
}

void ToHTMLSAXHandler::characters($chars* ch, int32_t off, int32_t len) {
	flushPending();
	$nc(this->m_saxHandler)->characters(ch, off, len);
	if (this->m_tracer != nullptr) {
		$ToSAXHandler::fireCharEvent(ch, off, len);
	}
}

void ToHTMLSAXHandler::flushPending() {
	if (this->m_needToCallStartDocument) {
		startDocumentInternal();
		this->m_needToCallStartDocument = false;
	}
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		closeStartTag();
		$nc(this->m_elemContext)->m_startTagOpen = false;
	}
}

bool ToHTMLSAXHandler::startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) {
	if (shouldFlush) {
		flushPending();
	}
	$nc(this->m_saxHandler)->startPrefixMapping(prefix, uri);
	return false;
}

void ToHTMLSAXHandler::startPrefixMapping($String* prefix, $String* uri) {
	startPrefixMapping(prefix, uri, true);
}

void ToHTMLSAXHandler::namespaceAfterStartElement($String* prefix, $String* uri) {
	if ($nc(this->m_elemContext)->m_elementURI == nullptr) {
		$var($String, prefix1, getPrefixPart($nc(this->m_elemContext)->m_elementName));
		$init($SerializerConstants);
		if (prefix1 == nullptr && $nc($SerializerConstants::EMPTYSTRING)->equals(prefix)) {
			$set($nc(this->m_elemContext), m_elementURI, uri);
		}
	}
	startPrefixMapping(prefix, uri, false);
}

bool ToHTMLSAXHandler::reset() {
	bool wasReset = false;
	if ($ToSAXHandler::reset()) {
		resetToHTMLSAXHandler();
		wasReset = true;
	}
	return wasReset;
}

void ToHTMLSAXHandler::resetToHTMLSAXHandler() {
	this->m_escapeSetting = true;
}

ToHTMLSAXHandler::ToHTMLSAXHandler() {
}

$Class* ToHTMLSAXHandler::load$($String* name, bool initialize) {
	$loadClass(ToHTMLSAXHandler, name, initialize, &_ToHTMLSAXHandler_ClassInfo_, allocate$ToHTMLSAXHandler);
	return class$;
}

$Class* ToHTMLSAXHandler::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com