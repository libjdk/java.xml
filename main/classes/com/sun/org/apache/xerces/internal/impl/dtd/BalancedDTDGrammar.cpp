#include <com/sun/org/apache/xerces/internal/impl/dtd/BalancedDTDGrammar.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CONTENTSPECNODE_CHOICE
#undef CONTENTSPECNODE_ONE_OR_MORE
#undef CONTENTSPECNODE_SEQ
#undef CONTENTSPECNODE_ZERO_OR_MORE
#undef CONTENTSPECNODE_ZERO_OR_ONE
#undef OCCURS_ONE_OR_MORE
#undef OCCURS_ZERO_OR_MORE
#undef OCCURS_ZERO_OR_ONE
#undef SEPARATOR_CHOICE
#undef SEPARATOR_SEQUENCE

using $intArray2 = $Array<int32_t, 2>;
using $DTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar;
using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription;
using $XMLElementDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _BalancedDTDGrammar_FieldInfo_[] = {
	{"fMixed", "Z", nullptr, $PRIVATE, $field(BalancedDTDGrammar, fMixed)},
	{"fDepth", "I", nullptr, $PRIVATE, $field(BalancedDTDGrammar, fDepth)},
	{"fOpStack", "[S", nullptr, $PRIVATE, $field(BalancedDTDGrammar, fOpStack)},
	{"fGroupIndexStack", "[[I", nullptr, $PRIVATE, $field(BalancedDTDGrammar, fGroupIndexStack)},
	{"fGroupIndexStackSizes", "[I", nullptr, $PRIVATE, $field(BalancedDTDGrammar, fGroupIndexStackSizes)},
	{}
};

$MethodInfo _BalancedDTDGrammar_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription;)V", nullptr, $PUBLIC, $method(static_cast<void(BalancedDTDGrammar::*)($SymbolTable*,$XMLDTDDescription*)>(&BalancedDTDGrammar::init$))},
	{"addContentSpecNodes", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BalancedDTDGrammar::*)(int32_t,int32_t)>(&BalancedDTDGrammar::addContentSpecNodes))},
	{"addContentSpecToElement", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl;)V", nullptr, $PROTECTED | $FINAL},
	{"addToCurrentGroup", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BalancedDTDGrammar::*)(int32_t)>(&BalancedDTDGrammar::addToCurrentGroup))},
	{"element", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $FINAL, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $FINAL, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $FINAL, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"initializeContentModelStacks", "()V", nullptr, $PRIVATE, $method(static_cast<void(BalancedDTDGrammar::*)()>(&BalancedDTDGrammar::initializeContentModelStacks))},
	{"occurrence", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $FINAL, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"pcdata", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $FINAL, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"separator", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $FINAL, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startContentModel", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $FINAL, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $FINAL, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _BalancedDTDGrammar_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.BalancedDTDGrammar",
	"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar",
	nullptr,
	_BalancedDTDGrammar_FieldInfo_,
	_BalancedDTDGrammar_MethodInfo_
};

$Object* allocate$BalancedDTDGrammar($Class* clazz) {
	return $of($alloc(BalancedDTDGrammar));
}

void BalancedDTDGrammar::init$($SymbolTable* symbolTable, $XMLDTDDescription* desc) {
	$DTDGrammar::init$(symbolTable, desc);
	this->fDepth = 0;
	$set(this, fOpStack, nullptr);
}

void BalancedDTDGrammar::startContentModel($String* elementName, $Augmentations* augs) {
	this->fDepth = 0;
	initializeContentModelStacks();
	$DTDGrammar::startContentModel(elementName, augs);
}

void BalancedDTDGrammar::startGroup($Augmentations* augs) {
	++this->fDepth;
	initializeContentModelStacks();
	this->fMixed = false;
}

void BalancedDTDGrammar::pcdata($Augmentations* augs) {
	this->fMixed = true;
}

void BalancedDTDGrammar::element($String* elementName, $Augmentations* augs) {
	addToCurrentGroup(addUniqueLeafNode(elementName));
}

void BalancedDTDGrammar::separator(int16_t separator, $Augmentations* augs) {
	if (separator == $XMLDTDContentModelHandler::SEPARATOR_CHOICE) {
		$nc(this->fOpStack)->set(this->fDepth, $XMLContentSpec::CONTENTSPECNODE_CHOICE);
	} else if (separator == $XMLDTDContentModelHandler::SEPARATOR_SEQUENCE) {
		$nc(this->fOpStack)->set(this->fDepth, $XMLContentSpec::CONTENTSPECNODE_SEQ);
	}
}

