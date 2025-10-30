#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <jcpp.h>

#undef FILTER_ACCEPT
#undef FILTER_REJECT
#undef FILTER_SKIP

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$FieldInfo _DTMIterator_FieldInfo_[] = {
	{"FILTER_ACCEPT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMIterator, FILTER_ACCEPT)},
	{"FILTER_REJECT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMIterator, FILTER_REJECT)},
	{"FILTER_SKIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMIterator, FILTER_SKIP)},
	{}
};

$MethodInfo _DTMIterator_MethodInfo_[] = {
	{"allowDetachToRelease", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"cloneWithReset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.CloneNotSupportedException"},
	{"detach", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAxis", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCurrentNode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCurrentPos", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTM", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDTMManager", "()Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC | $ABSTRACT},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRoot", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getWhatToShow", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isFresh", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isMutable", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"item", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"nextNode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"previousNode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"runTo", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCurrentPos", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setItem", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setShouldCacheNodes", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTMIterator",
	nullptr,
	nullptr,
	_DTMIterator_FieldInfo_,
	_DTMIterator_MethodInfo_
};

$Object* allocate$DTMIterator($Class* clazz) {
	return $of($alloc(DTMIterator));
}

$Object* DTMIterator::clone() {
	 return this->$Object::clone();
}

$Class* DTMIterator::load$($String* name, bool initialize) {
	$loadClass(DTMIterator, name, initialize, &_DTMIterator_ClassInfo_, allocate$DTMIterator);
	return class$;
}

$Class* DTMIterator::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com