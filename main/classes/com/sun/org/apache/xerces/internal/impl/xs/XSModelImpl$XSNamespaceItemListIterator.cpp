#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelImpl$XSNamespaceItemListIterator.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $XSModelImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelImpl;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ListIterator = ::java::util::ListIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSModelImpl$XSNamespaceItemListIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSModelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XSModelImpl$XSNamespaceItemListIterator, this$0)},
	{"index", "I", nullptr, $PRIVATE, $field(XSModelImpl$XSNamespaceItemListIterator, index)},
	{}
};

$MethodInfo _XSModelImpl$XSNamespaceItemListIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSModelImpl;I)V", nullptr, $PUBLIC, $method(static_cast<void(XSModelImpl$XSNamespaceItemListIterator::*)($XSModelImpl*,int32_t)>(&XSModelImpl$XSNamespaceItemListIterator::init$))},
	{"add", "(Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;)V", nullptr, $PUBLIC, $method(static_cast<void(XSModelImpl$XSNamespaceItemListIterator::*)($XSNamespaceItem*)>(&XSModelImpl$XSNamespaceItemListIterator::add))},
	{"add", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"hasPrevious", "()Z", nullptr, $PUBLIC},
	{"next", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC},
	{"nextIndex", "()I", nullptr, $PUBLIC},
	{"previous", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC},
	{"previousIndex", "()I", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"set", "(Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;)V", nullptr, $PUBLIC, $method(static_cast<void(XSModelImpl$XSNamespaceItemListIterator::*)($XSNamespaceItem*)>(&XSModelImpl$XSNamespaceItemListIterator::set))},
	{"set", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _XSModelImpl$XSNamespaceItemListIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl$XSNamespaceItemListIterator", "com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl", "XSNamespaceItemListIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _XSModelImpl$XSNamespaceItemListIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl$XSNamespaceItemListIterator",
	"java.lang.Object",
	"java.util.ListIterator",
	_XSModelImpl$XSNamespaceItemListIterator_FieldInfo_,
	_XSModelImpl$XSNamespaceItemListIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;>;",
	nullptr,
	_XSModelImpl$XSNamespaceItemListIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl"
};

$Object* allocate$XSModelImpl$XSNamespaceItemListIterator($Class* clazz) {
	return $of($alloc(XSModelImpl$XSNamespaceItemListIterator));
}

void XSModelImpl$XSNamespaceItemListIterator::init$($XSModelImpl* this$0, int32_t index) {
	$set(this, this$0, this$0);
	this->index = index;
}

bool XSModelImpl$XSNamespaceItemListIterator::hasNext() {
	return (this->index < this->this$0->fGrammarCount);
}

$Object* XSModelImpl$XSNamespaceItemListIterator::next() {
	if (this->index < this->this$0->fGrammarCount) {
		return $of($nc(this->this$0->fGrammarList)->get(this->index++));
	}
	$throwNew($NoSuchElementException);
}

bool XSModelImpl$XSNamespaceItemListIterator::hasPrevious() {
	return (this->index > 0);
}

$Object* XSModelImpl$XSNamespaceItemListIterator::previous() {
	if (this->index > 0) {
		return $of($nc(this->this$0->fGrammarList)->get(--this->index));
	}
	$throwNew($NoSuchElementException);
}

int32_t XSModelImpl$XSNamespaceItemListIterator::nextIndex() {
	return this->index;
}

int32_t XSModelImpl$XSNamespaceItemListIterator::previousIndex() {
	return this->index - 1;
}

void XSModelImpl$XSNamespaceItemListIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void XSModelImpl$XSNamespaceItemListIterator::set($XSNamespaceItem* o) {
	$throwNew($UnsupportedOperationException);
}

void XSModelImpl$XSNamespaceItemListIterator::add($XSNamespaceItem* o) {
	$throwNew($UnsupportedOperationException);
}

void XSModelImpl$XSNamespaceItemListIterator::add(Object$* o) {
	this->add($cast($XSNamespaceItem, o));
}

void XSModelImpl$XSNamespaceItemListIterator::set(Object$* o) {
	this->set($cast($XSNamespaceItem, o));
}

XSModelImpl$XSNamespaceItemListIterator::XSModelImpl$XSNamespaceItemListIterator() {
}

$Class* XSModelImpl$XSNamespaceItemListIterator::load$($String* name, bool initialize) {
	$loadClass(XSModelImpl$XSNamespaceItemListIterator, name, initialize, &_XSModelImpl$XSNamespaceItemListIterator_ClassInfo_, allocate$XSModelImpl$XSNamespaceItemListIterator);
	return class$;
}

$Class* XSModelImpl$XSNamespaceItemListIterator::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com