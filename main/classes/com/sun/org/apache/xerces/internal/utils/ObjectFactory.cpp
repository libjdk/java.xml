#include <com/sun/org/apache/xerces/internal/utils/ObjectFactory.h>

#include <com/sun/org/apache/xerces/internal/utils/ConfigurationError.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/function/Supplier.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEBUG
#undef JAXP_INTERNAL
#undef STAX_INTERNAL

using $ConfigurationError = ::com::sun::org::apache::xerces::internal::utils::ConfigurationError;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Constructor = ::java::lang::reflect::Constructor;
using $Supplier = ::java::util::function::Supplier;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

class ObjectFactory$$Lambda$lambda$newInstance$0 : public $Supplier {
	$class(ObjectFactory$$Lambda$lambda$newInstance$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Class* providerClass, $ClassLoader* cl) {
		this->providerClass = providerClass;
		$set(this, cl, cl);
	}
	virtual $Object* get() override {
		 return $of(ObjectFactory::lambda$newInstance$0(providerClass, cl));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ObjectFactory$$Lambda$lambda$newInstance$0>());
	}
	$Class* providerClass = nullptr;
	$ClassLoader* cl = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ObjectFactory$$Lambda$lambda$newInstance$0::fieldInfos[3] = {
	{"providerClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ObjectFactory$$Lambda$lambda$newInstance$0, providerClass)},
	{"cl", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(ObjectFactory$$Lambda$lambda$newInstance$0, cl)},
	{}
};
$MethodInfo ObjectFactory$$Lambda$lambda$newInstance$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectFactory$$Lambda$lambda$newInstance$0::*)($Class*,$ClassLoader*)>(&ObjectFactory$$Lambda$lambda$newInstance$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ObjectFactory$$Lambda$lambda$newInstance$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xerces.internal.utils.ObjectFactory$$Lambda$lambda$newInstance$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ObjectFactory$$Lambda$lambda$newInstance$0::load$($String* name, bool initialize) {
	$loadClass(ObjectFactory$$Lambda$lambda$newInstance$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ObjectFactory$$Lambda$lambda$newInstance$0::class$ = nullptr;

$FieldInfo _ObjectFactory_FieldInfo_[] = {
	{"JAXP_INTERNAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactory, JAXP_INTERNAL)},
	{"STAX_INTERNAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactory, STAX_INTERNAL)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactory, DEBUG)},
	{}
};

$MethodInfo _ObjectFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ObjectFactory::*)()>(&ObjectFactory::init$))},
	{"debugPrintln", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Supplier*)>(&ObjectFactory::debugPrintln))},
	{"findClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ClassLoader*(*)()>(&ObjectFactory::findClassLoader)), "com.sun.org.apache.xerces.internal.utils.ConfigurationError"},
	{"findProviderClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($String*,bool)>(&ObjectFactory::findProviderClass)), "java.lang.ClassNotFoundException,com.sun.org.apache.xerces.internal.utils.ConfigurationError"},
	{"findProviderClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($String*,$ClassLoader*,bool)>(&ObjectFactory::findProviderClass)), "java.lang.ClassNotFoundException,com.sun.org.apache.xerces.internal.utils.ConfigurationError"},
	{"isDebugEnabled", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&ObjectFactory::isDebugEnabled))},
	{"lambda$newInstance$0", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Class*,$ClassLoader*)>(&ObjectFactory::lambda$newInstance$0))},
	{"newInstance", "(Ljava/lang/String;Z)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*,bool)>(&ObjectFactory::newInstance)), "com.sun.org.apache.xerces.internal.utils.ConfigurationError"},
	{"newInstance", "(Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*,$ClassLoader*,bool)>(&ObjectFactory::newInstance)), "com.sun.org.apache.xerces.internal.utils.ConfigurationError"},
	{}
};

$ClassInfo _ObjectFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.utils.ObjectFactory",
	"java.lang.Object",
	nullptr,
	_ObjectFactory_FieldInfo_,
	_ObjectFactory_MethodInfo_
};

$Object* allocate$ObjectFactory($Class* clazz) {
	return $of($alloc(ObjectFactory));
}

$String* ObjectFactory::JAXP_INTERNAL = nullptr;
$String* ObjectFactory::STAX_INTERNAL = nullptr;

bool ObjectFactory::DEBUG = false;

void ObjectFactory::init$() {
}

bool ObjectFactory::isDebugEnabled() {
	$init(ObjectFactory);
	try {
		$var($String, val, $SecuritySupport::getSystemProperty("xerces.debug"_s));
		return (val != nullptr && (!"false"_s->equals(val)));
	} catch ($SecurityException&) {
		$catch();
	}
	return false;
}

void ObjectFactory::debugPrintln($Supplier* msgGen) {
	$init(ObjectFactory);
	$useLocalCurrentObjectStackCache();
	if (ObjectFactory::DEBUG) {
		$init($System);
		$nc($System::err)->println($$str({"XERCES: "_s, $cast($String, $($nc(msgGen)->get()))}));
	}
}

