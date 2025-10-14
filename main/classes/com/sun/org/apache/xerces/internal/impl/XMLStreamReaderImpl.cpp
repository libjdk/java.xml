#include <com/sun/org/apache/xerces/internal/impl/XMLStreamReaderImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11DocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$Driver.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLStreamReaderImpl$1.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceContextWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesIteratorImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/xml/internal/stream/Entity$ExternalEntity.h>
#include <com/sun/xml/internal/stream/Entity$InternalEntity.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <com/sun/xml/internal/stream/StaxErrorReporter.h>
#include <com/sun/xml/internal/stream/XMLBufferListener.h>
#include <com/sun/xml/internal/stream/XMLEntityStorage.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLNotationDecl.h>
#include <com/sun/xml/internal/stream/events/EntityDeclarationImpl.h>
#include <com/sun/xml/internal/stream/events/NotationDeclarationImpl.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedReader.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CDATA
#undef CHARACTERS
#undef COMMENT
#undef DEBUG
#undef DEFAULT_NS_PREFIX
#undef DTD
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ENTITY_REFERENCE
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef IS_VALIDATING
#undef NAMESPACE
#undef PROCESSING_INSTRUCTION
#undef READER_IN_DEFINED_STATE
#undef SCANNER_STATE_DTD_EXTERNAL
#undef SCANNER_STATE_PROLOG
#undef SPACE
#undef START_DOCUMENT
#undef START_ELEMENT
#undef STAX_ENTITIES
#undef STAX_NOTATIONS
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef XERCES_PROPERTY_PREFIX

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XML11DocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl;
using $XML11NSDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11NSDocumentScannerImpl;
using $XMLDTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentFragmentScannerImpl$Driver = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLNSDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl;
using $XMLScanner = ::com::sun::org::apache::xerces::internal::impl::XMLScanner;
using $XMLStreamReaderImpl$1 = ::com::sun::org::apache::xerces::internal::impl::XMLStreamReaderImpl$1;
using $NamespaceContextWrapper = ::com::sun::org::apache::xerces::internal::util::NamespaceContextWrapper;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLAttributesIteratorImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesIteratorImpl;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $1NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $1QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLDTDScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $Entity = ::com::sun::xml::internal::stream::Entity;
using $Entity$ExternalEntity = ::com::sun::xml::internal::stream::Entity$ExternalEntity;
using $Entity$InternalEntity = ::com::sun::xml::internal::stream::Entity$InternalEntity;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $StaxErrorReporter = ::com::sun::xml::internal::stream::StaxErrorReporter;
using $XMLBufferListener = ::com::sun::xml::internal::stream::XMLBufferListener;
using $XMLEntityStorage = ::com::sun::xml::internal::stream::XMLEntityStorage;
using $DTDGrammar = ::com::sun::xml::internal::stream::dtd::nonvalidating::DTDGrammar;
using $XMLNotationDecl = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLNotationDecl;
using $EntityDeclarationImpl = ::com::sun::xml::internal::stream::events::EntityDeclarationImpl;
using $NotationDeclarationImpl = ::com::sun::xml::internal::stream::events::NotationDeclarationImpl;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedReader = ::java::io::BufferedReader;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $XMLConstants = ::javax::xml::XMLConstants;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLStreamReaderImpl_FieldInfo_[] = {
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLStreamReaderImpl, ENTITY_MANAGER)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLStreamReaderImpl, ERROR_REPORTER)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLStreamReaderImpl, SYMBOL_TABLE)},
	{"READER_IN_DEFINED_STATE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLStreamReaderImpl, READER_IN_DEFINED_STATE)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(XMLStreamReaderImpl, fSymbolTable)},
	{"fScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $PROTECTED, $field(XMLStreamReaderImpl, fScanner)},
	{"fNamespaceContextWrapper", "Lcom/sun/org/apache/xerces/internal/util/NamespaceContextWrapper;", nullptr, $PROTECTED, $field(XMLStreamReaderImpl, fNamespaceContextWrapper)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(XMLStreamReaderImpl, fEntityManager)},
	{"fErrorReporter", "Lcom/sun/xml/internal/stream/StaxErrorReporter;", nullptr, $PROTECTED, $field(XMLStreamReaderImpl, fErrorReporter)},
	{"fEntityScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityScanner;", nullptr, $PROTECTED, $field(XMLStreamReaderImpl, fEntityScanner)},
	{"fInputSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PROTECTED, $field(XMLStreamReaderImpl, fInputSource)},
	{"fPropertyManager", "Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;", nullptr, $PROTECTED, $field(XMLStreamReaderImpl, fPropertyManager)},
	{"fEventType", "I", nullptr, $PRIVATE, $field(XMLStreamReaderImpl, fEventType)},
	{"DEBUG", "Z", nullptr, $STATIC | $FINAL, $constField(XMLStreamReaderImpl, DEBUG)},
	{"fReuse", "Z", nullptr, $PRIVATE, $field(XMLStreamReaderImpl, fReuse)},
	{"fReaderInDefinedState", "Z", nullptr, $PRIVATE, $field(XMLStreamReaderImpl, fReaderInDefinedState)},
	{"fDTDDecl", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLStreamReaderImpl, fDTDDecl)},
	{"versionStr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLStreamReaderImpl, versionStr)},
	{}
};

$MethodInfo _XMLStreamReaderImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLStreamReaderImpl::*)($InputStream*,$PropertyManager*)>(&XMLStreamReaderImpl::init$)), "javax.xml.stream.XMLStreamException"},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLStreamReaderImpl::*)($String*,$PropertyManager*)>(&XMLStreamReaderImpl::init$)), "javax.xml.stream.XMLStreamException"},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLStreamReaderImpl::*)($InputStream*,$String*,$PropertyManager*)>(&XMLStreamReaderImpl::init$)), "javax.xml.stream.XMLStreamException"},
	{"<init>", "(Ljava/io/Reader;Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLStreamReaderImpl::*)($Reader*,$PropertyManager*)>(&XMLStreamReaderImpl::init$)), "javax.xml.stream.XMLStreamException"},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLStreamReaderImpl::*)($XMLInputSource*,$PropertyManager*)>(&XMLStreamReaderImpl::init$)), "javax.xml.stream.XMLStreamException"},
	{"canReuse", "()Z", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"convertXNIQNametoJavaxQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeName", "(I)Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"getAttributeNamespace", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributePrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeQName", "(I)Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"getAttributeType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCharacterEncodingScheme", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getElementText", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEntityDecls", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/stream/events/EntityDeclaration;>;", $PROTECTED},
	{"getEventType", "()I", nullptr, $PUBLIC},
	{"getEventTypeString", "(I)Ljava/lang/String;", nullptr, $STATIC | $FINAL, $method(static_cast<$String*(*)(int32_t)>(&XMLStreamReaderImpl::getEventTypeString))},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC},
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC},
	{"getNamespaceCount", "()I", nullptr, $PUBLIC},
	{"getNamespacePrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNotationDecls", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/stream/events/NotationDeclaration;>;", $PROTECTED},
	{"getPIData", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPITarget", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getPropertyManager", "()Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;", nullptr, $PROTECTED},
	{"getScanner", "()Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTextCharacters", "()[C", nullptr, $PUBLIC},
	{"getTextCharacters", "(I[CII)I", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"getTextLength", "()I", nullptr, $PUBLIC},
	{"getTextStart", "()I", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasAttributes", "()Z", nullptr, $PUBLIC},
	{"hasName", "()Z", nullptr, $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"hasText", "()Z", nullptr, $PUBLIC},
	{"hasValue", "()Z", nullptr, $PUBLIC},
	{"init", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $FINAL, $method(static_cast<void(XMLStreamReaderImpl::*)($PropertyManager*)>(&XMLStreamReaderImpl::init)), "javax.xml.stream.XMLStreamException"},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC},
	{"isCharacters", "()Z", nullptr, $PUBLIC},
	{"isEndElement", "()Z", nullptr, $PUBLIC},
	{"isStandalone", "()Z", nullptr, $PUBLIC},
	{"isStartElement", "()Z", nullptr, $PUBLIC},
	{"isWhiteSpace", "()Z", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"nextTag", "()I", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"pr", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&XMLStreamReaderImpl::pr))},
	{"require", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.xml.stream.XMLStreamException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(XMLStreamReaderImpl::*)($XMLInputSource*)>(&XMLStreamReaderImpl::setInputSource)), "javax.xml.stream.XMLStreamException"},
	{"setPropertyManager", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PROTECTED},
	{"standaloneSet", "()Z", nullptr, $PUBLIC},
	{"switchToXML11Scanner", "()V", nullptr, $PRIVATE, $method(static_cast<void(XMLStreamReaderImpl::*)()>(&XMLStreamReaderImpl::switchToXML11Scanner)), "java.io.IOException"},
	{}
};

