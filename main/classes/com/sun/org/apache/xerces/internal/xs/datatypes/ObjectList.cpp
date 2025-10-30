#include <com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>

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
							namespace datatypes {

$MethodInfo _ObjectList_MethodInfo_[] = {
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"item", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjectList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.datatypes.ObjectList",
	nullptr,
	"java.util.List",
	nullptr,
	_ObjectList_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/List<Ljava/lang/Object;>;"
};

$Object* allocate$ObjectList($Class* clazz) {
	return $of($alloc(ObjectList));
}

$Class* ObjectList::load$($String* name, bool initialize) {
	$loadClass(ObjectList, name, initialize, &_ObjectList_ClassInfo_, allocate$ObjectList);
	return class$;
}

$Class* ObjectList::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com