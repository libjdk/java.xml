#include <com/sun/org/apache/xml/internal/serializer/WriterChain.h>

#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _WriterChain_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "([C)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _WriterChain_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.WriterChain",
	nullptr,
	nullptr,
	nullptr,
	_WriterChain_MethodInfo_
};

$Object* allocate$WriterChain($Class* clazz) {
	return $of($alloc(WriterChain));
}

$Class* WriterChain::load$($String* name, bool initialize) {
	$loadClass(WriterChain, name, initialize, &_WriterChain_ClassInfo_, allocate$WriterChain);
	return class$;
}

$Class* WriterChain::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com