#include <javax/xml/xpath/XPathFactoryFinder.h>

#include <com/sun/org/apache/xpath/internal/jaxp/XPathFactoryImpl.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
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
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Properties.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/function/Supplier.h>
#include <javax/xml/xpath/XPathFactory.h>
#include <javax/xml/xpath/XPathFactoryConfigurationException.h>
#include <javax/xml/xpath/XPathFactoryFinder$1.h>
#include <javax/xml/xpath/XPathFactoryFinder$2.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFAULT_OBJECT_MODEL_URI
#undef DEFAULT_PACKAGE
#undef SERVICE_CLASS

using $XPathFactoryImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathFactoryImpl;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $Supplier = ::java::util::function::Supplier;
using $XPathFactory = ::javax::xml::xpath::XPathFactory;
using $XPathFactoryConfigurationException = ::javax::xml::xpath::XPathFactoryConfigurationException;
using $XPathFactoryFinder$1 = ::javax::xml::xpath::XPathFactoryFinder$1;
using $XPathFactoryFinder$2 = ::javax::xml::xpath::XPathFactoryFinder$2;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace xpath {

class XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(XPathFactoryFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$debugDisplayClassLoader$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0>());
	}
	XPathFactoryFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, inst$)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/xpath/XPathFactoryFinder;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::*)(XPathFactoryFinder*)>(&XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(XPathFactoryFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$debugDisplayClassLoader$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1>());
	}
	XPathFactoryFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, inst$)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/xpath/XPathFactoryFinder;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::*)(XPathFactoryFinder*)>(&XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$(XPathFactoryFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$debugDisplayClassLoader$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2>());
	}
	XPathFactoryFinder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, inst$)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/xpath/XPathFactoryFinder;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::*)(XPathFactoryFinder*)>(&XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$newFactory$3$3 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($XPathFactory* f, $String* uri) {
		$set(this, f, f);
		$set(this, uri, uri);
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$newFactory$3(f, uri));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$newFactory$3$3>());
	}
	$XPathFactory* f = nullptr;
	$String* uri = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::fieldInfos[3] = {
	{"f", "Ljavax/xml/xpath/XPathFactory;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, f)},
	{"uri", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, uri)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/xpath/XPathFactory;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::*)($XPathFactory*,$String*)>(&XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$newFactory$3$3",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$newFactory$4$4 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* uri) {
		$set(this, uri, uri);
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$newFactory$4(uri));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$newFactory$4$4>());
	}
	$String* uri = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::fieldInfos[2] = {
	{"uri", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, uri)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::*)($String*)>(&XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$newFactory$4$4",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* propertyName) {
		$set(this, propertyName, propertyName);
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$_newFactory$5(propertyName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5>());
	}
	$String* propertyName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::fieldInfos[2] = {
	{"propertyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, propertyName)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::*)($String*)>(&XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* r) {
		$set(this, r, r);
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$_newFactory$6(r));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6>());
	}
	$String* r = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::fieldInfos[2] = {
	{"r", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, r)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::*)($String*)>(&XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$_newFactory$7());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::*)()>(&XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* propertyName) {
		$set(this, propertyName, propertyName);
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$_newFactory$8(propertyName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8>());
	}
	$String* propertyName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::fieldInfos[2] = {
	{"propertyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, propertyName)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::*)($String*)>(&XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, $NO_CLASS_INIT, $Supplier)
public:
	void init$($File* f) {
		$set(this, f, f);
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$_newFactory$9(f));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9>());
	}
	$File* f = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::fieldInfos[2] = {
	{"f", "Ljava/io/File;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, f)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::methodInfos[3] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::*)($File*)>(&XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* factoryClassName) {
		$set(this, factoryClassName, factoryClassName);
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$_newFactory$10(factoryClassName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10>());
	}
	$String* factoryClassName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::fieldInfos[2] = {
	{"factoryClassName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, factoryClassName)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::*)($String*)>(&XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$_newFactory$11());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::*)()>(&XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$_newFactory$12());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::*)()>(&XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$createInstance$13$13 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* className) {
		$set(this, className, className);
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$createInstance$13(className));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$createInstance$13$13>());
	}
	$String* className = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::fieldInfos[2] = {
	{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, className)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::*)($String*)>(&XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$13$13",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$createInstance$14$14 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* className) {
		$set(this, className, className);
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$createInstance$14(className));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$createInstance$14$14>());
	}
	$String* className = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::fieldInfos[2] = {
	{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, className)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::*)($String*)>(&XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$14$14",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$createInstance$15$15 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* className, $Class* clazz) {
		$set(this, className, className);
		this->clazz = clazz;
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$createInstance$15(className, clazz));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$createInstance$15$15>());
	}
	$String* className = nullptr;
	$Class* clazz = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::fieldInfos[3] = {
	{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, className)},
	{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, clazz)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::*)($String*,$Class*)>(&XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$15$15",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::class$ = nullptr;

class XPathFactoryFinder$$Lambda$lambda$createInstance$16$16 : public $Supplier {
	$class(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Class* clazz) {
		this->clazz = clazz;
	}
	virtual $Object* get() override {
		 return $of(XPathFactoryFinder::lambda$createInstance$16(clazz));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPathFactoryFinder$$Lambda$lambda$createInstance$16$16>());
	}
	$Class* clazz = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::fieldInfos[2] = {
	{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)},
	{}
};
$MethodInfo XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::*)($Class*)>(&XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.xpath.XPathFactoryFinder$$Lambda$lambda$createInstance$16$16",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::class$ = nullptr;

$FieldInfo _XPathFactoryFinder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XPathFactoryFinder, $assertionsDisabled)},
	{"DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPathFactoryFinder, DEFAULT_PACKAGE)},
	{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XPathFactoryFinder, debug)},
	{"cacheProps", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPathFactoryFinder, cacheProps)},
	{"firstTime", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XPathFactoryFinder, firstTime)},
	{"classLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(XPathFactoryFinder, classLoader)},
	{"SERVICE_CLASS", "Ljava/lang/Class;", "Ljava/lang/Class<Ljavax/xml/xpath/XPathFactory;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XPathFactoryFinder, SERVICE_CLASS)},
	{}
};

$MethodInfo _XPathFactoryFinder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactoryFinder::*)($ClassLoader*)>(&XPathFactoryFinder::init$))},
	{"_newFactory", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;", nullptr, $PRIVATE, $method(static_cast<$XPathFactory*(XPathFactoryFinder::*)($String*)>(&XPathFactoryFinder::_newFactory)), "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"createClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(XPathFactoryFinder::*)($String*)>(&XPathFactoryFinder::createClass))},
	{"createInstance", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;", nullptr, 0, nullptr, "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"debugDisplayClassLoader", "()V", nullptr, $PRIVATE, $method(static_cast<void(XPathFactoryFinder::*)()>(&XPathFactoryFinder::debugDisplayClassLoader))},
	{"debugPrintln", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Supplier*)>(&XPathFactoryFinder::debugPrintln))},
	{"findServiceProvider", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;", nullptr, $PRIVATE, $method(static_cast<$XPathFactory*(XPathFactoryFinder::*)($String*)>(&XPathFactoryFinder::findServiceProvider)), "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"isObjectModelSupportedBy", "(Ljavax/xml/xpath/XPathFactory;Ljava/lang/String;Ljava/security/AccessControlContext;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XPathFactoryFinder::*)($XPathFactory*,$String*,$AccessControlContext*)>(&XPathFactoryFinder::isObjectModelSupportedBy))},
	{"lambda$_newFactory$10", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&XPathFactoryFinder::lambda$_newFactory$10))},
	{"lambda$_newFactory$11", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&XPathFactoryFinder::lambda$_newFactory$11))},
	{"lambda$_newFactory$12", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&XPathFactoryFinder::lambda$_newFactory$12))},
	{"lambda$_newFactory$5", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&XPathFactoryFinder::lambda$_newFactory$5))},
	{"lambda$_newFactory$6", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&XPathFactoryFinder::lambda$_newFactory$6))},
	{"lambda$_newFactory$7", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&XPathFactoryFinder::lambda$_newFactory$7))},
	{"lambda$_newFactory$8", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&XPathFactoryFinder::lambda$_newFactory$8))},
	{"lambda$_newFactory$9", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($File*)>(&XPathFactoryFinder::lambda$_newFactory$9))},
	{"lambda$createInstance$13", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&XPathFactoryFinder::lambda$createInstance$13))},
	{"lambda$createInstance$14", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&XPathFactoryFinder::lambda$createInstance$14))},
	{"lambda$createInstance$15", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*,$Class*)>(&XPathFactoryFinder::lambda$createInstance$15))},
	{"lambda$createInstance$16", "(Ljava/lang/Class;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($Class*)>(&XPathFactoryFinder::lambda$createInstance$16))},
	{"lambda$debugDisplayClassLoader$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$String*(XPathFactoryFinder::*)()>(&XPathFactoryFinder::lambda$debugDisplayClassLoader$0))},
	{"lambda$debugDisplayClassLoader$1", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$String*(XPathFactoryFinder::*)()>(&XPathFactoryFinder::lambda$debugDisplayClassLoader$1))},
	{"lambda$debugDisplayClassLoader$2", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$String*(XPathFactoryFinder::*)()>(&XPathFactoryFinder::lambda$debugDisplayClassLoader$2))},
	{"lambda$newFactory$3", "(Ljavax/xml/xpath/XPathFactory;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($XPathFactory*,$String*)>(&XPathFactoryFinder::lambda$newFactory$3))},
	{"lambda$newFactory$4", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&XPathFactoryFinder::lambda$newFactory$4))},
	{"newFactory", "(Ljava/lang/String;)Ljavax/xml/xpath/XPathFactory;", nullptr, $PUBLIC, nullptr, "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"which", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Class*)>(&XPathFactoryFinder::which))},
	{}
};

