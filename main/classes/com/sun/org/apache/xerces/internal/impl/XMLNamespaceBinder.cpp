#include <com/sun/org/apache/xerces/internal/impl/XMLNamespaceBinder.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EMPTY_STRING
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef FEATURE_DEFAULTS
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef PREFIX_XML
#undef PREFIX_XMLNS
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef SAX_FEATURE_PREFIX
#undef SEVERITY_FATAL_ERROR
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef XERCES_PROPERTY_PREFIX
#undef XMLNS_DOMAIN
#undef XMLNS_URI
#undef XML_URI

using $BooleanArray = $Array<::java::lang::Boolean>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDocumentFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLNamespaceBinder_FieldInfo_[] = {
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLNamespaceBinder, NAMESPACES)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLNamespaceBinder, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLNamespaceBinder, ERROR_REPORTER)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLNamespaceBinder, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLNamespaceBinder, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLNamespaceBinder, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLNamespaceBinder, PROPERTY_DEFAULTS)},
	{"fNamespaces", "Z", nullptr, $PROTECTED, $field(XMLNamespaceBinder, fNamespaces)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLNamespaceBinder, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XMLNamespaceBinder, fErrorReporter)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PROTECTED, $field(XMLNamespaceBinder, fDocumentHandler)},
	{"fDocumentSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PROTECTED, $field(XMLNamespaceBinder, fDocumentSource)},
	{"fOnlyPassPrefixMappingEvents", "Z", nullptr, $PROTECTED, $field(XMLNamespaceBinder, fOnlyPassPrefixMappingEvents)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PRIVATE, $field(XMLNamespaceBinder, fNamespaceContext)},
	{"fAttributeQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(XMLNamespaceBinder, fAttributeQName)},
	{}
};

$MethodInfo _XMLNamespaceBinder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLNamespaceBinder::*)()>(&XMLNamespaceBinder::init$))},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"getOnlyPassPrefixMappingEvents", "()Z", nullptr, $PUBLIC},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"handleEndElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;Z)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"handleStartElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;Z)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"prefixBoundToNullURI", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PROTECTED},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setOnlyPassPrefixMappingEvents", "(Z)V", nullptr, $PUBLIC},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLNamespaceBinder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLNamespaceBinder",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent,com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter",
	_XMLNamespaceBinder_FieldInfo_,
	_XMLNamespaceBinder_MethodInfo_
};

$Object* allocate$XMLNamespaceBinder($Class* clazz) {
	return $of($alloc(XMLNamespaceBinder));
}

int32_t XMLNamespaceBinder::hashCode() {
	 return this->$XMLComponent::hashCode();
}

bool XMLNamespaceBinder::equals(Object$* arg0) {
	 return this->$XMLComponent::equals(arg0);
}

$Object* XMLNamespaceBinder::clone() {
	 return this->$XMLComponent::clone();
}

$String* XMLNamespaceBinder::toString() {
	 return this->$XMLComponent::toString();
}

void XMLNamespaceBinder::finalize() {
	this->$XMLComponent::finalize();
}


$String* XMLNamespaceBinder::NAMESPACES = nullptr;

$String* XMLNamespaceBinder::SYMBOL_TABLE = nullptr;

$String* XMLNamespaceBinder::ERROR_REPORTER = nullptr;

$StringArray* XMLNamespaceBinder::RECOGNIZED_FEATURES = nullptr;

$BooleanArray* XMLNamespaceBinder::FEATURE_DEFAULTS = nullptr;

$StringArray* XMLNamespaceBinder::RECOGNIZED_PROPERTIES = nullptr;

$ObjectArray* XMLNamespaceBinder::PROPERTY_DEFAULTS = nullptr;

void XMLNamespaceBinder::init$() {
	$set(this, fAttributeQName, $new($QName));
}

void XMLNamespaceBinder::setOnlyPassPrefixMappingEvents(bool onlyPassPrefixMappingEvents) {
	this->fOnlyPassPrefixMappingEvents = onlyPassPrefixMappingEvents;
}

bool XMLNamespaceBinder::getOnlyPassPrefixMappingEvents() {
	return this->fOnlyPassPrefixMappingEvents;
}

void XMLNamespaceBinder::reset($XMLComponentManager* componentManager) {
	this->fNamespaces = $nc(componentManager)->getFeature(XMLNamespaceBinder::NAMESPACES, true);
	$set(this, fSymbolTable, $cast($SymbolTable, componentManager->getProperty(XMLNamespaceBinder::SYMBOL_TABLE)));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty(XMLNamespaceBinder::ERROR_REPORTER)));
}

$StringArray* XMLNamespaceBinder::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLNamespaceBinder::RECOGNIZED_FEATURES)->clone());
}

void XMLNamespaceBinder::setFeature($String* featureId, bool state) {
}

$StringArray* XMLNamespaceBinder::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLNamespaceBinder::RECOGNIZED_PROPERTIES)->clone());
}

