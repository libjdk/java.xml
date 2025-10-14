#include <com/sun/xml/internal/stream/writers/XMLWriter.h>

#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DEBUG
#undef THRESHHOLD_LENGTH

using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _XMLWriter_FieldInfo_[] = {
	{"writer", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(XMLWriter, writer)},
	{"size", "I", nullptr, $PRIVATE, $field(XMLWriter, size)},
	{"buffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE, $field(XMLWriter, buffer)},
	{"THRESHHOLD_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLWriter, THRESHHOLD_LENGTH)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLWriter, DEBUG)},
	{}
};

$MethodInfo _XMLWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLWriter::*)($Writer*)>(&XMLWriter::init$))},
	{"<init>", "(Ljava/io/Writer;I)V", nullptr, $PUBLIC, $method(static_cast<void(XMLWriter::*)($Writer*,int32_t)>(&XMLWriter::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"conditionalWrite", "()V", nullptr, $PRIVATE, $method(static_cast<void(XMLWriter::*)()>(&XMLWriter::conditionalWrite)), "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(XMLWriter::*)()>(&XMLWriter::ensureOpen)), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PROTECTED},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC},
	{"setWriter", "(Ljava/io/Writer;I)V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([C)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeBufferedData", "()V", nullptr, $PRIVATE, $method(static_cast<void(XMLWriter::*)()>(&XMLWriter::writeBufferedData)), "java.io.IOException"},
	{}
};

$ClassInfo _XMLWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLWriter",
	"java.io.Writer",
	nullptr,
	_XMLWriter_FieldInfo_,
	_XMLWriter_MethodInfo_
};

$Object* allocate$XMLWriter($Class* clazz) {
	return $of($alloc(XMLWriter));
}

void XMLWriter::init$($Writer* writer) {
	XMLWriter::init$(writer, XMLWriter::THRESHHOLD_LENGTH);
}

void XMLWriter::init$($Writer* writer, int32_t size) {
	$Writer::init$();
	$set(this, buffer, $new($XMLStringBuffer, 6 * (1 << 11)));
	$set(this, writer, writer);
	this->size = size;
}

void XMLWriter::write(int32_t c) {
	ensureOpen();
	$nc(this->buffer)->append((char16_t)c);
	conditionalWrite();
}

void XMLWriter::write($chars* cbuf) {
	write(cbuf, 0, $nc(cbuf)->length);
}

void XMLWriter::write($chars* cbuf, int32_t off, int32_t len) {
	ensureOpen();
	if (len > this->size) {
		writeBufferedData();
		$nc(this->writer)->write(cbuf, off, len);
	} else {
		$nc(this->buffer)->append(cbuf, off, len);
		conditionalWrite();
	}
}

void XMLWriter::write($String* str, int32_t off, int32_t len) {
	write($($nc(str)->toCharArray()), off, len);
}

void XMLWriter::write($String* str) {
	if ($nc(str)->length() > this->size) {
		writeBufferedData();
		$nc(this->writer)->write(str);
	} else {
		$nc(this->buffer)->append(str);
		conditionalWrite();
	}
}

void XMLWriter::close() {
	if (this->writer == nullptr) {
		return;
	}
	flush();
	$nc(this->writer)->close();
	$set(this, writer, nullptr);
}

void XMLWriter::flush() {
	ensureOpen();
	writeBufferedData();
	$nc(this->writer)->flush();
}

void XMLWriter::reset() {
	$set(this, writer, nullptr);
	$nc(this->buffer)->clear();
	this->size = XMLWriter::THRESHHOLD_LENGTH;
}

void XMLWriter::setWriter($Writer* writer) {
	$set(this, writer, writer);
	$nc(this->buffer)->clear();
	this->size = XMLWriter::THRESHHOLD_LENGTH;
}

void XMLWriter::setWriter($Writer* writer, int32_t size) {
	$set(this, writer, writer);
	this->size = size;
}

$Writer* XMLWriter::getWriter() {
	return this->writer;
}

void XMLWriter::conditionalWrite() {
	if ($nc(this->buffer)->length > this->size) {
		writeBufferedData();
	}
}

void XMLWriter::writeBufferedData() {
	$nc(this->writer)->write($nc(this->buffer)->ch, $nc(this->buffer)->offset, $nc(this->buffer)->length);
	$nc(this->buffer)->clear();
}

void XMLWriter::ensureOpen() {
	if (this->writer == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

XMLWriter::XMLWriter() {
}

$Class* XMLWriter::load$($String* name, bool initialize) {
	$loadClass(XMLWriter, name, initialize, &_XMLWriter_ClassInfo_, allocate$XMLWriter);
	return class$;
}

$Class* XMLWriter::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com