$InnerClassInfo _XPathFactoryFinder_InnerClassesInfo_[] = {
	{"javax.xml.xpath.XPathFactoryFinder$2", nullptr, nullptr, 0},
	{"javax.xml.xpath.XPathFactoryFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XPathFactoryFinder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.xpath.XPathFactoryFinder",
	"java.lang.Object",
	nullptr,
	_XPathFactoryFinder_FieldInfo_,
	_XPathFactoryFinder_MethodInfo_,
	nullptr,
	nullptr,
	_XPathFactoryFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.xpath.XPathFactoryFinder$2,javax.xml.xpath.XPathFactoryFinder$1"
};

$Object* allocate$XPathFactoryFinder($Class* clazz) {
	return $of($alloc(XPathFactoryFinder));
}

bool XPathFactoryFinder::$assertionsDisabled = false;
$String* XPathFactoryFinder::DEFAULT_PACKAGE = nullptr;

bool XPathFactoryFinder::debug = false;

$Properties* XPathFactoryFinder::cacheProps = nullptr;

$volatile(bool) XPathFactoryFinder::firstTime = false;
$Class* XPathFactoryFinder::SERVICE_CLASS = nullptr;

void XPathFactoryFinder::debugPrintln($Supplier* msgGen) {
	$init(XPathFactoryFinder);
	$useLocalCurrentObjectStackCache();
	if (XPathFactoryFinder::debug) {
		$init($System);
		$nc($System::err)->println($$str({"JAXP: "_s, $cast($String, $($nc(msgGen)->get()))}));
	}
}

void XPathFactoryFinder::init$($ClassLoader* loader) {
	$set(this, classLoader, loader);
	if (XPathFactoryFinder::debug) {
		debugDisplayClassLoader();
	}
}

void XPathFactoryFinder::debugDisplayClassLoader() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		if (this->classLoader == $SecuritySupport::getContextClassLoader()) {
			debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0, this)));
			return;
		}
	} catch ($Throwable&) {
		$catch();
	}
	if (this->classLoader == $ClassLoader::getSystemClassLoader()) {
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1, this)));
		return;
	}
	debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2, this)));
}

