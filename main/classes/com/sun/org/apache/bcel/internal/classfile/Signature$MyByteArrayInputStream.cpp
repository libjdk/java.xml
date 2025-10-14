#include <com/sun/org/apache/bcel/internal/classfile/Signature$MyByteArrayInputStream.h>

#include <com/sun/org/apache/bcel/internal/classfile/Signature.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Signature = ::com::sun::org::apache::bcel::internal::classfile::Signature;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _Signature$MyByteArrayInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Signature$MyByteArrayInputStream::*)($String*)>(&Signature$MyByteArrayInputStream::init$))},
	{"getData", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(Signature$MyByteArrayInputStream::*)()>(&Signature$MyByteArrayInputStream::getData))},
	{"unread", "()V", nullptr, 0, $method(static_cast<void(Signature$MyByteArrayInputStream::*)()>(&Signature$MyByteArrayInputStream::unread))},
	{}
};

$InnerClassInfo _Signature$MyByteArrayInputStream_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Signature$MyByteArrayInputStream", "com.sun.org.apache.bcel.internal.classfile.Signature", "MyByteArrayInputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Signature$MyByteArrayInputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Signature$MyByteArrayInputStream",
	"java.io.ByteArrayInputStream",
	nullptr,
	nullptr,
	_Signature$MyByteArrayInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Signature$MyByteArrayInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Signature"
};

$Object* allocate$Signature$MyByteArrayInputStream($Class* clazz) {
	return $of($alloc(Signature$MyByteArrayInputStream));
}

void Signature$MyByteArrayInputStream::init$($String* data) {
	$ByteArrayInputStream::init$($($nc(data)->getBytes()));
}

$String* Signature$MyByteArrayInputStream::getData() {
	return $new($String, this->buf);
}

void Signature$MyByteArrayInputStream::unread() {
	if (this->pos > 0) {
		--this->pos;
	}
}

Signature$MyByteArrayInputStream::Signature$MyByteArrayInputStream() {
}

$Class* Signature$MyByteArrayInputStream::load$($String* name, bool initialize) {
	$loadClass(Signature$MyByteArrayInputStream, name, initialize, &_Signature$MyByteArrayInputStream_ClassInfo_, allocate$Signature$MyByteArrayInputStream);
	return class$;
}

$Class* Signature$MyByteArrayInputStream::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com