$InnerClassInfo _XMLStreamReaderImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLStreamReaderImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLStreamReaderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLStreamReaderImpl",
	"java.lang.Object",
	"javax.xml.stream.XMLStreamReader",
	_XMLStreamReaderImpl_FieldInfo_,
	_XMLStreamReaderImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XMLStreamReaderImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLStreamReaderImpl$1"
};

$Object* allocate$XMLStreamReaderImpl($Class* clazz) {
	return $of($alloc(XMLStreamReaderImpl));
}


$String* XMLStreamReaderImpl::ENTITY_MANAGER = nullptr;

$String* XMLStreamReaderImpl::ERROR_REPORTER = nullptr;

$String* XMLStreamReaderImpl::SYMBOL_TABLE = nullptr;
$String* XMLStreamReaderImpl::READER_IN_DEFINED_STATE = nullptr;

void XMLStreamReaderImpl::init$($InputStream* inputStream, $PropertyManager* props) {
	$set(this, fSymbolTable, $new($SymbolTable));
	$set(this, fScanner, $new($XMLNSDocumentScannerImpl));
	$set(this, fNamespaceContextWrapper, $new($NamespaceContextWrapper, $cast($NamespaceSupport, $($nc(this->fScanner)->getNamespaceContext()))));
	$set(this, fEntityManager, $new($XMLEntityManager));
	$set(this, fErrorReporter, $new($StaxErrorReporter));
	$set(this, fEntityScanner, nullptr);
	$set(this, fInputSource, nullptr);
	$set(this, fPropertyManager, nullptr);
	this->fReuse = true;
	this->fReaderInDefinedState = true;
	$set(this, fDTDDecl, nullptr);
	$set(this, versionStr, nullptr);
	init(props);
	$var($XMLInputSource, inputSource, $new($XMLInputSource, ($String*)nullptr, ($String*)nullptr, ($String*)nullptr, inputStream, ($String*)nullptr));
	setInputSource(inputSource);
}

$XMLDocumentScannerImpl* XMLStreamReaderImpl::getScanner() {
	$init($System);
	$nc($System::out)->println("returning scanner"_s);
	return this->fScanner;
}

void XMLStreamReaderImpl::init$($String* systemid, $PropertyManager* props) {
	$set(this, fSymbolTable, $new($SymbolTable));
	$set(this, fScanner, $new($XMLNSDocumentScannerImpl));
	$set(this, fNamespaceContextWrapper, $new($NamespaceContextWrapper, $cast($NamespaceSupport, $($nc(this->fScanner)->getNamespaceContext()))));
	$set(this, fEntityManager, $new($XMLEntityManager));
	$set(this, fErrorReporter, $new($StaxErrorReporter));
	$set(this, fEntityScanner, nullptr);
	$set(this, fInputSource, nullptr);
	$set(this, fPropertyManager, nullptr);
	this->fReuse = true;
	this->fReaderInDefinedState = true;
	$set(this, fDTDDecl, nullptr);
	$set(this, versionStr, nullptr);
	init(props);
	$var($XMLInputSource, inputSource, $new($XMLInputSource, nullptr, systemid, nullptr, false));
	setInputSource(inputSource);
}

void XMLStreamReaderImpl::init$($InputStream* inputStream, $String* encoding, $PropertyManager* props) {
	$set(this, fSymbolTable, $new($SymbolTable));
	$set(this, fScanner, $new($XMLNSDocumentScannerImpl));
	$set(this, fNamespaceContextWrapper, $new($NamespaceContextWrapper, $cast($NamespaceSupport, $($nc(this->fScanner)->getNamespaceContext()))));
	$set(this, fEntityManager, $new($XMLEntityManager));
	$set(this, fErrorReporter, $new($StaxErrorReporter));
	$set(this, fEntityScanner, nullptr);
	$set(this, fInputSource, nullptr);
	$set(this, fPropertyManager, nullptr);
	this->fReuse = true;
	this->fReaderInDefinedState = true;
	$set(this, fDTDDecl, nullptr);
	$set(this, versionStr, nullptr);
	init(props);
	$var($XMLInputSource, inputSource, $new($XMLInputSource, ($String*)nullptr, ($String*)nullptr, ($String*)nullptr, static_cast<$InputStream*>($$new($BufferedInputStream, inputStream)), encoding));
	setInputSource(inputSource);
}

