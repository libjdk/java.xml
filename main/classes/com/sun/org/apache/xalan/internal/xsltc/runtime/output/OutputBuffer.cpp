#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								namespace output {

$MethodInfo _OutputBuffer_MethodInfo_[] = {
	{"append", "(C)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"append", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"append", "([CII)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"close", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OutputBuffer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.output.OutputBuffer",
	nullptr,
	nullptr,
	nullptr,
	_OutputBuffer_MethodInfo_
};

$Object* allocate$OutputBuffer($Class* clazz) {
	return $of($alloc(OutputBuffer));
}

$Class* OutputBuffer::load$($String* name, bool initialize) {
	$loadClass(OutputBuffer, name, initialize, &_OutputBuffer_ClassInfo_, allocate$OutputBuffer);
	return class$;
}

$Class* OutputBuffer::class$ = nullptr;

								} // output
							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com