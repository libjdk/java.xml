#include <com/sun/org/apache/xml/internal/utils/ObjectStack.h>

#include <com/sun/org/apache/xml/internal/utils/ObjectVector.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EmptyStackException.h>
#include <jcpp.h>

using $ObjectVector = ::com::sun::org::apache::xml::internal::utils::ObjectVector;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EmptyStackException = ::java::util::EmptyStackException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _ObjectStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ObjectStack::*)()>(&ObjectStack::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectStack::*)(int32_t)>(&ObjectStack::init$))},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/ObjectStack;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectStack::*)(ObjectStack*)>(&ObjectStack::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"empty", "()Z", nullptr, $PUBLIC},
	{"peek", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"peek", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"pop", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"push", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"quickPop", "(I)V", nullptr, $PUBLIC},
	{"search", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"setTop", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ObjectStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.ObjectStack",
	"com.sun.org.apache.xml.internal.utils.ObjectVector",
	nullptr,
	nullptr,
	_ObjectStack_MethodInfo_
};

$Object* allocate$ObjectStack($Class* clazz) {
	return $of($alloc(ObjectStack));
}

void ObjectStack::init$() {
	$ObjectVector::init$();
}

void ObjectStack::init$(int32_t blocksize) {
	$ObjectVector::init$(blocksize);
}

void ObjectStack::init$(ObjectStack* v) {
	$ObjectVector::init$(static_cast<$ObjectVector*>(v));
}

$Object* ObjectStack::push(Object$* i) {
	if ((this->m_firstFree + 1) >= this->m_mapSize) {
		this->m_mapSize += this->m_blocksize;
		$var($ObjectArray, newMap, $new($ObjectArray, this->m_mapSize));
		$System::arraycopy(this->m_map, 0, newMap, 0, this->m_firstFree + 1);
		$set(this, m_map, newMap);
	}
	$nc(this->m_map)->set(this->m_firstFree, i);
	++this->m_firstFree;
	return $of(i);
}

$Object* ObjectStack::pop() {
	$var($Object0, val, $nc(this->m_map)->get(--this->m_firstFree));
	$nc(this->m_map)->set(this->m_firstFree, nullptr);
	return $of(val);
}

void ObjectStack::quickPop(int32_t n) {
	this->m_firstFree -= n;
}

$Object* ObjectStack::peek() {
	try {
		return $of($nc(this->m_map)->get(this->m_firstFree - 1));
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		$throwNew($EmptyStackException);
	}
	$shouldNotReachHere();
}

$Object* ObjectStack::peek(int32_t n) {
	try {
		return $of($nc(this->m_map)->get(this->m_firstFree - (1 + n)));
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		$throwNew($EmptyStackException);
	}
	$shouldNotReachHere();
}

void ObjectStack::setTop(Object$* val) {
	try {
		$nc(this->m_map)->set(this->m_firstFree - 1, val);
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		$throwNew($EmptyStackException);
	}
}

bool ObjectStack::empty() {
	return this->m_firstFree == 0;
}

int32_t ObjectStack::search(Object$* o) {
	int32_t i = lastIndexOf(o);
	if (i >= 0) {
		return size() - i;
	}
	return -1;
}

$Object* ObjectStack::clone() {
	return $of($cast(ObjectStack, $ObjectVector::clone()));
}

ObjectStack::ObjectStack() {
}

$Class* ObjectStack::load$($String* name, bool initialize) {
	$loadClass(ObjectStack, name, initialize, &_ObjectStack_ClassInfo_, allocate$ObjectStack);
	return class$;
}

$Class* ObjectStack::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com