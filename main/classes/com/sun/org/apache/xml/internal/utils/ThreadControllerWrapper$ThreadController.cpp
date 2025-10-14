#include <com/sun/org/apache/xml/internal/utils/ThreadControllerWrapper$ThreadController.h>

#include <com/sun/org/apache/xml/internal/utils/SafeThread.h>
#include <com/sun/org/apache/xml/internal/utils/ThreadControllerWrapper.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SafeThread = ::com::sun::org::apache::xml::internal::utils::SafeThread;
using $ThreadControllerWrapper = ::com::sun::org::apache::xml::internal::utils::ThreadControllerWrapper;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _ThreadControllerWrapper$ThreadController_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThreadControllerWrapper$ThreadController::*)()>(&ThreadControllerWrapper$ThreadController::init$))},
	{"run", "(Ljava/lang/Runnable;I)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{"waitThread", "(Ljava/lang/Thread;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _ThreadControllerWrapper$ThreadController_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper$ThreadController", "com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper", "ThreadController", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ThreadControllerWrapper$ThreadController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper$ThreadController",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ThreadControllerWrapper$ThreadController_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadControllerWrapper$ThreadController_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper"
};

$Object* allocate$ThreadControllerWrapper$ThreadController($Class* clazz) {
	return $of($alloc(ThreadControllerWrapper$ThreadController));
}

void ThreadControllerWrapper$ThreadController::init$() {
}

$Thread* ThreadControllerWrapper$ThreadController::run($Runnable* task, int32_t priority) {
	$var($Thread, t, $new($SafeThread, task));
	t->start();
	return t;
}

void ThreadControllerWrapper$ThreadController::waitThread($Thread* worker, $Runnable* task) {
	$nc(worker)->join();
}

ThreadControllerWrapper$ThreadController::ThreadControllerWrapper$ThreadController() {
}

$Class* ThreadControllerWrapper$ThreadController::load$($String* name, bool initialize) {
	$loadClass(ThreadControllerWrapper$ThreadController, name, initialize, &_ThreadControllerWrapper$ThreadController_ClassInfo_, allocate$ThreadControllerWrapper$ThreadController);
	return class$;
}

$Class* ThreadControllerWrapper$ThreadController::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com