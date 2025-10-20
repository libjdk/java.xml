#include <org/xml/sax/helpers/NewInstance.h>

#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef DEFAULT_CLASS
#undef DEFAULT_PACKAGE

using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Objects = ::java::util::Objects;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _NewInstance_FieldInfo_[] = {
	{"DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NewInstance, DEFAULT_PACKAGE)},
	{"DEFAULT_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NewInstance, DEFAULT_CLASS)},
	{}
};

$MethodInfo _NewInstance_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NewInstance::*)()>(&NewInstance::init$))},
	{"newInstance", "(Ljava/lang/Class;Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/ClassLoader;Ljava/lang/String;)TT;", $STATIC, $method(static_cast<$Object*(*)($Class*,$ClassLoader*,$String*)>(&NewInstance::newInstance)), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException"},
	{}
};

$ClassInfo _NewInstance_ClassInfo_ = {
	$ACC_SUPER,
	"org.xml.sax.helpers.NewInstance",
	"java.lang.Object",
	nullptr,
	_NewInstance_FieldInfo_,
	_NewInstance_MethodInfo_
};

$Object* allocate$NewInstance($Class* clazz) {
	return $of($alloc(NewInstance));
}

$String* NewInstance::DEFAULT_PACKAGE = nullptr;
$String* NewInstance::DEFAULT_CLASS = nullptr;

void NewInstance::init$() {
}

$Object* NewInstance::newInstance($Class* type, $ClassLoader* loader, $String* clsName) {
	$init(NewInstance);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, classLoader, $cast($ClassLoader, $Objects::requireNonNull(loader)));
	$var($String, className, $cast($String, $Objects::requireNonNull(clsName)));
	if ($nc(className)->equals(NewInstance::DEFAULT_CLASS)) {
		return $of($nc(type)->cast($$new($SAXParser)));
	}
	bool internal = false;
	if ($System::getSecurityManager() != nullptr) {
		if (className != nullptr && className->startsWith(NewInstance::DEFAULT_PACKAGE)) {
			internal = true;
		}
	}
	$Class* driverClass = nullptr;
	if (classLoader == nullptr || internal) {
		driverClass = $Class::forName(className);
	} else {
		driverClass = $nc(classLoader)->loadClass(className);
	}
	try {
		return $of($nc(type)->cast($($nc($($nc(driverClass)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)))));
	} catch ($NoSuchMethodException&) {
		$var($Exception, ex, $catch());
		$throwNew($InstantiationException, $(ex->getMessage()));
	} catch ($SecurityException&) {
		$var($Exception, ex, $catch());
		$throwNew($InstantiationException, $(ex->getMessage()));
	} catch ($InvocationTargetException&) {
		$var($Exception, ex, $catch());
		$throwNew($InstantiationException, $(ex->getMessage()));
	}
	$shouldNotReachHere();
}

NewInstance::NewInstance() {
}

void clinit$NewInstance($Class* class$) {
	$assignStatic(NewInstance::DEFAULT_PACKAGE, "com.sun.org.apache.xerces.internal"_s);
	$assignStatic(NewInstance::DEFAULT_CLASS, "com.sun.org.apache.xerces.internal.parsers.SAXParser"_s);
}

$Class* NewInstance::load$($String* name, bool initialize) {
	$loadClass(NewInstance, name, initialize, &_NewInstance_ClassInfo_, clinit$NewInstance, allocate$NewInstance);
	return class$;
}

$Class* NewInstance::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org