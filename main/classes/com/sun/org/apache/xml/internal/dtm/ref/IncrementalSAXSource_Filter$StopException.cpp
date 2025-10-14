#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Filter$StopException.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Filter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IncrementalSAXSource_Filter = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource_Filter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _IncrementalSAXSource_Filter$StopException_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Filter;", nullptr, $FINAL | $SYNTHETIC, $field(IncrementalSAXSource_Filter$StopException, this$0)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(IncrementalSAXSource_Filter$StopException, serialVersionUID)},
	{}
};

$MethodInfo _IncrementalSAXSource_Filter$StopException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Filter;)V", nullptr, 0, $method(static_cast<void(IncrementalSAXSource_Filter$StopException::*)($IncrementalSAXSource_Filter*)>(&IncrementalSAXSource_Filter$StopException::init$))},
	{}
};

$InnerClassInfo _IncrementalSAXSource_Filter$StopException_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter$StopException", "com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter", "StopException", 0},
	{}
};

$ClassInfo _IncrementalSAXSource_Filter$StopException_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter$StopException",
	"java.lang.RuntimeException",
	nullptr,
	_IncrementalSAXSource_Filter$StopException_FieldInfo_,
	_IncrementalSAXSource_Filter$StopException_MethodInfo_,
	nullptr,
	nullptr,
	_IncrementalSAXSource_Filter$StopException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter"
};

$Object* allocate$IncrementalSAXSource_Filter$StopException($Class* clazz) {
	return $of($alloc(IncrementalSAXSource_Filter$StopException));
}

void IncrementalSAXSource_Filter$StopException::init$($IncrementalSAXSource_Filter* this$0) {
	$set(this, this$0, this$0);
	$RuntimeException::init$();
}

IncrementalSAXSource_Filter$StopException::IncrementalSAXSource_Filter$StopException() {
}

IncrementalSAXSource_Filter$StopException::IncrementalSAXSource_Filter$StopException(const IncrementalSAXSource_Filter$StopException& e) {
}

IncrementalSAXSource_Filter$StopException IncrementalSAXSource_Filter$StopException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IncrementalSAXSource_Filter$StopException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IncrementalSAXSource_Filter$StopException::load$($String* name, bool initialize) {
	$loadClass(IncrementalSAXSource_Filter$StopException, name, initialize, &_IncrementalSAXSource_Filter$StopException_ClassInfo_, allocate$IncrementalSAXSource_Filter$StopException);
	return class$;
}

$Class* IncrementalSAXSource_Filter$StopException::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com