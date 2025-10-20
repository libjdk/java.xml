#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_zh_TW.h>

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

$MethodInfo _SerializerMessages_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializerMessages_zh_TW::*)()>(&SerializerMessages_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializerMessages_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_SerializerMessages_zh_TW_MethodInfo_
};

$Object* allocate$SerializerMessages_zh_TW($Class* clazz) {
	return $of($alloc(SerializerMessages_zh_TW));
}

void SerializerMessages_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
			$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGKEY),
			$of(u"\u8a0a\u606f\u7d22\u5f15\u9375 \'\'{0}\'\' \u7684\u8a0a\u606f\u985e\u5225\u4e0d\u662f \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGFORMAT),
			$of(u"\u8a0a\u606f\u985e\u5225 \'\'{1}\'\' \u4e2d\u7684\u8a0a\u606f \'\'{0}\'\' \u683c\u5f0f\u4e0d\u6b63\u78ba\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"serializer \u985e\u5225 \'\'{0}\'\' \u4e0d\u5be6\u884c org.xml.sax.ContentHandler\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"\u627e\u4e0d\u5230\u8cc7\u6e90 [ {0} ]\u3002\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"\u7121\u6cd5\u8f09\u5165\u8cc7\u6e90 [ {0} ]: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"\u7de9\u885d\u5340\u5927\u5c0f <=0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u5075\u6e2c\u5230\u7121\u6548\u7684 UTF-16 \u4ee3\u7406: {0}\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_OIERROR),
			$of(u"IO \u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"\u5728\u7522\u751f\u5b50\u9805\u7bc0\u9ede\u4e4b\u5f8c\uff0c\u6216\u5728\u7522\u751f\u5143\u7d20\u4e4b\u524d\uff0c\u4e0d\u53ef\u65b0\u589e\u5c6c\u6027 {0}\u3002\u5c6c\u6027\u6703\u88ab\u5ffd\u7565\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NAMESPACE_PREFIX),
			$of(u"\u5b57\u9996 \'\'{0}\'\' \u7684\u547d\u540d\u7a7a\u9593\u5c1a\u672a\u5ba3\u544a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_ATTRIBUTE),
			$of(u"\u5c6c\u6027 \'\'{0}\'\' \u5728\u5143\u7d20\u4e4b\u5916\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_NAMESPACE),
			$of(u"\u547d\u540d\u7a7a\u9593\u5ba3\u544a \'\'{0}\'\'=\'\'{1}\'\' \u8d85\u51fa\u5143\u7d20\u5916\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"\u7121\u6cd5\u8f09\u5165 \'\'{0}\'\' (\u6aa2\u67e5 CLASSPATH)\uff0c\u76ee\u524d\u53ea\u4f7f\u7528\u9810\u8a2d\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_CHARACTER),
			$of(u"\u5617\u8a66\u8f38\u51fa\u6574\u6578\u503c {0} \u7684\u5b57\u5143\uff0c\u4f46\u662f\u5b83\u4e0d\u662f\u4ee5\u6307\u5b9a\u7684 {1} \u8f38\u51fa\u7de8\u78bc\u5448\u73fe\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"\u7121\u6cd5\u8f09\u5165\u8f38\u51fa\u65b9\u6cd5 \'\'{1}\'\' \u7684\u5c6c\u6027\u6a94 \'\'{0}\'\' (\u6aa2\u67e5 CLASSPATH)"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_PORT),
			$of(u"\u7121\u6548\u7684\u9023\u63a5\u57e0\u865f\u78bc"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PORT_WHEN_HOST_NULL),
			$of(u"\u4e3b\u6a5f\u70ba\u7a7a\u503c\u6642\uff0c\u7121\u6cd5\u8a2d\u5b9a\u9023\u63a5\u57e0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"\u4e3b\u6a5f\u6c92\u6709\u5b8c\u6574\u7684\u4f4d\u5740"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_NOT_CONFORMANT),
			$of(u"\u914d\u7f6e\u4e0d\u4e00\u81f4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_FROM_NULL_STRING),
			$of(u"\u7121\u6cd5\u5f9e\u7a7a\u503c\u5b57\u4e32\u8a2d\u5b9a\u914d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"\u8def\u5f91\u5305\u542b\u7121\u6548\u7684\u9041\u96e2\u5e8f\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_INVALID_CHAR),
			$of(u"\u8def\u5f91\u5305\u542b\u7121\u6548\u7684\u5b57\u5143: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_INVALID_CHAR),
			$of(u"\u7247\u6bb5\u5305\u542b\u7121\u6548\u7684\u5b57\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_WHEN_PATH_NULL),
			$of(u"\u8def\u5f91\u70ba\u7a7a\u503c\u6642\uff0c\u7121\u6cd5\u8a2d\u5b9a\u7247\u6bb5"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_FOR_GENERIC_URI),
			$of(u"\u53ea\u80fd\u5c0d\u4e00\u822c URI \u8a2d\u5b9a\u7247\u6bb5"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_SCHEME_IN_URI),
			$of(u"\u5728 URI \u627e\u4e0d\u5230\u914d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"\u7121\u6cd5\u4ee5\u7a7a\u767d\u53c3\u6578\u8d77\u59cb\u8a2d\u5b9a URI"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"\u8def\u5f91\u548c\u7247\u6bb5\u4e0d\u80fd\u540c\u6642\u6307\u5b9a\u7247\u6bb5"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"\u5728\u8def\u5f91\u53ca\u67e5\u8a62\u5b57\u4e32\u4e2d\u4e0d\u53ef\u6307\u5b9a\u67e5\u8a62\u5b57\u4e32"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_PORT_IF_NO_HOST),
			$of(u"\u5982\u679c\u6c92\u6709\u6307\u5b9a\u4e3b\u6a5f\uff0c\u4e0d\u53ef\u6307\u5b9a\u9023\u63a5\u57e0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"\u5982\u679c\u6c92\u6709\u6307\u5b9a\u4e3b\u6a5f\uff0c\u4e0d\u53ef\u6307\u5b9a Userinfo"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_XML_VERSION_NOT_SUPPORTED),
			$of(u"\u8b66\u544a:  \u8981\u6c42\u7684\u8f38\u51fa\u6587\u4ef6\u7248\u672c\u70ba \'\'{0}\'\'\u3002\u4e0d\u652f\u63f4\u6b64\u7248\u672c\u7684 XML\u3002\u8f38\u51fa\u6587\u4ef6\u7684\u7248\u672c\u5c07\u6703\u662f \'\'1.0\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_REQUIRED),
			$of(u"\u914d\u7f6e\u662f\u5fc5\u8981\u9805\u76ee\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FACTORY_PROPERTY_MISSING),
			$of(u"\u50b3\u905e\u7d66 SerializerFactory \u7684 Properties \u7269\u4ef6\u6c92\u6709 \'\'{0}\'\' \u5c6c\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ENCODING_NOT_SUPPORTED),
			$of(u"\u8b66\u544a:  Java Runtime \u4e0d\u652f\u63f4\u7de8\u78bc \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_FOUND),
			$of(u"\u7121\u6cd5\u8fa8\u8b58\u53c3\u6578 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_SUPPORTED),
			$of(u"\u53ef\u8fa8\u8b58\u53c3\u6578 \'\'{0}\'\'\uff0c\u4f46\u7121\u6cd5\u8a2d\u5b9a\u8981\u6c42\u7684\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRING_TOO_LONG),
			$of(u"\u7d50\u679c\u5b57\u4e32\u592a\u9577\uff0c\u7121\u6cd5\u7d0d\u5165 DOMString: \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_TYPE_MISMATCH_ERR),
			$of(u"\u6b64\u53c3\u6578\u540d\u7a31\u7684\u503c\u985e\u578b\u8207\u9810\u671f\u7684\u503c\u985e\u578b\u4e0d\u76f8\u5bb9\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_OUTPUT_SPECIFIED),
			$of(u"\u4f9b\u5beb\u5165\u8cc7\u6599\u7684\u8f38\u51fa\u76ee\u7684\u5730\u70ba\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNSUPPORTED_ENCODING),
			$of(u"\u767c\u73fe\u4e0d\u652f\u63f4\u7684\u7de8\u78bc\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNABLE_TO_SERIALIZE_NODE),
			$of(u"\u7121\u6cd5\u5e8f\u5217\u5316\u6b64\u7bc0\u9ede\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CDATA_SECTIONS_SPLIT),
			$of(u"CDATA \u6bb5\u843d\u5305\u542b\u4e00\u6216\u591a\u500b\u7d42\u6b62\u6a19\u8a18 \']]>\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WARNING_WF_NOT_CHECKED),
			$of(u"\u7121\u6cd5\u5efa\u7acb Well-Formedness \u6aa2\u67e5\u7a0b\u5f0f\u57f7\u884c\u8655\u7406\u3002well-formed \u53c3\u6578\u8a2d\u70ba true\uff0c\u4f46\u7121\u6cd5\u57f7\u884c well-formedness \u6aa2\u67e5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER),
			$of(u"\u7bc0\u9ede \'\'{0}\'\' \u5305\u542b\u7121\u6548\u7684 XML \u5b57\u5143\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT),
			$of(u"\u5728\u8a3b\u89e3\u4e2d\u627e\u5230\u7121\u6548\u7684 XML \u5b57\u5143 (Unicode: 0x{0})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI),
			$of(u"\u5728\u8655\u7406\u7684\u6307\u793a\u8cc7\u6599\u4e2d\u767c\u73fe\u7121\u6548\u7684 XML \u5b57\u5143 (Unicode: 0x{0})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA),
			$of(u"\u5728 CDATASection \u7684\u5167\u5bb9\u4e2d\u767c\u73fe\u7121\u6548\u7684 XML \u5b57\u5143 (Unicode: 0x{0})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT),
			$of(u"\u5728\u7bc0\u9ede\u7684\u5b57\u5143\u8cc7\u6599\u5167\u5bb9\u4e2d\u767c\u73fe\u7121\u6548\u7684 XML \u5b57\u5143 (Unicode: 0x{0})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME),
			$of(u"\u5728\u540d\u7a31\u70ba \'\'{1}\'\' \u7684 {0} \u7bc0\u9ede\u4e2d\u767c\u73fe\u7121\u6548\u7684 XML \u5b57\u5143\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_DASH_IN_COMMENT),
			$of(u"\u8a3b\u89e3\u4e0d\u5141\u8a31\u5b57\u4e32 \"--\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_LT_IN_ATTVAL),
			$of(u"\u95dc\u806f\u5143\u7d20\u985e\u578b \"{0}\" \u4e4b\u5c6c\u6027 \"{1}\" \u7684\u503c\u4e0d\u53ef\u5305\u542b \'\'<\'\' \u5b57\u5143\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_UNPARSED_ENT),
			$of(u"\u4e0d\u5141\u8a31\u672a\u5256\u6790\u7684\u5be6\u9ad4\u53c3\u7167 \"&{0};\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT),
			$of(u"\u5c6c\u6027\u503c\u4e0d\u5141\u8a31\u53c3\u7167\u5916\u90e8\u5be6\u9ad4 \"&{0};\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND),
			$of(u"\u7121\u6cd5\u5c07\u524d\u7f6e\u78bc \"{0}\" \u9023\u7d50\u81f3\u547d\u540d\u7a7a\u9593 \"{1}\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME),
			$of(u"\u5143\u7d20 \"{0}\" \u7684\u5340\u57df\u540d\u7a31\u70ba\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ATTR_NAME),
			$of(u"\u5c6c\u6027 \"{0}\" \u7684\u5340\u57df\u540d\u7a31\u70ba\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"\u5be6\u9ad4\u7bc0\u9ede \"{0}\" \u7684\u53d6\u4ee3\u6587\u5b57\u5305\u542b\u5177\u6709\u672a\u9023\u7d50\u524d\u7f6e\u78bc \"{2}\" \u7684\u5143\u7d20\u7bc0\u9ede \"{1}\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"\u5be6\u9ad4\u7bc0\u9ede \"{0}\" \u7684\u53d6\u4ee3\u6587\u5b57\u5305\u542b\u5177\u6709\u672a\u9023\u7d50\u524d\u7f6e\u78bc \"{2}\" \u7684\u5c6c\u6027\u7bc0\u9ede \"{1}\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WRITING_INTERNAL_SUBSET),
			$of(u"\u5beb\u5165\u5167\u90e8\u5b50\u96c6\u6642\u767c\u751f\u932f\u8aa4\u3002"_s)
		})
	}));
	return contents;
}

SerializerMessages_zh_TW::SerializerMessages_zh_TW() {
}

$Class* SerializerMessages_zh_TW::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_zh_TW, name, initialize, &_SerializerMessages_zh_TW_ClassInfo_, allocate$SerializerMessages_zh_TW);
	return class$;
}

$Class* SerializerMessages_zh_TW::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com