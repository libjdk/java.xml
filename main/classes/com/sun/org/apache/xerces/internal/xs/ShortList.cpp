#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _ShortList_MethodInfo_[] = {
	{"contains", "(S)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"item", "(I)S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException"},
	{}
};

$ClassInfo _ShortList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.ShortList",
	nullptr,
	"java.util.List",
	nullptr,
	_ShortList_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/List<Ljava/lang/Short;>;"
};

$Object* allocate$ShortList($Class* clazz) {
	return $of($alloc(ShortList));
}

$Class* ShortList::load$($String* name, bool initialize) {
	$loadClass(ShortList, name, initialize, &_ShortList_ClassInfo_, allocate$ShortList);
	return class$;
}

$Class* ShortList::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com