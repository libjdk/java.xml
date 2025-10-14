#include <com/sun/org/apache/xerces/internal/impl/validation/ConfigurableValidationState.h>

#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {

$FieldInfo _ConfigurableValidationState_FieldInfo_[] = {
	{"fIdIdrefChecking", "Z", nullptr, $PRIVATE, $field(ConfigurableValidationState, fIdIdrefChecking)},
	{"fUnparsedEntityChecking", "Z", nullptr, $PRIVATE, $field(ConfigurableValidationState, fUnparsedEntityChecking)},
	{}
};

$MethodInfo _ConfigurableValidationState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConfigurableValidationState::*)()>(&ConfigurableValidationState::init$))},
	{"addId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addIdRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkIDRefID", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isIdDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"setIdIdrefChecking", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ConfigurableValidationState::*)(bool)>(&ConfigurableValidationState::setIdIdrefChecking))},
	{"setUnparsedEntityChecking", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ConfigurableValidationState::*)(bool)>(&ConfigurableValidationState::setUnparsedEntityChecking))},
	{}
};

$ClassInfo _ConfigurableValidationState_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.validation.ConfigurableValidationState",
	"com.sun.org.apache.xerces.internal.impl.validation.ValidationState",
	nullptr,
	_ConfigurableValidationState_FieldInfo_,
	_ConfigurableValidationState_MethodInfo_
};

$Object* allocate$ConfigurableValidationState($Class* clazz) {
	return $of($alloc(ConfigurableValidationState));
}

void ConfigurableValidationState::init$() {
	$ValidationState::init$();
	this->fIdIdrefChecking = true;
	this->fUnparsedEntityChecking = true;
}

void ConfigurableValidationState::setIdIdrefChecking(bool setting) {
	this->fIdIdrefChecking = setting;
}

void ConfigurableValidationState::setUnparsedEntityChecking(bool setting) {
	this->fUnparsedEntityChecking = setting;
}

$Iterator* ConfigurableValidationState::checkIDRefID() {
	return (this->fIdIdrefChecking) ? $ValidationState::checkIDRefID() : ($Iterator*)nullptr;
}

bool ConfigurableValidationState::isIdDeclared($String* name) {
	return (this->fIdIdrefChecking) ? $ValidationState::isIdDeclared(name) : false;
}

bool ConfigurableValidationState::isEntityDeclared($String* name) {
	return (this->fUnparsedEntityChecking) ? $ValidationState::isEntityDeclared(name) : true;
}

bool ConfigurableValidationState::isEntityUnparsed($String* name) {
	return (this->fUnparsedEntityChecking) ? $ValidationState::isEntityUnparsed(name) : true;
}

void ConfigurableValidationState::addId($String* name) {
	if (this->fIdIdrefChecking) {
		$ValidationState::addId(name);
	}
}

void ConfigurableValidationState::addIdRef($String* name) {
	if (this->fIdIdrefChecking) {
		$ValidationState::addIdRef(name);
	}
}

ConfigurableValidationState::ConfigurableValidationState() {
}

$Class* ConfigurableValidationState::load$($String* name, bool initialize) {
	$loadClass(ConfigurableValidationState, name, initialize, &_ConfigurableValidationState_ClassInfo_, allocate$ConfigurableValidationState);
	return class$;
}

$Class* ConfigurableValidationState::class$ = nullptr;

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com