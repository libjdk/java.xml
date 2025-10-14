#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$3.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$AbstractObjectList.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ValidatedInfoArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo>;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $XSSimpleTypeDecl$AbstractObjectList = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl$AbstractObjectList;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _XSSimpleTypeDecl$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $FINAL | $SYNTHETIC, $field(XSSimpleTypeDecl$3, this$0)},
	{}
};

$MethodInfo _XSSimpleTypeDecl$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;)V", nullptr, 0, $method(static_cast<void(XSSimpleTypeDecl$3::*)($XSSimpleTypeDecl*)>(&XSSimpleTypeDecl$3::init$))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"item", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XSSimpleTypeDecl$3_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl",
	"getEnumerationItemTypeList",
	"()Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;"
};

$InnerClassInfo _XSSimpleTypeDecl$3_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$3", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$AbstractObjectList", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "AbstractObjectList", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _XSSimpleTypeDecl$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$3",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$AbstractObjectList",
	nullptr,
	_XSSimpleTypeDecl$3_FieldInfo_,
	_XSSimpleTypeDecl$3_MethodInfo_,
	nullptr,
	&_XSSimpleTypeDecl$3_EnclosingMethodInfo_,
	_XSSimpleTypeDecl$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl"
};

$Object* allocate$XSSimpleTypeDecl$3($Class* clazz) {
	return $of($alloc(XSSimpleTypeDecl$3));
}

void XSSimpleTypeDecl$3::init$($XSSimpleTypeDecl* this$0) {
	$set(this, this$0, this$0);
	$XSSimpleTypeDecl$AbstractObjectList::init$();
}

int32_t XSSimpleTypeDecl$3::getLength() {
	return (this->this$0->fEnumeration != nullptr) ? this->this$0->fEnumerationSize : 0;
}

bool XSSimpleTypeDecl$3::contains(Object$* item) {
	if (this->this$0->fEnumeration == nullptr || !($instanceOf($ShortList, item))) {
		return false;
	}
	for (int32_t i = 0; i < this->this$0->fEnumerationSize; ++i) {
		if ($equals($nc($nc(this->this$0->fEnumeration)->get(i))->itemValueTypes, item)) {
			return true;
		}
	}
	return false;
}

$Object* XSSimpleTypeDecl$3::item(int32_t index) {
	if (index < 0 || index >= getLength()) {
		return $of(nullptr);
	}
	return $of($nc($nc(this->this$0->fEnumeration)->get(index))->itemValueTypes);
}

XSSimpleTypeDecl$3::XSSimpleTypeDecl$3() {
}

$Class* XSSimpleTypeDecl$3::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDecl$3, name, initialize, &_XSSimpleTypeDecl$3_ClassInfo_, allocate$XSSimpleTypeDecl$3);
	return class$;
}

$Class* XSSimpleTypeDecl$3::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com