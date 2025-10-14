#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>

#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

$MethodInfo _XMLGrammarPool_MethodInfo_[] = {
	{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"lockPool", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC | $ABSTRACT},
	{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC | $ABSTRACT},
	{"unlockPool", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLGrammarPool_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
	nullptr,
	nullptr,
	nullptr,
	_XMLGrammarPool_MethodInfo_
};

$Object* allocate$XMLGrammarPool($Class* clazz) {
	return $of($alloc(XMLGrammarPool));
}

$Class* XMLGrammarPool::load$($String* name, bool initialize) {
	$loadClass(XMLGrammarPool, name, initialize, &_XMLGrammarPool_ClassInfo_, allocate$XMLGrammarPool);
	return class$;
}

$Class* XMLGrammarPool::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com