#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl$EnclosingAttr.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $Serializable = ::java::io::Serializable;
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
						namespace dom {

$FieldInfo _DocumentImpl$EnclosingAttr_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;", nullptr, $FINAL | $SYNTHETIC, $field(DocumentImpl$EnclosingAttr, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocumentImpl$EnclosingAttr, serialVersionUID)},
	{"node", "Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;", nullptr, 0, $field(DocumentImpl$EnclosingAttr, node)},
	{"oldvalue", "Ljava/lang/String;", nullptr, 0, $field(DocumentImpl$EnclosingAttr, oldvalue)},
	{}
};

$MethodInfo _DocumentImpl$EnclosingAttr_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;)V", nullptr, 0, $method(static_cast<void(DocumentImpl$EnclosingAttr::*)($DocumentImpl*)>(&DocumentImpl$EnclosingAttr::init$))},
	{}
};

$InnerClassInfo _DocumentImpl$EnclosingAttr_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.DocumentImpl$EnclosingAttr", "com.sun.org.apache.xerces.internal.dom.DocumentImpl", "EnclosingAttr", 0},
	{}
};

$ClassInfo _DocumentImpl$EnclosingAttr_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DocumentImpl$EnclosingAttr",
	"java.lang.Object",
	"java.io.Serializable",
	_DocumentImpl$EnclosingAttr_FieldInfo_,
	_DocumentImpl$EnclosingAttr_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentImpl$EnclosingAttr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.DocumentImpl"
};

$Object* allocate$DocumentImpl$EnclosingAttr($Class* clazz) {
	return $of($alloc(DocumentImpl$EnclosingAttr));
}

void DocumentImpl$EnclosingAttr::init$($DocumentImpl* this$0) {
	$set(this, this$0, this$0);
}

DocumentImpl$EnclosingAttr::DocumentImpl$EnclosingAttr() {
}

$Class* DocumentImpl$EnclosingAttr::load$($String* name, bool initialize) {
	$loadClass(DocumentImpl$EnclosingAttr, name, initialize, &_DocumentImpl$EnclosingAttr_ClassInfo_, allocate$DocumentImpl$EnclosingAttr);
	return class$;
}

$Class* DocumentImpl$EnclosingAttr::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com