$XPathFactory* XPathFactoryFinder::newFactory($String* uri) {
	$useLocalCurrentObjectStackCache();
	if (uri == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($XPathFactory, f, _newFactory(uri));
	if (f != nullptr) {
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3, f, uri)));
	} else {
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4, uri)));
	}
	return f;
}

$XPathFactory* XPathFactoryFinder::_newFactory($String* uri) {
	$useLocalCurrentObjectStackCache();
	$var($XPathFactory, xpathFactory, nullptr);
	$var($String, propertyName, $str({$($nc(XPathFactoryFinder::SERVICE_CLASS)->getName()), ":"_s, uri}));
	try {
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5, propertyName)));
		$var($String, r, $SecuritySupport::getSystemProperty(propertyName));
		if (r != nullptr) {
			debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6, r)));
			$assign(xpathFactory, createInstance(r));
			if (xpathFactory != nullptr) {
				return xpathFactory;
			}
		} else {
			debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7)));
		}
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		if (XPathFactoryFinder::debug) {
			debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8, propertyName)));
			t->printStackTrace();
		}
	}
	$var($String, javah, $SecuritySupport::getSystemProperty("java.home"_s));
	$init($File);
	$var($String, configFile, $str({javah, $File::separator, "conf"_s, $File::separator, "jaxp.properties"_s}));
	try {
		if (XPathFactoryFinder::firstTime) {
			$synchronized(XPathFactoryFinder::cacheProps) {
				if (XPathFactoryFinder::firstTime) {
					$var($File, f, $new($File, configFile));
					XPathFactoryFinder::firstTime = false;
					if ($SecuritySupport::doesFileExist(f)) {
						debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9, f)));
						$nc(XPathFactoryFinder::cacheProps)->load($(static_cast<$InputStream*>($SecuritySupport::getFileInputStream(f))));
					}
				}
			}
		}
		$var($String, factoryClassName, $nc(XPathFactoryFinder::cacheProps)->getProperty(propertyName));
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10, factoryClassName)));
		if (factoryClassName != nullptr) {
			$assign(xpathFactory, createInstance(factoryClassName));
			if (xpathFactory != nullptr) {
				return xpathFactory;
			}
		}
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
	}
	if (!XPathFactoryFinder::$assertionsDisabled && !(xpathFactory == nullptr)) {
		$throwNew($AssertionError);
	}
	$assign(xpathFactory, findServiceProvider(uri));
	if (xpathFactory != nullptr) {
		return xpathFactory;
	}
	$init($XPathFactory);
	if ($nc(uri)->equals($XPathFactory::DEFAULT_OBJECT_MODEL_URI)) {
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11)));
		return $new($XPathFactoryImpl);
	}
	debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12)));
	return nullptr;
}

