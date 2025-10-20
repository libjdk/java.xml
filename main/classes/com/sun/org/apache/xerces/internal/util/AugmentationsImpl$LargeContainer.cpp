#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$LargeContainer.h>

#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $AugmentationsImpl$AugmentationsItemsContainer = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _AugmentationsImpl$LargeContainer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AugmentationsImpl$LargeContainer, this$0)},
	{"fAugmentations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $FINAL, $field(AugmentationsImpl$LargeContainer, fAugmentations)},
	{}
};

$MethodInfo _AugmentationsImpl$LargeContainer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;)V", nullptr, 0, $method(static_cast<void(AugmentationsImpl$LargeContainer::*)($AugmentationsImpl*)>(&AugmentationsImpl$LargeContainer::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"expand", "()Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer;", nullptr, $PUBLIC},
	{"getItem", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isFull", "()Z", nullptr, $PUBLIC},
	{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC},
	{"putItem", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"removeItem", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AugmentationsImpl$LargeContainer_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$LargeContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "LargeContainer", 0},
	{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "AugmentationsItemsContainer", $ABSTRACT},
	{}
};

$ClassInfo _AugmentationsImpl$LargeContainer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$LargeContainer",
	"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer",
	nullptr,
	_AugmentationsImpl$LargeContainer_FieldInfo_,
	_AugmentationsImpl$LargeContainer_MethodInfo_,
	nullptr,
	nullptr,
	_AugmentationsImpl$LargeContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.AugmentationsImpl"
};

$Object* allocate$AugmentationsImpl$LargeContainer($Class* clazz) {
	return $of($alloc(AugmentationsImpl$LargeContainer));
}

void AugmentationsImpl$LargeContainer::init$($AugmentationsImpl* this$0) {
	$set(this, this$0, this$0);
	$AugmentationsImpl$AugmentationsItemsContainer::init$(this$0);
	$set(this, fAugmentations, $new($HashMap));
}

$Object* AugmentationsImpl$LargeContainer::getItem(Object$* key) {
	return $of($nc(this->fAugmentations)->get(key));
}

$Object* AugmentationsImpl$LargeContainer::putItem(Object$* key, Object$* item) {
	return $of($nc(this->fAugmentations)->put(key, item));
}

$Object* AugmentationsImpl$LargeContainer::removeItem(Object$* key) {
	return $of($nc(this->fAugmentations)->remove(key));
}

$Enumeration* AugmentationsImpl$LargeContainer::keys() {
	return $Collections::enumeration($($nc(this->fAugmentations)->keySet()));
}

void AugmentationsImpl$LargeContainer::clear() {
	$nc(this->fAugmentations)->clear();
}

bool AugmentationsImpl$LargeContainer::isFull() {
	return false;
}

$AugmentationsImpl$AugmentationsItemsContainer* AugmentationsImpl$LargeContainer::expand() {
	return this;
}

$String* AugmentationsImpl$LargeContainer::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buff, $new($StringBuilder));
	buff->append("LargeContainer"_s);
	{
		$var($Iterator, i$, $nc($($nc(this->fAugmentations)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				buff->append("\nkey == "_s);
				buff->append(key);
				buff->append("; value == "_s);
				buff->append($($nc(this->fAugmentations)->get(key)));
			}
		}
	}
	return buff->toString();
}

AugmentationsImpl$LargeContainer::AugmentationsImpl$LargeContainer() {
}

$Class* AugmentationsImpl$LargeContainer::load$($String* name, bool initialize) {
	$loadClass(AugmentationsImpl$LargeContainer, name, initialize, &_AugmentationsImpl$LargeContainer_ClassInfo_, allocate$AugmentationsImpl$LargeContainer);
	return class$;
}

$Class* AugmentationsImpl$LargeContainer::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com