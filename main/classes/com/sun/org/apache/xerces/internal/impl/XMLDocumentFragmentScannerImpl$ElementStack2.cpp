#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl$ElementStack2.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLDocumentFragmentScannerImpl$ElementStack2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDocumentFragmentScannerImpl$ElementStack2, this$0)},
	{"fQName", "[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack2, fQName)},
	{"fDepth", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack2, fDepth)},
	{"fCount", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack2, fCount)},
	{"fPosition", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack2, fPosition)},
	{"fMark", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack2, fMark)},
	{"fLastDepth", "I", nullptr, $PROTECTED, $field(XMLDocumentFragmentScannerImpl$ElementStack2, fLastDepth)},
	{}
};

$MethodInfo _XMLDocumentFragmentScannerImpl$ElementStack2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLDocumentFragmentScannerImpl$ElementStack2::*)($XMLDocumentFragmentScannerImpl*)>(&XMLDocumentFragmentScannerImpl$ElementStack2::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getNext", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC},
	{"matchElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PUBLIC},
	{"nextElement", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC},
	{"popElement", "()I", nullptr, $PUBLIC},
	{"resize", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLDocumentFragmentScannerImpl$ElementStack2_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$ElementStack2", "com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl", "ElementStack2", $PROTECTED},
	{}
};

$ClassInfo _XMLDocumentFragmentScannerImpl$ElementStack2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl$ElementStack2",
	"java.lang.Object",
	nullptr,
	_XMLDocumentFragmentScannerImpl$ElementStack2_FieldInfo_,
	_XMLDocumentFragmentScannerImpl$ElementStack2_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDocumentFragmentScannerImpl$ElementStack2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl"
};

$Object* allocate$XMLDocumentFragmentScannerImpl$ElementStack2($Class* clazz) {
	return $of($alloc(XMLDocumentFragmentScannerImpl$ElementStack2));
}

void XMLDocumentFragmentScannerImpl$ElementStack2::init$($XMLDocumentFragmentScannerImpl* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, fQName, $new($QNameArray, 20));
	for (int32_t i = 0; i < $nc(this->fQName)->length; ++i) {
		$nc(this->fQName)->set(i, $$new($QName));
	}
	this->fMark = (this->fPosition = 1);
}

void XMLDocumentFragmentScannerImpl$ElementStack2::resize() {
	$useLocalCurrentObjectStackCache();
	int32_t oldLength = $nc(this->fQName)->length;
	$var($QNameArray, tmp, $new($QNameArray, oldLength * 2));
	$System::arraycopy(this->fQName, 0, tmp, 0, oldLength);
	$set(this, fQName, tmp);
	for (int32_t i = oldLength; i < $nc(this->fQName)->length; ++i) {
		$nc(this->fQName)->set(i, $$new($QName));
	}
}

bool XMLDocumentFragmentScannerImpl$ElementStack2::matchElement($QName* element) {
	bool match = false;
	if (this->fLastDepth > this->fDepth && this->fDepth <= 2) {
		if ($nc(element)->rawname == $nc($nc(this->fQName)->get(this->fDepth))->rawname) {
			this->this$0->fAdd = false;
			this->fMark = this->fDepth - 1;
			this->fPosition = this->fMark + 1;
			match = true;
			--this->fCount;
		} else {
			this->this$0->fAdd = true;
		}
	}
	this->fLastDepth = this->fDepth++;
	return match;
}

$QName* XMLDocumentFragmentScannerImpl$ElementStack2::nextElement() {
	if (this->fCount == $nc(this->fQName)->length) {
		this->this$0->fShouldSkip = false;
		this->this$0->fAdd = false;
		return $nc(this->fQName)->get(--this->fCount);
	}
	return $nc(this->fQName)->get(this->fCount++);
}

$QName* XMLDocumentFragmentScannerImpl$ElementStack2::getNext() {
	if (this->fPosition == this->fCount) {
		this->fPosition = this->fMark;
	}
	return $nc(this->fQName)->get(this->fPosition++);
}

int32_t XMLDocumentFragmentScannerImpl$ElementStack2::popElement() {
	return this->fDepth--;
}

void XMLDocumentFragmentScannerImpl$ElementStack2::clear() {
	this->fLastDepth = 0;
	this->fDepth = 0;
	this->fCount = 0;
	this->fPosition = (this->fMark = 1);
}

XMLDocumentFragmentScannerImpl$ElementStack2::XMLDocumentFragmentScannerImpl$ElementStack2() {
}

$Class* XMLDocumentFragmentScannerImpl$ElementStack2::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentFragmentScannerImpl$ElementStack2, name, initialize, &_XMLDocumentFragmentScannerImpl$ElementStack2_ClassInfo_, allocate$XMLDocumentFragmentScannerImpl$ElementStack2);
	return class$;
}

$Class* XMLDocumentFragmentScannerImpl$ElementStack2::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com