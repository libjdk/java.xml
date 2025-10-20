#include <javax/xml/stream/FactoryFinder.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Properties.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/function/Supplier.h>
#include <javax/xml/stream/FactoryConfigurationError.h>
#include <javax/xml/stream/FactoryFinder$1.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFAULT_PACKAGE

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Constructor = ::java::lang::reflect::Constructor;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $Supplier = ::java::util::function::Supplier;
using $FactoryConfigurationError = ::javax::xml::stream::FactoryConfigurationError;
using $FactoryFinder$1 = ::javax::xml::stream::FactoryFinder$1;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace stream {

class FactoryFinder$$Lambda$lambda$newInstance$0 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$newInstance$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Class* providerClass, $ClassLoader* clD) {
		this->providerClass = providerClass;
		$set(this, clD, clD);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$newInstance$0(providerClass, clD));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$newInstance$0>());
	}
	$Class* providerClass = nullptr;
	$ClassLoader* clD = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$newInstance$0::fieldInfos[3] = {
	{"providerClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$newInstance$0, providerClass)},
	{"clD", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$newInstance$0, clD)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$newInstance$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(FactoryFinder$$Lambda$lambda$newInstance$0::*)($Class*,$ClassLoader*)>(&FactoryFinder$$Lambda$lambda$newInstance$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$newInstance$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.stream.FactoryFinder$$Lambda$lambda$newInstance$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$newInstance$0::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$newInstance$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$newInstance$0::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$1$1 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* factoryId) {
		$set(this, factoryId, factoryId);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$1(factoryId));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$1$1>());
	}
	$String* factoryId = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$1$1::fieldInfos[2] = {
	{"factoryId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$1$1, factoryId)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FactoryFinder$$Lambda$lambda$find$1$1::*)($String*)>(&FactoryFinder$$Lambda$lambda$find$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$1$1::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$1$1::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$2$2 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* systemProp) {
		$set(this, systemProp, systemProp);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$2(systemProp));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$2$2>());
	}
	$String* systemProp = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$2$2::fieldInfos[2] = {
	{"systemProp", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$2$2, systemProp)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FactoryFinder$$Lambda$lambda$find$2$2::*)($String*)>(&FactoryFinder$$Lambda$lambda$find$2$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$2$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$2$2::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$2$2::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$3$3 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($File* fStax) {
		$set(this, fStax, fStax);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$3(fStax));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$3$3>());
	}
	$File* fStax = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$3$3::fieldInfos[2] = {
	{"fStax", "Ljava/io/File;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$3$3, fStax)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(FactoryFinder$$Lambda$lambda$find$3$3::*)($File*)>(&FactoryFinder$$Lambda$lambda$find$3$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$3$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$3$3::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$3$3::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$5$4 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$5$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* foundIn, $String* factoryClassName) {
		$set(this, foundIn, foundIn);
		$set(this, factoryClassName, factoryClassName);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$5(foundIn, factoryClassName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$5$4>());
	}
	$String* foundIn = nullptr;
	$String* factoryClassName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$5$4::fieldInfos[3] = {
	{"foundIn", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$5$4, foundIn)},
	{"factoryClassName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$5$4, factoryClassName)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$5$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FactoryFinder$$Lambda$lambda$find$5$4::*)($String*,$String*)>(&FactoryFinder$$Lambda$lambda$find$5$4::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$5$4",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$5$4::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$5$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$5$4::class$ = nullptr;

class FactoryFinder$$Lambda$lambda$find$6$5 : public $Supplier {
	$class(FactoryFinder$$Lambda$lambda$find$6$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* fallbackClassName) {
		$set(this, fallbackClassName, fallbackClassName);
	}
	virtual $Object* get() override {
		 return $of(FactoryFinder::lambda$find$6(fallbackClassName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FactoryFinder$$Lambda$lambda$find$6$5>());
	}
	$String* fallbackClassName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FactoryFinder$$Lambda$lambda$find$6$5::fieldInfos[2] = {
	{"fallbackClassName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FactoryFinder$$Lambda$lambda$find$6$5, fallbackClassName)},
	{}
};
$MethodInfo FactoryFinder$$Lambda$lambda$find$6$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FactoryFinder$$Lambda$lambda$find$6$5::*)($String*)>(&FactoryFinder$$Lambda$lambda$find$6$5::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FactoryFinder$$Lambda$lambda$find$6$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.stream.FactoryFinder$$Lambda$lambda$find$6$5",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* FactoryFinder$$Lambda$lambda$find$6$5::load$($String* name, bool initialize) {
	$loadClass(FactoryFinder$$Lambda$lambda$find$6$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FactoryFinder$$Lambda$lambda$find$6$5::class$ = nullptr;

$FieldInfo _FactoryFinder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FactoryFinder, $assertionsDisabled)},
	{"DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FactoryFinder, DEFAULT_PACKAGE)},
	{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FactoryFinder, debug)},
	{"cacheProps", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FactoryFinder, cacheProps)},
	{"firstTime", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(FactoryFinder, firstTime)},
	{}
};

$MethodInfo _FactoryFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FactoryFinder::*)()>(&FactoryFinder::init$))},
	{"dPrint", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Supplier*)>(&FactoryFinder::dPrint))},
	{"find", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;)TT;", $STATIC, $method(static_cast<$Object*(*)($Class*,$String*)>(&FactoryFinder::find)), "javax.xml.stream.FactoryConfigurationError"},
	{"find", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/String;)TT;", $STATIC, $method(static_cast<$Object*(*)($Class*,$String*,$ClassLoader*,$String*)>(&FactoryFinder::find)), "javax.xml.stream.FactoryConfigurationError"},
	{"findServiceProvider", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/ClassLoader;)TT;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($Class*,$ClassLoader*)>(&FactoryFinder::findServiceProvider))},
	{"getProviderClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($String*,$ClassLoader*,bool,bool)>(&FactoryFinder::getProviderClass)), "java.lang.ClassNotFoundException"},
	{"lambda$find$1", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&FactoryFinder::lambda$find$1))},
	{"lambda$find$2", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&FactoryFinder::lambda$find$2))},
	{"lambda$find$3", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($File*)>(&FactoryFinder::lambda$find$3))},
	{"lambda$find$5", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*,$String*)>(&FactoryFinder::lambda$find$5))},
	{"lambda$find$6", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&FactoryFinder::lambda$find$6))},
	{"lambda$newInstance$0", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Class*,$ClassLoader*)>(&FactoryFinder::lambda$newInstance$0))},
	{"newInstance", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/ClassLoader;Z)TT;", $STATIC, $method(static_cast<$Object*(*)($Class*,$String*,$ClassLoader*,bool)>(&FactoryFinder::newInstance)), "javax.xml.stream.FactoryConfigurationError"},
	{"newInstance", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/ClassLoader;ZZ)TT;", $STATIC, $method(static_cast<$Object*(*)($Class*,$String*,$ClassLoader*,bool,bool)>(&FactoryFinder::newInstance)), "javax.xml.stream.FactoryConfigurationError"},
	{}
};

