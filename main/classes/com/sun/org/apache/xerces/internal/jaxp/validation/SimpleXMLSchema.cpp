#include <com/sun/org/apache/xerces/internal/jaxp/validation/SimpleXMLSchema.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/AbstractXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef XML_SCHEMA
#undef ZERO_LENGTH_GRAMMAR_ARRAY

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $AbstractXMLSchema = ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _SimpleXMLSchema_FieldInfo_[] = {
	{"ZERO_LENGTH_GRAMMAR_ARRAY", "[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SimpleXMLSchema, ZERO_LENGTH_GRAMMAR_ARRAY)},
	{"fGrammar", "Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PRIVATE, $field(SimpleXMLSchema, fGrammar)},
	{"fGrammars", "[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PRIVATE, $field(SimpleXMLSchema, fGrammars)},
	{"fGrammarDescription", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PRIVATE, $field(SimpleXMLSchema, fGrammarDescription)},
	{}
};

$MethodInfo _SimpleXMLSchema_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleXMLSchema::*)($Grammar*)>(&SimpleXMLSchema::init$))},
	{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getGrammarPool", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PUBLIC},
	{"isFullyComposed", "()Z", nullptr, $PUBLIC},
	{"lockPool", "()V", nullptr, $PUBLIC},
	{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC},
	{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unlockPool", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleXMLSchema_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.SimpleXMLSchema",
	"com.sun.org.apache.xerces.internal.jaxp.validation.AbstractXMLSchema",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
	_SimpleXMLSchema_FieldInfo_,
	_SimpleXMLSchema_MethodInfo_
};

$Object* allocate$SimpleXMLSchema($Class* clazz) {
	return $of($alloc(SimpleXMLSchema));
}

int32_t SimpleXMLSchema::hashCode() {
	 return this->$AbstractXMLSchema::hashCode();
}

bool SimpleXMLSchema::equals(Object$* arg0) {
	 return this->$AbstractXMLSchema::equals(arg0);
}

$Object* SimpleXMLSchema::clone() {
	 return this->$AbstractXMLSchema::clone();
}

$String* SimpleXMLSchema::toString() {
	 return this->$AbstractXMLSchema::toString();
}

void SimpleXMLSchema::finalize() {
	this->$AbstractXMLSchema::finalize();
}


$GrammarArray* SimpleXMLSchema::ZERO_LENGTH_GRAMMAR_ARRAY = nullptr;

void SimpleXMLSchema::init$($Grammar* grammar) {
	$AbstractXMLSchema::init$();
	$set(this, fGrammar, grammar);
	$set(this, fGrammars, $new($GrammarArray, {grammar}));
	$set(this, fGrammarDescription, $nc(grammar)->getGrammarDescription());
}

$GrammarArray* SimpleXMLSchema::retrieveInitialGrammarSet($String* grammarType) {
	$init($XMLGrammarDescription);
	return $nc($XMLGrammarDescription::XML_SCHEMA)->equals(grammarType) ? $cast($GrammarArray, $nc(this->fGrammars)->clone()) : SimpleXMLSchema::ZERO_LENGTH_GRAMMAR_ARRAY;
}

void SimpleXMLSchema::cacheGrammars($String* grammarType, $GrammarArray* grammars) {
}

$Grammar* SimpleXMLSchema::retrieveGrammar($XMLGrammarDescription* desc) {
	return $nc($of(this->fGrammarDescription))->equals(desc) ? this->fGrammar : ($Grammar*)nullptr;
}

void SimpleXMLSchema::lockPool() {
}

void SimpleXMLSchema::unlockPool() {
}

void SimpleXMLSchema::clear() {
}

$XMLGrammarPool* SimpleXMLSchema::getGrammarPool() {
	return this;
}

bool SimpleXMLSchema::isFullyComposed() {
	return true;
}

void clinit$SimpleXMLSchema($Class* class$) {
	$assignStatic(SimpleXMLSchema::ZERO_LENGTH_GRAMMAR_ARRAY, $new($GrammarArray, 0));
}

SimpleXMLSchema::SimpleXMLSchema() {
}

$Class* SimpleXMLSchema::load$($String* name, bool initialize) {
	$loadClass(SimpleXMLSchema, name, initialize, &_SimpleXMLSchema_ClassInfo_, clinit$SimpleXMLSchema, allocate$SimpleXMLSchema);
	return class$;
}

$Class* SimpleXMLSchema::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com