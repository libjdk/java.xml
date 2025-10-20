#include <com/sun/org/apache/xml/internal/dtm/ref/CoroutineManager.h>

#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/BitSet.h>
#include <jcpp.h>

#undef ANYBODY
#undef ER_COROUTINE_CO_EXIT
#undef ER_COROUTINE_NOT_AVAIL
#undef NOBODY

using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $BitSet = ::java::util::BitSet;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _CoroutineManager_FieldInfo_[] = {
	{"m_activeIDs", "Ljava/util/BitSet;", nullptr, 0, $field(CoroutineManager, m_activeIDs)},
	{"m_unreasonableId", "I", nullptr, $STATIC | $FINAL, $constField(CoroutineManager, m_unreasonableId)},
	{"m_yield", "Ljava/lang/Object;", nullptr, 0, $field(CoroutineManager, m_yield)},
	{"NOBODY", "I", nullptr, $STATIC | $FINAL, $constField(CoroutineManager, NOBODY)},
	{"ANYBODY", "I", nullptr, $STATIC | $FINAL, $constField(CoroutineManager, ANYBODY)},
	{"m_nextCoroutine", "I", nullptr, 0, $field(CoroutineManager, m_nextCoroutine)},
	{}
};

$MethodInfo _CoroutineManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CoroutineManager::*)()>(&CoroutineManager::init$))},
	{"co_entry_pause", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.NoSuchMethodException"},
	{"co_exit", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"co_exit_to", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.NoSuchMethodException"},
	{"co_joinCoroutineSet", "(I)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"co_resume", "(Ljava/lang/Object;II)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.NoSuchMethodException"},
	{}
};

$ClassInfo _CoroutineManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.CoroutineManager",
	"java.lang.Object",
	nullptr,
	_CoroutineManager_FieldInfo_,
	_CoroutineManager_MethodInfo_
};

$Object* allocate$CoroutineManager($Class* clazz) {
	return $of($alloc(CoroutineManager));
}

void CoroutineManager::init$() {
	$set(this, m_activeIDs, $new($BitSet));
	$set(this, m_yield, nullptr);
	this->m_nextCoroutine = CoroutineManager::NOBODY;
}

int32_t CoroutineManager::co_joinCoroutineSet(int32_t coroutineID) {
	$synchronized(this) {
		if (coroutineID >= 0) {
			if (coroutineID >= CoroutineManager::m_unreasonableId || $nc(this->m_activeIDs)->get(coroutineID)) {
				return -1;
			}
		} else {
			coroutineID = 0;
			while (coroutineID < CoroutineManager::m_unreasonableId) {
				if ($nc(this->m_activeIDs)->get(coroutineID)) {
					++coroutineID;
				} else {
					break;
				}
			}
			if (coroutineID >= CoroutineManager::m_unreasonableId) {
				return -1;
			}
		}
		$nc(this->m_activeIDs)->set(coroutineID);
		return coroutineID;
	}
}

$Object* CoroutineManager::co_entry_pause(int32_t thisCoroutine) {
	$synchronized(this) {
		if (!$nc(this->m_activeIDs)->get(thisCoroutine)) {
			$throwNew($NoSuchMethodException);
		}
		while (this->m_nextCoroutine != thisCoroutine) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException&) {
				$catch();
			}
		}
		return $of(this->m_yield);
	}
}

$Object* CoroutineManager::co_resume(Object$* arg_object, int32_t thisCoroutine, int32_t toCoroutine) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!$nc(this->m_activeIDs)->get(toCoroutine)) {
			$init($XMLErrorResources);
			$throwNew($NoSuchMethodException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_COROUTINE_NOT_AVAIL, $$new($ObjectArray, {$($of($Integer::toString(toCoroutine)))}))));
		}
		$set(this, m_yield, arg_object);
		this->m_nextCoroutine = toCoroutine;
		$of(this)->notify();
		while (this->m_nextCoroutine != thisCoroutine || this->m_nextCoroutine == CoroutineManager::ANYBODY || this->m_nextCoroutine == CoroutineManager::NOBODY) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException&) {
				$catch();
			}
		}
		if (this->m_nextCoroutine == CoroutineManager::NOBODY) {
			co_exit(thisCoroutine);
			$init($XMLErrorResources);
			$throwNew($NoSuchMethodException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_COROUTINE_CO_EXIT, nullptr)));
		}
		return $of(this->m_yield);
	}
}

void CoroutineManager::co_exit(int32_t thisCoroutine) {
	$synchronized(this) {
		$nc(this->m_activeIDs)->clear(thisCoroutine);
		this->m_nextCoroutine = CoroutineManager::NOBODY;
		$of(this)->notify();
	}
}

void CoroutineManager::co_exit_to(Object$* arg_object, int32_t thisCoroutine, int32_t toCoroutine) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!$nc(this->m_activeIDs)->get(toCoroutine)) {
			$init($XMLErrorResources);
			$throwNew($NoSuchMethodException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_COROUTINE_NOT_AVAIL, $$new($ObjectArray, {$($of($Integer::toString(toCoroutine)))}))));
		}
		$set(this, m_yield, arg_object);
		this->m_nextCoroutine = toCoroutine;
		$nc(this->m_activeIDs)->clear(thisCoroutine);
		$of(this)->notify();
	}
}

CoroutineManager::CoroutineManager() {
}

$Class* CoroutineManager::load$($String* name, bool initialize) {
	$loadClass(CoroutineManager, name, initialize, &_CoroutineManager_ClassInfo_, allocate$CoroutineManager);
	return class$;
}

$Class* CoroutineManager::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com