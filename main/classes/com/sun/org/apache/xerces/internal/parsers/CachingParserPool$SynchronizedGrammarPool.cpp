#include <com/sun/org/apache/xerces/internal/parsers/CachingParserPool$SynchronizedGrammarPool.h>

#include <com/sun/org/apache/xerces/internal/parsers/CachingParserPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <jcpp.h>

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $CachingParserPool = ::com::sun::org::apache::xerces::internal::parsers::CachingParserPool;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _CachingParserPool$SynchronizedGrammarPool_FieldInfo_[] = {
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PRIVATE, $field(CachingParserPool$SynchronizedGrammarPool, fGrammarPool)},
	{}
};

$MethodInfo _CachingParserPool$SynchronizedGrammarPool_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(static_cast<void(CachingParserPool$SynchronizedGrammarPool::*)($XMLGrammarPool*)>(&CachingParserPool$SynchronizedGrammarPool::init$))},
	{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"lockPool", "()V", nullptr, $PUBLIC},
	{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC},
	{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC},
	{"unlockPool", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CachingParserPool$SynchronizedGrammarPool_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.CachingParserPool$SynchronizedGrammarPool", "com.sun.org.apache.xerces.internal.parsers.CachingParserPool", "SynchronizedGrammarPool", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _CachingParserPool$SynchronizedGrammarPool_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.CachingParserPool$SynchronizedGrammarPool",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
	_CachingParserPool$SynchronizedGrammarPool_FieldInfo_,
	_CachingParserPool$SynchronizedGrammarPool_MethodInfo_,
	nullptr,
	nullptr,
	_CachingParserPool$SynchronizedGrammarPool_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.CachingParserPool"
};

$Object* allocate$CachingParserPool$SynchronizedGrammarPool($Class* clazz) {
	return $of($alloc(CachingParserPool$SynchronizedGrammarPool));
}

void CachingParserPool$SynchronizedGrammarPool::init$($XMLGrammarPool* grammarPool) {
	$set(this, fGrammarPool, grammarPool);
}

$GrammarArray* CachingParserPool$SynchronizedGrammarPool::retrieveInitialGrammarSet($String* grammarType) {
	$synchronized(this->fGrammarPool) {
		return $nc(this->fGrammarPool)->retrieveInitialGrammarSet(grammarType);
	}
}

$Grammar* CachingParserPool$SynchronizedGrammarPool::retrieveGrammar($XMLGrammarDescription* gDesc) {
	$synchronized(this->fGrammarPool) {
		return $nc(this->fGrammarPool)->retrieveGrammar(gDesc);
	}
}

void CachingParserPool$SynchronizedGrammarPool::cacheGrammars($String* grammarType, $GrammarArray* grammars) {
	$synchronized(this->fGrammarPool) {
		$nc(this->fGrammarPool)->cacheGrammars(grammarType, grammars);
	}
}

void CachingParserPool$SynchronizedGrammarPool::lockPool() {
	$synchronized(this->fGrammarPool) {
		$nc(this->fGrammarPool)->lockPool();
	}
}

void CachingParserPool$SynchronizedGrammarPool::clear() {
	$synchronized(this->fGrammarPool) {
		$nc(this->fGrammarPool)->clear();
	}
}

void CachingParserPool$SynchronizedGrammarPool::unlockPool() {
	$synchronized(this->fGrammarPool) {
		$nc(this->fGrammarPool)->unlockPool();
	}
}

CachingParserPool$SynchronizedGrammarPool::CachingParserPool$SynchronizedGrammarPool() {
}

$Class* CachingParserPool$SynchronizedGrammarPool::load$($String* name, bool initialize) {
	$loadClass(CachingParserPool$SynchronizedGrammarPool, name, initialize, &_CachingParserPool$SynchronizedGrammarPool_ClassInfo_, allocate$CachingParserPool$SynchronizedGrammarPool);
	return class$;
}

$Class* CachingParserPool$SynchronizedGrammarPool::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com