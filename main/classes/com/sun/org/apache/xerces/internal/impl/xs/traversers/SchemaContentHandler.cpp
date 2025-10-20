#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/SchemaContentHandler.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SAXLocatorWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Document.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/helpers/LocatorImpl.h>
#include <jcpp.h>

#undef EMPTY_STRING
#undef PREFIX_XMLNS
#undef XMLNS_URI

using $SchemaDOMParser = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SAXLocatorWrapper = ::com::sun::org::apache::xerces::internal::util::SAXLocatorWrapper;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Document = ::org::w3c::dom::Document;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $LocatorImpl = ::org::xml::sax::helpers::LocatorImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _SchemaContentHandler_FieldInfo_[] = {
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(SchemaContentHandler, fSymbolTable)},
	{"fSchemaDOMParser", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser;", nullptr, $PRIVATE, $field(SchemaContentHandler, fSchemaDOMParser)},
	{"fSAXLocatorWrapper", "Lcom/sun/org/apache/xerces/internal/util/SAXLocatorWrapper;", nullptr, $PRIVATE | $FINAL, $field(SchemaContentHandler, fSAXLocatorWrapper)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $PRIVATE, $field(SchemaContentHandler, fNamespaceContext)},
	{"fNeedPushNSContext", "Z", nullptr, $PRIVATE, $field(SchemaContentHandler, fNeedPushNSContext)},
	{"fNamespacePrefixes", "Z", nullptr, $PRIVATE, $field(SchemaContentHandler, fNamespacePrefixes)},
	{"fStringsInternalized", "Z", nullptr, $PRIVATE, $field(SchemaContentHandler, fStringsInternalized)},
	{"fElementQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(SchemaContentHandler, fElementQName)},
	{"fAttributeQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(SchemaContentHandler, fAttributeQName)},
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl;", nullptr, $PRIVATE | $FINAL, $field(SchemaContentHandler, fAttributes)},
	{"fTempString", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE | $FINAL, $field(SchemaContentHandler, fTempString)},
	{"fStringBuffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE | $FINAL, $field(SchemaContentHandler, fStringBuffer)},
	{}
};

$MethodInfo _SchemaContentHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SchemaContentHandler::*)()>(&SchemaContentHandler::init$))},
	{"addNamespaceDeclarations", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(SchemaContentHandler::*)(int32_t)>(&SchemaContentHandler::addNamespaceDeclarations))},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"convertToSAXException", "(Lcom/sun/org/apache/xerces/internal/xni/XNIException;)V", nullptr, $STATIC, $method(static_cast<void(*)($XNIException*)>(&SchemaContentHandler::convertToSAXException)), "org.xml.sax.SAXException"},
	{"convertToSAXParseException", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $STATIC, $method(static_cast<void(*)($XMLParseException*)>(&SchemaContentHandler::convertToSAXParseException)), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"fillQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SchemaContentHandler::*)($QName*,$String*,$String*,$String*)>(&SchemaContentHandler::fillQName))},
	{"fillXMLAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(static_cast<void(SchemaContentHandler::*)($Attributes*)>(&SchemaContentHandler::fillXMLAttributes))},
	{"getDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $method(static_cast<$Document*(SchemaContentHandler::*)()>(&SchemaContentHandler::getDocument))},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(SchemaContentHandler::*)($SchemaDOMParser*,$SymbolTable*,bool,bool)>(&SchemaContentHandler::reset))},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _SchemaContentHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.SchemaContentHandler",
	"java.lang.Object",
	"org.xml.sax.ContentHandler",
	_SchemaContentHandler_FieldInfo_,
	_SchemaContentHandler_MethodInfo_
};

$Object* allocate$SchemaContentHandler($Class* clazz) {
	return $of($alloc(SchemaContentHandler));
}

void SchemaContentHandler::init$() {
	$set(this, fSAXLocatorWrapper, $new($SAXLocatorWrapper));
	$set(this, fNamespaceContext, $new($NamespaceSupport));
	this->fNamespacePrefixes = false;
	this->fStringsInternalized = false;
	$set(this, fElementQName, $new($QName));
	$set(this, fAttributeQName, $new($QName));
	$set(this, fAttributes, $new($XMLAttributesImpl));
	$set(this, fTempString, $new($XMLString));
	$set(this, fStringBuffer, $new($XMLStringBuffer));
}

$Document* SchemaContentHandler::getDocument() {
	return $nc(this->fSchemaDOMParser)->getDocument();
}

void SchemaContentHandler::setDocumentLocator($Locator* locator) {
	$nc(this->fSAXLocatorWrapper)->setLocator(locator);
}

void SchemaContentHandler::startDocument() {
	$useLocalCurrentObjectStackCache();
	this->fNeedPushNSContext = true;
	$nc(this->fNamespaceContext)->reset();
	try {
		$nc(this->fSchemaDOMParser)->startDocument(this->fSAXLocatorWrapper, nullptr, this->fNamespaceContext, nullptr);
	} catch ($XMLParseException&) {
		$var($XMLParseException, e, $catch());
		convertToSAXParseException(e);
	} catch ($XNIException&) {
		$var($XNIException, e, $catch());
		convertToSAXException(e);
	}
}

void SchemaContentHandler::endDocument() {
	$useLocalCurrentObjectStackCache();
	$nc(this->fSAXLocatorWrapper)->setLocator(nullptr);
	try {
		$nc(this->fSchemaDOMParser)->endDocument(nullptr);
	} catch ($XMLParseException&) {
		$var($XMLParseException, e, $catch());
		convertToSAXParseException(e);
	} catch ($XNIException&) {
		$var($XNIException, e, $catch());
		convertToSAXException(e);
	}
}

void SchemaContentHandler::startPrefixMapping($String* prefix$renamed, $String* uri$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, uri, uri$renamed);
	if (this->fNeedPushNSContext) {
		this->fNeedPushNSContext = false;
		$nc(this->fNamespaceContext)->pushContext();
	}
	if (!this->fStringsInternalized) {
		$init($XMLSymbols);
		$assign(prefix, (prefix != nullptr) ? $nc(this->fSymbolTable)->addSymbol(prefix) : $XMLSymbols::EMPTY_STRING);
		$assign(uri, (uri != nullptr && uri->length() > 0) ? $nc(this->fSymbolTable)->addSymbol(uri) : ($String*)nullptr);
	} else {
		if (prefix == nullptr) {
			$init($XMLSymbols);
			$assign(prefix, $XMLSymbols::EMPTY_STRING);
		}
		if (uri != nullptr && uri->length() == 0) {
			$assign(uri, nullptr);
		}
	}
	$nc(this->fNamespaceContext)->declarePrefix(prefix, uri);
}

void SchemaContentHandler::endPrefixMapping($String* prefix) {
}

void SchemaContentHandler::startElement($String* uri, $String* localName, $String* qName, $Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	if (this->fNeedPushNSContext) {
		$nc(this->fNamespaceContext)->pushContext();
	}
	this->fNeedPushNSContext = true;
	fillQName(this->fElementQName, uri, localName, qName);
	fillXMLAttributes(atts);
	if (!this->fNamespacePrefixes) {
		int32_t prefixCount = $nc(this->fNamespaceContext)->getDeclaredPrefixCount();
		if (prefixCount > 0) {
			addNamespaceDeclarations(prefixCount);
		}
	}
	try {
		$nc(this->fSchemaDOMParser)->startElement(this->fElementQName, this->fAttributes, nullptr);
	} catch ($XMLParseException&) {
		$var($XMLParseException, e, $catch());
		convertToSAXParseException(e);
	} catch ($XNIException&) {
		$var($XNIException, e, $catch());
		convertToSAXException(e);
	}
}

void SchemaContentHandler::endElement($String* uri, $String* localName, $String* qName) {
	$useLocalCurrentObjectStackCache();
	fillQName(this->fElementQName, uri, localName, qName);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->fSchemaDOMParser)->endElement(this->fElementQName, nullptr);
			} catch ($XMLParseException&) {
				$var($XMLParseException, e, $catch());
				convertToSAXParseException(e);
			} catch ($XNIException&) {
				$var($XNIException, e, $catch());
				convertToSAXException(e);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->fNamespaceContext)->popContext();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SchemaContentHandler::characters($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->fTempString)->setValues(ch, start, length);
		$nc(this->fSchemaDOMParser)->characters(this->fTempString, nullptr);
	} catch ($XMLParseException&) {
		$var($XMLParseException, e, $catch());
		convertToSAXParseException(e);
	} catch ($XNIException&) {
		$var($XNIException, e, $catch());
		convertToSAXException(e);
	}
}

