#include <javax/xml/catalog/GroupEntry$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/GroupEntry.h>
#include <jcpp.h>

#undef GROUP
#undef PUBLIC
#undef REWRITESYSTEM
#undef REWRITEURI
#undef SYSTEM
#undef SYSTEMSUFFIX
#undef URI
#undef URISUFFIX

using $BaseEntry$CatalogEntryTypeArray = $Array<::javax::xml::catalog::BaseEntry$CatalogEntryType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $BaseEntry = ::javax::xml::catalog::BaseEntry;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $GroupEntry = ::javax::xml::catalog::GroupEntry;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _GroupEntry$1_FieldInfo_[] = {
	{"$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupEntry$1, $SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)},
	{}
};

$EnclosingMethodInfo _GroupEntry$1_EnclosingMethodInfo_ = {
	"javax.xml.catalog.GroupEntry",
	nullptr,
	nullptr
};

$InnerClassInfo _GroupEntry$1_InnerClassesInfo_[] = {
	{"javax.xml.catalog.GroupEntry$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _GroupEntry$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.xml.catalog.GroupEntry$1",
	"java.lang.Object",
	nullptr,
	_GroupEntry$1_FieldInfo_,
	nullptr,
	nullptr,
	&_GroupEntry$1_EnclosingMethodInfo_,
	_GroupEntry$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.GroupEntry"
};

$Object* allocate$GroupEntry$1($Class* clazz) {
	return $of($alloc(GroupEntry$1));
}

$ints* GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType = nullptr;

void clinit$GroupEntry$1($Class* class$) {
	$assignStatic(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType, $new($ints, $($BaseEntry$CatalogEntryType::values())->length));
	{
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::SYSTEM->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::REWRITESYSTEM->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::SYSTEMSUFFIX->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::GROUP->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::PUBLIC->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::URI->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::REWRITEURI->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->set($BaseEntry$CatalogEntryType::URISUFFIX->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

GroupEntry$1::GroupEntry$1() {
}

$Class* GroupEntry$1::load$($String* name, bool initialize) {
	$loadClass(GroupEntry$1, name, initialize, &_GroupEntry$1_ClassInfo_, clinit$GroupEntry$1, allocate$GroupEntry$1);
	return class$;
}

$Class* GroupEntry$1::class$ = nullptr;

		} // catalog
	} // xml
} // javax