#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>

#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <javax/xml/transform/Transformer.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

using $DOMSerializer = ::com::sun::org::apache::xml::internal::serializer::DOMSerializer;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $ExtendedLexicalHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedLexicalHandler;
using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $Serializer = ::com::sun::org::apache::xml::internal::serializer::Serializer;
using $XSLOutputAttributes = ::com::sun::org::apache::xml::internal::serializer::XSLOutputAttributes;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Transformer = ::javax::xml::transform::Transformer;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $DeclHandler = ::org::xml::sax::ext::DeclHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _SerializationHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"flushPending", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"getTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDTDEntityExpansion", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException"},
	{"setIndentAmount", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setIsStandalone", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setNamespaceMappings", "(Lcom/sun/org/apache/xml/internal/serializer/NamespaceMappings;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTransformer", "(Ljavax/xml/transform/Transformer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializationHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.SerializationHandler",
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.ExtendedContentHandler,com.sun.org.apache.xml.internal.serializer.ExtendedLexicalHandler,com.sun.org.apache.xml.internal.serializer.XSLOutputAttributes,org.xml.sax.ext.DeclHandler,org.xml.sax.DTDHandler,org.xml.sax.ErrorHandler,com.sun.org.apache.xml.internal.serializer.DOMSerializer,com.sun.org.apache.xml.internal.serializer.Serializer",
	nullptr,
	_SerializationHandler_MethodInfo_
};

$Object* allocate$SerializationHandler($Class* clazz) {
	return $of($alloc(SerializationHandler));
}

int32_t SerializationHandler::hashCode() {
	 return this->$ExtendedContentHandler::hashCode();
}

bool SerializationHandler::equals(Object$* arg0) {
	 return this->$ExtendedContentHandler::equals(arg0);
}

$Object* SerializationHandler::clone() {
	 return this->$ExtendedContentHandler::clone();
}

$String* SerializationHandler::toString() {
	 return this->$ExtendedContentHandler::toString();
}

void SerializationHandler::finalize() {
	this->$ExtendedContentHandler::finalize();
}

$Class* SerializationHandler::load$($String* name, bool initialize) {
	$loadClass(SerializationHandler, name, initialize, &_SerializationHandler_ClassInfo_, allocate$SerializationHandler);
	return class$;
}

$Class* SerializationHandler::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com