$InnerClassInfo _FactoryFinder_InnerClassesInfo_[] = {
	{"javax.xml.stream.FactoryFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FactoryFinder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.stream.FactoryFinder",
	"java.lang.Object",
	nullptr,
	_FactoryFinder_FieldInfo_,
	_FactoryFinder_MethodInfo_,
	nullptr,
	nullptr,
	_FactoryFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.stream.FactoryFinder$1"
};

$Object* allocate$FactoryFinder($Class* clazz) {
	return $of($alloc(FactoryFinder));
}

bool FactoryFinder::$assertionsDisabled = false;
$String* FactoryFinder::DEFAULT_PACKAGE = nullptr;

bool FactoryFinder::debug = false;

$Properties* FactoryFinder::cacheProps = nullptr;

$volatile(bool) FactoryFinder::firstTime = false;

void FactoryFinder::init$() {
}

void FactoryFinder::dPrint($Supplier* msgGen) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
	if (FactoryFinder::debug) {
		$init($System);
		$nc($System::err)->println($$str({"JAXP: "_s, $cast($String, $($nc(msgGen)->get()))}));
	}
}

$Class* FactoryFinder::getProviderClass($String* className, $ClassLoader* cl$renamed, bool doFallback, bool useBSClsLoader) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, cl, cl$renamed);
	$beforeCallerSensitive();
	try {
		if (cl == nullptr) {
			if (useBSClsLoader) {
				return $Class::forName(className, false, $(FactoryFinder::class$->getClassLoader()));
			} else {
				$assign(cl, $SecuritySupport::getContextClassLoader());
				if (cl == nullptr) {
					$throwNew($ClassNotFoundException);
				} else {
					return $Class::forName(className, false, cl);
				}
			}
		} else {
			return $Class::forName(className, false, cl);
		}
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e1, $catch());
		if (doFallback) {
			return $Class::forName(className, false, $(FactoryFinder::class$->getClassLoader()));
		} else {
			$throw(e1);
		}
	}
	$shouldNotReachHere();
}