$Class* XPathFactoryFinder::createClass($String* className) {
	$beforeCallerSensitive();
	$Class* clazz = nullptr;
	bool internal = false;
	if ($System::getSecurityManager() != nullptr) {
		if (className != nullptr && className->startsWith(XPathFactoryFinder::DEFAULT_PACKAGE)) {
			internal = true;
		}
	}
	try {
		if (this->classLoader != nullptr && !internal) {
			clazz = $Class::forName(className, false, this->classLoader);
		} else {
			clazz = $Class::forName(className);
		}
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		if (XPathFactoryFinder::debug) {
			t->printStackTrace();
		}
		return nullptr;
	}
	return clazz;
}

$XPathFactory* XPathFactoryFinder::createInstance($String* className) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($XPathFactory, xPathFactory, nullptr);
	debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13, className)));
	$Class* clazz = createClass(className);
	if (clazz == nullptr) {
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14, className)));
		return nullptr;
	}
	debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15, className, clazz)));
	try {
		$assign(xPathFactory, $cast($XPathFactory, $nc($($nc(clazz)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
	} catch ($ClassCastException&) {
		$var($Exception, ex, $catch());
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($IllegalAccessException&) {
		$var($Exception, ex, $catch());
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($IllegalArgumentException&) {
		$var($Exception, ex, $catch());
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($InstantiationException&) {
		$var($Exception, ex, $catch());
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($InvocationTargetException&) {
		$var($Exception, ex, $catch());
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($NoSuchMethodException&) {
		$var($Exception, ex, $catch());
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	} catch ($SecurityException&) {
		$var($Exception, ex, $catch());
		debugPrintln(static_cast<$Supplier*>($$new(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16, clazz)));
		if (XPathFactoryFinder::debug) {
			ex->printStackTrace();
		}
		return nullptr;
	}
	return xPathFactory;
}

bool XPathFactoryFinder::isObjectModelSupportedBy($XPathFactory* factory, $String* objectModel, $AccessControlContext* acc) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XPathFactoryFinder$1, this, factory, objectModel)), acc)))))->booleanValue();
}

$XPathFactory* XPathFactoryFinder::findServiceProvider($String* objectModel) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!XPathFactoryFinder::$assertionsDisabled && !(objectModel != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($AccessControlContext, acc, $AccessController::getContext());
	try {
		return $cast($XPathFactory, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XPathFactoryFinder$2, this, objectModel, acc))));
	} catch ($ServiceConfigurationError&) {
		$var($ServiceConfigurationError, error, $catch());
		$throwNew($XPathFactoryConfigurationException, static_cast<$Throwable*>(error));
	}
	$shouldNotReachHere();
}

$String* XPathFactoryFinder::which($Class* clazz) {
	$init(XPathFactoryFinder);
	return $SecuritySupport::getClassSource(clazz);
}

$String* XPathFactoryFinder::lambda$createInstance$16($Class* clazz) {
	$init(XPathFactoryFinder);
	return $str({"could not instantiate "_s, $($nc(clazz)->getName())});
}

$String* XPathFactoryFinder::lambda$createInstance$15($String* className, $Class* clazz) {
	$init(XPathFactoryFinder);
	return $str({"loaded "_s, className, " from "_s, $(which(clazz))});
}

$String* XPathFactoryFinder::lambda$createInstance$14($String* className) {
	$init(XPathFactoryFinder);
	return $str({"failed to getClass("_s, className, ")"_s});
}

