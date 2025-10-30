#include <javax/xml/transform/sax/SAXResult.h>

#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef FEATURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Result = ::javax::xml::transform::Result;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

$FieldInfo _SAXResult_FieldInfo_[] = {
	{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SAXResult, FEATURE)},
	{"handler", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(SAXResult, handler)},
	{"lexhandler", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PRIVATE, $field(SAXResult, lexhandler)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SAXResult, systemId)},
	{}
};

$MethodInfo _SAXResult_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SAXResult::*)()>(&SAXResult::init$))},
	{"<init>", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(SAXResult::*)($ContentHandler*)>(&SAXResult::init$))},
	{"getHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC},
	{"getLexicalHandler", "()Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC},
	{"setLexicalHandler", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SAXResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.sax.SAXResult",
	"java.lang.Object",
	"javax.xml.transform.Result",
	_SAXResult_FieldInfo_,
	_SAXResult_MethodInfo_
};

$Object* allocate$SAXResult($Class* clazz) {
	return $of($alloc(SAXResult));
}

$String* SAXResult::FEATURE = nullptr;

void SAXResult::init$() {
}

void SAXResult::init$($ContentHandler* handler) {
	setHandler(handler);
}

void SAXResult::setHandler($ContentHandler* handler) {
	$set(this, handler, handler);
}

$ContentHandler* SAXResult::getHandler() {
	return this->handler;
}

void SAXResult::setLexicalHandler($LexicalHandler* handler) {
	$set(this, lexhandler, handler);
}

$LexicalHandler* SAXResult::getLexicalHandler() {
	return this->lexhandler;
}

void SAXResult::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

$String* SAXResult::getSystemId() {
	return this->systemId;
}

SAXResult::SAXResult() {
}

void clinit$SAXResult($Class* class$) {
	$assignStatic(SAXResult::FEATURE, "http://javax.xml.transform.sax.SAXResult/feature"_s);
}

$Class* SAXResult::load$($String* name, bool initialize) {
	$loadClass(SAXResult, name, initialize, &_SAXResult_ClassInfo_, clinit$SAXResult, allocate$SAXResult);
	return class$;
}

$Class* SAXResult::class$ = nullptr;

			} // sax
		} // transform
	} // xml
} // javax