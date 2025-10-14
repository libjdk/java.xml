#include <javax/xml/transform/sax/TransformerHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Transformer.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Result = ::javax::xml::transform::Result;
using $Transformer = ::javax::xml::transform::Transformer;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

$MethodInfo _TransformerHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"setResult", "(Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TransformerHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.sax.TransformerHandler",
	nullptr,
	"org.xml.sax.ContentHandler,org.xml.sax.ext.LexicalHandler,org.xml.sax.DTDHandler",
	nullptr,
	_TransformerHandler_MethodInfo_
};

$Object* allocate$TransformerHandler($Class* clazz) {
	return $of($alloc(TransformerHandler));
}

int32_t TransformerHandler::hashCode() {
	 return this->$ContentHandler::hashCode();
}

bool TransformerHandler::equals(Object$* arg0) {
	 return this->$ContentHandler::equals(arg0);
}

$Object* TransformerHandler::clone() {
	 return this->$ContentHandler::clone();
}

$String* TransformerHandler::toString() {
	 return this->$ContentHandler::toString();
}

void TransformerHandler::finalize() {
	this->$ContentHandler::finalize();
}

$Class* TransformerHandler::load$($String* name, bool initialize) {
	$loadClass(TransformerHandler, name, initialize, &_TransformerHandler_ClassInfo_, allocate$TransformerHandler);
	return class$;
}

$Class* TransformerHandler::class$ = nullptr;

			} // sax
		} // transform
	} // xml
} // javax