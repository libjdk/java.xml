#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ShortHandPointer.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$1.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Scanner.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Tokens.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerPart.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ELEMENT_SCHEME_NAME
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER_PROPERTY
#undef EVENT_ELEMENT_EMPTY
#undef EVENT_ELEMENT_END
#undef EVENT_ELEMENT_START
#undef NAMESPACE_CONTEXT_PROPERTY
#undef SEVERITY_WARNING
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XINCLUDE_FIXUP_BASE_URIS_FEATURE
#undef XINCLUDE_FIXUP_LANGUAGE_FEATURE
#undef XPOINTER_DOMAIN
#undef XPTRTOKEN_SCHEMENAME
#undef XPTRTOKEN_SHORTHAND

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XIncludeHandler = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler;
using $XIncludeNamespaceSupport = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeNamespaceSupport;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $ElementSchemePointer = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer;
using $ShortHandPointer = ::com::sun::org::apache::xerces::internal::xpointer::ShortHandPointer;
using $XPointerErrorHandler = ::com::sun::org::apache::xerces::internal::xpointer::XPointerErrorHandler;
using $XPointerHandler$1 = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$1;
using $XPointerHandler$Scanner = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Scanner;
using $XPointerHandler$Tokens = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Tokens;
using $XPointerMessageFormatter = ::com::sun::org::apache::xerces::internal::xpointer::XPointerMessageFormatter;
using $XPointerPart = ::com::sun::org::apache::xerces::internal::xpointer::XPointerPart;
using $XPointerProcessor = ::com::sun::org::apache::xerces::internal::xpointer::XPointerProcessor;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ArrayList = ::java::util::ArrayList;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

$FieldInfo _XPointerHandler_FieldInfo_[] = {
	{"fXPointerParts", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/org/apache/xerces/internal/xpointer/XPointerPart;>;", $PROTECTED, $field(XPointerHandler, fXPointerParts)},
	{"fXPointerPart", "Lcom/sun/org/apache/xerces/internal/xpointer/XPointerPart;", nullptr, $PROTECTED, $field(XPointerHandler, fXPointerPart)},
	{"fFoundMatchingPtrPart", "Z", nullptr, $PROTECTED, $field(XPointerHandler, fFoundMatchingPtrPart)},
	{"fXPointerErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XPointerHandler, fXPointerErrorReporter)},
	{"fErrorHandler", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PROTECTED, $field(XPointerHandler, fErrorHandler)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XPointerHandler, fSymbolTable)},
	{"ELEMENT_SCHEME_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XPointerHandler, ELEMENT_SCHEME_NAME)},
	{"fIsXPointerResolved", "Z", nullptr, $PROTECTED, $field(XPointerHandler, fIsXPointerResolved)},
	{"fFixupBase", "Z", nullptr, $PROTECTED, $field(XPointerHandler, fFixupBase)},
	{"fFixupLang", "Z", nullptr, $PROTECTED, $field(XPointerHandler, fFixupLang)},
	{}
};

$MethodInfo _XPointerHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPointerHandler::*)()>(&XPointerHandler::init$))},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, $PUBLIC, $method(static_cast<void(XPointerHandler::*)($SymbolTable*,$XMLErrorHandler*,$XMLErrorReporter*)>(&XPointerHandler::init$))},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getPointerParts", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Lcom/sun/org/apache/xerces/internal/xpointer/XPointerPart;>;", $PUBLIC, $method(static_cast<$ArrayList*(XPointerHandler::*)()>(&XPointerHandler::getPointerParts))},
	{"getXPointerPart", "()Lcom/sun/org/apache/xerces/internal/xpointer/XPointerPart;", nullptr, $PUBLIC, $method(static_cast<$XPointerPart*(XPointerHandler::*)()>(&XPointerHandler::getXPointerPart))},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"init", "()V", nullptr, $PROTECTED, $method(static_cast<void(XPointerHandler::*)()>(&XPointerHandler::init))},
	{"initErrorReporter", "()V", nullptr, $PROTECTED, $method(static_cast<void(XPointerHandler::*)()>(&XPointerHandler::initErrorReporter))},
	{"isChildFragmentResolved", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(XPointerHandler::*)()>(&XPointerHandler::isChildFragmentResolved)), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isFragmentResolved", "()Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isXPointerResolved", "()Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"parseXPointer", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reportError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(XPointerHandler::*)($String*,$ObjectArray*)>(&XPointerHandler::reportError)), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reportWarning", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(XPointerHandler::*)($String*,$ObjectArray*)>(&XPointerHandler::reportWarning)), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resolveXPointer", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;I)Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPointerHandler_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Scanner", "com.sun.org.apache.xerces.internal.xpointer.XPointerHandler", "Scanner", $PRIVATE},
	{"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Tokens", "com.sun.org.apache.xerces.internal.xpointer.XPointerHandler", "Tokens", $PRIVATE | $FINAL},
	{"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XPointerHandler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler",
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler",
	"com.sun.org.apache.xerces.internal.xpointer.XPointerProcessor",
	_XPointerHandler_FieldInfo_,
	_XPointerHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XPointerHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Scanner,com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Tokens,com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$1"
};

