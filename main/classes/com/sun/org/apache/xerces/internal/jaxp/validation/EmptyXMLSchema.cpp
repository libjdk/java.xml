#include <com/sun/org/apache/xerces/internal/jaxp/validation/EmptyXMLSchema.h>

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

$FieldInfo _EmptyXMLSchema_FieldInfo_[] = {
	{"ZERO_LENGTH_GRAMMAR_ARRAY", "[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EmptyXMLSchema, ZERO_LENGTH_GRAMMAR_ARRAY)},
	{}
};

$MethodInfo _EmptyXMLSchema_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmptyXMLSchema::*)()>(&EmptyXMLSchema::init$))},
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

$ClassInfo _EmptyXMLSchema_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.EmptyXMLSchema",
	"com.sun.org.apache.xerces.internal.jaxp.validation.AbstractXMLSchema",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
	_EmptyXMLSchema_FieldInfo_,
	_EmptyXMLSchema_MethodInfo_
};

$Object* allocate$EmptyXMLSchema($Class* clazz) {
	return $of($alloc(EmptyXMLSchema));
}

int32_t EmptyXMLSchema::hashCode() {
	 return this->$AbstractXMLSchema::hashCode();
}

bool EmptyXMLSchema::equals(Object$* arg0) {
	 return this->$AbstractXMLSchema::equals(arg0);
}

$Object* EmptyXMLSchema::clone() {
	 return this->$AbstractXMLSchema::clone();
}

$String* EmptyXMLSchema::toString() {
	 return this->$AbstractXMLSchema::toString();
}

void EmptyXMLSchema::finalize() {
	this->$AbstractXMLSchema::finalize();
}


$GrammarArray* EmptyXMLSchema::ZERO_LENGTH_GRAMMAR_ARRAY = nullptr;

void EmptyXMLSchema::init$() {
	$AbstractXMLSchema::init$();
}

$GrammarArray* EmptyXMLSchema::retrieveInitialGrammarSet($String* grammarType) {
	return EmptyXMLSchema::ZERO_LENGTH_GRAMMAR_ARRAY;
}

void EmptyXMLSchema::cacheGrammars($String* grammarType, $GrammarArray* grammars) {
}

$Grammar* EmptyXMLSchema::retrieveGrammar($XMLGrammarDescription* desc) {
	return nullptr;
}

void EmptyXMLSchema::lockPool() {
}

void EmptyXMLSchema::unlockPool() {
}

void EmptyXMLSchema::clear() {
}

$XMLGrammarPool* EmptyXMLSchema::getGrammarPool() {
	return this;
}

bool EmptyXMLSchema::isFullyComposed() {
	return true;
}

void clinit$EmptyXMLSchema($Class* class$) {
	$assignStatic(EmptyXMLSchema::ZERO_LENGTH_GRAMMAR_ARRAY, $new($GrammarArray, 0));
}

EmptyXMLSchema::EmptyXMLSchema() {
}

$Class* EmptyXMLSchema::load$($String* name, bool initialize) {
	$loadClass(EmptyXMLSchema, name, initialize, &_EmptyXMLSchema_ClassInfo_, clinit$EmptyXMLSchema, allocate$EmptyXMLSchema);
	return class$;
}

$Class* EmptyXMLSchema::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com