void SchemaContentHandler::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->fTempString)->setValues(ch, start, length);
		$nc(this->fSchemaDOMParser)->ignorableWhitespace(this->fTempString, nullptr);
	} catch ($XMLParseException&) {
		$var($XMLParseException, e, $catch());
		convertToSAXParseException(e);
	} catch ($XNIException&) {
		$var($XNIException, e, $catch());
		convertToSAXException(e);
	}
}

void SchemaContentHandler::processingInstruction($String* target, $String* data) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($chars, var$0, $nc(data)->toCharArray());
		$nc(this->fTempString)->setValues(var$0, 0, data->length());
		$nc(this->fSchemaDOMParser)->processingInstruction(target, this->fTempString, nullptr);
	} catch ($XMLParseException&) {
		$var($XMLParseException, e, $catch());
		convertToSAXParseException(e);
	} catch ($XNIException&) {
		$var($XNIException, e, $catch());
		convertToSAXException(e);
	}
}

void SchemaContentHandler::skippedEntity($String* arg) {
}

void SchemaContentHandler::fillQName($QName* toFill, $String* uri$renamed, $String* localpart$renamed, $String* rawname$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, localpart, localpart$renamed);
	$var($String, uri, uri$renamed);
	$var($String, rawname, rawname$renamed);
	if (!this->fStringsInternalized) {
		$assign(uri, (uri != nullptr && uri->length() > 0) ? $nc(this->fSymbolTable)->addSymbol(uri) : ($String*)nullptr);
		$init($XMLSymbols);
		$assign(localpart, (localpart != nullptr) ? $nc(this->fSymbolTable)->addSymbol(localpart) : $XMLSymbols::EMPTY_STRING);
		$assign(rawname, (rawname != nullptr) ? $nc(this->fSymbolTable)->addSymbol(rawname) : $XMLSymbols::EMPTY_STRING);
	} else {
		if (uri != nullptr && uri->length() == 0) {
			$assign(uri, nullptr);
		}
		if (localpart == nullptr) {
			$init($XMLSymbols);
			$assign(localpart, $XMLSymbols::EMPTY_STRING);
		}
		if (rawname == nullptr) {
			$init($XMLSymbols);
			$assign(rawname, $XMLSymbols::EMPTY_STRING);
		}
	}
	$init($XMLSymbols);
	$var($String, prefix, $XMLSymbols::EMPTY_STRING);
	int32_t prefixIdx = $nc(rawname)->indexOf((int32_t)u':');
	if (prefixIdx != -1) {
		$assign(prefix, $nc(this->fSymbolTable)->addSymbol($(rawname->substring(0, prefixIdx))));
		if (localpart == $XMLSymbols::EMPTY_STRING) {
			$assign(localpart, $nc(this->fSymbolTable)->addSymbol($(rawname->substring(prefixIdx + 1))));
		}
	} else {
		if (localpart == $XMLSymbols::EMPTY_STRING) {
			$assign(localpart, rawname);
		}
	}
	$nc(toFill)->setValues(prefix, localpart, rawname, uri);
}