void XMLStreamReaderImpl::init$($Reader* reader, $PropertyManager* props) {
	$set(this, fSymbolTable, $new($SymbolTable));
	$set(this, fScanner, $new($XMLNSDocumentScannerImpl));
	$set(this, fNamespaceContextWrapper, $new($NamespaceContextWrapper, $cast($NamespaceSupport, $($nc(this->fScanner)->getNamespaceContext()))));
	$set(this, fEntityManager, $new($XMLEntityManager));
	$set(this, fErrorReporter, $new($StaxErrorReporter));
	$set(this, fEntityScanner, nullptr);
	$set(this, fInputSource, nullptr);
	$set(this, fPropertyManager, nullptr);
	this->fReuse = true;
	this->fReaderInDefinedState = true;
	$set(this, fDTDDecl, nullptr);
	$set(this, versionStr, nullptr);
	init(props);
	$var($XMLInputSource, inputSource, $new($XMLInputSource, ($String*)nullptr, ($String*)nullptr, ($String*)nullptr, static_cast<$Reader*>($$new($BufferedReader, reader)), ($String*)nullptr));
	setInputSource(inputSource);
}

void XMLStreamReaderImpl::init$($XMLInputSource* inputSource, $PropertyManager* props) {
	$set(this, fSymbolTable, $new($SymbolTable));
	$set(this, fScanner, $new($XMLNSDocumentScannerImpl));
	$set(this, fNamespaceContextWrapper, $new($NamespaceContextWrapper, $cast($NamespaceSupport, $($nc(this->fScanner)->getNamespaceContext()))));
	$set(this, fEntityManager, $new($XMLEntityManager));
	$set(this, fErrorReporter, $new($StaxErrorReporter));
	$set(this, fEntityScanner, nullptr);
	$set(this, fInputSource, nullptr);
	$set(this, fPropertyManager, nullptr);
	this->fReuse = true;
	this->fReaderInDefinedState = true;
	$set(this, fDTDDecl, nullptr);
	$set(this, versionStr, nullptr);
	init(props);
	setInputSource(inputSource);
}

void XMLStreamReaderImpl::setInputSource($XMLInputSource* inputSource) {
	this->fReuse = false;
	try {
		$nc(this->fScanner)->setInputSource(inputSource);
		if (this->fReaderInDefinedState) {
			this->fEventType = $nc(this->fScanner)->next();
			if (this->versionStr == nullptr) {
				$set(this, versionStr, getVersion());
			}
			if (this->fEventType == $XMLStreamConstants::START_DOCUMENT && this->versionStr != nullptr && $nc(this->versionStr)->equals("1.1"_s)) {
				switchToXML11Scanner();
			}
		}
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($XMLStreamException, static_cast<$Throwable*>(ex));
	} catch ($XNIException&) {
		$var($XNIException, ex, $catch());
		$var($String, var$0, ex->getMessage());
		$var($Location, var$1, getLocation());
		$throwNew($XMLStreamException, var$0, var$1, $(ex->getException()));
	}
}

void XMLStreamReaderImpl::init($PropertyManager* propertyManager) {
	$set(this, fPropertyManager, propertyManager);
	$nc(propertyManager)->setProperty(XMLStreamReaderImpl::SYMBOL_TABLE, this->fSymbolTable);
	propertyManager->setProperty(XMLStreamReaderImpl::ERROR_REPORTER, this->fErrorReporter);
	propertyManager->setProperty(XMLStreamReaderImpl::ENTITY_MANAGER, this->fEntityManager);
	reset();
}

bool XMLStreamReaderImpl::canReuse() {
	return this->fReuse;
}

void XMLStreamReaderImpl::reset() {
	this->fReuse = true;
	this->fEventType = 0;
	$nc(this->fEntityManager)->reset(this->fPropertyManager);
	$nc(this->fScanner)->reset(this->fPropertyManager);
	$set(this, fDTDDecl, nullptr);
	$set(this, fEntityScanner, $nc(this->fEntityManager)->getEntityScanner());
	this->fReaderInDefinedState = $nc(($cast($Boolean, $($nc(this->fPropertyManager)->getProperty(XMLStreamReaderImpl::READER_IN_DEFINED_STATE)))))->booleanValue();
	$set(this, versionStr, nullptr);
}

void XMLStreamReaderImpl::close() {
	this->fReuse = true;
}

$String* XMLStreamReaderImpl::getCharacterEncodingScheme() {
	return $nc(this->fScanner)->getCharacterEncodingScheme();
}

int32_t XMLStreamReaderImpl::getColumnNumber() {
	return $nc(this->fEntityScanner)->getColumnNumber();
}

$String* XMLStreamReaderImpl::getEncoding() {
	return $nc(this->fEntityScanner)->getEncoding();
}

int32_t XMLStreamReaderImpl::getEventType() {
	return this->fEventType;
}

int32_t XMLStreamReaderImpl::getLineNumber() {
	return $nc(this->fEntityScanner)->getLineNumber();
}

$String* XMLStreamReaderImpl::getLocalName() {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT) {
		return $nc($($nc(this->fScanner)->getElementQName()))->localpart;
	} else if (this->fEventType == $XMLEvent::ENTITY_REFERENCE) {
		return $nc(this->fScanner)->getEntityName();
	}
	$throwNew($IllegalStateException, $$str({"Method getLocalName() cannot be called for "_s, $(getEventTypeString(this->fEventType)), " event."_s}));
}

$String* XMLStreamReaderImpl::getNamespaceURI() {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT) {
		return $nc($($nc(this->fScanner)->getElementQName()))->uri;
	}
	return nullptr;
}

$String* XMLStreamReaderImpl::getPIData() {
	if (this->fEventType == $XMLEvent::PROCESSING_INSTRUCTION) {
		return $nc($($nc(this->fScanner)->getPIData()))->toString();
	} else {
		$throwNew($IllegalStateException, $$str({"Current state of the parser is "_s, $(getEventTypeString(this->fEventType)), " But Expected state is "_s, $$str($XMLEvent::PROCESSING_INSTRUCTION)}));
	}
}

$String* XMLStreamReaderImpl::getPITarget() {
	if (this->fEventType == $XMLEvent::PROCESSING_INSTRUCTION) {
		return $nc(this->fScanner)->getPITarget();
	} else {
		$throwNew($IllegalStateException, $$str({"Current state of the parser is "_s, $(getEventTypeString(this->fEventType)), " But Expected state is "_s, $$str($XMLEvent::PROCESSING_INSTRUCTION)}));
	}
}

$String* XMLStreamReaderImpl::getPrefix() {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT) {
		$var($String, prefix, $nc($($nc(this->fScanner)->getElementQName()))->prefix);
		$init($XMLConstants);
		return prefix == nullptr ? $XMLConstants::DEFAULT_NS_PREFIX : prefix;
	}
	return nullptr;
}