void BalancedDTDGrammar::occurrence(int16_t occurrence, $Augmentations* augs) {
	if (!this->fMixed) {
		int32_t currentIndex = $nc(this->fGroupIndexStackSizes)->get(this->fDepth) - 1;
		if (occurrence == $XMLDTDContentModelHandler::OCCURS_ZERO_OR_ONE) {
			$nc($nc(this->fGroupIndexStack)->get(this->fDepth))->set(currentIndex, addContentSpecNode($XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE, $nc($nc(this->fGroupIndexStack)->get(this->fDepth))->get(currentIndex), -1));
		} else if (occurrence == $XMLDTDContentModelHandler::OCCURS_ZERO_OR_MORE) {
			$nc($nc(this->fGroupIndexStack)->get(this->fDepth))->set(currentIndex, addContentSpecNode($XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE, $nc($nc(this->fGroupIndexStack)->get(this->fDepth))->get(currentIndex), -1));
		} else if (occurrence == $XMLDTDContentModelHandler::OCCURS_ONE_OR_MORE) {
			$nc($nc(this->fGroupIndexStack)->get(this->fDepth))->set(currentIndex, addContentSpecNode($XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE, $nc($nc(this->fGroupIndexStack)->get(this->fDepth))->get(currentIndex), -1));
		}
	}
}

void BalancedDTDGrammar::endGroup($Augmentations* augs) {
	int32_t length = $nc(this->fGroupIndexStackSizes)->get(this->fDepth);
	int32_t group = length > 0 ? addContentSpecNodes(0, length - 1) : addUniqueLeafNode(nullptr);
	--this->fDepth;
	addToCurrentGroup(group);
}

void BalancedDTDGrammar::endDTD($Augmentations* augs) {
	$DTDGrammar::endDTD(augs);
	$set(this, fOpStack, nullptr);
	$set(this, fGroupIndexStack, nullptr);
	$set(this, fGroupIndexStackSizes, nullptr);
}

void BalancedDTDGrammar::addContentSpecToElement($XMLElementDecl* elementDecl) {
	int32_t contentSpec = $nc(this->fGroupIndexStackSizes)->get(0) > 0 ? $nc($nc(this->fGroupIndexStack)->get(0))->get(0) : -1;
	setContentSpecIndex(this->fCurrentElementIndex, contentSpec);
}

int32_t BalancedDTDGrammar::addContentSpecNodes(int32_t begin, int32_t end) {
	if (begin == end) {
		return $nc($nc(this->fGroupIndexStack)->get(this->fDepth))->get(begin);
	}
	int32_t middle = (int32_t)((uint32_t)(begin + end) >> 1);
	int16_t var$0 = $nc(this->fOpStack)->get(this->fDepth);
	int32_t var$1 = addContentSpecNodes(begin, middle);
	return addContentSpecNode(var$0, var$1, addContentSpecNodes(middle + 1, end));
}

void BalancedDTDGrammar::initializeContentModelStacks() {
	if (this->fOpStack == nullptr) {
		$set(this, fOpStack, $new($shorts, 8));
		$set(this, fGroupIndexStack, $new($intArray2, 8));
		$set(this, fGroupIndexStackSizes, $new($ints, 8));
	} else if (this->fDepth == $nc(this->fOpStack)->length) {
		$var($shorts, newOpStack, $new($shorts, this->fDepth * 2));
		$System::arraycopy(this->fOpStack, 0, newOpStack, 0, this->fDepth);
		$set(this, fOpStack, newOpStack);
		$var($intArray2, newGroupIndexStack, $new($intArray2, this->fDepth * 2));
		$System::arraycopy(this->fGroupIndexStack, 0, newGroupIndexStack, 0, this->fDepth);
		$set(this, fGroupIndexStack, newGroupIndexStack);
		$var($ints, newGroupIndexStackLengths, $new($ints, this->fDepth * 2));
		$System::arraycopy(this->fGroupIndexStackSizes, 0, newGroupIndexStackLengths, 0, this->fDepth);
		$set(this, fGroupIndexStackSizes, newGroupIndexStackLengths);
	}
	$nc(this->fOpStack)->set(this->fDepth, (int16_t)-1);
	$nc(this->fGroupIndexStackSizes)->set(this->fDepth, 0);
}

void BalancedDTDGrammar::addToCurrentGroup(int32_t contentSpec) {
	$var($ints, currentGroup, $nc(this->fGroupIndexStack)->get(this->fDepth));
	int32_t length = (*$nc(this->fGroupIndexStackSizes))[this->fDepth]++;
	if (currentGroup == nullptr) {
		$assign(currentGroup, $new($ints, 8));
		$nc(this->fGroupIndexStack)->set(this->fDepth, currentGroup);
	} else if (length == currentGroup->length) {
		$var($ints, newGroup, $new($ints, currentGroup->length * 2));
		$System::arraycopy(currentGroup, 0, newGroup, 0, currentGroup->length);
		$assign(currentGroup, newGroup);
		$nc(this->fGroupIndexStack)->set(this->fDepth, currentGroup);
	}
	currentGroup->set(length, contentSpec);
}

BalancedDTDGrammar::BalancedDTDGrammar() {
}

$Class* BalancedDTDGrammar::load$($String* name, bool initialize) {
	$loadClass(BalancedDTDGrammar, name, initialize, &_BalancedDTDGrammar_ClassInfo_, allocate$BalancedDTDGrammar);
	return class$;
}

$Class* BalancedDTDGrammar::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com