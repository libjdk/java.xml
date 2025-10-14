#include <com/sun/org/apache/xml/internal/serialize/TextSerializer.h>

#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/ElementState.h>
#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/Printer.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT
#undef TEXT_NODE

using $BaseMarkupSerializer = ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer;
using $ElementState = ::com::sun::org::apache::xml::internal::serialize::ElementState;
using $Method = ::com::sun::org::apache::xml::internal::serialize::Method;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $Printer = ::com::sun::org::apache::xml::internal::serialize::Printer;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $AttributeList = ::org::xml::sax::AttributeList;
using $Attributes = ::org::xml::sax::Attributes;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {
$CompoundAttribute _TextSerializer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$MethodInfo _TextSerializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextSerializer::*)()>(&TextSerializer::init$))},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"comment", "([CII)V", nullptr, $PUBLIC},
	{"content", "()Lcom/sun/org/apache/xml/internal/serialize/ElementState;", nullptr, $PROTECTED},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElementIO", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getEntityRef", "(I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"processingInstructionIO", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"serializeElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"serializeNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"setOutputFormat", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC},
	{"startDocument", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _TextSerializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.TextSerializer",
	"com.sun.org.apache.xml.internal.serialize.BaseMarkupSerializer",
	nullptr,
	nullptr,
	_TextSerializer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TextSerializer_Annotations_
};

$Object* allocate$TextSerializer($Class* clazz) {
	return $of($alloc(TextSerializer));
}

void TextSerializer::init$() {
	$init($Method);
	$BaseMarkupSerializer::init$($$new($OutputFormat, $Method::TEXT, nullptr, false));
}

void TextSerializer::setOutputFormat($OutputFormat* format) {
	$init($Method);
	$BaseMarkupSerializer::setOutputFormat(format != nullptr ? format : $$new($OutputFormat, $Method::TEXT, nullptr, false));
}

void TextSerializer::startElement($String* namespaceURI, $String* localName, $String* rawName, $Attributes* attrs) {
	startElement(rawName == nullptr ? localName : rawName, nullptr);
}

void TextSerializer::endElement($String* namespaceURI, $String* localName, $String* rawName) {
	endElement(rawName == nullptr ? localName : rawName);
}

void TextSerializer::startElement($String* tagName, $AttributeList* attrs) {
	bool preserveSpace = false;
	$var($ElementState, state, nullptr);
	try {
		$assign(state, getElementState());
		if (isDocumentState()) {
			if (!this->_started) {
				startDocument(tagName);
			}
		}
		preserveSpace = $nc(state)->preserveSpace;
		$assign(state, enterElementState(nullptr, nullptr, tagName, preserveSpace));
	} catch ($IOException&) {
		$var($IOException, except, $catch());
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void TextSerializer::endElement($String* tagName) {
	try {
		endElementIO(tagName);
	} catch ($IOException&) {
		$var($IOException, except, $catch());
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void TextSerializer::endElementIO($String* tagName) {
	$var($ElementState, state, nullptr);
	$assign(state, getElementState());
	$assign(state, leaveElementState());
	$nc(state)->afterElement = true;
	state->empty = false;
	if (isDocumentState()) {
		$nc(this->_printer)->flush();
	}
}

void TextSerializer::processingInstructionIO($String* target, $String* code) {
}

void TextSerializer::comment($String* text) {
}

void TextSerializer::comment($chars* chars, int32_t start, int32_t length) {
}

void TextSerializer::characters($chars* chars, int32_t start, int32_t length) {
	$var($ElementState, state, nullptr);
	try {
		$assign(state, content());
		$nc(state)->doCData = (state->inCData = false);
		printText(chars, start, length, true, true);
	} catch ($IOException&) {
		$var($IOException, except, $catch());
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void TextSerializer::characters($String* text, bool unescaped) {
	$var($ElementState, state, nullptr);
	$assign(state, content());
	$nc(state)->doCData = (state->inCData = false);
	printText(text, true, true);
}

void TextSerializer::startDocument($String* rootTagName) {
	$nc(this->_printer)->leaveDTD();
	this->_started = true;
	serializePreRoot();
}

void TextSerializer::serializeElement($Element* elem) {
	$var($Node, child, nullptr);
	$var($ElementState, state, nullptr);
	bool preserveSpace = false;
	$var($String, tagName, nullptr);
	$assign(tagName, $nc(elem)->getTagName());
	$assign(state, getElementState());
	if (isDocumentState()) {
		if (!this->_started) {
			startDocument(tagName);
		}
	}
	preserveSpace = $nc(state)->preserveSpace;
	if (elem->hasChildNodes()) {
		$assign(state, enterElementState(nullptr, nullptr, tagName, preserveSpace));
		$assign(child, elem->getFirstChild());
		while (child != nullptr) {
			serializeNode(child);
			$assign(child, child->getNextSibling());
		}
		endElementIO(tagName);
	} else if (!isDocumentState()) {
		state->afterElement = true;
		state->empty = false;
	}
}

void TextSerializer::serializeNode($Node* node) {
	switch ($nc(node)->getNodeType()) {
	case $Node::TEXT_NODE:
		{
			{
				$var($String, text, nullptr);
				$assign(text, node->getNodeValue());
				if (text != nullptr) {
					characters($(node->getNodeValue()), true);
				}
				break;
			}
		}
	case $Node::CDATA_SECTION_NODE:
		{
			{
				$var($String, text, nullptr);
				$assign(text, node->getNodeValue());
				if (text != nullptr) {
					characters($(node->getNodeValue()), true);
				}
				break;
			}
		}
	case $Node::COMMENT_NODE:
		{
			break;
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			break;
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			break;
		}
	case $Node::ELEMENT_NODE:
		{
			serializeElement($cast($Element, node));
			break;
		}
	case $Node::DOCUMENT_NODE:
		{}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{
			{
				$var($Node, child, nullptr);
				$assign(child, node->getFirstChild());
				while (child != nullptr) {
					serializeNode(child);
					$assign(child, child->getNextSibling());
				}
				break;
			}
		}
	default:
		{
			break;
		}
	}
}

$ElementState* TextSerializer::content() {
	$var($ElementState, state, nullptr);
	$assign(state, getElementState());
	if (!isDocumentState()) {
		if ($nc(state)->empty) {
			state->empty = false;
		}
		$nc(state)->afterElement = false;
	}
	return state;
}

$String* TextSerializer::getEntityRef(int32_t ch) {
	return nullptr;
}

TextSerializer::TextSerializer() {
}

$Class* TextSerializer::load$($String* name, bool initialize) {
	$loadClass(TextSerializer, name, initialize, &_TextSerializer_ClassInfo_, allocate$TextSerializer);
	return class$;
}

$Class* TextSerializer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com