$chars* XMLStreamReaderImpl::getTextCharacters() {
	if (this->fEventType == $XMLEvent::CHARACTERS || this->fEventType == $XMLEvent::COMMENT || this->fEventType == $XMLEvent::CDATA || this->fEventType == $XMLEvent::SPACE) {
		return $nc($($nc(this->fScanner)->getCharacterData()))->ch;
	} else {
		$var($String, var$7, $$str({"Current state = "_s, $(getEventTypeString(this->fEventType)), " is not among the states "_s}));
		$var($String, var$6, $$concat(var$7, $(getEventTypeString($XMLEvent::CHARACTERS))));
		$var($String, var$5, $$concat(var$6, " , "));
		$var($String, var$4, $$concat(var$5, $(getEventTypeString($XMLEvent::COMMENT))));
		$var($String, var$3, $$concat(var$4, " , "));
		$var($String, var$2, $$concat(var$3, $(getEventTypeString($XMLEvent::CDATA))));
		$var($String, var$1, $$concat(var$2, " , "));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::SPACE))));
		$throwNew($IllegalStateException, $$concat(var$0, " valid for getTextCharacters() "));
	}
}

int32_t XMLStreamReaderImpl::getTextLength() {
	if (this->fEventType == $XMLEvent::CHARACTERS || this->fEventType == $XMLEvent::COMMENT || this->fEventType == $XMLEvent::CDATA || this->fEventType == $XMLEvent::SPACE) {
		return $nc($($nc(this->fScanner)->getCharacterData()))->length;
	} else {
		$var($String, var$7, $$str({"Current state = "_s, $(getEventTypeString(this->fEventType)), " is not among the states "_s}));
		$var($String, var$6, $$concat(var$7, $(getEventTypeString($XMLEvent::CHARACTERS))));
		$var($String, var$5, $$concat(var$6, " , "));
		$var($String, var$4, $$concat(var$5, $(getEventTypeString($XMLEvent::COMMENT))));
		$var($String, var$3, $$concat(var$4, " , "));
		$var($String, var$2, $$concat(var$3, $(getEventTypeString($XMLEvent::CDATA))));
		$var($String, var$1, $$concat(var$2, " , "));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::SPACE))));
		$throwNew($IllegalStateException, $$concat(var$0, " valid for getTextLength() "));
	}
}

int32_t XMLStreamReaderImpl::getTextStart() {
	if (this->fEventType == $XMLEvent::CHARACTERS || this->fEventType == $XMLEvent::COMMENT || this->fEventType == $XMLEvent::CDATA || this->fEventType == $XMLEvent::SPACE) {
		return $nc($($nc(this->fScanner)->getCharacterData()))->offset;
	} else {
		$var($String, var$7, $$str({"Current state = "_s, $(getEventTypeString(this->fEventType)), " is not among the states "_s}));
		$var($String, var$6, $$concat(var$7, $(getEventTypeString($XMLEvent::CHARACTERS))));
		$var($String, var$5, $$concat(var$6, " , "));
		$var($String, var$4, $$concat(var$5, $(getEventTypeString($XMLEvent::COMMENT))));
		$var($String, var$3, $$concat(var$4, " , "));
		$var($String, var$2, $$concat(var$3, $(getEventTypeString($XMLEvent::CDATA))));
		$var($String, var$1, $$concat(var$2, " , "));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::SPACE))));
		$throwNew($IllegalStateException, $$concat(var$0, " valid for getTextStart() "));
	}
}

$String* XMLStreamReaderImpl::getValue() {
	if (this->fEventType == $XMLEvent::PROCESSING_INSTRUCTION) {
		return $nc($($nc(this->fScanner)->getPIData()))->toString();
	} else if (this->fEventType == $XMLEvent::COMMENT) {
		return $nc(this->fScanner)->getComment();
	} else if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT) {
		return $nc($($nc(this->fScanner)->getElementQName()))->localpart;
	} else if (this->fEventType == $XMLEvent::CHARACTERS) {
		return $nc($($nc(this->fScanner)->getCharacterData()))->toString();
	}
	return nullptr;
}

$String* XMLStreamReaderImpl::getVersion() {
	$var($String, version, $nc(this->fEntityScanner)->getXMLVersion());
	return "1.0"_s->equals(version) && !$nc(this->fEntityScanner)->xmlVersionSetExplicitly ? ($String*)nullptr : version;
}

bool XMLStreamReaderImpl::hasAttributes() {
	return $nc($($nc(this->fScanner)->getAttributeIterator()))->getLength() > 0 ? true : false;
}

bool XMLStreamReaderImpl::hasName() {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT) {
		return true;
	} else {
		return false;
	}
}

bool XMLStreamReaderImpl::hasNext() {
	if (this->fEventType == -1) {
		return false;
	}
	return this->fEventType != $XMLEvent::END_DOCUMENT;
}

bool XMLStreamReaderImpl::hasValue() {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT || this->fEventType == $XMLEvent::ENTITY_REFERENCE || this->fEventType == $XMLEvent::PROCESSING_INSTRUCTION || this->fEventType == $XMLEvent::COMMENT || this->fEventType == $XMLEvent::CHARACTERS) {
		return true;
	} else {
		return false;
	}
}

bool XMLStreamReaderImpl::isEndElement() {
	return this->fEventType == $XMLEvent::END_ELEMENT;
}

bool XMLStreamReaderImpl::isStandalone() {
	return $nc(this->fScanner)->isStandAlone();
}

bool XMLStreamReaderImpl::isStartElement() {
	return this->fEventType == $XMLEvent::START_ELEMENT;
}

bool XMLStreamReaderImpl::isWhiteSpace() {
	if (isCharacters() || (this->fEventType == $XMLStreamConstants::CDATA)) {
		$var($chars, ch, this->getTextCharacters());
		int32_t start = this->getTextStart();
		int32_t end = start + this->getTextLength();
		for (int32_t i = start; i < end; ++i) {
			if (!$XMLChar::isSpace($nc(ch)->get(i))) {
				return false;
			}
		}
		return true;
	}
	return false;
}

