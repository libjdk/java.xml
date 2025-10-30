#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl$EmptyIterator.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $ClassInfo = ::java::lang::ClassInfo;
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
								namespace util {

$MethodInfo _XSObjectListImpl$EmptyIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XSObjectListImpl$EmptyIterator::*)()>(&XSObjectListImpl$EmptyIterator::init$))},
	{"add", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"hasPrevious", "()Z", nullptr, $PUBLIC},
	{"next", "()Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC},
	{"nextIndex", "()I", nullptr, $PUBLIC},
	{"previous", "()Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC},
	{"previousIndex", "()I", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"set", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _XSObjectListImpl$EmptyIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$EmptyIterator", "com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl", "EmptyIterator", $STATIC},
	{}
};

$ClassInfo _XSObjectListImpl$EmptyIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$EmptyIterator",
	"java.lang.Object",
	"java.util.ListIterator",
	nullptr,
	_XSObjectListImpl$EmptyIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;",
	nullptr,
	_XSObjectListImpl$EmptyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl"
};

$Object* allocate$XSObjectListImpl$EmptyIterator($Class* clazz) {
	return $of($alloc(XSObjectListImpl$EmptyIterator));
}

void XSObjectListImpl$EmptyIterator::init$() {
}

bool XSObjectListImpl$EmptyIterator::hasNext() {
	return false;
}

$Object* XSObjectListImpl$EmptyIterator::next() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

bool XSObjectListImpl$EmptyIterator::hasPrevious() {
	return false;
}

$Object* XSObjectListImpl$EmptyIterator::previous() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

int32_t XSObjectListImpl$EmptyIterator::nextIndex() {
	return 0;
}

int32_t XSObjectListImpl$EmptyIterator::previousIndex() {
	return -1;
}

void XSObjectListImpl$EmptyIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void XSObjectListImpl$EmptyIterator::set($XSObject* object) {
	$throwNew($UnsupportedOperationException);
}

void XSObjectListImpl$EmptyIterator::add($XSObject* object) {
	$throwNew($UnsupportedOperationException);
}

void XSObjectListImpl$EmptyIterator::add(Object$* object) {
	this->add($cast($XSObject, object));
}

void XSObjectListImpl$EmptyIterator::set(Object$* object) {
	this->set($cast($XSObject, object));
}

XSObjectListImpl$EmptyIterator::XSObjectListImpl$EmptyIterator() {
}

$Class* XSObjectListImpl$EmptyIterator::load$($String* name, bool initialize) {
	$loadClass(XSObjectListImpl$EmptyIterator, name, initialize, &_XSObjectListImpl$EmptyIterator_ClassInfo_, allocate$XSObjectListImpl$EmptyIterator);
	return class$;
}

$Class* XSObjectListImpl$EmptyIterator::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com