void XMLNamespaceBinder::setProperty($String* propertyId, Object$* value) {
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::SYMBOL_TABLE_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::SYMBOL_TABLE_PROPERTY)) {
			$set(this, fSymbolTable, $cast($SymbolTable, value));
		} else {
			bool var$3 = suffixLength == $nc($Constants::ERROR_REPORTER_PROPERTY)->length();
			if (var$3 && propertyId->endsWith($Constants::ERROR_REPORTER_PROPERTY)) {
				$set(this, fErrorReporter, $cast($XMLErrorReporter, value));
			}
		}
		return;
	}
}

$Boolean* XMLNamespaceBinder::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XMLNamespaceBinder::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XMLNamespaceBinder::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XMLNamespaceBinder::FEATURE_DEFAULTS)->get(i);
		}
	}
	return nullptr;
}

$Object* XMLNamespaceBinder::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XMLNamespaceBinder::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XMLNamespaceBinder::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XMLNamespaceBinder::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of(nullptr);
}

void XMLNamespaceBinder::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
}

$XMLDocumentHandler* XMLNamespaceBinder::getDocumentHandler() {
	return this->fDocumentHandler;
}

void XMLNamespaceBinder::setDocumentSource($XMLDocumentSource* source) {
	$set(this, fDocumentSource, source);
}

$XMLDocumentSource* XMLNamespaceBinder::getDocumentSource() {
	return this->fDocumentSource;
}

void XMLNamespaceBinder::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->startGeneralEntity(name, identifier, encoding, augs);
	}
}

void XMLNamespaceBinder::textDecl($String* version, $String* encoding, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->textDecl(version, encoding, augs);
	}
}

void XMLNamespaceBinder::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	$set(this, fNamespaceContext, namespaceContext);
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->startDocument(locator, encoding, namespaceContext, augs);
	}
}

void XMLNamespaceBinder::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->xmlDecl(version, encoding, standalone, augs);
	}
}

void XMLNamespaceBinder::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->doctypeDecl(rootElement, publicId, systemId, augs);
	}
}

void XMLNamespaceBinder::comment($XMLString* text, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->comment(text, augs);
	}
}

void XMLNamespaceBinder::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->processingInstruction(target, data, augs);
	}
}

void XMLNamespaceBinder::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	if (this->fNamespaces) {
		handleStartElement(element, attributes, augs, false);
	} else if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startElement(element, attributes, augs);
	}
}

void XMLNamespaceBinder::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	if (this->fNamespaces) {
		handleStartElement(element, attributes, augs, true);
		handleEndElement(element, augs, true);
	} else if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->emptyElement(element, attributes, augs);
	}
}

void XMLNamespaceBinder::characters($XMLString* text, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->characters(text, augs);
	}
}

void XMLNamespaceBinder::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->ignorableWhitespace(text, augs);
	}
}

void XMLNamespaceBinder::endElement($QName* element, $Augmentations* augs) {
	if (this->fNamespaces) {
		handleEndElement(element, augs, false);
	} else if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->endElement(element, augs);
	}
}

void XMLNamespaceBinder::startCDATA($Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->startCDATA(augs);
	}
}

void XMLNamespaceBinder::endCDATA($Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->endCDATA(augs);
	}
}

void XMLNamespaceBinder::endDocument($Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->endDocument(augs);
	}
}

void XMLNamespaceBinder::endGeneralEntity($String* name, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		$nc(this->fDocumentHandler)->endGeneralEntity(name, augs);
	}
}