void SchemaContentHandler::fillXMLAttributes($Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fAttributes)->removeAllAttributes();
	int32_t attrCount = $nc(atts)->getLength();
	for (int32_t i = 0; i < attrCount; ++i) {
		$var($QName, var$0, this->fAttributeQName);
		$var($String, var$1, atts->getURI(i));
		$var($String, var$2, atts->getLocalName(i));
		fillQName(var$0, var$1, var$2, $(atts->getQName(i)));
		$var($String, type, atts->getType(i));
		$init($XMLSymbols);
		$nc(this->fAttributes)->addAttributeNS(this->fAttributeQName, (type != nullptr) ? type : $XMLSymbols::fCDATASymbol, $(atts->getValue(i)));
		$nc(this->fAttributes)->setSpecified(i, true);
	}
}

void SchemaContentHandler::addNamespaceDeclarations(int32_t prefixCount) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	$var($String, localpart, nullptr);
	$var($String, rawname, nullptr);
	$var($String, nsPrefix, nullptr);
	$var($String, nsURI, nullptr);
	for (int32_t i = 0; i < prefixCount; ++i) {
		$assign(nsPrefix, $nc(this->fNamespaceContext)->getDeclaredPrefixAt(i));
		$assign(nsURI, $nc(this->fNamespaceContext)->getURI(nsPrefix));
		if ($nc(nsPrefix)->length() > 0) {
			$init($XMLSymbols);
			$assign(prefix, $XMLSymbols::PREFIX_XMLNS);
			$assign(localpart, nsPrefix);
			$nc(this->fStringBuffer)->clear();
			$nc(this->fStringBuffer)->append(prefix);
			$nc(this->fStringBuffer)->append(u':');
			$nc(this->fStringBuffer)->append(localpart);
			$assign(rawname, $nc(this->fSymbolTable)->addSymbol($nc(this->fStringBuffer)->ch, $nc(this->fStringBuffer)->offset, $nc(this->fStringBuffer)->length));
		} else {
			$init($XMLSymbols);
			$assign(prefix, $XMLSymbols::EMPTY_STRING);
			$assign(localpart, $XMLSymbols::PREFIX_XMLNS);
			$assign(rawname, $XMLSymbols::PREFIX_XMLNS);
		}
		$init($NamespaceContext);
		$nc(this->fAttributeQName)->setValues(prefix, localpart, rawname, $NamespaceContext::XMLNS_URI);
		$init($XMLSymbols);
		$nc(this->fAttributes)->addAttribute(this->fAttributeQName, $XMLSymbols::fCDATASymbol, (nsURI != nullptr) ? nsURI : $XMLSymbols::EMPTY_STRING);
	}
}