$Object* FactoryFinder::newInstance($Class* type, $String* className, $ClassLoader* cl, bool doFallback) {
	$init(FactoryFinder);
	return $of(newInstance(type, className, cl, doFallback, false));
}

$Object* FactoryFinder::newInstance($Class* type, $String* className, $ClassLoader* cl$renamed, bool doFallback, bool useBSClsLoader) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, cl, cl$renamed);
	$beforeCallerSensitive();
	if (!FactoryFinder::$assertionsDisabled && !(type != nullptr)) {
		$throwNew($AssertionError);
	}
	if ($System::getSecurityManager() != nullptr) {
		if (className != nullptr && className->startsWith(FactoryFinder::DEFAULT_PACKAGE)) {
			$assign(cl, nullptr);
			useBSClsLoader = true;
		}
	}
	try {
		$Class* providerClass = getProviderClass(className, cl, doFallback, useBSClsLoader);
		if (!$nc(type)->isAssignableFrom(providerClass)) {
			$throwNew($ClassCastException, $$str({className, " cannot be cast to "_s, $(type->getName())}));
		}
		$var($Object, instance, $nc($($nc(providerClass)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		$var($ClassLoader, clD, cl);
		dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$newInstance$0, providerClass, clD)));
		return $of($nc(type)->cast(instance));
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, x, $catch());
		$throwNew($FactoryConfigurationError, $$str({"Provider "_s, className, " not found"_s}), static_cast<$Exception*>(x));
	} catch ($Exception&) {
		$var($Exception, x, $catch());
		$throwNew($FactoryConfigurationError, $$str({"Provider "_s, className, " could not be instantiated: "_s, x}), x);
	}
	$shouldNotReachHere();
}

$Object* FactoryFinder::find($Class* type, $String* fallbackClassName) {
	$init(FactoryFinder);
	return $of(find(type, $($nc(type)->getName()), nullptr, fallbackClassName));
}

$Object* FactoryFinder::find($Class* type, $String* factoryId, $ClassLoader* cl, $String* fallbackClassName) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
	dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$1$1, factoryId)));
	try {
		$var($String, systemProp, nullptr);
		if ($nc($($nc(type)->getName()))->equals(factoryId)) {
			$assign(systemProp, $SecuritySupport::getSystemProperty(factoryId));
		} else {
			$assign(systemProp, $System::getProperty(factoryId));
		}
		if (systemProp != nullptr) {
			dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$2$2, systemProp)));
			return $of(newInstance(type, systemProp, cl, true));
		}
	} catch ($SecurityException&) {
		$var($SecurityException, se, $catch());
		$throwNew($FactoryConfigurationError, $$str({"Failed to read factoryId \'"_s, factoryId, "\'"_s}), static_cast<$Exception*>(se));
	}
	$var($String, configFile, nullptr);
	try {
		if (FactoryFinder::firstTime) {
			$synchronized(FactoryFinder::cacheProps) {
				if (FactoryFinder::firstTime) {
					$init($File);
					$assign(configFile, $str({$($SecuritySupport::getSystemProperty("java.home"_s)), $File::separator, "conf"_s, $File::separator, "stax.properties"_s}));
					$var($File, fStax, $new($File, configFile));
					FactoryFinder::firstTime = false;
					if ($SecuritySupport::doesFileExist(fStax)) {
						dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$3$3, fStax)));
						$nc(FactoryFinder::cacheProps)->load($(static_cast<$InputStream*>($SecuritySupport::getFileInputStream(fStax))));
					} else {
						$assign(configFile, $str({$($SecuritySupport::getSystemProperty("java.home"_s)), $File::separator, "conf"_s, $File::separator, "jaxp.properties"_s}));
						$var($File, fJaxp, $new($File, configFile));
						if ($SecuritySupport::doesFileExist(fJaxp)) {
							dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$3$3, fJaxp)));
							$nc(FactoryFinder::cacheProps)->load($(static_cast<$InputStream*>($SecuritySupport::getFileInputStream(fJaxp))));
						}
					}
				}
			}
		}
		$var($String, factoryClassName, $nc(FactoryFinder::cacheProps)->getProperty(factoryId));
		if (factoryClassName != nullptr) {
			$var($String, foundIn, configFile);
			dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$5$4, foundIn, factoryClassName)));
			return $of(newInstance(type, factoryClassName, cl, true));
		}
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		if (FactoryFinder::debug) {
			ex->printStackTrace();
		}
	}
	if ($nc($($nc(type)->getName()))->equals(factoryId)) {
		$var($Object, provider, findServiceProvider(type, cl));
		if (provider != nullptr) {
			return $of(provider);
		}
	} else {
		if (!FactoryFinder::$assertionsDisabled && !(fallbackClassName == nullptr)) {
			$throwNew($AssertionError);
		}
	}
	if (fallbackClassName == nullptr) {
		$throwNew($FactoryConfigurationError, $$str({"Provider for "_s, factoryId, " cannot be found"_s}), ($Exception*)nullptr);
	}
	dPrint(static_cast<$Supplier*>($$new(FactoryFinder$$Lambda$lambda$find$6$5, fallbackClassName)));
	return $of(newInstance(type, fallbackClassName, cl, true));
}

