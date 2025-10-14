#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $DTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar;
using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _DTDGrammarBucket_FieldInfo_[] = {
	{"fGrammars", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription;Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;>;", $PROTECTED, $field(DTDGrammarBucket, fGrammars)},
	{"fActiveGrammar", "Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, $PROTECTED, $field(DTDGrammarBucket, fActiveGrammar)},
	{"fIsStandalone", "Z", nullptr, $PROTECTED, $field(DTDGrammarBucket, fIsStandalone)},
	{}
};

$MethodInfo _DTDGrammarBucket_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DTDGrammarBucket::*)()>(&DTDGrammarBucket::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getActiveGrammar", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, 0},
	{"getGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, $PUBLIC},
	{"getStandalone", "()Z", nullptr, 0},
	{"putGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;)V", nullptr, $PUBLIC},
	{"setActiveGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;)V", nullptr, 0},
	{"setStandalone", "(Z)V", nullptr, 0},
	{}
};

$ClassInfo _DTDGrammarBucket_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammarBucket",
	"java.lang.Object",
	nullptr,
	_DTDGrammarBucket_FieldInfo_,
	_DTDGrammarBucket_MethodInfo_
};

$Object* allocate$DTDGrammarBucket($Class* clazz) {
	return $of($alloc(DTDGrammarBucket));
}

void DTDGrammarBucket::init$() {
	$set(this, fGrammars, $new($HashMap));
}

void DTDGrammarBucket::putGrammar($DTDGrammar* grammar) {
	$var($XMLDTDDescription, desc, $cast($XMLDTDDescription, $nc(grammar)->getGrammarDescription()));
	$nc(this->fGrammars)->put(desc, grammar);
}

$DTDGrammar* DTDGrammarBucket::getGrammar($XMLGrammarDescription* desc) {
	return $cast($DTDGrammar, $nc(this->fGrammars)->get($cast($XMLDTDDescription, desc)));
}

void DTDGrammarBucket::clear() {
	$nc(this->fGrammars)->clear();
	$set(this, fActiveGrammar, nullptr);
	this->fIsStandalone = false;
}

void DTDGrammarBucket::setStandalone(bool standalone) {
	this->fIsStandalone = standalone;
}

bool DTDGrammarBucket::getStandalone() {
	return this->fIsStandalone;
}

void DTDGrammarBucket::setActiveGrammar($DTDGrammar* grammar) {
	$set(this, fActiveGrammar, grammar);
}

$DTDGrammar* DTDGrammarBucket::getActiveGrammar() {
	return this->fActiveGrammar;
}

DTDGrammarBucket::DTDGrammarBucket() {
}

$Class* DTDGrammarBucket::load$($String* name, bool initialize) {
	$loadClass(DTDGrammarBucket, name, initialize, &_DTDGrammarBucket_ClassInfo_, allocate$DTDGrammarBucket);
	return class$;
}

$Class* DTDGrammarBucket::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com