void XMLNamespaceBinder::handleStartElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs, bool isEmpty) {
	$nc(this->fNamespaceContext)->pushContext();
	$init($XMLSymbols);
	if ($nc(element)->prefix == $XMLSymbols::PREFIX_XMLNS) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "ElementXMLNSPrefix"_s, $$new($ObjectArray, {$of(element->rawname)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
	}
	int32_t length = $nc(attributes)->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($String, localpart, attributes->getLocalName(i));
		$var($String, prefix, attributes->getPrefix(i));
		if (prefix == $XMLSymbols::PREFIX_XMLNS || prefix == $XMLSymbols::EMPTY_STRING && localpart == $XMLSymbols::PREFIX_XMLNS) {
			$var($String, uri, $nc(this->fSymbolTable)->addSymbol($(attributes->getValue(i))));
			if (prefix == $XMLSymbols::PREFIX_XMLNS && localpart == $XMLSymbols::PREFIX_XMLNS) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXMLNS"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			if (uri == $NamespaceContext::XMLNS_URI) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXMLNS"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			if (localpart == $XMLSymbols::PREFIX_XML) {
				if (uri != $NamespaceContext::XML_URI) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXML"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
			} else {
				if (uri == $NamespaceContext::XML_URI) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "CantBindXML"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
			}
			$assign(prefix, localpart != $XMLSymbols::PREFIX_XMLNS ? localpart : $XMLSymbols::EMPTY_STRING);
			if (prefixBoundToNullURI(uri, localpart)) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "EmptyPrefixedAttName"_s, $$new($ObjectArray, {$($of(attributes->getQName(i)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				continue;
			}
			$nc(this->fNamespaceContext)->declarePrefix(prefix, $nc(uri)->length() != 0 ? uri : ($String*)nullptr);
		}
	}
	$var($String, prefix, $nc(element)->prefix != nullptr ? $nc(element)->prefix : $XMLSymbols::EMPTY_STRING);
	$set(element, uri, $nc(this->fNamespaceContext)->getURI(prefix));
	if (element->prefix == nullptr && element->uri != nullptr) {
		$set(element, prefix, $XMLSymbols::EMPTY_STRING);
	}
	if (element->prefix != nullptr && element->uri == nullptr) {
		$init($XMLMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "ElementPrefixUnbound"_s, $$new($ObjectArray, {
			$of(element->prefix),
			$of(element->rawname)
		}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
	}
	for (int32_t i = 0; i < length; ++i) {
		attributes->getName(i, this->fAttributeQName);
		$var($String, aprefix, $nc(this->fAttributeQName)->prefix != nullptr ? $nc(this->fAttributeQName)->prefix : $XMLSymbols::EMPTY_STRING);
		$var($String, arawname, $nc(this->fAttributeQName)->rawname);
		if (arawname == $XMLSymbols::PREFIX_XMLNS) {
			$set($nc(this->fAttributeQName), uri, $nc(this->fNamespaceContext)->getURI($XMLSymbols::PREFIX_XMLNS));
			attributes->setName(i, this->fAttributeQName);
		} else {
			if (aprefix != $XMLSymbols::EMPTY_STRING) {
				$set($nc(this->fAttributeQName), uri, $nc(this->fNamespaceContext)->getURI(aprefix));
				if ($nc(this->fAttributeQName)->uri == nullptr) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "AttributePrefixUnbound"_s, $$new($ObjectArray, {
						$of(element->rawname),
						$of(arawname),
						$of(aprefix)
					}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
				attributes->setName(i, this->fAttributeQName);
			}
		}
	}
	int32_t attrCount = attributes->getLength();
	for (int32_t i = 0; i < attrCount - 1; ++i) {
		$var($String, auri, attributes->getURI(i));
		if (auri == nullptr || auri == $NamespaceContext::XMLNS_URI) {
			continue;
		}
		$var($String, alocalpart, attributes->getLocalName(i));
		for (int32_t j = i + 1; j < attrCount; ++j) {
			$var($String, blocalpart, attributes->getLocalName(j));
			$var($String, buri, attributes->getURI(j));
			if (alocalpart == blocalpart && auri == buri) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XMLNS_DOMAIN, "AttributeNSNotUnique"_s, $$new($ObjectArray, {
					$of(element->rawname),
					$of(alocalpart),
					$of(auri)
				}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
		}
	}
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		if (isEmpty) {
			$nc(this->fDocumentHandler)->emptyElement(element, attributes, augs);
		} else {
			$nc(this->fDocumentHandler)->startElement(element, attributes, augs);
		}
	}
}

void XMLNamespaceBinder::handleEndElement($QName* element, $Augmentations* augs, bool isEmpty) {
	$init($XMLSymbols);
	$var($String, eprefix, $nc(element)->prefix != nullptr ? $nc(element)->prefix : $XMLSymbols::EMPTY_STRING);
	$set(element, uri, $nc(this->fNamespaceContext)->getURI(eprefix));
	if (element->uri != nullptr) {
		$set(element, prefix, eprefix);
	}
	if (this->fDocumentHandler != nullptr && !this->fOnlyPassPrefixMappingEvents) {
		if (!isEmpty) {
			$nc(this->fDocumentHandler)->endElement(element, augs);
		}
	}
	$nc(this->fNamespaceContext)->popContext();
}

bool XMLNamespaceBinder::prefixBoundToNullURI($String* uri, $String* localpart) {
	$init($XMLSymbols);
	return (uri == $XMLSymbols::EMPTY_STRING && localpart != $XMLSymbols::PREFIX_XMLNS);
}

void clinit$XMLNamespaceBinder($Class* class$) {
	$init($Constants);
	$assignStatic(XMLNamespaceBinder::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(XMLNamespaceBinder::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLNamespaceBinder::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLNamespaceBinder::RECOGNIZED_FEATURES, $new($StringArray, {XMLNamespaceBinder::NAMESPACES}));
	$assignStatic(XMLNamespaceBinder::FEATURE_DEFAULTS, $new($BooleanArray, {($Boolean*)nullptr}));
	$assignStatic(XMLNamespaceBinder::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XMLNamespaceBinder::SYMBOL_TABLE,
		XMLNamespaceBinder::ERROR_REPORTER
	}));
	$assignStatic(XMLNamespaceBinder::PROPERTY_DEFAULTS, $new($ObjectArray, {
		($Object*)nullptr,
		($Object*)nullptr
	}));
}

XMLNamespaceBinder::XMLNamespaceBinder() {
}

$Class* XMLNamespaceBinder::load$($String* name, bool initialize) {
	$loadClass(XMLNamespaceBinder, name, initialize, &_XMLNamespaceBinder_ClassInfo_, clinit$XMLNamespaceBinder, allocate$XMLNamespaceBinder);
	return class$;
}

$Class* XMLNamespaceBinder::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com