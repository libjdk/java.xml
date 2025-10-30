#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>

#include <jcpp.h>

#undef END

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$FieldInfo _DTMAxisIterator_FieldInfo_[] = {
	{"END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMAxisIterator, END)},
	{}
};

$MethodInfo _DTMAxisIterator_MethodInfo_[] = {
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLast", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPosition", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartNode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"gotoMark", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isReverse", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"setMark", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMAxisIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTMAxisIterator",
	nullptr,
	"java.lang.Cloneable",
	_DTMAxisIterator_FieldInfo_,
	_DTMAxisIterator_MethodInfo_
};

$Object* allocate$DTMAxisIterator($Class* clazz) {
	return $of($alloc(DTMAxisIterator));
}

$Class* DTMAxisIterator::load$($String* name, bool initialize) {
	$loadClass(DTMAxisIterator, name, initialize, &_DTMAxisIterator_ClassInfo_, allocate$DTMAxisIterator);
	return class$;
}

$Class* DTMAxisIterator::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com