int32_t XMLStreamReaderImpl::next() {
	if (!hasNext()) {
		if (this->fEventType != -1) {
			$throwNew($NoSuchElementException, "END_DOCUMENT reached: no more elements on the stream."_s);
		} else {
			$throwNew($XMLStreamException, "Error processing input source. The input stream is not complete."_s);
		}
	}
	try {
		this->fEventType = $nc(this->fScanner)->next();
		if (this->versionStr == nullptr) {
			$set(this, versionStr, getVersion());
		}
		if (this->fEventType == $XMLStreamConstants::START_DOCUMENT && this->versionStr != nullptr && $nc(this->versionStr)->equals("1.1"_s)) {
			switchToXML11Scanner();
		}
		if (this->fEventType == $XMLStreamConstants::CHARACTERS || this->fEventType == $XMLStreamConstants::ENTITY_REFERENCE || this->fEventType == $XMLStreamConstants::PROCESSING_INSTRUCTION || this->fEventType == $XMLStreamConstants::COMMENT || this->fEventType == $XMLStreamConstants::CDATA) {
			$nc(this->fEntityScanner)->checkNodeCount($nc(this->fEntityScanner)->fCurrentEntity);
		}
		return this->fEventType;
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		if ($nc(this->fScanner)->fScannerState == $XMLDocumentScannerImpl::SCANNER_STATE_DTD_EXTERNAL) {
			$init($XMLInputFactory);
			$var($Boolean, isValidating, $cast($Boolean, $nc(this->fPropertyManager)->getProperty($XMLInputFactory::IS_VALIDATING)));
			if (isValidating != nullptr && !isValidating->booleanValue()) {
				this->fEventType = $XMLEvent::DTD;
				$nc(this->fScanner)->setScannerState($XMLDocumentScannerImpl::SCANNER_STATE_PROLOG);
				$nc(this->fScanner)->setDriver($nc(this->fScanner)->fPrologDriver);
				if (this->fDTDDecl == nullptr || $nc(this->fDTDDecl)->length() == 0) {
					$set(this, fDTDDecl, "<!-- Exception scanning External DTD Subset.  True contents of DTD cannot be determined.  Processing will continue as XMLInputFactory.IS_VALIDATING == false. -->"_s);
				}
				return $XMLEvent::DTD;
			}
		}
		$var($String, var$0, ex->getMessage());
		$throwNew($XMLStreamException, var$0, $(getLocation()), ex);
	} catch ($XNIException&) {
		$var($XNIException, ex, $catch());
		$var($String, var$1, ex->getMessage());
		$var($Location, var$2, getLocation());
		$throwNew($XMLStreamException, var$1, var$2, $(ex->getException()));
	}
	$shouldNotReachHere();
}

void XMLStreamReaderImpl::switchToXML11Scanner() {
	int32_t oldEntityDepth = $nc(this->fScanner)->fEntityDepth;
	$var($1NamespaceContext, oldNamespaceContext, $nc(this->fScanner)->fNamespaceContext);
	$set(this, fScanner, $new($XML11NSDocumentScannerImpl));
	$nc(this->fScanner)->reset(this->fPropertyManager);
	$nc(this->fScanner)->setPropertyManager(this->fPropertyManager);
	$set(this, fEntityScanner, $nc(this->fEntityManager)->getEntityScanner());
	$nc(this->fEntityScanner)->registerListener(this->fScanner);
	$nc($nc(this->fEntityManager)->fCurrentEntity)->mayReadChunks = true;
	$nc(this->fScanner)->setScannerState($XMLEvent::START_DOCUMENT);
	$nc(this->fScanner)->fEntityDepth = oldEntityDepth;
	$set($nc(this->fScanner), fNamespaceContext, oldNamespaceContext);
	this->fEventType = $nc(this->fScanner)->next();
}

$String* XMLStreamReaderImpl::getEventTypeString(int32_t eventType) {
	$init(XMLStreamReaderImpl);
	switch (eventType) {
	case $XMLEvent::START_ELEMENT:
		{
			return "START_ELEMENT"_s;
		}
	case $XMLEvent::END_ELEMENT:
		{
			return "END_ELEMENT"_s;
		}
	case $XMLEvent::PROCESSING_INSTRUCTION:
		{
			return "PROCESSING_INSTRUCTION"_s;
		}
	case $XMLEvent::CHARACTERS:
		{
			return "CHARACTERS"_s;
		}
	case $XMLEvent::COMMENT:
		{
			return "COMMENT"_s;
		}
	case $XMLEvent::START_DOCUMENT:
		{
			return "START_DOCUMENT"_s;
		}
	case $XMLEvent::END_DOCUMENT:
		{
			return "END_DOCUMENT"_s;
		}
	case $XMLEvent::ENTITY_REFERENCE:
		{
			return "ENTITY_REFERENCE"_s;
		}
	case $XMLEvent::ATTRIBUTE:
		{
			return "ATTRIBUTE"_s;
		}
	case $XMLEvent::DTD:
		{
			return "DTD"_s;
		}
	case $XMLEvent::CDATA:
		{
			return "CDATA"_s;
		}
	case $XMLEvent::SPACE:
		{
			return "SPACE"_s;
		}
	}
	return $str({"UNKNOWN_EVENT_TYPE, "_s, $($String::valueOf(eventType))});
}

int32_t XMLStreamReaderImpl::getAttributeCount() {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::ATTRIBUTE) {
		return $nc($($nc(this->fScanner)->getAttributeIterator()))->getLength();
	} else {
		$var($String, var$1, $$str({"Current state is not among the states "_s, $(getEventTypeString($XMLEvent::START_ELEMENT)), " , "_s}));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::ATTRIBUTE))));
		$throwNew($IllegalStateException, $$concat(var$0, "valid for getAttributeCount()"));
	}
}

$QName* XMLStreamReaderImpl::getAttributeName(int32_t index) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::ATTRIBUTE) {
		return convertXNIQNametoJavaxQName($($nc($($nc(this->fScanner)->getAttributeIterator()))->getQualifiedName(index)));
	} else {
		$var($String, var$1, $$str({"Current state is not among the states "_s, $(getEventTypeString($XMLEvent::START_ELEMENT)), " , "_s}));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::ATTRIBUTE))));
		$throwNew($IllegalStateException, $$concat(var$0, "valid for getAttributeName()"));
	}
}

$String* XMLStreamReaderImpl::getAttributeLocalName(int32_t index) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::ATTRIBUTE) {
		return $nc($($nc(this->fScanner)->getAttributeIterator()))->getLocalName(index);
	} else {
		$throwNew($IllegalStateException);
	}
}

$String* XMLStreamReaderImpl::getAttributeNamespace(int32_t index) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::ATTRIBUTE) {
		return $nc($($nc(this->fScanner)->getAttributeIterator()))->getURI(index);
	} else {
		$var($String, var$1, $$str({"Current state is not among the states "_s, $(getEventTypeString($XMLEvent::START_ELEMENT)), " , "_s}));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::ATTRIBUTE))));
		$throwNew($IllegalStateException, $$concat(var$0, "valid for getAttributeNamespace()"));
	}
}

$String* XMLStreamReaderImpl::getAttributePrefix(int32_t index) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::ATTRIBUTE) {
		return $nc($($nc(this->fScanner)->getAttributeIterator()))->getPrefix(index);
	} else {
		$var($String, var$1, $$str({"Current state is not among the states "_s, $(getEventTypeString($XMLEvent::START_ELEMENT)), " , "_s}));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::ATTRIBUTE))));
		$throwNew($IllegalStateException, $$concat(var$0, "valid for getAttributePrefix()"));
	}
}

