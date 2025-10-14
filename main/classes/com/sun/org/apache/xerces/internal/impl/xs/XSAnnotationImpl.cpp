#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef ANNOTATION
#undef SAX_CONTENTHANDLER
#undef W3C_DOM_DOCUMENT
#undef W3C_DOM_ELEMENT

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $AbstractDOMParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser;
using $AbstractSAXParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser;
using $DOMParser = ::com::sun::org::apache::xerces::internal::parsers::DOMParser;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSAnnotationImpl_FieldInfo_[] = {
	{"fData", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSAnnotationImpl, fData)},
	{"fGrammar", "Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PRIVATE, $field(XSAnnotationImpl, fGrammar)},
	{}
};

$MethodInfo _XSAnnotationImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PUBLIC, $method(static_cast<void(XSAnnotationImpl::*)($String*,$SchemaGrammar*)>(&XSAnnotationImpl::init$))},
	{"getAnnotationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC},
	{"getType", "()S", nullptr, $PUBLIC},
	{"writeAnnotation", "(Ljava/lang/Object;S)Z", nullptr, $PUBLIC},
	{"writeToDOM", "(Lorg/w3c/dom/Node;S)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(XSAnnotationImpl::*)($Node*,int16_t)>(&XSAnnotationImpl::writeToDOM))},
	{"writeToSAX", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(XSAnnotationImpl::*)($ContentHandler*)>(&XSAnnotationImpl::writeToSAX))},
	{}
};

$ClassInfo _XSAnnotationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSAnnotationImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSAnnotation",
	_XSAnnotationImpl_FieldInfo_,
	_XSAnnotationImpl_MethodInfo_
};

$Object* allocate$XSAnnotationImpl($Class* clazz) {
	return $of($alloc(XSAnnotationImpl));
}

void XSAnnotationImpl::init$($String* contents, $SchemaGrammar* grammar) {
	$set(this, fData, nullptr);
	$set(this, fGrammar, nullptr);
	$set(this, fData, contents);
	$set(this, fGrammar, grammar);
}

bool XSAnnotationImpl::writeAnnotation(Object$* target, int16_t targetType) {
	if (targetType == $XSAnnotation::W3C_DOM_ELEMENT || targetType == $XSAnnotation::W3C_DOM_DOCUMENT) {
		writeToDOM($cast($Node, target), targetType);
		return true;
	} else if (targetType == $XSAnnotation::SAX_CONTENTHANDLER) {
		writeToSAX($cast($ContentHandler, target));
		return true;
	}
	return false;
}

$String* XSAnnotationImpl::getAnnotationString() {
	return this->fData;
}

int16_t XSAnnotationImpl::getType() {
	return $XSConstants::ANNOTATION;
}

$String* XSAnnotationImpl::getName() {
	return nullptr;
}

$String* XSAnnotationImpl::getNamespace() {
	return nullptr;
}

$XSNamespaceItem* XSAnnotationImpl::getNamespaceItem() {
	return nullptr;
}

void XSAnnotationImpl::writeToSAX($ContentHandler* handler) {
	$synchronized(this) {
		$var($SAXParser, parser, $nc(this->fGrammar)->getSAXParser());
		$var($StringReader, aReader, $new($StringReader, this->fData));
		$var($InputSource, aSource, $new($InputSource, static_cast<$Reader*>(aReader)));
		$nc(parser)->setContentHandler(handler);
		try {
			parser->parse(aSource);
		} catch ($SAXException&) {
			$catch();
		} catch ($IOException&) {
			$catch();
		}
		parser->setContentHandler(nullptr);
	}
}

void XSAnnotationImpl::writeToDOM($Node* target, int16_t type) {
	$synchronized(this) {
		$var($Document, futureOwner, (type == $XSAnnotation::W3C_DOM_ELEMENT) ? $nc(target)->getOwnerDocument() : $cast($Document, target));
		$var($DOMParser, parser, $nc(this->fGrammar)->getDOMParser());
		$var($StringReader, aReader, $new($StringReader, this->fData));
		$var($InputSource, aSource, $new($InputSource, static_cast<$Reader*>(aReader)));
		try {
			$nc(parser)->parse(aSource);
		} catch ($SAXException&) {
			$catch();
		} catch ($IOException&) {
			$catch();
		}
		$var($Document, aDocument, $nc(parser)->getDocument());
		parser->dropDocumentReferences();
		$var($Element, annotation, $nc(aDocument)->getDocumentElement());
		$var($Node, newElem, nullptr);
		if ($instanceOf($CoreDocumentImpl, futureOwner)) {
			$assign(newElem, $nc(futureOwner)->adoptNode(annotation));
			if (newElem == nullptr) {
				$assign(newElem, futureOwner->importNode(annotation, true));
			}
		} else {
			$assign(newElem, $nc(futureOwner)->importNode(annotation, true));
		}
		target->insertBefore(newElem, $(target->getFirstChild()));
	}
}

XSAnnotationImpl::XSAnnotationImpl() {
}

$Class* XSAnnotationImpl::load$($String* name, bool initialize) {
	$loadClass(XSAnnotationImpl, name, initialize, &_XSAnnotationImpl_ClassInfo_, allocate$XSAnnotationImpl);
	return class$;
}

$Class* XSAnnotationImpl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com