#include <com/sun/org/apache/bcel/internal/util/SyntheticRepository.h>

#include <com/sun/org/apache/bcel/internal/classfile/ClassParser.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/util/Repository.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassParser = ::com::sun::org::apache::bcel::internal::classfile::ClassParser;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $Repository = ::com::sun::org::apache::bcel::internal::util::Repository;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _SyntheticRepository_FieldInfo_[] = {
	{"loadedClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/ref/SoftReference<Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;>;>;", $PRIVATE | $FINAL, $field(SyntheticRepository, loadedClasses)},
	{}
};

$MethodInfo _SyntheticRepository_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SyntheticRepository::*)()>(&SyntheticRepository::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"findClass", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC},
	{"getInstance", "()Lcom/sun/org/apache/bcel/internal/util/SyntheticRepository;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SyntheticRepository*(*)()>(&SyntheticRepository::getInstance))},
	{"loadClass", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, nullptr, "java.lang.ClassNotFoundException"},
	{"loadClass", "(Ljava/lang/Class;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", "(Ljava/lang/Class<*>;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", $PUBLIC, nullptr, "java.lang.ClassNotFoundException"},
	{"loadClass", "(Ljava/io/InputStream;Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PRIVATE, $method(static_cast<$JavaClass*(SyntheticRepository::*)($InputStream*,$String*)>(&SyntheticRepository::loadClass)), "java.lang.ClassNotFoundException"},
	{"removeClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC},
	{"storeClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SyntheticRepository_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.SyntheticRepository",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.util.Repository",
	_SyntheticRepository_FieldInfo_,
	_SyntheticRepository_MethodInfo_
};

$Object* allocate$SyntheticRepository($Class* clazz) {
	return $of($alloc(SyntheticRepository));
}

void SyntheticRepository::init$() {
	$set(this, loadedClasses, $new($HashMap));
}

SyntheticRepository* SyntheticRepository::getInstance() {
	$init(SyntheticRepository);
	return $new(SyntheticRepository);
}

void SyntheticRepository::storeClass($JavaClass* clazz) {
	$var($Object, var$0, $of($nc(clazz)->getClassName()));
	$nc(this->loadedClasses)->put(var$0, $$new($SoftReference, clazz));
	$nc(clazz)->setRepository(this);
}

void SyntheticRepository::removeClass($JavaClass* clazz) {
	$nc(this->loadedClasses)->remove($($nc(clazz)->getClassName()));
}

$JavaClass* SyntheticRepository::findClass($String* className) {
	$var($SoftReference, ref, $cast($SoftReference, $nc(this->loadedClasses)->get(className)));
	if (ref == nullptr) {
		return nullptr;
	}
	return $cast($JavaClass, $nc(ref)->get());
}

$JavaClass* SyntheticRepository::loadClass($String* className$renamed) {
	$var($String, className, className$renamed);
	if ((className == nullptr) || $nc(className)->isEmpty()) {
		$throwNew($IllegalArgumentException, $$str({"Invalid class name "_s, className}));
	}
	$assign(className, $nc(className)->replace(u'/', u'.'));
	$var($JavaClass, clazz, findClass(className));
	if (clazz != nullptr) {
		return clazz;
	}
	$var($IOException, e, $new($IOException, $$str({"Couldn\'t find: "_s, className, ".class"_s})));
	$throwNew($ClassNotFoundException, $$str({"Exception while looking for class "_s, className, ": "_s, e}), e);
}

$JavaClass* SyntheticRepository::loadClass($Class* clazz) {
	$beforeCallerSensitive();
	$var($String, className, $nc(clazz)->getName());
	$var($JavaClass, repositoryClass, findClass(className));
	if (repositoryClass != nullptr) {
		return repositoryClass;
	}
	$var($String, name, className);
	int32_t i = $nc(name)->lastIndexOf((int32_t)u'.');
	if (i > 0) {
		$assign(name, name->substring(i + 1));
	}
	$var($JavaClass, cls, nullptr);
	try {
		$var($InputStream, clsStream, clazz->getResourceAsStream($$str({name, ".class"_s})));
		{
			$var($Throwable, var$0, nullptr);
			$var($JavaClass, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, $assign(cls, loadClass(clsStream, className)));
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (clsStream != nullptr) {
						try {
							clsStream->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (clsStream != nullptr) {
					clsStream->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return cls;
	}
	$shouldNotReachHere();
}

$JavaClass* SyntheticRepository::loadClass($InputStream* is, $String* className) {
	{
		$var($Throwable, var$0, nullptr);
		$var($JavaClass, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				if (is != nullptr) {
					$var($ClassParser, parser, $new($ClassParser, is, className));
					$var($JavaClass, clazz, parser->parse());
					storeClass(clazz);
					$assign(var$2, clazz);
					return$1 = true;
					goto $finally;
				}
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$throwNew($ClassNotFoundException, $$str({"Exception while looking for class "_s, className, ": "_s, e}), e);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (is != nullptr) {
				try {
					is->close();
				} catch ($IOException&) {
					$catch();
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$throwNew($ClassNotFoundException, $$str({"SyntheticRepository could not load "_s, className}));
	$shouldNotReachHere();
}

void SyntheticRepository::clear() {
	$nc(this->loadedClasses)->clear();
}

SyntheticRepository::SyntheticRepository() {
}

$Class* SyntheticRepository::load$($String* name, bool initialize) {
	$loadClass(SyntheticRepository, name, initialize, &_SyntheticRepository_ClassInfo_, allocate$SyntheticRepository);
	return class$;
}

$Class* SyntheticRepository::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com