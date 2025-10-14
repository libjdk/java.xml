#include <com/sun/org/apache/xerces/internal/xs/datatypes/ByteList.h>

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
							namespace datatypes {

$MethodInfo _ByteList_MethodInfo_[] = {
	{"contains", "(B)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"item", "(I)B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xs.XSException"},
	{"toByteArray", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ByteList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.datatypes.ByteList",
	nullptr,
	"java.util.List",
	nullptr,
	_ByteList_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/List<Ljava/lang/Byte;>;"
};

$Object* allocate$ByteList($Class* clazz) {
	return $of($alloc(ByteList));
}

$Class* ByteList::load$($String* name, bool initialize) {
	$loadClass(ByteList, name, initialize, &_ByteList_ClassInfo_, allocate$ByteList);
	return class$;
}

$Class* ByteList::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com