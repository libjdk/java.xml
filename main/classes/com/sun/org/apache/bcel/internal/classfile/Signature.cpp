#include <com/sun/org/apache/bcel/internal/classfile/Signature.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Signature$MyByteArrayInputStream.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

#undef ATTR_SIGNATURE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $Signature$MyByteArrayInputStream = ::com::sun::org::apache::bcel::internal::classfile::Signature$MyByteArrayInputStream;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _Signature_FieldInfo_[] = {
	{"signatureIndex", "I", nullptr, $PRIVATE, $field(Signature, signatureIndex)},
	{}
};

$MethodInfo _Signature_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/Signature;)V", nullptr, $PUBLIC, $method(static_cast<void(Signature::*)(Signature*)>(&Signature::init$))},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(static_cast<void(Signature::*)(int32_t,int32_t,$DataInput*,$ConstantPool*)>(&Signature::init$)), "java.io.IOException"},
	{"<init>", "(IIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(static_cast<void(Signature::*)(int32_t,int32_t,int32_t,$ConstantPool*)>(&Signature::init$))},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Signature::*)()>(&Signature::getSignature))},
	{"getSignatureIndex", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Signature::*)()>(&Signature::getSignatureIndex))},
	{"identStart", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Signature::identStart))},
	{"isActualParameterList", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Signature::isActualParameterList))},
	{"isFormalParameterList", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Signature::isFormalParameterList))},
	{"matchGJIdent", "(Lcom/sun/org/apache/bcel/internal/classfile/Signature$MyByteArrayInputStream;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Signature$MyByteArrayInputStream*,$StringBuilder*)>(&Signature::matchGJIdent))},
	{"matchIdent", "(Lcom/sun/org/apache/bcel/internal/classfile/Signature$MyByteArrayInputStream;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Signature$MyByteArrayInputStream*,$StringBuilder*)>(&Signature::matchIdent))},
	{"setSignatureIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Signature::*)(int32_t)>(&Signature::setSignatureIndex))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Signature::translate))},
	{}
};

$InnerClassInfo _Signature_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Signature$MyByteArrayInputStream", "com.sun.org.apache.bcel.internal.classfile.Signature", "MyByteArrayInputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Signature_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Signature",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_Signature_FieldInfo_,
	_Signature_MethodInfo_,
	nullptr,
	nullptr,
	_Signature_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Signature$MyByteArrayInputStream"
};

$Object* allocate$Signature($Class* clazz) {
	return $of($alloc(Signature));
}

void Signature::init$(Signature* c) {
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	int32_t var$2 = c->getSignatureIndex();
	Signature::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void Signature::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	Signature::init$(name_index, length, $nc(input)->readUnsignedShort(), constant_pool);
}

void Signature::init$(int32_t name_index, int32_t length, int32_t signatureIndex, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_SIGNATURE, name_index, length, constant_pool);
	this->signatureIndex = signatureIndex;
}

void Signature::accept($Visitor* v) {
	$nc(v)->visitSignature(this);
}

void Signature::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort(this->signatureIndex);
}

int32_t Signature::getSignatureIndex() {
	return this->signatureIndex;
}

void Signature::setSignatureIndex(int32_t signatureIndex) {
	this->signatureIndex = signatureIndex;
}

$String* Signature::getSignature() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc($($Attribute::getConstantPool()))->getConstant(this->signatureIndex, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

bool Signature::identStart(int32_t ch) {
	$init(Signature);
	return ch == u'T' || ch == u'L';
}

void Signature::matchIdent($Signature$MyByteArrayInputStream* in, $StringBuilder* buf) {
	$init(Signature);
	$useLocalCurrentObjectStackCache();
	int32_t ch = 0;
	if ((ch = $nc(in)->read()) == -1) {
		$throwNew($IllegalArgumentException, $$str({"Illegal signature: "_s, $(in->getData()), " no ident, reaching EOF"_s}));
	}
	if (!identStart(ch)) {
		$var($StringBuilder, buf2, $new($StringBuilder));
		int32_t count = 1;
		while ($Character::isJavaIdentifierPart((char16_t)ch)) {
			buf2->append((char16_t)ch);
			++count;
			ch = $nc(in)->read();
		}
		if (ch == u':') {
			$nc(in)->skip("Ljava/lang/Object"_s->length());
			$nc(buf)->append(static_cast<$CharSequence*>(buf2));
			ch = in->read();
			in->unread();
		} else {
			for (int32_t i = 0; i < count; ++i) {
				$nc(in)->unread();
			}
		}
		return;
	}
	$var($StringBuilder, buf2, $new($StringBuilder));
	ch = $nc(in)->read();
	do {
		buf2->append((char16_t)ch);
		ch = in->read();
	} while ((ch != -1) && ($Character::isJavaIdentifierPart((char16_t)ch) || (ch == u'/')));
	$nc(buf)->append($($nc($(buf2->toString()))->replace(u'/', u'.')));
	if (ch != -1) {
		in->unread();
	}
}

void Signature::matchGJIdent($Signature$MyByteArrayInputStream* in, $StringBuilder* buf) {
	$init(Signature);
	$useLocalCurrentObjectStackCache();
	int32_t ch = 0;
	matchIdent(in, buf);
	ch = $nc(in)->read();
	if ((ch == u'<') || ch == u'(') {
		$nc(buf)->append((char16_t)ch);
		matchGJIdent(in, buf);
		while (((ch = in->read()) != u'>') && (ch != u')')) {
			if (ch == -1) {
				$throwNew($IllegalArgumentException, $$str({"Illegal signature: "_s, $(in->getData()), " reaching EOF"_s}));
			}
			buf->append(", "_s);
			in->unread();
			matchGJIdent(in, buf);
		}
		buf->append((char16_t)ch);
	} else {
		in->unread();
	}
	ch = in->read();
	if (identStart(ch)) {
		in->unread();
		matchGJIdent(in, buf);
	} else if (ch == u')') {
		in->unread();
		return;
	} else if (ch != u';') {
		$throwNew($IllegalArgumentException, $$str({"Illegal signature: "_s, $(in->getData()), " read "_s, $$str((char16_t)ch)}));
	}
}

$String* Signature::translate($String* s) {
	$init(Signature);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	matchGJIdent($$new($Signature$MyByteArrayInputStream, s), buf);
	return buf->toString();
}

bool Signature::isFormalParameterList($String* s) {
	$init(Signature);
	bool var$0 = $nc(s)->startsWith("<"_s);
	return var$0 && (s->indexOf((int32_t)u':') > 0);
}

bool Signature::isActualParameterList($String* s) {
	$init(Signature);
	bool var$0 = $nc(s)->startsWith("L"_s);
	return var$0 && s->endsWith(">;"_s);
}

$String* Signature::toString() {
	$var($String, s, getSignature());
	return $str({"Signature: "_s, s});
}

$Attribute* Signature::copy($ConstantPool* _constant_pool) {
	return $cast($Attribute, clone());
}

Signature::Signature() {
}

$Class* Signature::load$($String* name, bool initialize) {
	$loadClass(Signature, name, initialize, &_Signature_ClassInfo_, allocate$Signature);
	return class$;
}

$Class* Signature::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com