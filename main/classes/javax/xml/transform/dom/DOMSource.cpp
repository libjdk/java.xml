#include <javax/xml/transform/dom/DOMSource.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef FEATURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {

$FieldInfo _DOMSource_FieldInfo_[] = {
	{"node", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMSource, node)},
	{"systemID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMSource, systemID)},
	{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMSource, FEATURE)},
	{}
};

$MethodInfo _DOMSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMSource::*)()>(&DOMSource::init$))},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSource::*)($Node*)>(&DOMSource::init$))},
	{"<init>", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSource::*)($Node*,$String*)>(&DOMSource::init$))},
	{"getNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"setNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.dom.DOMSource",
	"java.lang.Object",
	"javax.xml.transform.Source",
	_DOMSource_FieldInfo_,
	_DOMSource_MethodInfo_
};

$Object* allocate$DOMSource($Class* clazz) {
	return $of($alloc(DOMSource));
}

$String* DOMSource::FEATURE = nullptr;

void DOMSource::init$() {
}

void DOMSource::init$($Node* n) {
	setNode(n);
}

void DOMSource::init$($Node* node, $String* systemID) {
	setNode(node);
	setSystemId(systemID);
}

void DOMSource::setNode($Node* node) {
	$set(this, node, node);
}

$Node* DOMSource::getNode() {
	return this->node;
}

void DOMSource::setSystemId($String* systemID) {
	$set(this, systemID, systemID);
}

$String* DOMSource::getSystemId() {
	return this->systemID;
}

bool DOMSource::isEmpty() {
	return this->systemID == nullptr && (this->node == nullptr || !$nc(this->node)->hasChildNodes());
}

DOMSource::DOMSource() {
}

void clinit$DOMSource($Class* class$) {
	$assignStatic(DOMSource::FEATURE, "http://javax.xml.transform.dom.DOMSource/feature"_s);
}

$Class* DOMSource::load$($String* name, bool initialize) {
	$loadClass(DOMSource, name, initialize, &_DOMSource_ClassInfo_, clinit$DOMSource, allocate$DOMSource);
	return class$;
}

$Class* DOMSource::class$ = nullptr;

			} // dom
		} // transform
	} // xml
} // javax