$Object* allocate$XPointerHandler($Class* clazz) {
	return $of($alloc(XPointerHandler));
}

int32_t XPointerHandler::hashCode() {
	 return this->$XIncludeHandler::hashCode();
}

bool XPointerHandler::equals(Object$* arg0) {
	 return this->$XIncludeHandler::equals(arg0);
}

$Object* XPointerHandler::clone() {
	 return this->$XIncludeHandler::clone();
}

$String* XPointerHandler::toString() {
	 return this->$XIncludeHandler::toString();
}

void XPointerHandler::finalize() {
	this->$XIncludeHandler::finalize();
}

void XPointerHandler::init$() {
	$XIncludeHandler::init$();
	$set(this, fXPointerParts, nullptr);
	$set(this, fXPointerPart, nullptr);
	this->fFoundMatchingPtrPart = false;
	$set(this, fSymbolTable, nullptr);
	$set(this, ELEMENT_SCHEME_NAME, "element"_s);
	this->fIsXPointerResolved = false;
	this->fFixupBase = false;
	this->fFixupLang = false;
	$set(this, fXPointerParts, $new($ArrayList));
	$set(this, fSymbolTable, $new($SymbolTable));
}

void XPointerHandler::init$($SymbolTable* symbolTable, $XMLErrorHandler* errorHandler, $XMLErrorReporter* errorReporter) {
	$XIncludeHandler::init$();
	$set(this, fXPointerParts, nullptr);
	$set(this, fXPointerPart, nullptr);
	this->fFoundMatchingPtrPart = false;
	$set(this, fSymbolTable, nullptr);
	$set(this, ELEMENT_SCHEME_NAME, "element"_s);
	this->fIsXPointerResolved = false;
	this->fFixupBase = false;
	this->fFixupLang = false;
	$set(this, fXPointerParts, $new($ArrayList));
	$set(this, fSymbolTable, symbolTable);
	$set(this, fErrorHandler, errorHandler);
	$set(this, fXPointerErrorReporter, errorReporter);
}

void XPointerHandler::setDocumentHandler($XMLDocumentHandler* handler) {
	$set(this, fDocumentHandler, handler);
}

