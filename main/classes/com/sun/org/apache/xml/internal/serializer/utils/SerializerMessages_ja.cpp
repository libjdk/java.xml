#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_ja.h>

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

$MethodInfo _SerializerMessages_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializerMessages_ja::*)()>(&SerializerMessages_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializerMessages_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_SerializerMessages_ja_MethodInfo_
};

$Object* allocate$SerializerMessages_ja($Class* clazz) {
	return $of($alloc(SerializerMessages_ja));
}

void SerializerMessages_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_ja::getContents() {
			$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGKEY),
			$of(u"\u30e1\u30c3\u30bb\u30fc\u30b8\u30fb\u30ad\u30fc\'\'{0}\'\'\u306f\u3001\u30e1\u30c3\u30bb\u30fc\u30b8\u30fb\u30af\u30e9\u30b9\'\'{1}\'\'\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGFORMAT),
			$of(u"\u30e1\u30c3\u30bb\u30fc\u30b8\u30fb\u30af\u30e9\u30b9\'\'{1}\'\'\u306e\u30e1\u30c3\u30bb\u30fc\u30b8\'\'{0}\'\'\u306e\u30d5\u30a9\u30fc\u30de\u30c3\u30c8\u304c\u5931\u6557\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"\u30b7\u30ea\u30a2\u30e9\u30a4\u30b6\u30fb\u30af\u30e9\u30b9\'\'{0}\'\'\u306forg.xml.sax.ContentHandler\u3092\u5b9f\u88c5\u3057\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"\u30ea\u30bd\u30fc\u30b9[ {0} ]\u306f\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f\u3002\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"\u30ea\u30bd\u30fc\u30b9[ {0} ]\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"\u30d0\u30c3\u30d5\u30a1\u30fb\u30b5\u30a4\u30ba<=0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u7121\u52b9\u306aUTF-16\u30b5\u30ed\u30b2\u30fc\u30c8\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f: {0}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_OIERROR),
			$of(u"IO\u30a8\u30e9\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"\u5b50\u30ce\u30fc\u30c9\u306e\u5f8c\u307e\u305f\u306f\u8981\u7d20\u304c\u751f\u6210\u3055\u308c\u308b\u524d\u306b\u5c5e\u6027{0}\u3092\u8ffd\u52a0\u3067\u304d\u307e\u305b\u3093\u3002\u5c5e\u6027\u306f\u7121\u8996\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NAMESPACE_PREFIX),
			$of(u"\u63a5\u982d\u8f9e\'\'{0}\'\'\u306e\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u304c\u5ba3\u8a00\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_ATTRIBUTE),
			$of(u"\u5c5e\u6027\'\'{0}\'\'\u304c\u8981\u7d20\u306e\u5916\u5074\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_NAMESPACE),
			$of(u"\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\u5ba3\u8a00\'\'{0}\'\'=\'\'{1}\'\'\u304c\u8981\u7d20\u306e\u5916\u5074\u306b\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"\'\'{0}\'\'\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f(CLASSPATH\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044)\u3002\u73fe\u5728\u306f\u5358\u306b\u30c7\u30d5\u30a9\u30eb\u30c8\u3092\u4f7f\u7528\u3057\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_CHARACTER),
			$of(u"{1}\u306e\u6307\u5b9a\u3055\u308c\u305f\u51fa\u529b\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\u3067\u793a\u3055\u308c\u306a\u3044\u6574\u6570\u5024{0}\u306e\u6587\u5b57\u3092\u51fa\u529b\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"\u51fa\u529b\u30e1\u30bd\u30c3\u30c9\'\'{1}\'\'\u306e\u30d7\u30ed\u30d1\u30c6\u30a3\u30fb\u30d5\u30a1\u30a4\u30eb\'\'{0}\'\'\u3092\u30ed\u30fc\u30c9\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f(CLASSPATH\u3092\u78ba\u8a8d\u3057\u3066\u304f\u3060\u3055\u3044)"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_PORT),
			$of(u"\u7121\u52b9\u306a\u30dd\u30fc\u30c8\u756a\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PORT_WHEN_HOST_NULL),
			$of(u"\u30db\u30b9\u30c8\u304cnull\u306e\u5834\u5408\u306f\u30dd\u30fc\u30c8\u3092\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"\u30db\u30b9\u30c8\u306f\u6574\u5f62\u5f0f\u306e\u30a2\u30c9\u30ec\u30b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_NOT_CONFORMANT),
			$of(u"\u30b9\u30ad\u30fc\u30e0\u304c\u6574\u5408\u3057\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_FROM_NULL_STRING),
			$of(u"null\u6587\u5b57\u5217\u304b\u3089\u306f\u30b9\u30ad\u30fc\u30e0\u3092\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"\u30d1\u30b9\u306b\u7121\u52b9\u306a\u30a8\u30b9\u30b1\u30fc\u30d7\u30fb\u30b7\u30fc\u30b1\u30f3\u30b9\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_INVALID_CHAR),
			$of(u"\u30d1\u30b9\u306b\u7121\u52b9\u306a\u6587\u5b57\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_INVALID_CHAR),
			$of(u"\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306b\u7121\u52b9\u6587\u5b57\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_WHEN_PATH_NULL),
			$of(u"\u30d1\u30b9\u304cnull\u306e\u5834\u5408\u306f\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u3092\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_FOR_GENERIC_URI),
			$of(u"\u6c4e\u7528URI\u306e\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306e\u307f\u8a2d\u5b9a\u3067\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_SCHEME_IN_URI),
			$of(u"\u30b9\u30ad\u30fc\u30e0\u304cURI\u306b\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"URI\u306f\u7a7a\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u3092\u4f7f\u7528\u3057\u3066\u521d\u671f\u5316\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306f\u30d1\u30b9\u3068\u30d5\u30e9\u30b0\u30e1\u30f3\u30c8\u306e\u4e21\u65b9\u306b\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"\u554f\u5408\u305b\u6587\u5b57\u5217\u306f\u30d1\u30b9\u304a\u3088\u3073\u554f\u5408\u305b\u6587\u5b57\u5217\u5185\u306b\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_PORT_IF_NO_HOST),
			$of(u"\u30db\u30b9\u30c8\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u306a\u3044\u5834\u5408\u306f\u30dd\u30fc\u30c8\u3092\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"\u30db\u30b9\u30c8\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u306a\u3044\u5834\u5408\u306fUserinfo\u3092\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_XML_VERSION_NOT_SUPPORTED),
			$of(u"\u8b66\u544a: \u51fa\u529b\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u306f\u3001\'\'{0}\'\'\u3067\u3042\u308b\u3053\u3068\u304c\u30ea\u30af\u30a8\u30b9\u30c8\u3055\u308c\u3066\u3044\u307e\u3059\u3002XML\u306e\u3053\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u306f\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002\u51fa\u529b\u30c9\u30ad\u30e5\u30e1\u30f3\u30c8\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u306f\u3001\'\'1.0\'\'\u306b\u306a\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_REQUIRED),
			$of(u"\u30b9\u30ad\u30fc\u30e0\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FACTORY_PROPERTY_MISSING),
			$of(u"SerializerFactory\u306b\u6e21\u3055\u308c\u308b\u30d7\u30ed\u30d1\u30c6\u30a3\u30fb\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306b\u3001\'\'{0}\'\'\u30d7\u30ed\u30d1\u30c6\u30a3\u304c\u3042\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ENCODING_NOT_SUPPORTED),
			$of(u"\u8b66\u544a:  \u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\'\'{0}\'\'\u306f\u3001Java\u30e9\u30f3\u30bf\u30a4\u30e0\u3067\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_FOUND),
			$of(u"\u30d1\u30e9\u30e1\u30fc\u30bf\'\'{0}\'\'\u306f\u8a8d\u8b58\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_SUPPORTED),
			$of(u"\u30d1\u30e9\u30e1\u30fc\u30bf\'\'{0}\'\'\u306f\u8a8d\u8b58\u3055\u308c\u307e\u3059\u304c\u3001\u30ea\u30af\u30a8\u30b9\u30c8\u3057\u305f\u5024\u306f\u8a2d\u5b9a\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRING_TOO_LONG),
			$of(u"\u7d50\u679c\u306e\u6587\u5b57\u5217\u306f\u9577\u3059\u304e\u308b\u305f\u3081\u3001DOMString\u306b\u53ce\u307e\u308a\u307e\u305b\u3093: \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_TYPE_MISMATCH_ERR),
			$of(u"\u3053\u306e\u30d1\u30e9\u30e1\u30fc\u30bf\u540d\u306e\u5024\u30bf\u30a4\u30d7\u306f\u3001\u4e88\u60f3\u3057\u305f\u5024\u30bf\u30a4\u30d7\u3068\u4e92\u63db\u6027\u304c\u3042\u308a\u307e\u305b\u3093\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_OUTPUT_SPECIFIED),
			$of(u"\u66f8\u304d\u8fbc\u307e\u308c\u308b\u30c7\u30fc\u30bf\u306e\u51fa\u529b\u5148\u304cnull\u306b\u306a\u3063\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNSUPPORTED_ENCODING),
			$of(u"\u30b5\u30dd\u30fc\u30c8\u3055\u308c\u3066\u3044\u306a\u3044\u30a8\u30f3\u30b3\u30fc\u30c7\u30a3\u30f3\u30b0\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNABLE_TO_SERIALIZE_NODE),
			$of(u"\u30ce\u30fc\u30c9\u3092\u30b7\u30ea\u30a2\u30e9\u30a4\u30ba\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CDATA_SECTIONS_SPLIT),
			$of(u"CDATA\u30bb\u30af\u30b7\u30e7\u30f3\u306b1\u3064\u4ee5\u4e0a\u306e\u7d42\u4e86\u30de\u30fc\u30ab\u30fc\']]>\'\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WARNING_WF_NOT_CHECKED),
			$of(u"\u6574\u5f62\u5f0f\u30c1\u30a7\u30c3\u30ab\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002\u6574\u5f62\u5f0f\u30d1\u30e9\u30e1\u30fc\u30bf\u306ftrue\u306b\u8a2d\u5b9a\u3055\u308c\u3066\u3044\u307e\u3059\u304c\u3001\u6574\u5f62\u5f0f\u30c1\u30a7\u30c3\u30af\u3092\u5b9f\u884c\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER),
			$of(u"\u30ce\u30fc\u30c9\'\'{0}\'\'\u306b\u7121\u52b9\u306aXML\u6587\u5b57\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT),
			$of(u"\u30b3\u30e1\u30f3\u30c8\u306b\u7121\u52b9\u306aXML\u6587\u5b57(Unicode: 0x{0})\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI),
			$of(u"\u51e6\u7406\u547d\u4ee4\u30c7\u30fc\u30bf\u306b\u7121\u52b9\u306aXML\u6587\u5b57(Unicode: 0x{0})\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA),
			$of(u"CDATASection\u306e\u30b3\u30f3\u30c6\u30f3\u30c4\u306b\u7121\u52b9\u306aXML\u6587\u5b57(Unicode: 0x{0})\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT),
			$of(u"\u30ce\u30fc\u30c9\u306e\u6587\u5b57\u30c7\u30fc\u30bf\u30fb\u30b3\u30f3\u30c6\u30f3\u30c4\u306b\u7121\u52b9\u306aXML\u6587\u5b57(Unicode: 0x{0})\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME),
			$of(u"\'\'{1}\'\'\u3068\u3044\u3046\u540d\u524d\u306e{0}\u30ce\u30fc\u30c9\u306b\u7121\u52b9\u306aXML\u6587\u5b57\u304c\u898b\u3064\u304b\u308a\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_DASH_IN_COMMENT),
			$of(u"\u30b3\u30e1\u30f3\u30c8\u5185\u3067\u306f\u6587\u5b57\u5217\"--\"\u306f\u4f7f\u7528\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_LT_IN_ATTVAL),
			$of(u"\u8981\u7d20\u30bf\u30a4\u30d7\"{0}\"\u306b\u95a2\u9023\u4ed8\u3051\u3089\u308c\u3066\u3044\u308b\u5c5e\u6027\"{1}\"\u306e\u5024\u306b\u306f\u3001\'\'<\'\'\u6587\u5b57\u3092\u542b\u3081\u308b\u3053\u3068\u306f\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_UNPARSED_ENT),
			$of(u"\u672a\u89e3\u6790\u30a8\u30f3\u30c6\u30a3\u30c6\u30a3\u53c2\u7167\"&{0};\"\u306f\u8a31\u53ef\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT),
			$of(u"\u5916\u90e8\u30a8\u30f3\u30c6\u30a3\u30c6\u30a3\u53c2\u7167\"&{0};\"\u306f\u3001\u5c5e\u6027\u5024\u3067\u306f\u8a31\u53ef\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND),
			$of(u"\u63a5\u982d\u8f9e\"{0}\"\u306f\u30cd\u30fc\u30e0\u30b9\u30da\u30fc\u30b9\"{1}\"\u306b\u30d0\u30a4\u30f3\u30c9\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME),
			$of(u"\u8981\u7d20\"{0}\"\u306e\u30ed\u30fc\u30ab\u30eb\u540d\u304cnull\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ATTR_NAME),
			$of(u"\u5c5e\u6027\"{0}\"\u306e\u30ed\u30fc\u30ab\u30eb\u540d\u304cnull\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"\u30a8\u30f3\u30c6\u30a3\u30c6\u30a3\u30fb\u30ce\u30fc\u30c9\"{0}\"\u306e\u7f6e\u63db\u30c6\u30ad\u30b9\u30c8\u306b\u306f\u3001\u30d0\u30a4\u30f3\u30c9\u3055\u308c\u3066\u3044\u306a\u3044\u63a5\u982d\u8f9e\"{2}\"\u3092\u6301\u3064\u8981\u7d20\u30ce\u30fc\u30c9\"{1}\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"\u30a8\u30f3\u30c6\u30a3\u30c6\u30a3\u30fb\u30ce\u30fc\u30c9\"{0}\"\u306e\u7f6e\u63db\u30c6\u30ad\u30b9\u30c8\u306b\u306f\u3001\u30d0\u30a4\u30f3\u30c9\u3055\u308c\u3066\u3044\u306a\u3044\u63a5\u982d\u8f9e\"{2}\"\u3092\u6301\u3064\u5c5e\u6027\u30ce\u30fc\u30c9\"{1}\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WRITING_INTERNAL_SUBSET),
			$of(u"\u5185\u90e8\u30b5\u30d6\u30bb\u30c3\u30c8\u306e\u66f8\u8fbc\u307f\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f\u3002"_s)
		})
	}));
	return contents;
}

SerializerMessages_ja::SerializerMessages_ja() {
}

$Class* SerializerMessages_ja::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_ja, name, initialize, &_SerializerMessages_ja_ClassInfo_, allocate$SerializerMessages_ja);
	return class$;
}

$Class* SerializerMessages_ja::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com