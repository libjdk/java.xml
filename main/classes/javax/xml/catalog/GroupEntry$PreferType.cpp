#include <javax/xml/catalog/GroupEntry$PreferType.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/catalog/GroupEntry.h>
#include <jcpp.h>

#undef PUBLIC
#undef SYSTEM

using $GroupEntry$PreferTypeArray = $Array<::javax::xml::catalog::GroupEntry$PreferType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupEntry = ::javax::xml::catalog::GroupEntry;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _GroupEntry$PreferType_FieldInfo_[] = {
	{"PUBLIC", "Ljavax/xml/catalog/GroupEntry$PreferType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GroupEntry$PreferType, PUBLIC)},
	{"SYSTEM", "Ljavax/xml/catalog/GroupEntry$PreferType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GroupEntry$PreferType, SYSTEM)},
	{"$VALUES", "[Ljavax/xml/catalog/GroupEntry$PreferType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupEntry$PreferType, $VALUES)},
	{"literal", "Ljava/lang/String;", nullptr, $FINAL, $field(GroupEntry$PreferType, literal)},
	{}
};

$MethodInfo _GroupEntry$PreferType_MethodInfo_[] = {
	{"$values", "()[Ljavax/xml/catalog/GroupEntry$PreferType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GroupEntry$PreferTypeArray*(*)()>(&GroupEntry$PreferType::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(GroupEntry$PreferType::*)($String*,int32_t,$String*)>(&GroupEntry$PreferType::init$))},
	{"prefer", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(static_cast<bool(GroupEntry$PreferType::*)($String*)>(&GroupEntry$PreferType::prefer))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/xml/catalog/GroupEntry$PreferType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GroupEntry$PreferType*(*)($String*)>(&GroupEntry$PreferType::valueOf))},
	{"values", "()[Ljavax/xml/catalog/GroupEntry$PreferType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GroupEntry$PreferTypeArray*(*)()>(&GroupEntry$PreferType::values))},
	{}
};

$InnerClassInfo _GroupEntry$PreferType_InnerClassesInfo_[] = {
	{"javax.xml.catalog.GroupEntry$PreferType", "javax.xml.catalog.GroupEntry", "PreferType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GroupEntry$PreferType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.xml.catalog.GroupEntry$PreferType",
	"java.lang.Enum",
	nullptr,
	_GroupEntry$PreferType_FieldInfo_,
	_GroupEntry$PreferType_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/xml/catalog/GroupEntry$PreferType;>;",
	nullptr,
	_GroupEntry$PreferType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.GroupEntry"
};

$Object* allocate$GroupEntry$PreferType($Class* clazz) {
	return $of($alloc(GroupEntry$PreferType));
}

GroupEntry$PreferType* GroupEntry$PreferType::PUBLIC = nullptr;
GroupEntry$PreferType* GroupEntry$PreferType::SYSTEM = nullptr;
$GroupEntry$PreferTypeArray* GroupEntry$PreferType::$VALUES = nullptr;

$GroupEntry$PreferTypeArray* GroupEntry$PreferType::$values() {
	$init(GroupEntry$PreferType);
	return $new($GroupEntry$PreferTypeArray, {
		GroupEntry$PreferType::PUBLIC,
		GroupEntry$PreferType::SYSTEM
	});
}

$GroupEntry$PreferTypeArray* GroupEntry$PreferType::values() {
	$init(GroupEntry$PreferType);
	return $cast($GroupEntry$PreferTypeArray, GroupEntry$PreferType::$VALUES->clone());
}

GroupEntry$PreferType* GroupEntry$PreferType::valueOf($String* name) {
	$init(GroupEntry$PreferType);
	return $cast(GroupEntry$PreferType, $Enum::valueOf(GroupEntry$PreferType::class$, name));
}

void GroupEntry$PreferType::init$($String* $enum$name, int32_t $enum$ordinal, $String* literal) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, literal, literal);
}

bool GroupEntry$PreferType::prefer($String* prefer) {
	return $nc(this->literal)->equals(prefer);
}

void clinit$GroupEntry$PreferType($Class* class$) {
	$assignStatic(GroupEntry$PreferType::PUBLIC, $new(GroupEntry$PreferType, "PUBLIC"_s, 0, "public"_s));
	$assignStatic(GroupEntry$PreferType::SYSTEM, $new(GroupEntry$PreferType, "SYSTEM"_s, 1, "system"_s));
	$assignStatic(GroupEntry$PreferType::$VALUES, GroupEntry$PreferType::$values());
}

GroupEntry$PreferType::GroupEntry$PreferType() {
}

$Class* GroupEntry$PreferType::load$($String* name, bool initialize) {
	$loadClass(GroupEntry$PreferType, name, initialize, &_GroupEntry$PreferType_ClassInfo_, clinit$GroupEntry$PreferType, allocate$GroupEntry$PreferType);
	return class$;
}

$Class* GroupEntry$PreferType::class$ = nullptr;

		} // catalog
	} // xml
} // javax