$Object* FactoryFinder::findServiceProvider($Class* type, $ClassLoader* cl) {
	$init(FactoryFinder);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $of($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FactoryFinder$1, cl, type))));
	} catch ($ServiceConfigurationError&) {
		$var($ServiceConfigurationError, e, $catch());
		$var($RuntimeException, x, $new($RuntimeException, $$str({"Provider for "_s, type, " cannot be created"_s}), e));
		$var($FactoryConfigurationError, error, $new($FactoryConfigurationError, static_cast<$Exception*>(x), $(x->getMessage())));
		$throw(error);
	}
	$shouldNotReachHere();
}

$String* FactoryFinder::lambda$find$6($String* fallbackClassName) {
	$init(FactoryFinder);
	return $str({"loaded from fallback value: "_s, fallbackClassName});
}

$String* FactoryFinder::lambda$find$5($String* foundIn, $String* factoryClassName) {
	$init(FactoryFinder);
	return $str({"found in "_s, foundIn, " value="_s, factoryClassName});
}

$String* FactoryFinder::lambda$find$3($File* fStax) {
	$init(FactoryFinder);
	return $str({"Read properties file "_s, fStax});
}

$String* FactoryFinder::lambda$find$2($String* systemProp) {
	$init(FactoryFinder);
	return $str({"found system property, value="_s, systemProp});
}

$String* FactoryFinder::lambda$find$1($String* factoryId) {
	$init(FactoryFinder);
	return $str({"find factoryId ="_s, factoryId});
}

$String* FactoryFinder::lambda$newInstance$0($Class* providerClass, $ClassLoader* clD) {
	$init(FactoryFinder);
	return $str({"created new instance of "_s, providerClass, " using ClassLoader: "_s, clD});
}

void clinit$FactoryFinder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(FactoryFinder::DEFAULT_PACKAGE, "com.sun.xml.internal."_s);
	FactoryFinder::$assertionsDisabled = !FactoryFinder::class$->desiredAssertionStatus();
	FactoryFinder::debug = false;
	$assignStatic(FactoryFinder::cacheProps, $new($Properties));
	FactoryFinder::firstTime = true;
	{
		try {
			$var($String, val, $SecuritySupport::getSystemProperty("jaxp.debug"_s));
			FactoryFinder::debug = val != nullptr && !"false"_s->equals(val);
		} catch ($SecurityException&) {
			$var($SecurityException, se, $catch());
			FactoryFinder::debug = false;
		}
	}
}

FactoryFinder::FactoryFinder() {
}

$Class* FactoryFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FactoryFinder$$Lambda$lambda$newInstance$0::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$newInstance$0::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$1$1::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$1$1::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$2$2::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$2$2::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$3$3::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$3$3::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$5$4::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$5$4::load$(name, initialize);
		}
		if (name->equals(FactoryFinder$$Lambda$lambda$find$6$5::classInfo$.name)) {
			return FactoryFinder$$Lambda$lambda$find$6$5::load$(name, initialize);
		}
	}
	$loadClass(FactoryFinder, name, initialize, &_FactoryFinder_ClassInfo_, clinit$FactoryFinder, allocate$FactoryFinder);
	return class$;
}

$Class* FactoryFinder::class$ = nullptr;

		} // stream
	} // xml
} // javax