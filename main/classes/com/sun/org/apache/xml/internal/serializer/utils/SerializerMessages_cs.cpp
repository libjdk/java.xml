#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_cs.h>

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

$MethodInfo _SerializerMessages_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializerMessages_cs::*)()>(&SerializerMessages_cs::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializerMessages_cs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_cs",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_SerializerMessages_cs_MethodInfo_
};

$Object* allocate$SerializerMessages_cs($Class* clazz) {
	return $of($alloc(SerializerMessages_cs));
}

void SerializerMessages_cs::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_cs::getContents() {
			$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"T\u0159\u00edda serializace \'\'{0}\'\' neimplementuje org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"Nelze naj\u00edt zdroj [ {0} ].\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"Nelze zav\u00e9st zdroj [ {0} ]: {1} \n {2} \n {3}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"Velikost vyrovn\u00e1vac\u00ed pam\u011bti <=0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_UTF16_SURROGATE),
			$of(u"Byla zji\u0161t\u011bna neplatn\u00e1 n\u00e1hrada UTF-16: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_OIERROR),
			$of(u"Chyba vstupu/v\u00fdstupu"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Nelze p\u0159idat atribut {0} po uzlech potomk\u016f ani p\u0159ed t\u00edm, ne\u017e je vytvo\u0159en prvek. Atribut bude ignorov\u00e1n."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NAMESPACE_PREFIX),
			$of(u"Obor n\u00e1zv\u016f pro p\u0159edponu \'\'{0}\'\' nebyl deklarov\u00e1n."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_NAMESPACE),
			$of(u"Deklarace oboru n\u00e1zv\u016f \'\'{0}\'\'=\'\'{1}\'\' je vn\u011b prvku."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"Nelze zav\u00e9st \'\'{0}\'\' (zkontrolujte prom\u011bnnou CLASSPATH), proto se pou\u017e\u00edvaj\u00ed pouze v\u00fdchoz\u00ed hodnoty"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"Nelze na\u010d\u00edst soubor vlastnost\u00ed \'\'{0}\'\' pro v\u00fdstupn\u00ed metodu \'\'{1}\'\' (zkontrolujte prom\u011bnnou CLASSPATH)."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_PORT),
			$of(u"Neplatn\u00e9 \u010d\u00edslo portu."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PORT_WHEN_HOST_NULL),
			$of(u"M\u00e1-li hostitel hodnotu null, nelze nastavit port."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"Adresa hostitele m\u00e1 nespr\u00e1vn\u00fd form\u00e1t."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_NOT_CONFORMANT),
			$of(u"Sch\u00e9ma nevyhovuje."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Nelze nastavit sch\u00e9ma \u0159et\u011bzce s hodnotou null."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of("Cesta obsahuje neplatnou escape sekvenci"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_INVALID_CHAR),
			$of(u"Cesta obsahuje neplatn\u00fd znak: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_INVALID_CHAR),
			$of(u"Fragment obsahuje neplatn\u00fd znak."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_WHEN_PATH_NULL),
			$of(u"M\u00e1-li cesta hodnotu null, nelze nastavit fragment."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Fragment lze nastavit jen u generick\u00e9ho URI."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_SCHEME_IN_URI),
			$of(u"V URI nebylo nalezeno \u017e\u00e1dn\u00e9 sch\u00e9ma: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"URI nelze inicializovat s pr\u00e1zdn\u00fdmi parametry."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Fragment nelze ur\u010dit z\u00e1rove\u0148 v cest\u011b i ve fragmentu."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"V \u0159et\u011bzci cesty a dotazu nelze zadat \u0159et\u011bzec dotazu."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_PORT_IF_NO_HOST),
			$of(u"Nen\u00ed-li ur\u010den hostitel, nelze zadat port."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Nen\u00ed-li ur\u010den hostitel, nelze zadat \u00fadaje o u\u017eivateli."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_REQUIRED),
			$of(u"Je vy\u017eadov\u00e1no sch\u00e9ma!"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FACTORY_PROPERTY_MISSING),
			$of(u"Objekt vlastnost\u00ed p\u0159edan\u00fd faktorii SerializerFactory neobsahuje vlastnost \'\'{0}\'\'. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ENCODING_NOT_SUPPORTED),
			$of(u"Varov\u00e1n\u00ed: K\u00f3dov\u00e1n\u00ed \'\'{0}\'\' nen\u00ed v b\u011bhov\u00e9m prost\u0159ed\u00ed Java podporov\u00e1no."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_FOUND),
			$of(u"Parametr \'\'{0}\'\' nebyl rozpozn\u00e1n."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_SUPPORTED),
			$of(u"Parametr \'\'{0}\'\' byl rozpozn\u00e1n, ale nelze nastavit po\u017eadovanou hodnotu."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRING_TOO_LONG),
			$of(u"V\u00fdsledn\u00fd \u0159et\u011bzec je p\u0159\u00edli\u0161 dlouh\u00fd pro \u0159et\u011bzec DOMString: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_TYPE_MISMATCH_ERR),
			$of(u"Typ hodnoty pro tento n\u00e1zev parametru nen\u00ed kompatibiln\u00ed s o\u010dek\u00e1van\u00fdm typem hodnoty."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_OUTPUT_SPECIFIED),
			$of(u"C\u00edlov\u00e9 um\u00edst\u011bn\u00ed v\u00fdstupu pro data ur\u010den\u00e1 k z\u00e1pisu je rovno hodnot\u011b Null. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNSUPPORTED_ENCODING),
			$of(u"Bylo nalezeno nepodporovan\u00e9 k\u00f3dov\u00e1n\u00ed."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNABLE_TO_SERIALIZE_NODE),
			$of(u"Nelze prov\u00e9st serializaci uzlu. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CDATA_SECTIONS_SPLIT),
			$of(u"Sekce CDATA obsahuje jednu nebo v\u00edce ukon\u010dovac\u00edch zna\u010dek \']]>\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WARNING_WF_NOT_CHECKED),
			$of(u"Nelze vytvo\u0159it instanci modulu pro kontrolu spr\u00e1vn\u00e9ho utvo\u0159en\u00ed. Parametr spr\u00e1vn\u00e9ho utvo\u0159en\u00ed byl nastaven na hodnotu true, nepoda\u0159ilo se v\u0161ak zkontrolovat spr\u00e1vnost utvo\u0159en\u00ed. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER),
			$of(u"Uzel \'\'{0}\'\' obsahuje neplatn\u00e9 znaky XML. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT),
			$of(u"V pozn\u00e1mce byl zji\u0161t\u011bn neplatn\u00fd znak XML (Unicode: 0x{0})."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI),
			$of(u"V datech instrukce zpracov\u00e1n\u00ed byl nalezen neplatn\u00fd znak XML (Unicode: 0x{0})."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA),
			$of(u"V odd\u00edlu CDATASection byl nalezen neplatn\u00fd znak XML (Unicode: 0x{0})."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT),
			$of(u"V obsahu znakov\u00fdch dat uzlu byl nalezen neplatn\u00fd znak XML (Unicode: 0x{0})."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME),
			$of(u"V objektu {0} s n\u00e1zvem \'\'{1}\'\' byl nalezen neplatn\u00fd znak XML. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_DASH_IN_COMMENT),
			$of(u"V pozn\u00e1mk\u00e1ch nen\u00ed povolen \u0159et\u011bzec \"--\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_LT_IN_ATTVAL),
			$of(u"Hodnota atributu \"{1}\" souvisej\u00edc\u00edho s typem prvku \"{0}\" nesm\u00ed obsahovat znak \'\'<\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_UNPARSED_ENT),
			$of(u"Odkaz na neanalyzovanou entitu \"&{0};\" nen\u00ed povolen."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT),
			$of(u"Extern\u00ed odkaz na entitu \"&{0};\" nen\u00ed v hodnot\u011b atributu povolen."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND),
			$of(u"P\u0159edpona \"{0}\" nesm\u00ed b\u00fdt v\u00e1zan\u00e1 k oboru n\u00e1zv\u016f \"{1}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME),
			$of(u"Lok\u00e1ln\u00ed n\u00e1zev prvku \"{0}\" m\u00e1 hodnotu Null. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ATTR_NAME),
			$of(u"Lok\u00e1ln\u00ed n\u00e1zev atributu \"{0}\" m\u00e1 hodnotu Null. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"Nov\u00fd text uzlu entity \"{0}\" obsahuje uzel prvku \"{1}\" s nesv\u00e1zanou p\u0159edponou \"{2}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"Nov\u00fd text uzlu entity \"{0}\" obsahuje uzel atributu \"{1}\" s nesv\u00e1zanou p\u0159edponou \"{2}\". "_s)
		})
	}));
	return contents;
}

SerializerMessages_cs::SerializerMessages_cs() {
}

$Class* SerializerMessages_cs::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_cs, name, initialize, &_SerializerMessages_cs_ClassInfo_, allocate$SerializerMessages_cs);
	return class$;
}

$Class* SerializerMessages_cs::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com