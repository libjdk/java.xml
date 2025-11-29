#include <javax/xml/validation/Schema.h>

#include <javax/xml/validation/Validator.h>
#include <javax/xml/validation/ValidatorHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace validation {

$MethodInfo _Schema_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Schema::*)()>(&Schema::init$))},
	{"newValidator", "()Ljavax/xml/validation/Validator;", nullptr, $PUBLIC | $ABSTRACT},
	{"newValidatorHandler", "()Ljavax/xml/validation/ValidatorHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Schema_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.validation.Schema",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Schema_MethodInfo_
};

$Object* allocate$Schema($Class* clazz) {
	return $of($alloc(Schema));
}

void Schema::init$() {
}

Schema::Schema() {
}

$Class* Schema::load$($String* name, bool initialize) {
	$loadClass(Schema, name, initialize, &_Schema_ClassInfo_, allocate$Schema);
	return class$;
}

$Class* Schema::class$ = nullptr;

		} // validation
	} // xml
} // javax