#include <javax/xml/transform/FactoryFinder$1.h>

#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <javax/xml/transform/FactoryFinder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $FactoryFinder = ::javax::xml::transform::FactoryFinder;

namespace javax {
	namespace xml {
		namespace transform {

$FieldInfo _FactoryFinder$1_FieldInfo_[] = {
	{"val$type", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(FactoryFinder$1, val$type)},
	{}
};

$MethodInfo _FactoryFinder$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(FactoryFinder$1::*)($Class*)>(&FactoryFinder$1::init$))},
	{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _FactoryFinder$1_EnclosingMethodInfo_ = {
	"javax.xml.transform.FactoryFinder",
	"findServiceProvider",
	"(Ljava/lang/Class;)Ljava/lang/Object;"
};

$InnerClassInfo _FactoryFinder$1_InnerClassesInfo_[] = {
	{"javax.xml.transform.FactoryFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FactoryFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.transform.FactoryFinder$1",
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
	"javax.xml.transform.FactoryFinder"
};

$Object* allocate$FactoryFinder$1($Class* clazz) {
	return $of($alloc(FactoryFinder$1));
}

void FactoryFinder$1::init$($Class* val$type) {
	$set(this, val$type, val$type);
}

$Object* FactoryFinder$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ServiceLoader, serviceLoader, $ServiceLoader::load(this->val$type));
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

		} // transform
	} // xml
} // javax