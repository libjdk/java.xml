#include <javax/xml/stream/FactoryFinder$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <javax/xml/stream/FactoryFinder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $FactoryFinder = ::javax::xml::stream::FactoryFinder;

namespace javax {
	namespace xml {
		namespace stream {

$FieldInfo _FactoryFinder$1_FieldInfo_[] = {
	{"val$type", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(FactoryFinder$1, val$type)},
	{"val$cl", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(FactoryFinder$1, val$cl)},
	{}
};

$MethodInfo _FactoryFinder$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(FactoryFinder$1::*)($ClassLoader*,$Class*)>(&FactoryFinder$1::init$))},
	{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _FactoryFinder$1_EnclosingMethodInfo_ = {
	"javax.xml.stream.FactoryFinder",
	"findServiceProvider",
	"(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/Object;"
};

$InnerClassInfo _FactoryFinder$1_InnerClassesInfo_[] = {
	{"javax.xml.stream.FactoryFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FactoryFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.stream.FactoryFinder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FactoryFinder$1_FieldInfo_,
	_FactoryFinder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<TT;>;",
	&_FactoryFinder$1_EnclosingMethodInfo_,
	_FactoryFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.stream.FactoryFinder"
};

$Object* allocate$FactoryFinder$1($Class* clazz) {
	return $of($alloc(FactoryFinder$1));
}

void FactoryFinder$1::init$($ClassLoader* val$cl, $Class* val$type) {
	$set(this, val$cl, val$cl);
	$set(this, val$type, val$type);
}

$Object* FactoryFinder$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ServiceLoader, serviceLoader, nullptr);
	if (this->val$cl == nullptr) {
		$assign(serviceLoader, $ServiceLoader::load(this->val$type));
	} else {
		$assign(serviceLoader, $ServiceLoader::load(this->val$type, this->val$cl));
	}
	$var($Iterator, iterator, $nc(serviceLoader)->iterator());
	if ($nc(iterator)->hasNext()) {
		return $of(iterator->next());
	} else {
		return $of(nullptr);
	}
}

FactoryFinder$1::FactoryFinder$1() {
}

$Class* FactoryFinder$1::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$1, name, initialize, &_FactoryFinder$1_ClassInfo_, allocate$FactoryFinder$1);
	return class$;
}

$Class* FactoryFinder$1::class$ = nullptr;

		} // stream
	} // xml
} // javax