void XPointerHandler::parseXPointer($String* xpointer) {
	$useLocalCurrentObjectStackCache();
	init();
	$var($XPointerHandler$Tokens, tokens, $new($XPointerHandler$Tokens, this, this->fSymbolTable));
	$var($XPointerHandler$Scanner, scanner, $new($XPointerHandler$1, this, this->fSymbolTable));
	int32_t length = $nc(xpointer)->length();
	bool success = scanner->scanExpr(this->fSymbolTable, tokens, xpointer, 0, length);
	if (!success) {
		reportError("InvalidXPointerExpression"_s, $$new($ObjectArray, {$of(xpointer)}));
	}
	while (tokens->hasMore()) {
		int32_t token = tokens->nextToken();
		switch (token) {
		case $XPointerHandler$Tokens::XPTRTOKEN_SHORTHAND:
			{
				{
					token = tokens->nextToken();
					$var($String, shortHandPointerName, tokens->getTokenString(token));
					if (shortHandPointerName == nullptr) {
						reportError("InvalidXPointerExpression"_s, $$new($ObjectArray, {$of(xpointer)}));
					}
					$var($XPointerPart, shortHandPointer, $new($ShortHandPointer, this->fSymbolTable));
					shortHandPointer->setSchemeName(shortHandPointerName);
					$nc(this->fXPointerParts)->add(shortHandPointer);
					break;
				}
			}
		case $XPointerHandler$Tokens::XPTRTOKEN_SCHEMENAME:
			{
				{
					token = tokens->nextToken();
					$var($String, prefix, tokens->getTokenString(token));
					token = tokens->nextToken();
					$var($String, localName, tokens->getTokenString(token));
					$var($String, schemeName, $str({prefix, localName}));
					int32_t openParenCount = 0;
					int32_t closeParenCount = 0;
					token = tokens->nextToken();
					$var($String, openParen, tokens->getTokenString(token));
					if (openParen != "XPTRTOKEN_OPEN_PAREN"_s) {
						if (token == $XPointerHandler$Tokens::XPTRTOKEN_SHORTHAND) {
							reportError("MultipleShortHandPointers"_s, $$new($ObjectArray, {$of(xpointer)}));
						} else {
							reportError("InvalidXPointerExpression"_s, $$new($ObjectArray, {$of(xpointer)}));
						}
					}
					++openParenCount;
					$var($String, schemeData, nullptr);
					while (tokens->hasMore()) {
						token = tokens->nextToken();
						$assign(schemeData, tokens->getTokenString(token));
						if (schemeData != "XPTRTOKEN_OPEN_PAREN"_s) {
							break;
						}
						++openParenCount;
					}
					token = tokens->nextToken();
					$assign(schemeData, tokens->getTokenString(token));
					token = tokens->nextToken();
					$var($String, closeParen, tokens->getTokenString(token));
					if (closeParen != "XPTRTOKEN_CLOSE_PAREN"_s) {
						reportError("SchemeDataNotFollowedByCloseParenthesis"_s, $$new($ObjectArray, {$of(xpointer)}));
					}
					++closeParenCount;
					while (tokens->hasMore()) {
						if (tokens->getTokenString(tokens->peekToken()) != "XPTRTOKEN_OPEN_PAREN"_s) {
							break;
						}
						++closeParenCount;
					}
					if (openParenCount != closeParenCount) {
						reportError("UnbalancedParenthesisInXPointerExpression"_s, $$new($ObjectArray, {
							$of(xpointer),
							$($of($Integer::valueOf(openParenCount))),
							$($of($Integer::valueOf(closeParenCount)))
						}));
					}
					if ($nc(schemeName)->equals(this->ELEMENT_SCHEME_NAME)) {
						$var($XPointerPart, elementSchemePointer, $new($ElementSchemePointer, this->fSymbolTable, this->fErrorReporter));
						elementSchemePointer->setSchemeName(schemeName);
						elementSchemePointer->setSchemeData(schemeData);
						try {
							elementSchemePointer->parseXPointer(schemeData);
							$nc(this->fXPointerParts)->add(elementSchemePointer);
						} catch ($XNIException&) {
							$var($XNIException, e, $catch());
							$throwNew($XNIException, static_cast<$Exception*>(e));
						}
					} else {
						reportWarning("SchemeUnsupported"_s, $$new($ObjectArray, {$of(schemeName)}));
					}
					break;
				}
			}
		default:
			{
				reportError("InvalidXPointerExpression"_s, $$new($ObjectArray, {$of(xpointer)}));
			}
		}
	}
}

bool XPointerHandler::resolveXPointer($QName* element, $XMLAttributes* attributes, $Augmentations* augs, int32_t event) {
	bool resolved = false;
	if (!this->fFoundMatchingPtrPart) {
		for (int32_t i = 0; i < $nc(this->fXPointerParts)->size(); ++i) {
			$set(this, fXPointerPart, $cast($XPointerPart, $nc(this->fXPointerParts)->get(i)));
			if ($nc(this->fXPointerPart)->resolveXPointer(element, attributes, augs, event)) {
				this->fFoundMatchingPtrPart = true;
				resolved = true;
			}
		}
	} else if ($nc(this->fXPointerPart)->resolveXPointer(element, attributes, augs, event)) {
		resolved = true;
	}
	if (!this->fIsXPointerResolved) {
		this->fIsXPointerResolved = resolved;
	}
	return resolved;
}

bool XPointerHandler::isFragmentResolved() {
	bool resolved = (this->fXPointerPart != nullptr) ? $nc(this->fXPointerPart)->isFragmentResolved() : false;
	if (!this->fIsXPointerResolved) {
		this->fIsXPointerResolved = resolved;
	}
	return resolved;
}

bool XPointerHandler::isChildFragmentResolved() {
	bool resolved = (this->fXPointerPart != nullptr) ? $nc(this->fXPointerPart)->isChildFragmentResolved() : false;
	return resolved;
}

bool XPointerHandler::isXPointerResolved() {
	return this->fIsXPointerResolved;
}

$XPointerPart* XPointerHandler::getXPointerPart() {
	return this->fXPointerPart;
}

void XPointerHandler::reportError($String* key, $ObjectArray* arguments) {
	$useLocalCurrentObjectStackCache();
	$init($XPointerMessageFormatter);
	$throwNew($XNIException, $($nc(($($nc(this->fErrorReporter)->getMessageFormatter($XPointerMessageFormatter::XPOINTER_DOMAIN))))->formatMessage($($nc(this->fErrorReporter)->getLocale()), key, arguments)));
}

void XPointerHandler::reportWarning($String* key, $ObjectArray* arguments) {
	$init($XPointerMessageFormatter);
	$nc(this->fXPointerErrorReporter)->reportError($XPointerMessageFormatter::XPOINTER_DOMAIN, key, arguments, $XMLErrorReporter::SEVERITY_WARNING);
}

