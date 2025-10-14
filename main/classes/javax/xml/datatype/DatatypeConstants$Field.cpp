#include <javax/xml/datatype/DatatypeConstants$Field.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;

namespace javax {
	namespace xml {
		namespace datatype {

$FieldInfo _DatatypeConstants$Field_FieldInfo_[] = {
	{"str", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DatatypeConstants$Field, str)},
	{"id", "I", nullptr, $PRIVATE | $FINAL, $field(DatatypeConstants$Field, id)},
	{}
};

$MethodInfo _DatatypeConstants$Field_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(DatatypeConstants$Field::*)($String*,int32_t)>(&DatatypeConstants$Field::init$))},
	{"getId", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DatatypeConstants$Field::*)()>(&DatatypeConstants$Field::getId))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DatatypeConstants$Field_InnerClassesInfo_[] = {
	{"javax.xml.datatype.DatatypeConstants$Field", "javax.xml.datatype.DatatypeConstants", "Field", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DatatypeConstants$Field_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.datatype.DatatypeConstants$Field",
	"java.lang.Object",
	nullptr,
	_DatatypeConstants$Field_FieldInfo_,
	_DatatypeConstants$Field_MethodInfo_,
	nullptr,
	nullptr,
	_DatatypeConstants$Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.datatype.DatatypeConstants"
};

$Object* allocate$DatatypeConstants$Field($Class* clazz) {
	return $of($alloc(DatatypeConstants$Field));
}

void DatatypeConstants$Field::init$($String* str, int32_t id) {
	$set(this, str, str);
	this->id = id;
}

$String* DatatypeConstants$Field::toString() {
	return this->str;
}

int32_t DatatypeConstants$Field::getId() {
	return this->id;
}

DatatypeConstants$Field::DatatypeConstants$Field() {
}

$Class* DatatypeConstants$Field::load$($String* name, bool initialize) {
	$loadClass(DatatypeConstants$Field, name, initialize, &_DatatypeConstants$Field_ClassInfo_, allocate$DatatypeConstants$Field);
	return class$;
}

$Class* DatatypeConstants$Field::class$ = nullptr;

		} // datatype
	} // xml
} // javax