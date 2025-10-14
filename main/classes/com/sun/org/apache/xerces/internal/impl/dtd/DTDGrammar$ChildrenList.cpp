#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar$ChildrenList.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $DTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
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
						namespace impl {
							namespace dtd {

$FieldInfo _DTDGrammar$ChildrenList_FieldInfo_[] = {
	{"length", "I", nullptr, $PUBLIC, $field(DTDGrammar$ChildrenList, length)},
	{"qname", "[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $field(DTDGrammar$ChildrenList, qname)},
	{"type", "[I", nullptr, $PUBLIC, $field(DTDGrammar$ChildrenList, type)},
	{}
};

$MethodInfo _DTDGrammar$ChildrenList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DTDGrammar$ChildrenList::*)()>(&DTDGrammar$ChildrenList::init$))},
	{}
};

$InnerClassInfo _DTDGrammar$ChildrenList_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar$ChildrenList", "com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar", "ChildrenList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DTDGrammar$ChildrenList_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar$ChildrenList",
	"java.lang.Object",
	nullptr,
	_DTDGrammar$ChildrenList_FieldInfo_,
	_DTDGrammar$ChildrenList_MethodInfo_,
	nullptr,
	nullptr,
	_DTDGrammar$ChildrenList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar"
};

$Object* allocate$DTDGrammar$ChildrenList($Class* clazz) {
	return $of($alloc(DTDGrammar$ChildrenList));
}

void DTDGrammar$ChildrenList::init$() {
	this->length = 0;
	$set(this, qname, $new($QNameArray, 2));
	$set(this, type, $new($ints, 2));
}

DTDGrammar$ChildrenList::DTDGrammar$ChildrenList() {
}

$Class* DTDGrammar$ChildrenList::load$($String* name, bool initialize) {
	$loadClass(DTDGrammar$ChildrenList, name, initialize, &_DTDGrammar$ChildrenList_ClassInfo_, allocate$DTDGrammar$ChildrenList);
	return class$;
}

$Class* DTDGrammar$ChildrenList::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com