$ClassLoader* ObjectFactory::findClassLoader() {
	$init(ObjectFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($System::getSecurityManager() != nullptr) {
		return nullptr;
	}
	$var($ClassLoader, context, $SecuritySupport::getContextClassLoader());
	$var($ClassLoader, system, $SecuritySupport::getSystemClassLoader());
	$var($ClassLoader, chain, system);
	while (true) {
		if (context == chain) {
			$var($ClassLoader, current, ObjectFactory::class$->getClassLoader());
			$assign(chain, system);
			while (true) {
				if (current == chain) {
					return system;
				}
				if (chain == nullptr) {
					break;
				}
				$assign(chain, $SecuritySupport::getParentClassLoader(chain));
			}
			return current;
		}
		if (chain == nullptr) {
			break;
		}
		$assign(chain, $SecuritySupport::getParentClassLoader(chain));
	}
	return context;
}

$Object* ObjectFactory::newInstance($String* className, bool doFallback) {
	$init(ObjectFactory);
	if ($System::getSecurityManager() != nullptr) {
		return $of(newInstance(className, nullptr, doFallback));
	} else {
		return $of(newInstance(className, $(findClassLoader()), doFallback));
	}
}

$Object* ObjectFactory::newInstance($String* className, $ClassLoader* cl, bool doFallback) {
	$init(ObjectFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* providerClass = findProviderClass(className, cl, doFallback);
		$var($Object, instance, $nc($($nc(providerClass)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		debugPrintln(static_cast<$Supplier*>($$new(ObjectFactory$$Lambda$lambda$newInstance$0, providerClass, cl)));
		return $of(instance);
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, x, $catch());
		$throwNew($ConfigurationError, $$str({"Provider "_s, className, " not found"_s}), x);
	} catch ($Exception&) {
		$var($Exception, x, $catch());
		$throwNew($ConfigurationError, $$str({"Provider "_s, className, " could not be instantiated: "_s, x}), x);
	}
	$shouldNotReachHere();
}

$Class* ObjectFactory::findProviderClass($String* className, bool doFallback) {
	$init(ObjectFactory);
	return findProviderClass(className, $(findClassLoader()), doFallback);
}

$Class* ObjectFactory::findProviderClass($String* className, $ClassLoader* cl$renamed, bool doFallback) {
	$init(ObjectFactory);
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, cl, cl$renamed);
	$beforeCallerSensitive();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		bool var$0 = $nc(className)->startsWith(ObjectFactory::JAXP_INTERNAL);
		if (var$0 || $nc(className)->startsWith(ObjectFactory::STAX_INTERNAL)) {
			$assign(cl, nullptr);
		} else {
			int32_t lastDot = className->lastIndexOf("."_s);
			$var($String, packageName, className);
			if (lastDot != -1) {
				$assign(packageName, className->substring(0, lastDot));
			}
			security->checkPackageAccess(packageName);
		}
	}
	$Class* providerClass = nullptr;
	if (cl == nullptr) {
		providerClass = $Class::forName(className, false, $(ObjectFactory::class$->getClassLoader()));
	} else {
		try {
			providerClass = $nc(cl)->loadClass(className);
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, x, $catch());
			if (doFallback) {
				$var($ClassLoader, current, ObjectFactory::class$->getClassLoader());
				if (current == nullptr) {
					providerClass = $Class::forName(className);
				} else if (cl != current) {
					$assign(cl, current);
					providerClass = $nc(cl)->loadClass(className);
				} else {
					$throw(x);
				}
			} else {
				$throw(x);
			}
		}
	}
	return providerClass;
}

$String* ObjectFactory::lambda$newInstance$0($Class* providerClass, $ClassLoader* cl) {
	$init(ObjectFactory);
	return $str({"created new instance of "_s, providerClass, " using ClassLoader: "_s, cl});
}

void clinit$ObjectFactory($Class* class$) {
	$assignStatic(ObjectFactory::JAXP_INTERNAL, "com.sun.org.apache"_s);
	$assignStatic(ObjectFactory::STAX_INTERNAL, "com.sun.xml.internal"_s);
	ObjectFactory::DEBUG = ObjectFactory::isDebugEnabled();
}

ObjectFactory::ObjectFactory() {
}

$Class* ObjectFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ObjectFactory$$Lambda$lambda$newInstance$0::classInfo$.name)) {
			return ObjectFactory$$Lambda$lambda$newInstance$0::load$(name, initialize);
		}
	}
	$loadClass(ObjectFactory, name, initialize, &_ObjectFactory_ClassInfo_, clinit$ObjectFactory, allocate$ObjectFactory);
	return class$;
}

$Class* ObjectFactory::class$ = nullptr;

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com