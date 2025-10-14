#include <com/sun/org/apache/xerces/internal/xs/StringList.h>

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

$MethodInfo _StringList_MethodInfo_[] = {
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"item", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StringList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.StringList",
	nullptr,
	"java.util.List",
	nullptr,
	_StringList_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/List<Ljava/lang/String;>;"
};

$Object* allocate$StringList($Class* clazz) {
	return $of($alloc(StringList));
}

$Class* StringList::load$($String* name, bool initialize) {
	$loadClass(StringList, name, initialize, &_StringList_ClassInfo_, allocate$StringList);
	return class$;
}

$Class* StringList::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com