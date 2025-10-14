#include <org/xml/sax/helpers/AttributeListImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/xml/sax/AttributeList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $AttributeList = ::org::xml::sax::AttributeList;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$NamedAttribute AttributeListImpl_Attribute_var$0[] = {
	{"since", 's', "1.5"},
	{}
};
$CompoundAttribute _AttributeListImpl_Annotations_[] = {
	{"Ljava/lang/Deprecated;", AttributeListImpl_Attribute_var$0},
	{}
};


$FieldInfo _AttributeListImpl_FieldInfo_[] = {
	{"names", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(AttributeListImpl, names)},
	{"types", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(AttributeListImpl, types)},
	{"values", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(AttributeListImpl, values)},
	{}
};

$MethodInfo _AttributeListImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeListImpl::*)()>(&AttributeListImpl::init$))},
	{"<init>", "(Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeListImpl::*)($AttributeList*)>(&AttributeListImpl::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"removeAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setAttributeList", "(Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttributeListImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.helpers.AttributeListImpl",
	"java.lang.Object",
	"org.xml.sax.AttributeList",
	_AttributeListImpl_FieldInfo_,
	_AttributeListImpl_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AttributeListImpl_Annotations_
};

$Object* allocate$AttributeListImpl($Class* clazz) {
	return $of($alloc(AttributeListImpl));
}

void AttributeListImpl::init$() {
	$set(this, names, $new($ArrayList));
	$set(this, types, $new($ArrayList));
	$set(this, values, $new($ArrayList));
}

void AttributeListImpl::init$($AttributeList* atts) {
	$set(this, names, $new($ArrayList));
	$set(this, types, $new($ArrayList));
	$set(this, values, $new($ArrayList));
	setAttributeList(atts);
}

void AttributeListImpl::setAttributeList($AttributeList* atts) {
	int32_t count = $nc(atts)->getLength();
	clear();
	for (int32_t i = 0; i < count; ++i) {
		$var($String, var$0, atts->getName(i));
		$var($String, var$1, atts->getType(i));
		addAttribute(var$0, var$1, $(atts->getValue(i)));
	}
}

void AttributeListImpl::addAttribute($String* name, $String* type, $String* value) {
	$nc(this->names)->add(name);
	$nc(this->types)->add(type);
	$nc(this->values)->add(value);
}

void AttributeListImpl::removeAttribute($String* name) {
	int32_t i = $nc(this->names)->indexOf(name);
	if (i >= 0) {
		$nc(this->names)->remove(i);
		$nc(this->types)->remove(i);
		$nc(this->values)->remove(i);
	}
}

void AttributeListImpl::clear() {
	$nc(this->names)->clear();
	$nc(this->types)->clear();
	$nc(this->values)->clear();
}

int32_t AttributeListImpl::getLength() {
	return $nc(this->names)->size();
}

$String* AttributeListImpl::getName(int32_t i) {
	if (i < 0) {
		return nullptr;
	}
	try {
		return $cast($String, $nc(this->names)->get(i));
	} catch ($IndexOutOfBoundsException&) {
		$var($IndexOutOfBoundsException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* AttributeListImpl::getType(int32_t i) {
	if (i < 0) {
		return nullptr;
	}
	try {
		return $cast($String, $nc(this->types)->get(i));
	} catch ($IndexOutOfBoundsException&) {
		$var($IndexOutOfBoundsException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* AttributeListImpl::getValue(int32_t i) {
	if (i < 0) {
		return nullptr;
	}
	try {
		return $cast($String, $nc(this->values)->get(i));
	} catch ($IndexOutOfBoundsException&) {
		$var($IndexOutOfBoundsException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* AttributeListImpl::getType($String* name) {
	return getType($nc(this->names)->indexOf(name));
}

$String* AttributeListImpl::getValue($String* name) {
	return getValue($nc(this->names)->indexOf(name));
}

AttributeListImpl::AttributeListImpl() {
}

$Class* AttributeListImpl::load$($String* name, bool initialize) {
	$loadClass(AttributeListImpl, name, initialize, &_AttributeListImpl_ClassInfo_, allocate$AttributeListImpl);
	return class$;
}

$Class* AttributeListImpl::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org