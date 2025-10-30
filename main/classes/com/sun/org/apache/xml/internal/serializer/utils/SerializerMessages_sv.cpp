#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_sv.h>

#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
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

$MethodInfo _SerializerMessages_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializerMessages_sv::*)()>(&SerializerMessages_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializerMessages_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_SerializerMessages_sv_MethodInfo_
};

$Object* allocate$SerializerMessages_sv($Class* clazz) {
	return $of($alloc(SerializerMessages_sv));
}

void SerializerMessages_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGKEY),
			$of(u"Meddelandenyckeln \'\'{0}\'\' \u00e4r inte i meddelandeklassen \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGFORMAT),
			$of(u"Formatet p\u00e5 meddelandet \'\'{0}\'\' i meddelandeklassen \'\'{1}\'\' underk\u00e4ndes."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of("Serializerklassen \'\'{0}\'\' implementerar inte org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"Resursen [ {0} ] kunde inte h\u00e4mtas.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_LOAD),
			$of("Resursen [ {0} ] kunde inte laddas: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Buffertstorlek <=0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_UTF16_SURROGATE),
			$of(u"Ogiltigt UTF-16-surrogat uppt\u00e4ckt: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_OIERROR),
			$of("IO-fel"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Kan inte l\u00e4gga till attributet {0} efter underordnade noder eller innan ett element har skapats. Attributet ignoreras."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NAMESPACE_PREFIX),
			$of(u"Namnrymd f\u00f6r prefix \'\'{0}\'\' har inte deklarerats."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_ATTRIBUTE),
			$of(u"Attributet \'\'{0}\'\' finns utanf\u00f6r elementet."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_NAMESPACE),
			$of(u"Namnrymdsdeklarationen \'\'{0}\'\'=\'\'{1}\'\' finns utanf\u00f6r element."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"Kunde inte ladda \'\'{0}\'\' (kontrollera CLASSPATH), anv\u00e4nder nu enbart standardv\u00e4rden"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_CHARACTER),
			$of(u"F\u00f6rs\u00f6k att skriva utdatatecken med integralv\u00e4rdet {0} som inte \u00e4r representerat i angiven utdatakodning av {1}."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"Kunde inte ladda egenskapsfilen \'\'{0}\'\' f\u00f6r utdatametoden \'\'{1}\'\' (kontrollera CLASSPATH)"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_PORT),
			$of("Ogiltigt portnummer"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PORT_WHEN_HOST_NULL),
			$of(u"Port kan inte st\u00e4llas in n\u00e4r v\u00e4rd \u00e4r null"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"V\u00e4rd \u00e4r inte en v\u00e4lformulerad adress"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_NOT_CONFORMANT),
			$of(u"Schemat \u00e4r inte likformigt."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Kan inte st\u00e4lla in schema fr\u00e5n null-str\u00e4ng"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"S\u00f6kv\u00e4gen inneh\u00e5ller en ogiltig escape-sekvens"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_INVALID_CHAR),
			$of(u"S\u00f6kv\u00e4gen inneh\u00e5ller ett ogiltigt tecken: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_INVALID_CHAR),
			$of(u"Fragment inneh\u00e5ller ett ogiltigt tecken"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_WHEN_PATH_NULL),
			$of(u"Fragment kan inte st\u00e4llas in n\u00e4r s\u00f6kv\u00e4g \u00e4r null"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Fragment kan bara st\u00e4llas in f\u00f6r en allm\u00e4n URI"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_SCHEME_IN_URI),
			$of("Schema saknas i URI"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of("Kan inte initiera URI med tomma parametrar"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Fragment kan inte anges i b\u00e5de s\u00f6kv\u00e4gen och fragmentet"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"Fr\u00e5gestr\u00e4ng kan inte anges i b\u00e5de s\u00f6kv\u00e4gen och fr\u00e5gestr\u00e4ngen"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_PORT_IF_NO_HOST),
			$of(u"Port f\u00e5r inte anges om v\u00e4rden inte \u00e4r angiven"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Anv\u00e4ndarinfo f\u00e5r inte anges om v\u00e4rden inte \u00e4r angiven"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_XML_VERSION_NOT_SUPPORTED),
			$of(u"Varning:  Versionen av utdatadokumentet som beg\u00e4rts \u00e4r \'\'{0}\'\'.  Den h\u00e4r versionen av XML st\u00f6ds inte.  Versionen av utdatadokumentet kommer att vara \'\'1.0\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_REQUIRED),
			$of(u"Schema kr\u00e4vs!"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FACTORY_PROPERTY_MISSING),
			$of(u"Egenskapsobjektet som \u00f6verf\u00f6rts till SerializerFactory har ingen \'\'{0}\'\'-egenskap."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ENCODING_NOT_SUPPORTED),
			$of(u"Varning: Kodningen \'\'{0}\'\' st\u00f6ds inte av Java runtime."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_FOUND),
			$of(u"Parametern \'\'{0}\'\' k\u00e4nns inte igen."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_SUPPORTED),
			$of(u"Parametern \'\'{0}\'\' k\u00e4nns igen men det beg\u00e4rda v\u00e4rdet kan inte anges."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRING_TOO_LONG),
			$of(u"Resultatstr\u00e4ngen \u00e4r f\u00f6r l\u00e5ng och ryms inte i DOMString: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_TYPE_MISMATCH_ERR),
			$of(u"V\u00e4rdetypen f\u00f6r detta parameternamn \u00e4r inkompatibelt med f\u00f6rv\u00e4ntad v\u00e4rdetyp. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_OUTPUT_SPECIFIED),
			$of("Den utdatadestination som data ska skrivas till var null."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNSUPPORTED_ENCODING),
			$of(u"En kodning som inte st\u00f6ds har p\u00e5tr\u00e4ffats."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNABLE_TO_SERIALIZE_NODE),
			$of("Noden kunde inte serialiseras."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CDATA_SECTIONS_SPLIT),
			$of(u"CDATA-sektionen inneh\u00e5ller en eller flera avslutningsmark\u00f6rer (\']]>\')."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WARNING_WF_NOT_CHECKED),
			$of(u"En instans av Well-Formedness-kontrollen kunde inte skapas. Parametern well-formed har angetts till sant men Well-Formedness-kontrollen kan inte utf\u00f6ras."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER),
			$of(u"Noden \'\'{0}\'\' inneh\u00e5ller ogiltiga XML-tecken."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT),
			$of("Ett ogiltigt XML-tecken (Unicode: 0x{0}) hittades i kommentaren."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI),
			$of("Ett ogiltigt XML-tecken (Unicode: 0x{0}) hittades i bearbetningsinstruktionsdata."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA),
			$of(u"Ett ogiltigt XML-tecken (Unicode: 0x{0}) hittades i inneh\u00e5llet i CDATASection."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT),
			$of(u"Ett ogiltigt XML-tecken (Unicode: 0x{0}) hittades i teckendatainneh\u00e5llet f\u00f6r noden."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME),
			$of("Ett ogiltigt XML-tecken/ogiltiga XML-tecken hittades i {0}-noden med namnet \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_DASH_IN_COMMENT),
			$of(u"Str\u00e4ngen \"--\" \u00e4r inte till\u00e5ten inom kommentarer."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_LT_IN_ATTVAL),
			$of(u"Attributv\u00e4rdet \"{1}\" som associeras med elementtyp \"{0}\" f\u00e5r inte inneh\u00e5lla n\u00e5got \'\'<\'\'-tecken."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_UNPARSED_ENT),
			$of(u"Den otolkade enhetsreferensen \"&{0};\" \u00e4r inte till\u00e5ten."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT),
			$of(u"Den externa enhetsreferensen \"&{0};\" till\u00e5ts inte i ett attributv\u00e4rde."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND),
			$of("Prefixet \"{0}\" kan inte bindas till namnrymden \"{1}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME),
			$of(u"Det lokala namnet p\u00e5 elementet \"{0}\" \u00e4r null."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ATTR_NAME),
			$of(u"Det lokala namnet p\u00e5 attributet \"{0}\" \u00e4r null."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"Ers\u00e4ttningstexten f\u00f6r enhetsnoden \"{0}\" inneh\u00e5ller elementnoden \"{1}\" med ett obundet prefix, \"{2}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"Ers\u00e4ttningstexten f\u00f6r enhetsnoden \"{0}\" inneh\u00e5ller attributnoden \"{1}\" med ett obundet prefix, \"{2}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WRITING_INTERNAL_SUBSET),
			$of(u"Ett fel intr\u00e4ffade vid skrivning till den interna delm\u00e4ngden."_s)
		})
	}));
	return contents;
}

SerializerMessages_sv::SerializerMessages_sv() {
}

$Class* SerializerMessages_sv::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_sv, name, initialize, &_SerializerMessages_sv_ClassInfo_, allocate$SerializerMessages_sv);
	return class$;
}

$Class* SerializerMessages_sv::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com