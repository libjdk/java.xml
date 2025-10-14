#include <com/sun/org/apache/bcel/internal/util/ModularRuntimeImage.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/SecureClassLoader.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef MODULES_PATH
#undef PACKAGES_PATH

using $URLArray = $Array<::java::net::URL>;
using $Closeable = ::java::io::Closeable;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _ModularRuntimeImage_FieldInfo_[] = {
	{"MODULES_PATH", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ModularRuntimeImage, MODULES_PATH)},
	{"PACKAGES_PATH", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ModularRuntimeImage, PACKAGES_PATH)},
	{"classLoader", "Ljava/net/URLClassLoader;", nullptr, $PRIVATE | $FINAL, $field(ModularRuntimeImage, classLoader)},
	{"fileSystem", "Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $FINAL, $field(ModularRuntimeImage, fileSystem)},
	{}
};

$MethodInfo _ModularRuntimeImage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModularRuntimeImage::*)()>(&ModularRuntimeImage::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ModularRuntimeImage::*)($String*)>(&ModularRuntimeImage::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/net/URLClassLoader;Ljava/nio/file/FileSystem;)V", nullptr, $PRIVATE, $method(static_cast<void(ModularRuntimeImage::*)($URLClassLoader*,$FileSystem*)>(&ModularRuntimeImage::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileSystem", "()Ljava/nio/file/FileSystem;", nullptr, $PUBLIC},
	{"list", "(Ljava/nio/file/Path;)Ljava/util/List;", "(Ljava/nio/file/Path;)Ljava/util/List<Ljava/nio/file/Path;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"list", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/nio/file/Path;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"modules", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/Path;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"packages", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/Path;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ModularRuntimeImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.ModularRuntimeImage",
	"java.lang.Object",
	"java.io.Closeable",
	_ModularRuntimeImage_FieldInfo_,
	_ModularRuntimeImage_MethodInfo_
};

$Object* allocate$ModularRuntimeImage($Class* clazz) {
	return $of($alloc(ModularRuntimeImage));
}

$String* ModularRuntimeImage::MODULES_PATH = nullptr;
$String* ModularRuntimeImage::PACKAGES_PATH = nullptr;

void ModularRuntimeImage::init$() {
	ModularRuntimeImage::init$(nullptr, $($FileSystems::getFileSystem($($URI::create("jrt:/"_s)))));
}

void ModularRuntimeImage::init$($String* javaHome) {
	$var($Map, emptyMap, $Collections::emptyMap());
	$var($Path, jrePath, $Paths::get(javaHome, $$new($StringArray, 0)));
	$var($Path, jrtFsPath, $nc($($nc(jrePath)->resolve("lib"_s)))->resolve("jrt-fs.jar"_s));
	$set(this, classLoader, $new($URLClassLoader, $$new($URLArray, {$($nc($($nc(jrtFsPath)->toUri()))->toURL())})));
	$set(this, fileSystem, $FileSystems::newFileSystem($($URI::create("jrt:/"_s)), emptyMap, static_cast<$ClassLoader*>(this->classLoader)));
}

void ModularRuntimeImage::init$($URLClassLoader* cl, $FileSystem* fs) {
	$set(this, classLoader, cl);
	$set(this, fileSystem, fs);
}

void ModularRuntimeImage::close() {
	if (this->classLoader != nullptr) {
		$nc(this->classLoader)->close();
	}
	if (this->fileSystem != nullptr) {
		$nc(this->fileSystem)->close();
	}
}

$List* ModularRuntimeImage::list($Path* dirPath) {
	$var($List, list, $new($ArrayList));
	{
		$var($DirectoryStream, ds, $Files::newDirectoryStream(dirPath));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($Iterator, iterator, $nc(ds)->iterator());
					while ($nc(iterator)->hasNext()) {
						list->add($cast($Path, $(iterator->next())));
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (ds != nullptr) {
						try {
							ds->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (ds != nullptr) {
					ds->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return list;
}

$List* ModularRuntimeImage::list($String* dirName) {
	return list($($nc(this->fileSystem)->getPath(dirName, $$new($StringArray, 0))));
}

$List* ModularRuntimeImage::modules() {
	return list(ModularRuntimeImage::MODULES_PATH);
}

$List* ModularRuntimeImage::packages() {
	return list(ModularRuntimeImage::PACKAGES_PATH);
}

$FileSystem* ModularRuntimeImage::getFileSystem() {
	return this->fileSystem;
}

void clinit$ModularRuntimeImage($Class* class$) {
	$init($File);
	$assignStatic(ModularRuntimeImage::MODULES_PATH, $str({$File::separator, "modules"_s}));
	$assignStatic(ModularRuntimeImage::PACKAGES_PATH, $str({$File::separator, "packages"_s}));
}

ModularRuntimeImage::ModularRuntimeImage() {
}

$Class* ModularRuntimeImage::load$($String* name, bool initialize) {
	$loadClass(ModularRuntimeImage, name, initialize, &_ModularRuntimeImage_ClassInfo_, clinit$ModularRuntimeImage, allocate$ModularRuntimeImage);
	return class$;
}

$Class* ModularRuntimeImage::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com