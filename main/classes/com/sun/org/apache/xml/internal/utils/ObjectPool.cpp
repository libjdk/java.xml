#include <com/sun/org/apache/xml/internal/utils/ObjectPool.h>

#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ER_EXCEPTION_CREATING_POOL

using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _ObjectPool_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ObjectPool, serialVersionUID)},
	{"objectType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(ObjectPool, objectType)},
	{"freeStack", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(ObjectPool, freeStack)},
	{}
};

$MethodInfo _ObjectPool_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(ObjectPool::*)($Class*)>(&ObjectPool::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectPool::*)($String*)>(&ObjectPool::init$))},
	{"<init>", "(Ljava/lang/Class;I)V", "(Ljava/lang/Class<*>;I)V", $PUBLIC, $method(static_cast<void(ObjectPool::*)($Class*,int32_t)>(&ObjectPool::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ObjectPool::*)()>(&ObjectPool::init$))},
	{"freeInstance", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getInstance", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getInstanceIfFree", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _ObjectPool_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.ObjectPool",
	"java.lang.Object",
	"java.io.Serializable",
	_ObjectPool_FieldInfo_,
	_ObjectPool_MethodInfo_
};

$Object* allocate$ObjectPool($Class* clazz) {
	return $of($alloc(ObjectPool));
}

void ObjectPool::init$($Class* type) {
	$set(this, objectType, type);
	$set(this, freeStack, $new($ArrayList));
}

void ObjectPool::init$($String* className) {
	try {
		$set(this, objectType, $ObjectFactory::findProviderClass(className, true));
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, cnfe, $catch());
		$throwNew($WrappedRuntimeException, cnfe);
	}
	$set(this, freeStack, $new($ArrayList));
}

void ObjectPool::init$($Class* type, int32_t size) {
	$set(this, objectType, type);
	$set(this, freeStack, $new($ArrayList, size));
}

void ObjectPool::init$() {
	$set(this, objectType, nullptr);
	$set(this, freeStack, $new($ArrayList));
}

$Object* ObjectPool::getInstanceIfFree() {
	$synchronized(this) {
		if (!$nc(this->freeStack)->isEmpty()) {
			$var($Object, result, $nc(this->freeStack)->remove($nc(this->freeStack)->size() - 1));
			return $of(result);
		}
		return $of(nullptr);
	}
}

$Object* ObjectPool::getInstance() {
	$synchronized(this) {
		$beforeCallerSensitive();
		if ($nc(this->freeStack)->isEmpty()) {
			try {
				return $of($nc($($nc(this->objectType)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
			} catch ($InstantiationException&) {
				$var($Exception, ex, $catch());
			} catch ($IllegalAccessException&) {
				$var($Exception, ex, $catch());
			} catch ($SecurityException&) {
				$var($Exception, ex, $catch());
			} catch ($IllegalArgumentException&) {
				$var($Exception, ex, $catch());
			} catch ($InvocationTargetException&) {
				$var($Exception, ex, $catch());
			} catch ($NoSuchMethodException&) {
				$var($Exception, ex, $catch());
			}
			$init($XMLErrorResources);
			$throwNew($RuntimeException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_EXCEPTION_CREATING_POOL, nullptr)));
		} else {
			$var($Object, result, $nc(this->freeStack)->remove($nc(this->freeStack)->size() - 1));
			return $of(result);
		}
	}
}

void ObjectPool::freeInstance(Object$* obj) {
	$synchronized(this) {
		$nc(this->freeStack)->add(obj);
	}
}

ObjectPool::ObjectPool() {
}

$Class* ObjectPool::load$($String* name, bool initialize) {
	$loadClass(ObjectPool, name, initialize, &_ObjectPool_ClassInfo_, allocate$ObjectPool);
	return class$;
}

$Class* ObjectPool::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com