$QName* XMLStreamReaderImpl::getAttributeQName(int32_t index) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::ATTRIBUTE) {
		$var($String, localName, $nc($($nc(this->fScanner)->getAttributeIterator()))->getLocalName(index));
		$var($String, uri, $nc($($nc(this->fScanner)->getAttributeIterator()))->getURI(index));
		return $new($QName, uri, localName);
	} else {
		$var($String, var$1, $$str({"Current state is not among the states "_s, $(getEventTypeString($XMLEvent::START_ELEMENT)), " , "_s}));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::ATTRIBUTE))));
		$throwNew($IllegalStateException, $$concat(var$0, "valid for getAttributeQName()"));
	}
}

$String* XMLStreamReaderImpl::getAttributeType(int32_t index) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::ATTRIBUTE) {
		return $nc($($nc(this->fScanner)->getAttributeIterator()))->getType(index);
	} else {
		$var($String, var$1, $$str({"Current state is not among the states "_s, $(getEventTypeString($XMLEvent::START_ELEMENT)), " , "_s}));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::ATTRIBUTE))));
		$throwNew($IllegalStateException, $$concat(var$0, "valid for getAttributeType()"));
	}
}

$String* XMLStreamReaderImpl::getAttributeValue(int32_t index) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::ATTRIBUTE) {
		return $nc($($nc(this->fScanner)->getAttributeIterator()))->getValue(index);
	} else {
		$var($String, var$1, $$str({"Current state is not among the states "_s, $(getEventTypeString($XMLEvent::START_ELEMENT)), " , "_s}));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::ATTRIBUTE))));
		$throwNew($IllegalStateException, $$concat(var$0, "valid for getAttributeValue()"));
	}
}

$String* XMLStreamReaderImpl::getAttributeValue($String* namespaceURI, $String* localName) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::ATTRIBUTE) {
		$var($XMLAttributesImpl, attributes, $nc(this->fScanner)->getAttributeIterator());
		if (namespaceURI == nullptr) {
			return $nc(attributes)->getValue(attributes->getIndexByLocalName(localName));
		} else {
			return $nc($($nc(this->fScanner)->getAttributeIterator()))->getValue($nc(namespaceURI)->length() == 0 ? ($String*)nullptr : namespaceURI, localName);
		}
	} else {
		$var($String, var$1, $$str({"Current state is not among the states "_s, $(getEventTypeString($XMLEvent::START_ELEMENT)), " , "_s}));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::ATTRIBUTE))));
		$throwNew($IllegalStateException, $$concat(var$0, "valid for getAttributeValue()"));
	}
}

$String* XMLStreamReaderImpl::getElementText() {
	if (getEventType() != $XMLStreamConstants::START_ELEMENT) {
		$throwNew($XMLStreamException, "parser must be on START_ELEMENT to read next text"_s, $(getLocation()));
	}
	int32_t eventType = next();
	$var($StringBuilder, content, $new($StringBuilder));
	while (eventType != $XMLStreamConstants::END_ELEMENT) {
		if (eventType == $XMLStreamConstants::CHARACTERS || eventType == $XMLStreamConstants::CDATA || eventType == $XMLStreamConstants::SPACE || eventType == $XMLStreamConstants::ENTITY_REFERENCE) {
			content->append($(getText()));
		} else if (eventType == $XMLStreamConstants::PROCESSING_INSTRUCTION || eventType == $XMLStreamConstants::COMMENT) {
		} else if (eventType == $XMLStreamConstants::END_DOCUMENT) {
			$throwNew($XMLStreamException, "unexpected end of document when reading element text content"_s);
		} else if (eventType == $XMLStreamConstants::START_ELEMENT) {
			$throwNew($XMLStreamException, "elementGetText() function expects text only elment but START_ELEMENT was encountered."_s, $(getLocation()));
		} else {
			$throwNew($XMLStreamException, $$str({"Unexpected event type "_s, $$str(eventType)}), $(getLocation()));
		}
		eventType = next();
	}
	return content->toString();
}

$Location* XMLStreamReaderImpl::getLocation() {
	return $new($XMLStreamReaderImpl$1, this);
}

$QName* XMLStreamReaderImpl::getName() {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT) {
		return convertXNIQNametoJavaxQName($($nc(this->fScanner)->getElementQName()));
	} else {
		$var($String, var$2, $$str({"Illegal to call getName() when event type is "_s, $(getEventTypeString(this->fEventType)), ". Valid states are "_s}));
		$var($String, var$1, $$concat(var$2, $(getEventTypeString($XMLEvent::START_ELEMENT))));
		$var($String, var$0, $$concat(var$1, ", "));
		$throwNew($IllegalStateException, $$concat(var$0, $(getEventTypeString($XMLEvent::END_ELEMENT))));
	}
}

$NamespaceContext* XMLStreamReaderImpl::getNamespaceContext() {
	return this->fNamespaceContextWrapper;
}

int32_t XMLStreamReaderImpl::getNamespaceCount() {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT || this->fEventType == $XMLEvent::NAMESPACE) {
		return $nc($($nc(this->fScanner)->getNamespaceContext()))->getDeclaredPrefixCount();
	} else {
		$var($String, var$5, $$str({"Current event state is "_s, $(getEventTypeString(this->fEventType)), " is not among the states "_s}));
		$var($String, var$4, $$concat(var$5, $(getEventTypeString($XMLEvent::START_ELEMENT))));
		$var($String, var$3, $$concat(var$4, ", "));
		$var($String, var$2, $$concat(var$3, $(getEventTypeString($XMLEvent::END_ELEMENT))));
		$var($String, var$1, $$concat(var$2, ", "));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::NAMESPACE))));
		$throwNew($IllegalStateException, $$concat(var$0, " valid for getNamespaceCount()."));
	}
}

$String* XMLStreamReaderImpl::getNamespacePrefix(int32_t index) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT || this->fEventType == $XMLEvent::NAMESPACE) {
		$var($String, prefix, $nc($($nc(this->fScanner)->getNamespaceContext()))->getDeclaredPrefixAt(index));
		return $nc(prefix)->equals(""_s) ? ($String*)nullptr : prefix;
	} else {
		$var($String, var$5, $$str({"Current state "_s, $(getEventTypeString(this->fEventType)), " is not among the states "_s}));
		$var($String, var$4, $$concat(var$5, $(getEventTypeString($XMLEvent::START_ELEMENT))));
		$var($String, var$3, $$concat(var$4, ", "));
		$var($String, var$2, $$concat(var$3, $(getEventTypeString($XMLEvent::END_ELEMENT))));
		$var($String, var$1, $$concat(var$2, ", "));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::NAMESPACE))));
		$throwNew($IllegalStateException, $$concat(var$0, " valid for getNamespacePrefix()."));
	}
}

