#include <org/xml/sax/helpers/XMLReaderAdapter$AttributesAdapter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/helpers/XMLReaderAdapter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeList = ::org::xml::sax::AttributeList;
using $Attributes = ::org::xml::sax::Attributes;
using $XMLReaderAdapter = ::org::xml::sax::helpers::XMLReaderAdapter;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _XMLReaderAdapter$AttributesAdapter_FieldInfo_[] = {
	{"this$0", "Lorg/xml/sax/helpers/XMLReaderAdapter;", nullptr, $FINAL | $SYNTHETIC, $field(XMLReaderAdapter$AttributesAdapter, this$0)},
	{"attributes", "Lorg/xml/sax/Attributes;", nullptr, $PRIVATE, $field(XMLReaderAdapter$AttributesAdapter, attributes)},
	{}
};

$MethodInfo _XMLReaderAdapter$AttributesAdapter_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/helpers/XMLReaderAdapter;)V", nullptr, 0, $method(static_cast<void(XMLReaderAdapter$AttributesAdapter::*)($XMLReaderAdapter*)>(&XMLReaderAdapter$AttributesAdapter::init$))},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, 0, $method(static_cast<void(XMLReaderAdapter$AttributesAdapter::*)($Attributes*)>(&XMLReaderAdapter$AttributesAdapter::setAttributes))},
	{}
};

$InnerClassInfo _XMLReaderAdapter$AttributesAdapter_InnerClassesInfo_[] = {
	{"org.xml.sax.helpers.XMLReaderAdapter$AttributesAdapter", "org.xml.sax.helpers.XMLReaderAdapter", "AttributesAdapter", $FINAL},
	{}
};

$ClassInfo _XMLReaderAdapter$AttributesAdapter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.xml.sax.helpers.XMLReaderAdapter$AttributesAdapter",
	"java.lang.Object",
	"org.xml.sax.AttributeList",
	_XMLReaderAdapter$AttributesAdapter_FieldInfo_,
	_XMLReaderAdapter$AttributesAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_XMLReaderAdapter$AttributesAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.xml.sax.helpers.XMLReaderAdapter"
};

$Object* allocate$XMLReaderAdapter$AttributesAdapter($Class* clazz) {
	return $of($alloc(XMLReaderAdapter$AttributesAdapter));
}

void XMLReaderAdapter$AttributesAdapter::init$($XMLReaderAdapter* this$0) {
	$set(this, this$0, this$0);
}

void XMLReaderAdapter$AttributesAdapter::setAttributes($Attributes* attributes) {
	$set(this, attributes, attributes);
}

int32_t XMLReaderAdapter$AttributesAdapter::getLength() {
	return $nc(this->attributes)->getLength();
}

$String* XMLReaderAdapter$AttributesAdapter::getName(int32_t i) {
	return $nc(this->attributes)->getQName(i);
}

$String* XMLReaderAdapter$AttributesAdapter::getType(int32_t i) {
	return $nc(this->attributes)->getType(i);
}

$String* XMLReaderAdapter$AttributesAdapter::getValue(int32_t i) {
	return $nc(this->attributes)->getValue(i);
}

$String* XMLReaderAdapter$AttributesAdapter::getType($String* qName) {
	return $nc(this->attributes)->getType(qName);
}

$String* XMLReaderAdapter$AttributesAdapter::getValue($String* qName) {
	return $nc(this->attributes)->getValue(qName);
}

XMLReaderAdapter$AttributesAdapter::XMLReaderAdapter$AttributesAdapter() {
}

$Class* XMLReaderAdapter$AttributesAdapter::load$($String* name, bool initialize) {
	$loadClass(XMLReaderAdapter$AttributesAdapter, name, initialize, &_XMLReaderAdapter$AttributesAdapter_ClassInfo_, allocate$XMLReaderAdapter$AttributesAdapter);
	return class$;
}

$Class* XMLReaderAdapter$AttributesAdapter::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org