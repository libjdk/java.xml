#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/WriterOutputBuffer.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer.h>
#include <java/io/BufferedWriter.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BUFFER_SIZE
#undef KB

using $OutputBuffer = ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer;
using $BufferedWriter = ::java::io::BufferedWriter;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								namespace output {

$FieldInfo _WriterOutputBuffer_FieldInfo_[] = {
	{"KB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WriterOutputBuffer, KB)},
	{"BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC, $staticField(WriterOutputBuffer, BUFFER_SIZE)},
	{"_writer", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(WriterOutputBuffer, _writer)},
	{}
};

$MethodInfo _WriterOutputBuffer_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(static_cast<void(WriterOutputBuffer::*)($Writer*)>(&WriterOutputBuffer::init$))},
	{"append", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC},
	{"append", "([CII)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC},
	{"append", "(C)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer;", nullptr, $PUBLIC},
	{"close", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WriterOutputBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.output.WriterOutputBuffer",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.runtime.output.OutputBuffer",
	_WriterOutputBuffer_FieldInfo_,
	_WriterOutputBuffer_MethodInfo_
};

$Object* allocate$WriterOutputBuffer($Class* clazz) {
	return $of($alloc(WriterOutputBuffer));
}

int32_t WriterOutputBuffer::BUFFER_SIZE = 0;

void WriterOutputBuffer::init$($Writer* writer) {
	$set(this, _writer, $new($BufferedWriter, writer, WriterOutputBuffer::BUFFER_SIZE));
}

$String* WriterOutputBuffer::close() {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->_writer)->flush();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($RuntimeException, $(e->toString()));
	}
	return ""_s;
}

$OutputBuffer* WriterOutputBuffer::append($String* s) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->_writer)->write(s);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($RuntimeException, $(e->toString()));
	}
	return this;
}

$OutputBuffer* WriterOutputBuffer::append($chars* s, int32_t from, int32_t to) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->_writer)->write(s, from, to);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($RuntimeException, $(e->toString()));
	}
	return this;
}

$OutputBuffer* WriterOutputBuffer::append(char16_t ch) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->_writer)->write((int32_t)ch);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($RuntimeException, $(e->toString()));
	}
	return this;
}

void clinit$WriterOutputBuffer($Class* class$) {
	WriterOutputBuffer::BUFFER_SIZE = 4 * WriterOutputBuffer::KB;
}

WriterOutputBuffer::WriterOutputBuffer() {
}

$Class* WriterOutputBuffer::load$($String* name, bool initialize) {
	$loadClass(WriterOutputBuffer, name, initialize, &_WriterOutputBuffer_ClassInfo_, clinit$WriterOutputBuffer, allocate$WriterOutputBuffer);
	return class$;
}

$Class* WriterOutputBuffer::class$ = nullptr;

								} // output
							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com