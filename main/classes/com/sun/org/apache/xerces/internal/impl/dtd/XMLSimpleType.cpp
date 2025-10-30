#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLSimpleType.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>
#include <jcpp.h>

#undef DEFAULT_TYPE_DEFAULT
#undef DEFAULT_TYPE_FIXED
#undef DEFAULT_TYPE_IMPLIED
#undef DEFAULT_TYPE_REQUIRED
#undef TYPE_CDATA
#undef TYPE_ENTITY
#undef TYPE_ENUMERATION
#undef TYPE_ID
#undef TYPE_IDREF
#undef TYPE_NAMED
#undef TYPE_NMTOKEN
#undef TYPE_NOTATION

using $DatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _XMLSimpleType_FieldInfo_[] = {
	{"TYPE_CDATA", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, TYPE_CDATA)},
	{"TYPE_ENTITY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, TYPE_ENTITY)},
	{"TYPE_ENUMERATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, TYPE_ENUMERATION)},
	{"TYPE_ID", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, TYPE_ID)},
	{"TYPE_IDREF", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, TYPE_IDREF)},
	{"TYPE_NMTOKEN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, TYPE_NMTOKEN)},
	{"TYPE_NOTATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, TYPE_NOTATION)},
	{"TYPE_NAMED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, TYPE_NAMED)},
	{"DEFAULT_TYPE_DEFAULT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, DEFAULT_TYPE_DEFAULT)},
	{"DEFAULT_TYPE_FIXED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, DEFAULT_TYPE_FIXED)},
	{"DEFAULT_TYPE_IMPLIED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, DEFAULT_TYPE_IMPLIED)},
	{"DEFAULT_TYPE_REQUIRED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSimpleType, DEFAULT_TYPE_REQUIRED)},
	{"type", "S", nullptr, $PUBLIC, $field(XMLSimpleType, type)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLSimpleType, name)},
	{"enumeration", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLSimpleType, enumeration)},
	{"list", "Z", nullptr, $PUBLIC, $field(XMLSimpleType, list)},
	{"defaultType", "S", nullptr, $PUBLIC, $field(XMLSimpleType, defaultType)},
	{"defaultValue", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLSimpleType, defaultValue)},
	{"nonNormalizedDefaultValue", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLSimpleType, nonNormalizedDefaultValue)},
	{"datatypeValidator", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PUBLIC, $field(XMLSimpleType, datatypeValidator)},
	{}
};

$MethodInfo _XMLSimpleType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLSimpleType::*)()>(&XMLSimpleType::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"setValues", "(SLjava/lang/String;[Ljava/lang/String;ZSLjava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;)V", nullptr, $PUBLIC},
	{"setValues", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLSimpleType;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLSimpleType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLSimpleType",
	"java.lang.Object",
	nullptr,
	_XMLSimpleType_FieldInfo_,
	_XMLSimpleType_MethodInfo_
};

$Object* allocate$XMLSimpleType($Class* clazz) {
	return $of($alloc(XMLSimpleType));
}

void XMLSimpleType::init$() {
}

void XMLSimpleType::setValues(int16_t type, $String* name, $StringArray* enumeration, bool list, int16_t defaultType, $String* defaultValue, $String* nonNormalizedDefaultValue, $DatatypeValidator* datatypeValidator) {
	this->type = type;
	$set(this, name, name);
	if (enumeration != nullptr && enumeration->length > 0) {
		$set(this, enumeration, $new($StringArray, enumeration->length));
		$System::arraycopy(enumeration, 0, this->enumeration, 0, $nc(this->enumeration)->length);
	} else {
		$set(this, enumeration, nullptr);
	}
	this->list = list;
	this->defaultType = defaultType;
	$set(this, defaultValue, defaultValue);
	$set(this, nonNormalizedDefaultValue, nonNormalizedDefaultValue);
	$set(this, datatypeValidator, datatypeValidator);
}

void XMLSimpleType::setValues(XMLSimpleType* simpleType) {
	this->type = $nc(simpleType)->type;
	$set(this, name, simpleType->name);
	if (simpleType->enumeration != nullptr && $nc(simpleType->enumeration)->length > 0) {
		$set(this, enumeration, $new($StringArray, $nc(simpleType->enumeration)->length));
		$System::arraycopy(simpleType->enumeration, 0, this->enumeration, 0, $nc(this->enumeration)->length);
	} else {
		$set(this, enumeration, nullptr);
	}
	this->list = simpleType->list;
	this->defaultType = simpleType->defaultType;
	$set(this, defaultValue, simpleType->defaultValue);
	$set(this, nonNormalizedDefaultValue, simpleType->nonNormalizedDefaultValue);
	$set(this, datatypeValidator, simpleType->datatypeValidator);
}

void XMLSimpleType::clear() {
	this->type = (int16_t)-1;
	$set(this, name, nullptr);
	$set(this, enumeration, nullptr);
	this->list = false;
	this->defaultType = (int16_t)-1;
	$set(this, defaultValue, nullptr);
	$set(this, nonNormalizedDefaultValue, nullptr);
	$set(this, datatypeValidator, nullptr);
}

XMLSimpleType::XMLSimpleType() {
}

$Class* XMLSimpleType::load$($String* name, bool initialize) {
	$loadClass(XMLSimpleType, name, initialize, &_XMLSimpleType_ClassInfo_, allocate$XMLSimpleType);
	return class$;
}

$Class* XMLSimpleType::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com