#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_pt_BR.h>

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

$MethodInfo _SerializerMessages_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializerMessages_pt_BR::*)()>(&SerializerMessages_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializerMessages_pt_BR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_SerializerMessages_pt_BR_MethodInfo_
};

$Object* allocate$SerializerMessages_pt_BR($Class* clazz) {
	return $of($alloc(SerializerMessages_pt_BR));
}

void SerializerMessages_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
			$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGKEY),
			$of(u"A chave de mensagem \'\'{0}\'\' n\u00e3o est\u00e1 na classe de mensagem \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGFORMAT),
			$of("Houve falha no formato da mensagem \'\'{0}\'\' na classe de mensagem \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"A classe \'\'{0}\'\' do serializador n\u00e3o implementa org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"N\u00e3o foi poss\u00edvel encontrar o recurso [ {0} ].\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"O recurso [ {0} ] n\u00e3o foi carregado: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Tamanho do buffer <=0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_UTF16_SURROGATE),
			$of(u"Foi detectado um substituto de UTF-16 inv\u00e1lido: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_OIERROR),
			$of("Erro de E/S"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"N\u00e3o \u00e9 poss\u00edvel adicionar o atributo {0} depois dos n\u00f3s filhos ou antes que um elemento seja produzido. O atributo ser\u00e1 ignorado."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NAMESPACE_PREFIX),
			$of(u"O namespace do prefixo \'\'{0}\'\' n\u00e3o foi declarado."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_ATTRIBUTE),
			$of("Atributo \'\'{0}\'\' fora do elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_NAMESPACE),
			$of(u"Declara\u00e7\u00e3o de namespace \'\'{0}\'\'=\'\'{1}\'\' fora do elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"N\u00e3o foi poss\u00edvel carregar \'\'{0}\'\' (verificar CLASSPATH); usando agora apenas os padr\u00f5es"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_CHARACTER),
			$of(u"Tentativa de exibir um caractere de valor integral {0} que n\u00e3o est\u00e1 representado na codifica\u00e7\u00e3o de sa\u00edda especificada de {1}."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"N\u00e3o foi poss\u00edvel carregar o arquivo de propriedade \'\'{0}\'\' para o m\u00e9todo de sa\u00edda \'\'{1}\'\' (verificar CLASSPATH)"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_PORT),
			$of(u"N\u00famero de porta inv\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PORT_WHEN_HOST_NULL),
			$of(u"A porta n\u00e3o pode ser definida quando o host \u00e9 nulo"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"O host n\u00e3o \u00e9 um endere\u00e7o correto"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_NOT_CONFORMANT),
			$of(u"O esquema n\u00e3o \u00e9 compat\u00edvel."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_FROM_NULL_STRING),
			$of(u"N\u00e3o \u00e9 poss\u00edvel definir o esquema de uma string nula"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"O caminho cont\u00e9m uma sequ\u00eancia inv\u00e1lida de caracteres de escape"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_INVALID_CHAR),
			$of(u"O caminho cont\u00e9m um caractere inv\u00e1lido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_INVALID_CHAR),
			$of(u"O fragmento cont\u00e9m um caractere inv\u00e1lido"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_WHEN_PATH_NULL),
			$of(u"O fragmento n\u00e3o pode ser definido quando o caminho \u00e9 nulo"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_FOR_GENERIC_URI),
			$of(u"O fragmento s\u00f3 pode ser definido para um URI gen\u00e9rico"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_SCHEME_IN_URI),
			$of("Nenhum esquema encontrado no URI"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"N\u00e3o \u00e9 poss\u00edvel inicializar o URI com par\u00e2metros vazios"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"O fragmento n\u00e3o pode ser especificado no caminho nem no fragmento"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"A string de consulta n\u00e3o pode ser especificada no caminho nem na string de consulta"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_PORT_IF_NO_HOST),
			$of(u"A porta n\u00e3o pode ser especificada se o host n\u00e3o tiver sido especificado"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"As informa\u00e7\u00f5es do usu\u00e1rio n\u00e3o podem ser especificadas se o host n\u00e3o tiver sido especificado"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_XML_VERSION_NOT_SUPPORTED),
			$of(u"Advert\u00eancia: a vers\u00e3o do documento de sa\u00edda deve ser obrigatoriamente \'\'{0}\'\'. Esta vers\u00e3o do XML n\u00e3o \u00e9 suportada. A vers\u00e3o do documento de sa\u00edda ser\u00e1 \'\'1.0\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_REQUIRED),
			$of(u"O esquema \u00e9 obrigat\u00f3rio!"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FACTORY_PROPERTY_MISSING),
			$of(u"O objeto Properties especificado para a SerializerFactory n\u00e3o tem uma propriedade \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ENCODING_NOT_SUPPORTED),
			$of(u"Advert\u00eancia: a codifica\u00e7\u00e3o \'\'{0}\'\' n\u00e3o \u00e9 suportada pelo Java runtime."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_FOUND),
			$of(u"O par\u00e2metro \'\'{0}\'\' n\u00e3o \u00e9 reconhecido."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_SUPPORTED),
			$of(u"O par\u00e2metro \'\'{0}\'\' \u00e9 reconhecido, mas o valor solicitado n\u00e3o pode ser definido."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRING_TOO_LONG),
			$of(u"A string resultante \u00e9 muito longa para se ajustar a uma DOMString: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_TYPE_MISMATCH_ERR),
			$of(u"O tipo de valor do nome deste par\u00e2metro \u00e9 incompat\u00edvel com o tipo de valor esperado."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_OUTPUT_SPECIFIED),
			$of(u"O destino da sa\u00edda dos dados a serem gravados era nulo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNSUPPORTED_ENCODING),
			$of(u"Uma codifica\u00e7\u00e3o n\u00e3o suportada foi encontrada."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNABLE_TO_SERIALIZE_NODE),
			$of(u"N\u00e3o foi poss\u00edvel serializar o n\u00f3."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CDATA_SECTIONS_SPLIT),
			$of(u"A Se\u00e7\u00e3o CDATA cont\u00e9m um ou mais marcadores de t\u00e9rmino \']]>\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WARNING_WF_NOT_CHECKED),
			$of(u"N\u00e3o foi poss\u00edvel criar uma inst\u00e2ncia do verificador de Formato Correto. O par\u00e2metro formatado corretamente foi definido como verdadeiro, mas a verifica\u00e7\u00e3o de formato correto n\u00e3o pode ser executada."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER),
			$of(u"O n\u00f3 \'\'{0}\'\' cont\u00e9m caracteres XML inv\u00e1lidos."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT),
			$of(u"Um caractere XML inv\u00e1lido (Unicode: 0x{0}) foi encontrado no coment\u00e1rio."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI),
			$of(u"Um caractere XML inv\u00e1lido (Unicode: 0x{0}) foi encontrado nos dados da instru\u00e7\u00e3o de processamento."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA),
			$of(u"Um caractere XML inv\u00e1lido (Unicode: 0x {0}) foi encontrado no conte\u00fado da Se\u00e7\u00e3o CDATA."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT),
			$of(u"Um caractere XML inv\u00e1lido (Unicode: 0x {0}) foi encontrado no conte\u00fado dos dados de caracteres do n\u00f3."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME),
			$of(u"Um ou mais caracteres XML inv\u00e1lidos foram encontrados no n\u00f3 {0} chamado \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_DASH_IN_COMMENT),
			$of(u"A string \"--\" n\u00e3o \u00e9 permitida nos coment\u00e1rios."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_LT_IN_ATTVAL),
			$of(u"O valor do atributo \"{1}\" associado a um tipo de elemento \"{0}\" n\u00e3o deve conter o caractere \'\'<\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_UNPARSED_ENT),
			$of(u"A refer\u00eancia da entidade n\u00e3o submetida a parsing \"&{0};\" n\u00e3o \u00e9 permitida."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT),
			$of(u"A refer\u00eancia da entidade externa \"&{0};\" n\u00e3o \u00e9 permitida em um valor do atributo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND),
			$of(u"O prefixo \"{0}\" n\u00e3o pode ser vinculado ao namespace \"{1}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME),
			$of(u"O nome local do elemento \"{0}\" \u00e9 nulo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ATTR_NAME),
			$of(u"O nome local do atributo \"{0}\" \u00e9 nulo."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"O texto de substitui\u00e7\u00e3o do n\u00f3 \"{0}\" de entidade cont\u00e9m um n\u00f3 \"{1}\" de elemento com um prefixo desvinculado \"{2}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"O texto de substitui\u00e7\u00e3o do n\u00f3 \"{0}\" de entidade cont\u00e9m um n\u00f3 \"{1}\" de atributo com um prefixo desvinculado \"{2}\"."_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WRITING_INTERNAL_SUBSET),
			$of("Ocorreu um erro ao gravar o subconjunto interno."_s)
		})
	}));
	return contents;
}

SerializerMessages_pt_BR::SerializerMessages_pt_BR() {
}

$Class* SerializerMessages_pt_BR::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_pt_BR, name, initialize, &_SerializerMessages_pt_BR_ClassInfo_, allocate$SerializerMessages_pt_BR);
	return class$;
}

$Class* SerializerMessages_pt_BR::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com