#include <com/sun/org/apache/xml/internal/dtm/DTM.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DTM
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef NAMESPACE_NODE
#undef NOTATION_NODE
#undef NTYPES
#undef NULL
#undef PROCESSING_INSTRUCTION_NODE
#undef ROOT_NODE
#undef TEXT_NODE

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $DeclHandler = ::org::xml::sax::ext::DeclHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$FieldInfo _DTM_FieldInfo_[] = {
	{"NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, NULL)},
	{"ROOT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ROOT_NODE)},
	{"ELEMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ELEMENT_NODE)},
	{"ATTRIBUTE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ATTRIBUTE_NODE)},
	{"TEXT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, TEXT_NODE)},
	{"CDATA_SECTION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, CDATA_SECTION_NODE)},
	{"ENTITY_REFERENCE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ENTITY_REFERENCE_NODE)},
	{"ENTITY_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ENTITY_NODE)},
	{"PROCESSING_INSTRUCTION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, PROCESSING_INSTRUCTION_NODE)},
	{"COMMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, COMMENT_NODE)},
	{"DOCUMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, DOCUMENT_NODE)},
	{"DOCUMENT_TYPE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, DOCUMENT_TYPE_NODE)},
	{"DOCUMENT_FRAGMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, DOCUMENT_FRAGMENT_NODE)},
	{"NOTATION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, NOTATION_NODE)},
	{"NAMESPACE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, NAMESPACE_NODE)},
	{"NTYPES", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, NTYPES)},
	{}
};

$MethodInfo _DTM_MethodInfo_[] = {
	{"appendChild", "(IZZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"appendTextChild", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dispatchCharactersEvents", "(ILorg/xml/sax/ContentHandler;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"dispatchToEvents", "(ILorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"documentRegistration", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"documentRelease", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeNode", "(ILjava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAxisTraverser", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PUBLIC | $ABSTRACT},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDeclHandler", "()Lorg/xml/sax/ext/DeclHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocument", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentAllDeclarationsProcessed", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentEncoding", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentRoot", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentStandalone", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentSystemIdentifier", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentTypeDeclarationPublicIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentTypeDeclarationSystemIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentVersion", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC | $ABSTRACT},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getExpandedTypeID", "(Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getFirstAttribute", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getFirstChild", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getFirstNamespaceNode", "(IZ)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLastChild", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLevel", "(I)S", nullptr, $PUBLIC | $ABSTRACT},
	{"getLexicalHandler", "()Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalNameFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNextAttribute", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNextNamespaceNode", "(IIZ)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNextSibling", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeType", "(I)S", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOwnerDocument", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getParent", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreviousSibling", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSourceLocatorFor", "(I)Ljavax/xml/transform/SourceLocator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStringValue", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStringValueChunk", "(II[I)[C", nullptr, $PUBLIC | $ABSTRACT},
	{"getStringValueChunkCount", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"hasChildNodes", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isCharacterElementContentWhitespace", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isDocumentAllDeclarationsProcessed", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isNodeAfter", "(II)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"migrateTo", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"needsTwoThreads", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setDocumentBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"supportsPreStripping", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTM_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTM",
	nullptr,
	nullptr,
	_DTM_FieldInfo_,
	_DTM_MethodInfo_
};

$Object* allocate$DTM($Class* clazz) {
	return $of($alloc(DTM));
}

$Class* DTM::load$($String* name, bool initialize) {
	$loadClass(DTM, name, initialize, &_DTM_ClassInfo_, allocate$DTM);
	return class$;
}

$Class* DTM::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com