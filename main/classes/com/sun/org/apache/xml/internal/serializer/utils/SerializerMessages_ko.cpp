#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_ko.h>

#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef BAD_MSGFORMAT
#undef BAD_MSGKEY
#undef ER_ATTR_UNBOUND_PREFIX_IN_ENTREF
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#undef ER_CDATA_SECTIONS_SPLIT
#undef ER_COULD_NOT_LOAD_METHOD_PROPERTY
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_ELEM_UNBOUND_PREFIX_IN_ENTREF
#undef ER_ENCODING_NOT_SUPPORTED
#undef ER_FACTORY_PROPERTY_MISSING
#undef ER_FEATURE_NOT_FOUND
#undef ER_FEATURE_NOT_SUPPORTED
#undef ER_FRAG_FOR_GENERIC_URI
#undef ER_FRAG_INVALID_CHAR
#undef ER_FRAG_WHEN_PATH_NULL
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#undef ER_ILLEGAL_CHARACTER
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_NAMESPACE_PREFIX
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#undef ER_NO_OUTPUT_SPECIFIED
#undef ER_NO_PORT_IF_NO_HOST
#undef ER_NO_QUERY_STRING_IN_PATH
#undef ER_NO_SCHEME_IN_URI
#undef ER_NO_USERINFO_IF_NO_HOST
#undef ER_NS_PREFIX_CANNOT_BE_BOUND
#undef ER_NULL_LOCAL_ATTR_NAME
#undef ER_NULL_LOCAL_ELEMENT_NAME
#undef ER_OIERROR
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#undef ER_PATH_INVALID_CHAR
#undef ER_PORT_WHEN_HOST_NULL
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_SCHEME_FROM_NULL_STRING
#undef ER_SCHEME_NOT_CONFORMANT
#undef ER_SCHEME_REQUIRED
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#undef ER_STRAY_ATTRIBUTE
#undef ER_STRAY_NAMESPACE
#undef ER_STRING_TOO_LONG
#undef ER_TYPE_MISMATCH_ERR
#undef ER_UNABLE_TO_SERIALIZE_NODE
#undef ER_UNSUPPORTED_ENCODING
#undef ER_WARNING_WF_NOT_CHECKED
#undef ER_WF_DASH_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER
#undef ER_WF_INVALID_CHARACTER_IN_CDATA
#undef ER_WF_INVALID_CHARACTER_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER_IN_NODE_NAME
#undef ER_WF_INVALID_CHARACTER_IN_PI
#undef ER_WF_INVALID_CHARACTER_IN_TEXT
#undef ER_WF_LT_IN_ATTVAL
#undef ER_WF_REF_TO_EXTERNAL_ENT
#undef ER_WF_REF_TO_UNPARSED_ENT
#undef ER_WRITING_INTERNAL_SUBSET
#undef ER_XML_VERSION_NOT_SUPPORTED

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$MethodInfo _SerializerMessages_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializerMessages_ko::*)()>(&SerializerMessages_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializerMessages_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_SerializerMessages_ko_MethodInfo_
};

$Object* allocate$SerializerMessages_ko($Class* clazz) {
	return $of($alloc(SerializerMessages_ko));
}

