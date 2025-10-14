#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef INHERIT
#undef NOTSTRIP
#undef STRIP

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
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

$FieldInfo _DTMWSFilter_FieldInfo_[] = {
	{"NOTSTRIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMWSFilter, NOTSTRIP)},
	{"STRIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMWSFilter, STRIP)},
	{"INHERIT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMWSFilter, INHERIT)},
	{}
};

$MethodInfo _DTMWSFilter_MethodInfo_[] = {
	{"getShouldStripSpace", "(ILcom/sun/org/apache/xml/internal/dtm/DTM;)S", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMWSFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTMWSFilter",
	nullptr,
	nullptr,
	_DTMWSFilter_FieldInfo_,
	_DTMWSFilter_MethodInfo_
};

$Object* allocate$DTMWSFilter($Class* clazz) {
	return $of($alloc(DTMWSFilter));
}

$Class* DTMWSFilter::load$($String* name, bool initialize) {
	$loadClass(DTMWSFilter, name, initialize, &_DTMWSFilter_ClassInfo_, allocate$DTMWSFilter);
	return class$;
}

$Class* DTMWSFilter::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com