void SchemaContentHandler::reset($SchemaDOMParser* schemaDOMParser, $SymbolTable* symbolTable, bool namespacePrefixes, bool stringsInternalized) {
	$set(this, fSchemaDOMParser, schemaDOMParser);
	$set(this, fSymbolTable, symbolTable);
	this->fNamespacePrefixes = namespacePrefixes;
	this->fStringsInternalized = stringsInternalized;
}

void SchemaContentHandler::convertToSAXParseException($XMLParseException* e) {
	$init(SchemaContentHandler);
	$useLocalCurrentObjectStackCache();
	$var($Exception, ex, $nc(e)->getException());
	if (ex == nullptr) {
		$var($LocatorImpl, locatorImpl, $new($LocatorImpl));
		locatorImpl->setPublicId($(e->getPublicId()));
		locatorImpl->setSystemId($(e->getExpandedSystemId()));
		locatorImpl->setLineNumber(e->getLineNumber());
		locatorImpl->setColumnNumber(e->getColumnNumber());
		$throwNew($SAXParseException, $(e->getMessage()), locatorImpl);
	}
	if ($instanceOf($SAXException, ex)) {
		$throw($cast($SAXException, ex));
	}
	$throwNew($SAXException, ex);
}

void SchemaContentHandler::convertToSAXException($XNIException* e) {
	$init(SchemaContentHandler);
	$useLocalCurrentObjectStackCache();
	$var($Exception, ex, $nc(e)->getException());
	if (ex == nullptr) {
		$throwNew($SAXException, $(e->getMessage()));
	}
	if ($instanceOf($SAXException, ex)) {
		$throw($cast($SAXException, ex));
	}
	$throwNew($SAXException, ex);
}

SchemaContentHandler::SchemaContentHandler() {
}

$Class* SchemaContentHandler::load$($String* name, bool initialize) {
	$loadClass(SchemaContentHandler, name, initialize, &_SchemaContentHandler_ClassInfo_, allocate$SchemaContentHandler);
	return class$;
}

$Class* SchemaContentHandler::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com