void SerializerMessages_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_ko::getContents() {
			$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGKEY),
			$of(u"\uba54\uc2dc\uc9c0 \ud0a4 \'\'{0}\'\'\uc774(\uac00) \uba54\uc2dc\uc9c0 \ud074\ub798\uc2a4 \'\'{1}\'\'\uc5d0 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGFORMAT),
			$of(u"\uba54\uc2dc\uc9c0 \ud074\ub798\uc2a4 \'\'{1}\'\'\uc5d0\uc11c \'\'{0}\'\' \uba54\uc2dc\uc9c0\uc758 \ud615\uc2dd\uc774 \uc798\ubabb\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"Serializer \ud074\ub798\uc2a4 \'\'{0}\'\'\uc774(\uac00) org.xml.sax.ContentHandler\ub97c \uad6c\ud604\ud558\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"[{0}] \ub9ac\uc18c\uc2a4\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"[{0}] \ub9ac\uc18c\uc2a4\uac00 \ub2e4\uc74c\uc744 \ub85c\ub4dc\ud560 \uc218 \uc5c6\uc74c: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"\ubc84\ud37c \ud06c\uae30 <=0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_UTF16_SURROGATE),
			$of(u"\ubd80\uc801\ud569\ud55c UTF-16 \ub300\ub9ac \uc694\uc18c\uac00 \uac10\uc9c0\ub428: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_OIERROR),
			$of(u"IO \uc624\ub958"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"\ud558\uc704 \ub178\ub4dc\uac00 \uc0dd\uc131\ub41c \ud6c4 \ub610\ub294 \uc694\uc18c\uac00 \uc0dd\uc131\ub418\uae30 \uc804\uc5d0 {0} \uc18d\uc131\uc744 \ucd94\uac00\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. \uc18d\uc131\uc774 \ubb34\uc2dc\ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NAMESPACE_PREFIX),
			$of(u"\'\'{0}\'\' \uc811\ub450\uc5b4\uc5d0 \ub300\ud55c \ub124\uc784\uc2a4\ud398\uc774\uc2a4\uac00 \uc120\uc5b8\ub418\uc9c0 \uc54a\uc558\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_ATTRIBUTE),
			$of(u"\'\'{0}\'\' \uc18d\uc131\uc774 \uc694\uc18c\uc5d0 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_NAMESPACE),
			$of(u"\ub124\uc784\uc2a4\ud398\uc774\uc2a4 \uc120\uc5b8 \'\'{0}\'\'=\'\'{1}\'\'\uc774(\uac00) \uc694\uc18c\uc5d0 \ud3ec\ud568\ub418\uc5b4 \uc788\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"{0}\uc744(\ub97c) \ub85c\ub4dc\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. CLASSPATH\ub97c \ud655\uc778\ud558\uc2ed\uc2dc\uc624. \ud604\uc7ac \uae30\ubcf8\uac12\ub9cc \uc0ac\uc6a9\ud558\ub294 \uc911\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_CHARACTER),
			$of(u"{1}\uc758 \uc9c0\uc815\ub41c \ucd9c\ub825 \uc778\ucf54\ub529\uc5d0\uc11c \ud45c\uc2dc\ub418\uc9c0 \uc54a\ub294 \uc815\uc218 \uac12 {0}\uc758 \ubb38\uc790\ub97c \ucd9c\ub825\ud558\ub824\uace0 \uc2dc\ub3c4\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"\ucd9c\ub825 \uba54\uc18c\ub4dc \'\'{1}\'\'\uc5d0 \ub300\ud55c \uc18d\uc131 \ud30c\uc77c \'\'{0}\'\'\uc744(\ub97c) \ub85c\ub4dc\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. CLASSPATH\ub97c \ud655\uc778\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_PORT),
			$of(u"\ud3ec\ud2b8 \ubc88\ud638\uac00 \ubd80\uc801\ud569\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PORT_WHEN_HOST_NULL),
			$of(u"\ud638\uc2a4\ud2b8\uac00 \ub110\uc77c \uacbd\uc6b0 \ud3ec\ud2b8\ub97c \uc124\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"\ud638\uc2a4\ud2b8\uac00 \uc644\uc804\ud55c \uc8fc\uc18c\uac00 \uc544\ub2d9\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_NOT_CONFORMANT),
			$of(u"\uccb4\uacc4\uac00 \uc77c\uce58\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_FROM_NULL_STRING),
			$of(u"\ub110 \ubb38\uc790\uc5f4\uc5d0\uc11c \uccb4\uacc4\ub97c \uc124\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"\uacbd\ub85c\uc5d0 \ubd80\uc801\ud569\ud55c \uc774\uc2a4\ucf00\uc774\ud504 \uc2dc\ud000\uc2a4\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_INVALID_CHAR),
			$of(u"\uacbd\ub85c\uc5d0 \ubd80\uc801\ud569\ud55c \ubb38\uc790\uac00 \ud3ec\ud568\ub428: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_INVALID_CHAR),
			$of(u"\ubd80\ubd84\uc5d0 \ubd80\uc801\ud569\ud55c \ubb38\uc790\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_WHEN_PATH_NULL),
			$of(u"\uacbd\ub85c\uac00 \ub110\uc77c \uacbd\uc6b0 \ubd80\ubd84\uc744 \uc124\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_FOR_GENERIC_URI),
			$of(u"\uc77c\ubc18 URI\uc5d0 \ub300\ud574\uc11c\ub9cc \ubd80\ubd84\uc744 \uc124\uc815\ud560 \uc218 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_SCHEME_IN_URI),
			$of(u"URI\uc5d0\uc11c \uccb4\uacc4\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"\ube48 \ub9e4\uac1c\ubcc0\uc218\ub85c URI\ub97c \ucd08\uae30\ud654\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"\uacbd\ub85c\uc640 \ubd80\ubd84\uc5d0 \ubaa8\ub450 \ubd80\ubd84\uc744 \uc9c0\uc815\ud560 \uc218\ub294 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"\uacbd\ub85c \ubc0f \uc9c8\uc758 \ubb38\uc790\uc5f4\uc5d0 \uc9c8\uc758 \ubb38\uc790\uc5f4\uc744 \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_PORT_IF_NO_HOST),
			$of(u"\ud638\uc2a4\ud2b8\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uc740 \uacbd\uc6b0\uc5d0\ub294 \ud3ec\ud2b8\ub97c \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"\ud638\uc2a4\ud2b8\ub97c \uc9c0\uc815\ud558\uc9c0 \uc54a\uc740 \uacbd\uc6b0\uc5d0\ub294 Userinfo\ub97c \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_XML_VERSION_NOT_SUPPORTED),
			$of(u"\uacbd\uace0: \ucd9c\ub825 \ubb38\uc11c\uc758 \ubc84\uc804\uc774 \'\'{0}\'\'\uc774(\uac00) \ub418\ub3c4\ub85d \uc694\uccad\ud588\uc2b5\ub2c8\ub2e4. \uc774 \ubc84\uc804\uc758 XML\uc740 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4. \ucd9c\ub825 \ubb38\uc11c\uc758 \ubc84\uc804\uc740 \'\'1.0\'\'\uc774 \ub429\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_REQUIRED),
			$of(u"\uccb4\uacc4\uac00 \ud544\uc694\ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FACTORY_PROPERTY_MISSING),
			$of(u"SerializerFactory\uc5d0 \uc804\ub2ec\ub41c Properties \uac1d\uccb4\uc5d0 \'\'{0}\'\' \uc18d\uc131\uc774 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ENCODING_NOT_SUPPORTED),
			$of(u"\uacbd\uace0: \uc778\ucf54\ub529 \'\'{0}\'\'\uc740(\ub294) Java \ub7f0\ud0c0\uc784\uc5d0 \uc9c0\uc6d0\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_FOUND),
			$of(u"\'\'{0}\'\' \ub9e4\uac1c\ubcc0\uc218\ub97c \uc778\uc2dd\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_SUPPORTED),
			$of(u"\'\'{0}\'\' \ub9e4\uac1c\ubcc0\uc218\uac00 \uc778\uc2dd\ub418\uc5c8\uc9c0\ub9cc \uc694\uccad\ub41c \uac12\uc744 \uc124\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRING_TOO_LONG),
			$of(u"\uacb0\uacfc \ubb38\uc790\uc5f4\uc774 \ub108\ubb34 \ucee4\uc11c DOMString\uc5d0 \ub9de\uc9c0 \uc54a\uc74c: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_TYPE_MISMATCH_ERR),
			$of(u"\uc774 \ub9e4\uac1c\ubcc0\uc218 \uc774\ub984\uc5d0 \ub300\ud55c \uac12 \uc720\ud615\uc774 \ud544\uc694\ud55c \uac12 \uc720\ud615\uacfc \ud638\ud658\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_OUTPUT_SPECIFIED),
			$of(u"\ub370\uc774\ud130\ub97c \uc4f8 \ucd9c\ub825 \ub300\uc0c1\uc774 \ub110\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNSUPPORTED_ENCODING),
			$of(u"\uc9c0\uc6d0\ub418\uc9c0 \uc54a\ub294 \uc778\ucf54\ub529\uc774 \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNABLE_TO_SERIALIZE_NODE),
			$of(u"\ub178\ub4dc\ub97c \uc9c1\ub82c\ud654\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CDATA_SECTIONS_SPLIT),
			$of(u"CDATA \uc139\uc158\uc5d0 \ud558\ub098 \uc774\uc0c1\uc758 \uc885\ub8cc \ud45c\uc2dc\uc790 \']]>\'\uac00 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WARNING_WF_NOT_CHECKED),
			$of(u"Well-Formedness \uac80\uc0ac\uae30\uc758 \uc778\uc2a4\ud134\uc2a4\ub97c \uc0dd\uc131\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. well-formed \ub9e4\uac1c\ubcc0\uc218\uac00 true\ub85c \uc124\uc815\ub418\uc5c8\uc9c0\ub9cc well-formedness \uac80\uc0ac\ub97c \uc218\ud589\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER),
			$of(u"\'\'{0}\'\' \ub178\ub4dc\uc5d0 \ubd80\uc801\ud569\ud55c XML \ubb38\uc790\uac00 \ud3ec\ud568\ub418\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT),
			$of(u"\uc8fc\uc11d\uc5d0\uc11c \ubd80\uc801\ud569\ud55c XML \ubb38\uc790(\uc720\ub2c8\ucf54\ub4dc: 0x{0})\uac00 \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI),
			$of(u"\ubd80\uc801\ud569\ud55c XML \ubb38\uc790(\uc720\ub2c8\ucf54\ub4dc: 0x{0})\uac00 instructiondata \ucc98\ub9ac\uc5d0\uc11c \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA),
			$of(u"\ubd80\uc801\ud569\ud55c XML \ubb38\uc790(\uc720\ub2c8\ucf54\ub4dc: 0x{0})\uac00 CDATASection\uc758 \ucf58\ud150\uce20\uc5d0\uc11c \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT),
			$of(u"\ubd80\uc801\ud569\ud55c XML \ubb38\uc790(\uc720\ub2c8\ucf54\ub4dc: 0x{0})\uac00 \ub178\ub4dc\uc758 \ubb38\uc790 \ub370\uc774\ud130 \ucf58\ud150\uce20\uc5d0\uc11c \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME),
			$of(u"\ubd80\uc801\ud569\ud55c XML \ubb38\uc790\uac00 \uc774\ub984\uc774 \'\'{1}\'\'\uc778 {0} \ub178\ub4dc\uc5d0\uc11c \ubc1c\uacac\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_DASH_IN_COMMENT),
			$of(u"\uc8fc\uc11d\uc5d0\uc11c\ub294 \"--\" \ubb38\uc790\uc5f4\uc774 \ud5c8\uc6a9\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_LT_IN_ATTVAL),
			$of(u"\uc694\uc18c \uc720\ud615 \"{0}\"\uacfc(\uc640) \uc5f0\uad00\ub41c \"{1}\" \uc18d\uc131\uc758 \uac12\uc5d0\ub294 \'\'<\'\' \ubb38\uc790\uac00 \ud3ec\ud568\ub418\uc9c0 \uc54a\uc544\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_UNPARSED_ENT),
			$of(u"\uad6c\ubb38\uc774 \ubd84\uc11d\ub418\uc9c0 \uc54a\uc740 \uc5d4\ud2f0\ud2f0 \ucc38\uc870 \"&{0};\"\uc740(\ub294) \ud5c8\uc6a9\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT),
			$of(u"\uc18d\uc131\uac12\uc5d0\uc11c\ub294 \uc678\ubd80 \uc5d4\ud2f0\ud2f0 \ucc38\uc870 \"&{0};\"\uc774 \ud5c8\uc6a9\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND),
			$of(u"\"{0}\" \uc811\ub450\uc5b4\ub97c \"{1}\" \ub124\uc784\uc2a4\ud398\uc774\uc2a4\uc5d0 \ubc14\uc778\ub4dc\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME),
			$of(u"\"{0}\" \uc694\uc18c\uc758 \ub85c\uceec \uc774\ub984\uc774 \ub110\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ATTR_NAME),
			$of(u"\"{0}\" \uc18d\uc131\uc758 \ub85c\uceec \uc774\ub984\uc774 \ub110\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"\uc5d4\ud2f0\ud2f0 \ub178\ub4dc \"{0}\"\uc758 \ub300\uccb4 \ud14d\uc2a4\ud2b8\uc5d0 \ubc14\uc778\ub4dc\ub418\uc9c0 \uc54a\uc740 \uc811\ub450\uc5b4 \"{2}\"\uc744(\ub97c) \uc0ac\uc6a9\ud558\ub294 \uc694\uc18c \ub178\ub4dc \"{1}\"\uc774(\uac00) \ud3ec\ud568\ub418\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"\uc5d4\ud2f0\ud2f0 \ub178\ub4dc \"{0}\"\uc758 \ub300\uccb4 \ud14d\uc2a4\ud2b8\uc5d0 \ubc14\uc778\ub4dc\ub418\uc9c0 \uc54a\uc740 \uc811\ub450\uc5b4 \"{2}\"\uc744(\ub97c) \uc0ac\uc6a9\ud558\ub294 \uc18d\uc131 \ub178\ub4dc \"{1}\"\uc774(\uac00) \ud3ec\ud568\ub418\uc5b4 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WRITING_INTERNAL_SUBSET),
			$of(u"\ub0b4\ubd80 \ubd80\ubd84 \uc9d1\ud569\uc744 \uc4f0\ub294 \uc911 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		})
	}));
	return contents;
}

SerializerMessages_ko::SerializerMessages_ko() {
}

$Class* SerializerMessages_ko::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_ko, name, initialize, &_SerializerMessages_ko_ClassInfo_, allocate$SerializerMessages_ko);
	return class$;
}

$Class* SerializerMessages_ko::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com