$String* XMLStreamReaderImpl::getNamespaceURI(int32_t index) {
	if (this->fEventType == $XMLEvent::START_ELEMENT || this->fEventType == $XMLEvent::END_ELEMENT || this->fEventType == $XMLEvent::NAMESPACE) {
		return $nc($($nc(this->fScanner)->getNamespaceContext()))->getURI($($nc($($nc(this->fScanner)->getNamespaceContext()))->getDeclaredPrefixAt(index)));
	} else {
		$var($String, var$5, $$str({"Current state "_s, $(getEventTypeString(this->fEventType)), " is not among the states "_s}));
		$var($String, var$4, $$concat(var$5, $(getEventTypeString($XMLEvent::START_ELEMENT))));
		$var($String, var$3, $$concat(var$4, ", "));
		$var($String, var$2, $$concat(var$3, $(getEventTypeString($XMLEvent::END_ELEMENT))));
		$var($String, var$1, $$concat(var$2, ", "));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::NAMESPACE))));
		$throwNew($IllegalStateException, $$concat(var$0, " valid for getNamespaceURI()."));
	}
}

$Object* XMLStreamReaderImpl::getProperty($String* name) {
	if (name == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	if (this->fPropertyManager != nullptr) {
		$init($PropertyManager);
		if ($nc(name)->equals($PropertyManager::STAX_NOTATIONS)) {
			return $of(getNotationDecls());
		} else {
			if (name->equals($PropertyManager::STAX_ENTITIES)) {
				return $of(getEntityDecls());
			} else {
				return $of($nc(this->fPropertyManager)->getProperty(name));
			}
		}
	}
	return $of(nullptr);
}

$String* XMLStreamReaderImpl::getText() {
	if (this->fEventType == $XMLEvent::CHARACTERS || this->fEventType == $XMLEvent::COMMENT || this->fEventType == $XMLEvent::CDATA || this->fEventType == $XMLEvent::SPACE) {
		return $nc($($nc(this->fScanner)->getCharacterData()))->toString();
	} else if (this->fEventType == $XMLEvent::ENTITY_REFERENCE) {
		$var($String, name, $nc(this->fScanner)->getEntityName());
		if (name != nullptr) {
			if ($nc(this->fScanner)->foundBuiltInRefs) {
				return $nc($($nc(this->fScanner)->getCharacterData()))->toString();
			}
			$var($XMLEntityStorage, entityStore, $nc(this->fEntityManager)->getEntityStore());
			$var($Entity, en, $nc(entityStore)->getEntity(name));
			if (en == nullptr) {
				return nullptr;
			}
			if ($nc(en)->isExternal()) {
				return $nc($nc(($cast($Entity$ExternalEntity, en)))->entityLocation)->getExpandedSystemId();
			} else {
				return $nc(($cast($Entity$InternalEntity, en)))->text;
			}
		} else {
			return nullptr;
		}
	} else if (this->fEventType == $XMLEvent::DTD) {
		if (this->fDTDDecl != nullptr) {
			return this->fDTDDecl;
		}
		$var($XMLStringBuffer, tmpBuffer, $nc(this->fScanner)->getDTDDecl());
		$set(this, fDTDDecl, $nc(tmpBuffer)->toString());
		return this->fDTDDecl;
	} else {
		$var($String, var$11, $$str({"Current state "_s, $(getEventTypeString(this->fEventType)), " is not among the states"_s}));
		$var($String, var$10, $$concat(var$11, $(getEventTypeString($XMLEvent::CHARACTERS))));
		$var($String, var$9, $$concat(var$10, ", "));
		$var($String, var$8, $$concat(var$9, $(getEventTypeString($XMLEvent::COMMENT))));
		$var($String, var$7, $$concat(var$8, ", "));
		$var($String, var$6, $$concat(var$7, $(getEventTypeString($XMLEvent::CDATA))));
		$var($String, var$5, $$concat(var$6, ", "));
		$var($String, var$4, $$concat(var$5, $(getEventTypeString($XMLEvent::SPACE))));
		$var($String, var$3, $$concat(var$4, ", "));
		$var($String, var$2, $$concat(var$3, $(getEventTypeString($XMLEvent::ENTITY_REFERENCE))));
		$var($String, var$1, $$concat(var$2, ", "));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::DTD))));
		$throwNew($IllegalStateException, $$concat(var$0, " valid for getText() "));
	}
}

void XMLStreamReaderImpl::require(int32_t type, $String* namespaceURI, $String* localName) {
	if (type != this->fEventType) {
		$var($String, var$0, $$str({"Event type "_s, $(getEventTypeString(type)), " specified did not match with current parser event "_s}));
		$throwNew($XMLStreamException, $$concat(var$0, $(getEventTypeString(this->fEventType))));
	}
	if (namespaceURI != nullptr && !namespaceURI->equals($(getNamespaceURI()))) {
		$throwNew($XMLStreamException, $$str({"Namespace URI "_s, namespaceURI, " specified did not match with current namespace URI"_s}));
	}
	if (localName != nullptr && !localName->equals($(getLocalName()))) {
		$throwNew($XMLStreamException, $$str({"LocalName "_s, localName, " specified did not match with current local name"_s}));
	}
	return;
}

int32_t XMLStreamReaderImpl::getTextCharacters(int32_t sourceStart, $chars* target, int32_t targetStart, int32_t length) {
	if (target == nullptr) {
		$throwNew($NullPointerException, "target char array can\'t be null"_s);
	}
	if (targetStart < 0 || length < 0 || sourceStart < 0 || targetStart >= $nc(target)->length || (targetStart + length) > $nc(target)->length) {
		$throwNew($IndexOutOfBoundsException);
	}
	int32_t copiedLength = 0;
	int32_t available = getTextLength() - sourceStart;
	if (available < 0) {
		$throwNew($IndexOutOfBoundsException, "sourceStart is greater thannumber of characters associated with this event"_s);
	}
	if (available < length) {
		copiedLength = available;
	} else {
		copiedLength = length;
	}
	$var($Object, var$0, $of(getTextCharacters()));
	$System::arraycopy(var$0, getTextStart() + sourceStart, target, targetStart, copiedLength);
	return copiedLength;
}

bool XMLStreamReaderImpl::hasText() {
	if (this->fEventType == $XMLEvent::CHARACTERS || this->fEventType == $XMLEvent::COMMENT || this->fEventType == $XMLEvent::CDATA) {
		return $nc($($nc(this->fScanner)->getCharacterData()))->length > 0;
	} else if (this->fEventType == $XMLEvent::ENTITY_REFERENCE) {
		$var($String, name, $nc(this->fScanner)->getEntityName());
		if (name != nullptr) {
			if ($nc(this->fScanner)->foundBuiltInRefs) {
				return true;
			}
			$var($XMLEntityStorage, entityStore, $nc(this->fEntityManager)->getEntityStore());
			$var($Entity, en, $nc(entityStore)->getEntity(name));
			if (en == nullptr) {
				return false;
			}
			if ($nc(en)->isExternal()) {
				return $nc($nc(($cast($Entity$ExternalEntity, en)))->entityLocation)->getExpandedSystemId() != nullptr;
			} else {
				return $nc(($cast($Entity$InternalEntity, en)))->text != nullptr;
			}
		} else {
			return false;
		}
	} else if (this->fEventType == $XMLEvent::DTD) {
		return $nc(this->fScanner)->fSeenDoctypeDecl;
	}
	return false;
}

