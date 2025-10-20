#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>

#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $EntityState = ::com::sun::org::apache::xerces::internal::impl::validation::EntityState;
using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {

$FieldInfo _ValidationManager_FieldInfo_[] = {
	{"fVSs", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationState;>;", $PROTECTED | $FINAL, $field(ValidationManager, fVSs)},
	{"fGrammarFound", "Z", nullptr, $PROTECTED, $field(ValidationManager, fGrammarFound)},
	{"fCachedDTD", "Z", nullptr, $PROTECTED, $field(ValidationManager, fCachedDTD)},
	{}
};

$MethodInfo _ValidationManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ValidationManager::*)()>(&ValidationManager::init$))},
	{"addValidationState", "(Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationState;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ValidationManager::*)($ValidationState*)>(&ValidationManager::addValidationState))},
	{"isCachedDTD", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ValidationManager::*)()>(&ValidationManager::isCachedDTD))},
	{"isGrammarFound", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ValidationManager::*)()>(&ValidationManager::isGrammarFound))},
	{"reset", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ValidationManager::*)()>(&ValidationManager::reset))},
	{"setCachedDTD", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ValidationManager::*)(bool)>(&ValidationManager::setCachedDTD))},
	{"setEntityState", "(Lcom/sun/org/apache/xerces/internal/impl/validation/EntityState;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ValidationManager::*)($EntityState*)>(&ValidationManager::setEntityState))},
	{"setGrammarFound", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ValidationManager::*)(bool)>(&ValidationManager::setGrammarFound))},
	{}
};

$ClassInfo _ValidationManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.validation.ValidationManager",
	"java.lang.Object",
	nullptr,
	_ValidationManager_FieldInfo_,
	_ValidationManager_MethodInfo_
};

$Object* allocate$ValidationManager($Class* clazz) {
	return $of($alloc(ValidationManager));
}

void ValidationManager::init$() {
	$set(this, fVSs, $new($ArrayList));
	this->fGrammarFound = false;
	this->fCachedDTD = false;
}

void ValidationManager::addValidationState($ValidationState* vs) {
	$nc(this->fVSs)->add(vs);
}

void ValidationManager::setEntityState($EntityState* state) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = $nc(this->fVSs)->size() - 1; i >= 0; --i) {
		$nc(($cast($ValidationState, $($nc(this->fVSs)->get(i)))))->setEntityState(state);
	}
}

void ValidationManager::setGrammarFound(bool grammar) {
	this->fGrammarFound = grammar;
}

bool ValidationManager::isGrammarFound() {
	return this->fGrammarFound;
}

void ValidationManager::setCachedDTD(bool cachedDTD) {
	this->fCachedDTD = cachedDTD;
}

bool ValidationManager::isCachedDTD() {
	return this->fCachedDTD;
}

void ValidationManager::reset() {
	$nc(this->fVSs)->clear();
	this->fGrammarFound = false;
	this->fCachedDTD = false;
}

ValidationManager::ValidationManager() {
}

$Class* ValidationManager::load$($String* name, bool initialize) {
	$loadClass(ValidationManager, name, initialize, &_ValidationManager_ClassInfo_, allocate$ValidationManager);
	return class$;
}

$Class* ValidationManager::class$ = nullptr;

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com