$String* XPathFactoryFinder::lambda$createInstance$13($String* className) {
	$init(XPathFactoryFinder);
	return $str({"createInstance("_s, className, ")"_s});
}

$String* XPathFactoryFinder::lambda$_newFactory$12() {
	$init(XPathFactoryFinder);
	return "all things were tried, but none was found. bailing out."_s;
}

$String* XPathFactoryFinder::lambda$_newFactory$11() {
	$init(XPathFactoryFinder);
	return "attempting to use the platform default W3C DOM XPath lib"_s;
}

$String* XPathFactoryFinder::lambda$_newFactory$10($String* factoryClassName) {
	$init(XPathFactoryFinder);
	return $str({"found "_s, factoryClassName, " in $java.home/conf/jaxp.properties"_s});
}

$String* XPathFactoryFinder::lambda$_newFactory$9($File* f) {
	$init(XPathFactoryFinder);
	return $str({"Read properties file "_s, f});
}

$String* XPathFactoryFinder::lambda$_newFactory$8($String* propertyName) {
	$init(XPathFactoryFinder);
	return $str({"failed to look up system property \'"_s, propertyName, "\'"_s});
}

$String* XPathFactoryFinder::lambda$_newFactory$7() {
	$init(XPathFactoryFinder);
	return "The property is undefined."_s;
}

$String* XPathFactoryFinder::lambda$_newFactory$6($String* r) {
	$init(XPathFactoryFinder);
	return $str({"The value is \'"_s, r, "\'"_s});
}

$String* XPathFactoryFinder::lambda$_newFactory$5($String* propertyName) {
	$init(XPathFactoryFinder);
	return $str({"Looking up system property \'"_s, propertyName, "\'"_s});
}

$String* XPathFactoryFinder::lambda$newFactory$4($String* uri) {
	$init(XPathFactoryFinder);
	return $str({"unable to find a factory for "_s, uri});
}

$String* XPathFactoryFinder::lambda$newFactory$3($XPathFactory* f, $String* uri) {
	$init(XPathFactoryFinder);
	return $str({"factory \'"_s, $($nc($of(f))->getClass()->getName()), "\' was found for "_s, uri});
}

$String* XPathFactoryFinder::lambda$debugDisplayClassLoader$2() {
	return $str({"using class loader ("_s, this->classLoader, ") for search"_s});
}

$String* XPathFactoryFinder::lambda$debugDisplayClassLoader$1() {
	return $str({"using system class loader ("_s, this->classLoader, ") for search"_s});
}

$String* XPathFactoryFinder::lambda$debugDisplayClassLoader$0() {
	return $str({"using thread context class loader ("_s, this->classLoader, ") for search"_s});
}

void clinit$XPathFactoryFinder($Class* class$) {
	$assignStatic(XPathFactoryFinder::DEFAULT_PACKAGE, "com.sun.org.apache.xpath.internal"_s);
	XPathFactoryFinder::$assertionsDisabled = !XPathFactoryFinder::class$->desiredAssertionStatus();
	XPathFactoryFinder::debug = false;
	{
		try {
			XPathFactoryFinder::debug = $SecuritySupport::getSystemProperty("jaxp.debug"_s) != nullptr;
		} catch ($Exception&) {
			$var($Exception, unused, $catch());
			XPathFactoryFinder::debug = false;
		}
	}
	$assignStatic(XPathFactoryFinder::cacheProps, $new($Properties));
	XPathFactoryFinder::firstTime = true;
	$load($XPathFactory);
	$assignStatic(XPathFactoryFinder::SERVICE_CLASS, $XPathFactory::class$);
}

XPathFactoryFinder::XPathFactoryFinder() {
}

$Class* XPathFactoryFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$0::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$1$1::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$debugDisplayClassLoader$2$2::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$newFactory$3$3::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$newFactory$4$4::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$5$5::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$6$6::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$7$7::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$8$8::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$9$9::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$10$10::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$11$11::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$_newFactory$12$12::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$createInstance$13$13::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$createInstance$14$14::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$createInstance$15$15::load$(name, initialize);
		}
		if (name->equals(XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::classInfo$.name)) {
			return XPathFactoryFinder$$Lambda$lambda$createInstance$16$16::load$(name, initialize);
		}
	}
	$loadClass(XPathFactoryFinder, name, initialize, &_XPathFactoryFinder_ClassInfo_, clinit$XPathFactoryFinder, allocate$XPathFactoryFinder);
	return class$;
}

$Class* XPathFactoryFinder::class$ = nullptr;

		} // xpath
	} // xml
} // javax