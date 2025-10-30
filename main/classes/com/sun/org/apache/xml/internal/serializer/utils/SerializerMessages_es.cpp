#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_es.h>

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

$MethodInfo _SerializerMessages_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializerMessages_es::*)()>(&SerializerMessages_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializerMessages_es_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_SerializerMessages_es_MethodInfo_
};

$Object* allocate$SerializerMessages_es($Class* clazz) {
	return $of($alloc(SerializerMessages_es));
}

void SerializerMessages_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_es::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGKEY),
			$of(u"La clave de mensaje \'\'{0}\'\' no est\u00e1 en la clase de mensaje \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGFORMAT),
			$of("Fallo de formato del mensaje \'\'{0}\'\' en la clase de mensaje \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of("La clase de serializador \'\'{0}\'\' no implanta org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_FIND),
			$of("No se ha encontrado el recurso [ {0} ].\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_LOAD),
			$of("No se ha podido cargar el recurso [ {0} ]: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"Tama\u00f1o de buffer menor o igual que 0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u00bfSe ha detectado un sustituto UTF-16 no v\u00e1lido: {0}?"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_OIERROR),
			$of("Error de E/S"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"No se puede agregar el atributo {0} despu\u00e9s de nodos secundarios o antes de que se produzca un elemento. Se ignorar\u00e1 el atributo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NAMESPACE_PREFIX),
			$of("No se ha declarado el espacio de nombres para el prefijo \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_ATTRIBUTE),
			$of(u"El atributo \'\'{0}\'\' est\u00e1 fuera del elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_NAMESPACE),
			$of(u"Declaraci\u00f3n del espacio de nombres \'\'{0}\'\'=\'\'{1}\'\' fuera del elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"No se ha podido cargar \'\'{0}\'\' (compruebe la CLASSPATH), ahora s\u00f3lo se est\u00e1n utilizando los valores por defecto"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_CHARACTER),
			$of(u"Intento de realizar la salida del car\u00e1cter del valor integral {0}, que no est\u00e1 representado en la codificaci\u00f3n de salida de {1}."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"No se ha podido cargar el archivo de propiedades \'\'{0}\'\' para el m\u00e9todo de salida \'\'{1}\'\' (compruebe la CLASSPATH)"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_PORT),
			$of(u"N\u00famero de puerto no v\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PORT_WHEN_HOST_NULL),
			$of("No se puede definir el puerto si el host es nulo"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"El formato de la direcci\u00f3n de host no es correcto"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_NOT_CONFORMANT),
			$of(u"El esquema no es v\u00e1lido."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_FROM_NULL_STRING),
			$of("No se puede definir un esquema a partir de una cadena nula"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"La ruta de acceso contiene una secuencia de escape no v\u00e1lida"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_INVALID_CHAR),
			$of(u"La ruta de acceso contiene un car\u00e1cter no v\u00e1lido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_INVALID_CHAR),
			$of(u"El fragmento contiene un car\u00e1cter no v\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_WHEN_PATH_NULL),
			$of("No se puede definir el fragmento si la ruta de acceso es nula"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_FOR_GENERIC_URI),
			$of(u"S\u00f3lo se puede definir el fragmento para un URI gen\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_SCHEME_IN_URI),
			$of("No se ha encontrado un esquema en el URI"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"No se puede inicializar el URI con par\u00e1metros vac\u00edos"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of("No se puede especificar el fragmento en la ruta de acceso y en el fragmento"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_QUERY_STRING_IN_PATH),
			$of("No se puede especificar la cadena de consulta en la ruta de acceso y en la cadena de consulta"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_PORT_IF_NO_HOST),
			$of("No se puede especificar el puerto si no se ha especificado el host"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"No se puede especificar la informaci\u00f3n de usuario si no se ha especificado el host"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_XML_VERSION_NOT_SUPPORTED),
			$of(u"Advertencia: es necesario que la versi\u00f3n del documento de salida sea \'\'{0}\'\'. Esta versi\u00f3n de XML no est\u00e1 soportada. La versi\u00f3n del documento de salida ser\u00e1 \'\'1.0\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_REQUIRED),
			$of("Se necesita un esquema."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FACTORY_PROPERTY_MISSING),
			$of("El objeto de propiedades transferido a SerializerFactory no tiene una propiedad \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ENCODING_NOT_SUPPORTED),
			$of(u"Advertencia: el tiempo de ejecuci\u00f3n de Java no soporta la codificaci\u00f3n \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_FOUND),
			$of(u"No se reconoce el par\u00e1metro \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_SUPPORTED),
			$of(u"Se reconoce el par\u00e1metro \'\'{0}\'\' pero no se puede definir el valor solicitado."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRING_TOO_LONG),
			$of("La cadena resultante es demasiado larga para que quepa en una cadena DOM: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_TYPE_MISMATCH_ERR),
			$of(u"El tipo de valor para este nombre de par\u00e1metro no es compatible con el tipo de valor esperado. "_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_OUTPUT_SPECIFIED),
			$of(u"El destino de salida en el que se deb\u00edan escribir los datos era nulo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNSUPPORTED_ENCODING),
			$of(u"Se ha encontrado una codificaci\u00f3n no soportada."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNABLE_TO_SERIALIZE_NODE),
			$of("El nodo no se ha podido serializar."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CDATA_SECTIONS_SPLIT),
			$of(u"La secci\u00f3n CDATA contiene uno o m\u00e1s marcadores de terminaci\u00f3n \']]>\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WARNING_WF_NOT_CHECKED),
			$of(u"No se ha podido crear una instancia del comprobador de formato correcto. El par\u00e1metro de formato correcto se ha definido en true pero no se puede realizar la comprobaci\u00f3n de formato correcto."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER),
			$of(u"El nodo \'\'{0}\'\' contiene caracteres XML no v\u00e1lidos."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT),
			$of(u"Se ha encontrado un car\u00e1cter XML (Unicode: 0x{0}) no v\u00e1lido en el comentario."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI),
			$of(u"Se ha encontrado un car\u00e1cter XML (Unicode: 0x{0}) no v\u00e1lido en los datos de la instrucci\u00f3n de procesamiento."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA),
			$of(u"Se ha encontrado un car\u00e1cter XML (Unicode: 0x{0}) no v\u00e1lido en el contenido de la secci\u00f3n CDATA."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT),
			$of(u"Se ha encontrado un car\u00e1cter XML (Unicode: 0x{0}) no v\u00e1lido en los datos de caracteres del nodo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME),
			$of(u"Se ha encontrado un car\u00e1cter XML no v\u00e1lido en el nodo {0} denominado \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_DASH_IN_COMMENT),
			$of(u"La cadena \"--\" no est\u00e1 permitida en los comentarios."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_LT_IN_ATTVAL),
			$of(u"El valor del atributo \"{1}\" asociado a un tipo de elemento \"{0}\" no debe contener el car\u00e1cter \'\'<\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_UNPARSED_ENT),
			$of(u"La referencia de entidad no analizada \"&{0};\" no est\u00e1 permitida."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT),
			$of(u"La referencia de entidad externa \"&{0};\" no est\u00e1 permitida en un valor de atributo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND),
			$of("El prefijo \"{0}\" no se puede enlazar al espacio de nombres \"{1}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME),
			$of("El nombre local del elemento \"{0}\" es nulo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ATTR_NAME),
			$of("El nombre local del atributo \"{0}\" es nulo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"El texto de sustituci\u00f3n del nodo de entidad \"{0}\" contiene un nodo de elemento \"{1}\"con un prefijo no enlazado \"{2}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"El texto de sustituci\u00f3n del nodo de entidad \"{0}\" contiene un nodo de atributo \"{1}\"con un prefijo no enlazado \"{2}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WRITING_INTERNAL_SUBSET),
			$of("Se ha producido un error al escribir el subjuego interno."_s)
		})
	}));
	return contents;
}

SerializerMessages_es::SerializerMessages_es() {
}

$Class* SerializerMessages_es::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_es, name, initialize, &_SerializerMessages_es_ClassInfo_, allocate$SerializerMessages_es);
	return class$;
}

$Class* SerializerMessages_es::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com