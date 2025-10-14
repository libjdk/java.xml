#include <com/sun/org/apache/bcel/internal/util/ClassQueue.h>

#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/LinkedList.h>
#include <jcpp.h>

using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $LinkedList = ::java::util::LinkedList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _ClassQueue_FieldInfo_[] = {
	{"vec", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;>;", $PRIVATE | $FINAL, $field(ClassQueue, vec)},
	{}
};

$MethodInfo _ClassQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassQueue::*)()>(&ClassQueue::init$))},
	{"dequeue", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC},
	{"empty", "()Z", nullptr, $PUBLIC},
	{"enqueue", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClassQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.ClassQueue",
	"java.lang.Object",
	nullptr,
	_ClassQueue_FieldInfo_,
	_ClassQueue_MethodInfo_
};

$Object* allocate$ClassQueue($Class* clazz) {
	return $of($alloc(ClassQueue));
}

void ClassQueue::init$() {
	$set(this, vec, $new($LinkedList));
}

void ClassQueue::enqueue($JavaClass* clazz) {
	$nc(this->vec)->addLast(clazz);
}

$JavaClass* ClassQueue::dequeue() {
	return $cast($JavaClass, $nc(this->vec)->removeFirst());
}

bool ClassQueue::empty() {
	return $nc(this->vec)->isEmpty();
}

$String* ClassQueue::toString() {
	return $nc(this->vec)->toString();
}

ClassQueue::ClassQueue() {
}

$Class* ClassQueue::load$($String* name, bool initialize) {
	$loadClass(ClassQueue, name, initialize, &_ClassQueue_ClassInfo_, allocate$ClassQueue);
	return class$;
}

$Class* ClassQueue::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com