void XPointerHandler::initErrorReporter() {
	if (this->fXPointerErrorReporter == nullptr) {
		$set(this, fXPointerErrorReporter, $new($XMLErrorReporter));
	}
	if (this->fErrorHandler == nullptr) {
		$set(this, fErrorHandler, $new($XPointerErrorHandler));
	}
	$init($XPointerMessageFormatter);
	$nc(this->fXPointerErrorReporter)->putMessageFormatter($XPointerMessageFormatter::XPOINTER_DOMAIN, $$new($XPointerMessageFormatter));
}

void XPointerHandler::init() {
	$nc(this->fXPointerParts)->clear();
	$set(this, fXPointerPart, nullptr);
	this->fFoundMatchingPtrPart = false;
	this->fIsXPointerResolved = false;
	initErrorReporter();
}

$ArrayList* XPointerHandler::getPointerParts() {
	return this->fXPointerParts;
}

void XPointerHandler::comment($XMLString* text, $Augmentations* augs) {
	if (!isChildFragmentResolved()) {
		return;
	}
	$XIncludeHandler::comment(text, augs);
}

void XPointerHandler::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	if (!isChildFragmentResolved()) {
		return;
	}
	$XIncludeHandler::processingInstruction(target, data, augs);
}

void XPointerHandler::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	if (!resolveXPointer(element, attributes, augs, $XPointerPart::EVENT_ELEMENT_START)) {
		if (this->fFixupBase) {
			processXMLBaseAttributes(attributes);
		}
		if (this->fFixupLang) {
			processXMLLangAttributes(attributes);
		}
		$nc(this->fNamespaceContext)->setContextInvalid();
		return;
	}
	$XIncludeHandler::startElement(element, attributes, augs);
}

void XPointerHandler::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	if (!resolveXPointer(element, attributes, augs, $XPointerPart::EVENT_ELEMENT_EMPTY)) {
		if (this->fFixupBase) {
			processXMLBaseAttributes(attributes);
		}
		if (this->fFixupLang) {
			processXMLLangAttributes(attributes);
		}
		$nc(this->fNamespaceContext)->setContextInvalid();
		return;
	}
	$XIncludeHandler::emptyElement(element, attributes, augs);
}

void XPointerHandler::characters($XMLString* text, $Augmentations* augs) {
	if (!isChildFragmentResolved()) {
		return;
	}
	$XIncludeHandler::characters(text, augs);
}

void XPointerHandler::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	if (!isChildFragmentResolved()) {
		return;
	}
	$XIncludeHandler::ignorableWhitespace(text, augs);
}

void XPointerHandler::endElement($QName* element, $Augmentations* augs) {
	if (!resolveXPointer(element, nullptr, augs, $XPointerPart::EVENT_ELEMENT_END)) {
		return;
	}
	$XIncludeHandler::endElement(element, augs);
}

void XPointerHandler::startCDATA($Augmentations* augs) {
	if (!isChildFragmentResolved()) {
		return;
	}
	$XIncludeHandler::startCDATA(augs);
}

void XPointerHandler::endCDATA($Augmentations* augs) {
	if (!isChildFragmentResolved()) {
		return;
	}
	$XIncludeHandler::endCDATA(augs);
}

void XPointerHandler::setProperty($String* propertyId, Object$* value) {
	$init($Constants);
	if (propertyId == $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY})) {
		if (value != nullptr) {
			$set(this, fXPointerErrorReporter, $cast($XMLErrorReporter, value));
		} else {
			$set(this, fXPointerErrorReporter, nullptr);
		}
	}
	if (propertyId == $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY})) {
		if (value != nullptr) {
			$set(this, fErrorHandler, $cast($XMLErrorHandler, value));
		} else {
			$set(this, fErrorHandler, nullptr);
		}
	}
	if (propertyId == $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_LANGUAGE_FEATURE})) {
		if (value != nullptr) {
			this->fFixupLang = $nc(($cast($Boolean, value)))->booleanValue();
		} else {
			this->fFixupLang = false;
		}
	}
	if (propertyId == $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FIXUP_BASE_URIS_FEATURE})) {
		if (value != nullptr) {
			this->fFixupBase = $nc(($cast($Boolean, value)))->booleanValue();
		} else {
			this->fFixupBase = false;
		}
	}
	if (propertyId == $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY})) {
		$set(this, fNamespaceContext, $cast($XIncludeNamespaceSupport, value));
	}
	$XIncludeHandler::setProperty(propertyId, value);
}

XPointerHandler::XPointerHandler() {
}

$Class* XPointerHandler::load$($String* name, bool initialize) {
	$loadClass(XPointerHandler, name, initialize, &_XPointerHandler_ClassInfo_, allocate$XPointerHandler);
	return class$;
}

$Class* XPointerHandler::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com