bool XMLStreamReaderImpl::isAttributeSpecified(int32_t index) {
	if ((this->fEventType == $XMLEvent::START_ELEMENT) || (this->fEventType == $XMLEvent::ATTRIBUTE)) {
		return $nc($($nc(this->fScanner)->getAttributeIterator()))->isSpecified(index);
	} else {
		$var($String, var$1, $$str({"Current state is not among the states "_s, $(getEventTypeString($XMLEvent::START_ELEMENT)), " , "_s}));
		$var($String, var$0, $$concat(var$1, $(getEventTypeString($XMLEvent::ATTRIBUTE))));
		$throwNew($IllegalStateException, $$concat(var$0, "valid for isAttributeSpecified()"));
	}
}

bool XMLStreamReaderImpl::isCharacters() {
	return this->fEventType == $XMLEvent::CHARACTERS;
}

int32_t XMLStreamReaderImpl::nextTag() {
	int32_t eventType = next();
	while (true) {
		bool var$0 = (eventType == $XMLStreamConstants::CHARACTERS && isWhiteSpace());
		if (!(var$0 || (eventType == $XMLStreamConstants::CDATA && isWhiteSpace()) || eventType == $XMLStreamConstants::SPACE || eventType == $XMLStreamConstants::PROCESSING_INSTRUCTION || eventType == $XMLStreamConstants::COMMENT)) {
			break;
		}
		{
			eventType = next();
		}
	}
	if (eventType != $XMLStreamConstants::START_ELEMENT && eventType != $XMLStreamConstants::END_ELEMENT) {
		$var($String, var$4, $$str({"found: "_s, $(getEventTypeString(eventType)), ", expected "_s}));
		$var($String, var$3, $$concat(var$4, $(getEventTypeString($XMLStreamConstants::START_ELEMENT))));
		$var($String, var$2, $$concat(var$3, " or "));
		$var($String, var$1, $concat(var$2, $(getEventTypeString($XMLStreamConstants::END_ELEMENT))));
		$throwNew($XMLStreamException, var$1, $(getLocation()));
	}
	return eventType;
}

bool XMLStreamReaderImpl::standaloneSet() {
	return $nc(this->fScanner)->standaloneSet();
}

$QName* XMLStreamReaderImpl::convertXNIQNametoJavaxQName($1QName* qname) {
	if (qname == nullptr) {
		return nullptr;
	}
	if ($nc(qname)->prefix == nullptr) {
		return $new($QName, qname->uri, qname->localpart);
	} else {
		return $new($QName, qname->uri, qname->localpart, qname->prefix);
	}
}

$String* XMLStreamReaderImpl::getNamespaceURI($String* prefix) {
	if (prefix == nullptr) {
		$throwNew($IllegalArgumentException, "prefix cannot be null."_s);
	}
	return $nc($($nc(this->fScanner)->getNamespaceContext()))->getURI($($nc(this->fSymbolTable)->addSymbol(prefix)));
}

void XMLStreamReaderImpl::setPropertyManager($PropertyManager* propertyManager) {
	$set(this, fPropertyManager, propertyManager);
	$nc(this->fScanner)->setProperty("stax-properties"_s, propertyManager);
	$nc(this->fScanner)->setPropertyManager(propertyManager);
}

$PropertyManager* XMLStreamReaderImpl::getPropertyManager() {
	return this->fPropertyManager;
}

void XMLStreamReaderImpl::pr($String* str) {
	$init(XMLStreamReaderImpl);
	$init($System);
	$nc($System::out)->println(str);
}

$List* XMLStreamReaderImpl::getEntityDecls() {
	if (this->fEventType == $XMLStreamConstants::DTD) {
		$var($XMLEntityStorage, entityStore, $nc(this->fEntityManager)->getEntityStore());
		$var($ArrayList, list, nullptr);
		$var($Map, entities, $nc(entityStore)->getEntities());
		if ($nc(entities)->size() > 0) {
			$var($EntityDeclarationImpl, decl, nullptr);
			$assign(list, $new($ArrayList, entities->size()));
			{
				$var($Iterator, i$, $nc($(entities->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
					{
						$var($String, key, $cast($String, $nc(entry)->getKey()));
						$var($Entity, en, $cast($Entity, entry->getValue()));
						$assign(decl, $new($EntityDeclarationImpl));
						decl->setEntityName(key);
						if ($nc(en)->isExternal()) {
							decl->setXMLResourceIdentifier($nc(($cast($Entity$ExternalEntity, en)))->entityLocation);
							decl->setNotationName($nc(($cast($Entity$ExternalEntity, en)))->notation);
						} else {
							decl->setEntityReplacementText($nc(($cast($Entity$InternalEntity, en)))->text);
						}
						list->add(decl);
					}
				}
			}
		}
		return list;
	}
	return nullptr;
}

$List* XMLStreamReaderImpl::getNotationDecls() {
	if (this->fEventType == $XMLStreamConstants::DTD) {
		if ($nc(this->fScanner)->fDTDScanner == nullptr) {
			return nullptr;
		}
		$var($DTDGrammar, grammar, $nc((($cast($XMLDTDScannerImpl, $nc(this->fScanner)->fDTDScanner))))->getGrammar());
		if (grammar == nullptr) {
			return nullptr;
		}
		$var($List, notations, $nc(grammar)->getNotationDecls());
		$var($ArrayList, list, $new($ArrayList));
		{
			$var($Iterator, i$, $nc(notations)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($XMLNotationDecl, notation, $cast($XMLNotationDecl, i$->next()));
				{
					if (notation != nullptr) {
						list->add($$new($NotationDeclarationImpl, notation));
					}
				}
			}
		}
		return list;
	}
	return nullptr;
}

XMLStreamReaderImpl::XMLStreamReaderImpl() {
}

void clinit$XMLStreamReaderImpl($Class* class$) {
	$init($Constants);
	$assignStatic(XMLStreamReaderImpl::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XMLStreamReaderImpl::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLStreamReaderImpl::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLStreamReaderImpl::READER_IN_DEFINED_STATE, $Constants::READER_IN_DEFINED_STATE);
}

$Class* XMLStreamReaderImpl::load$($String* name, bool initialize) {
	$loadClass(XMLStreamReaderImpl, name, initialize, &_XMLStreamReaderImpl_ClassInfo_, clinit$XMLStreamReaderImpl, allocate$XMLStreamReaderImpl);
	return class$;
}

$Class* XMLStreamReaderImpl::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com