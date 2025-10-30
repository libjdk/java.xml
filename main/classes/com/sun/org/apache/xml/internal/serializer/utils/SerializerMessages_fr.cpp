#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_fr.h>

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

$MethodInfo _SerializerMessages_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializerMessages_fr::*)()>(&SerializerMessages_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializerMessages_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_SerializerMessages_fr_MethodInfo_
};

$Object* allocate$SerializerMessages_fr($Class* clazz) {
	return $of($alloc(SerializerMessages_fr));
}

void SerializerMessages_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGKEY),
			$of(u"La cl\u00e9 de message \'\'{0}\'\' ne figure pas dans la classe de messages \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGFORMAT),
			$of("Echec du format de message \'\'{0}\'\' dans la classe de messages \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"La classe de serializer \'\'{0}\'\' n\'\'impl\u00e9mente pas org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_FIND),
			$of("La ressource [ {0} ] est introuvable.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_LOAD),
			$of("La ressource [ {0} ] n\'\'a pas pu charger : {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Taille du tampon <=0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_UTF16_SURROGATE),
			$of(u"Substitut UTF-16 non valide d\u00e9tect\u00e9 : {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_OIERROR),
			$of("Erreur d\'E/S"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Impossible d\'\'ajouter l\'\'attribut {0} apr\u00e8s des noeuds enfant ou avant la production d\'\'un \u00e9l\u00e9ment. L\'\'attribut est ignor\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NAMESPACE_PREFIX),
			$of(u"L\'\'espace de noms du pr\u00e9fixe \'\'{0}\'\' n\'\'a pas \u00e9t\u00e9 d\u00e9clar\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_ATTRIBUTE),
			$of(u"Attribut \'\'{0}\'\' en dehors de l\'\'\u00e9l\u00e9ment."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_NAMESPACE),
			$of(u"La d\u00e9claration d\'\'espace de noms \'\'{0}\'\'=\'\'{1}\'\' est \u00e0 l\'\'ext\u00e9rieur de l\'\'\u00e9l\u00e9ment."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"Impossible de charger \'\'{0}\'\' (v\u00e9rifier CLASSPATH), les valeurs par d\u00e9faut sont donc employ\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_CHARACTER),
			$of(u"Tentative de sortie d\'\'un caract\u00e8re avec une valeur enti\u00e8re {0}, non repr\u00e9sent\u00e9 dans l\'\'encodage de sortie sp\u00e9cifi\u00e9 pour {1}."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"Impossible de charger le fichier de propri\u00e9t\u00e9s \'\'{0}\'\' pour la m\u00e9thode de sortie \'\'{1}\'\' (v\u00e9rifier CLASSPATH)"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_PORT),
			$of(u"Num\u00e9ro de port non valide"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PORT_WHEN_HOST_NULL),
			$of(u"Impossible de d\u00e9finir le port quand l\'h\u00f4te est NULL"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"Le format de l\'adresse de l\'h\u00f4te n\'est pas correct"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_NOT_CONFORMANT),
			$of(u"Le mod\u00e8le n\'est pas conforme."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Impossible de d\u00e9finir le mod\u00e8le \u00e0 partir de la cha\u00eene NULL"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"Le chemin d\'acc\u00e8s contient une s\u00e9quence d\'\u00e9chappement non valide"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_INVALID_CHAR),
			$of(u"Le chemin contient un caract\u00e8re non valide : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_INVALID_CHAR),
			$of(u"Le fragment contient un caract\u00e8re non valide"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_WHEN_PATH_NULL),
			$of(u"Impossible de d\u00e9finir le fragment quand le chemin d\'acc\u00e8s est NULL"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Le fragment ne peut \u00eatre d\u00e9fini que pour un URI g\u00e9n\u00e9rique"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_SCHEME_IN_URI),
			$of(u"Mod\u00e8le introuvable dans l\'URI"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"Impossible d\'initialiser l\'URI avec des param\u00e8tres vides"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Le fragment ne doit pas \u00eatre indiqu\u00e9 \u00e0 la fois dans le chemin et dans le fragment"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"La cha\u00eene de requ\u00eate ne doit pas figurer dans un chemin et une cha\u00eene de requ\u00eate"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_PORT_IF_NO_HOST),
			$of(u"Le port peut ne pas \u00eatre sp\u00e9cifi\u00e9 si l\'h\u00f4te ne l\'est pas"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Userinfo peut ne pas \u00eatre sp\u00e9cifi\u00e9 si l\'h\u00f4te ne l\'est pas"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_XML_VERSION_NOT_SUPPORTED),
			$of(u"Avertissement : la version du document de sortie doit \u00eatre \'\'{0}\'\'. Cette version XML n\'\'est pas prise en charge. La version du document de sortie sera \'\'1.0\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_REQUIRED),
			$of(u"Mod\u00e8le obligatoire."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FACTORY_PROPERTY_MISSING),
			$of(u"L\'\'objet de propri\u00e9t\u00e9s transmis \u00e0 SerializerFactory ne comporte aucune propri\u00e9t\u00e9 \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ENCODING_NOT_SUPPORTED),
			$of(u"Avertissement : l\'\'encodage \'\'{0}\'\' n\'\'est pas pris en charge par l\'\'ex\u00e9cution Java."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_FOUND),
			$of(u"Le param\u00e8tre \'\'{0}\'\' n\'\'est pas reconnu."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_SUPPORTED),
			$of(u"Le param\u00e8tre \'\'{0}\'\' est reconnu mais la valeur demand\u00e9e ne peut pas \u00eatre d\u00e9finie."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRING_TOO_LONG),
			$of(u"La cha\u00eene obtenue est trop longue pour tenir dans un \u00e9l\u00e9ment DOMString : \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_TYPE_MISMATCH_ERR),
			$of(u"Le type de valeur pour ce nom de param\u00e8tre n\'est pas compatible avec le type de valeur attendu. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_OUTPUT_SPECIFIED),
			$of(u"La destination de sortie dans laquelle \u00e9crire les donn\u00e9es est NULL."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNSUPPORTED_ENCODING),
			$of(u"Un encodage non pris en charge a \u00e9t\u00e9 d\u00e9tect\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNABLE_TO_SERIALIZE_NODE),
			$of(u"Le noeud n\'a pas pu \u00eatre s\u00e9rialis\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CDATA_SECTIONS_SPLIT),
			$of("La section CDATA contient des marqueurs de fin \']]>\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WARNING_WF_NOT_CHECKED),
			$of(u"Une instance du v\u00e9rificateur de format correct n\'a pas pu \u00eatre cr\u00e9\u00e9e. Le param\u00e8tre de format correct a \u00e9t\u00e9 d\u00e9fini sur True mais la v\u00e9rification de format correct n\'a pas pu \u00eatre r\u00e9alis\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER),
			$of(u"Le noeud \'\'{0}\'\' contient des caract\u00e8res XML non valides."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT),
			$of(u"Un caract\u00e8re XML non valide (Unicode : 0x{0}) a \u00e9t\u00e9 d\u00e9tect\u00e9 dans le commentaire."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI),
			$of(u"Un caract\u00e8re XML non valide (Unicode : 0x{0}) a \u00e9t\u00e9 d\u00e9tect\u00e9 dans les donn\u00e9es d\'\'instruction de traitement."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA),
			$of(u"Un caract\u00e8re XML non valide (Unicode : 0x{0}) a \u00e9t\u00e9 d\u00e9tect\u00e9 dans le contenu de la section CDATA."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT),
			$of(u"Un caract\u00e8re XML non valide (Unicode : 0x{0}) a \u00e9t\u00e9 d\u00e9tect\u00e9 dans le contenu des donn\u00e9es alphanum\u00e9riques du noeud."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME),
			$of(u"Un caract\u00e8re XML non valide a \u00e9t\u00e9 d\u00e9tect\u00e9 dans le noeud {0} nomm\u00e9 \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_DASH_IN_COMMENT),
			$of(u"La cha\u00eene \"--\" n\'est pas autoris\u00e9e dans les commentaires."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_LT_IN_ATTVAL),
			$of(u"La valeur de l\'\'attribut \"{1}\" associ\u00e9 \u00e0 un type d\'\'\u00e9l\u00e9ment \"{0}\" ne doit pas contenir le caract\u00e8re \'\'<\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_UNPARSED_ENT),
			$of(u"La r\u00e9f\u00e9rence d\'\'entit\u00e9 non analys\u00e9e \"&{0};\" n\'\'est pas autoris\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT),
			$of(u"La r\u00e9f\u00e9rence d\'\'entit\u00e9 externe \"&{0};\" n\'\'est pas autoris\u00e9e dans une valeur d\'\'attribut."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND),
			$of(u"Le pr\u00e9fixe \"{0}\" ne peut pas \u00eatre li\u00e9 \u00e0 l\'\'espace de noms \"{1}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME),
			$of(u"Le nom local de l\'\'\u00e9l\u00e9ment \"{0}\" est NULL."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ATTR_NAME),
			$of("Le nom local de l\'\'attribut \"{0}\" est NULL."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"Le texte de remplacement du noeud d\'\'entit\u00e9 \"{0}\" contient un noeud d\'\'\u00e9l\u00e9ment \"{1}\" avec un pr\u00e9fixe non li\u00e9 \"{2}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"Le texte de remplacement du noeud d\'\'entit\u00e9 \"{0}\" contient un noeud d\'\'attribut \"{1}\" avec un pr\u00e9fixe non li\u00e9 \"{2}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WRITING_INTERNAL_SUBSET),
			$of(u"Une erreur s\'est produite lors de l\'\u00e9criture du sous-ensemble interne."_s)
		})
	}));
	return contents;
}

SerializerMessages_fr::SerializerMessages_fr() {
}

$Class* SerializerMessages_fr::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_fr, name, initialize, &_SerializerMessages_fr_ClassInfo_, allocate$SerializerMessages_fr);
	return class$;
}

$Class* SerializerMessages_fr::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com