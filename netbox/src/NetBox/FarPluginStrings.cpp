#include <MsgIDs.h>
#include "FarPluginStrings.h"
#include "TextsFileZilla.h"
#include "TextsCore.h"
#include "rtlconsts.h"


const TFarPluginStrings FarPluginStrings[] =
{
  { CORE_ERROR_STRINGS, MSG_CORE_ERROR_STRINGS },
  { KEY_NOT_VERIFIED, MSG_KEY_NOT_VERIFIED },
  { CONNECTION_FAILED, MSG_CONNECTION_FAILED },
  { USER_TERMINATED, MSG_USER_TERMINATED },
  { LOST_CONNECTION, MSG_LOST_CONNECTION },
  { CANT_DETECT_RETURN_CODE, MSG_CANT_DETECT_RETURN_CODE },
  { COMMAND_FAILED, MSG_COMMAND_FAILED },
  { COMMAND_FAILED_CODEONLY, MSG_COMMAND_FAILED_CODEONLY },
  { INVALID_OUTPUT_ERROR, MSG_INVALID_OUTPUT_ERROR },
  { READ_CURRENT_DIR_ERROR, MSG_READ_CURRENT_DIR_ERROR },
  { SKIP_STARTUP_MESSAGE_ERROR, MSG_SKIP_STARTUP_MESSAGE_ERROR },
  { CHANGE_DIR_ERROR, MSG_CHANGE_DIR_ERROR },
  { LIST_DIR_ERROR, MSG_LIST_DIR_ERROR },
  { LIST_LINE_ERROR, MSG_LIST_LINE_ERROR },
  { RIGHTS_ERROR, MSG_RIGHTS_ERROR },
  { CLEANUP_CONFIG_ERROR, MSG_CLEANUP_CONFIG_ERROR },
  { CLEANUP_HOSTKEYS_ERROR, MSG_CLEANUP_HOSTKEYS_ERROR },
  { CLEANUP_SEEDFILE_ERROR, MSG_CLEANUP_SEEDFILE_ERROR },
  { CLEANUP_SESSIONS_ERROR, MSG_CLEANUP_SESSIONS_ERROR },
  { DETECT_RETURNVAR_ERROR, MSG_DETECT_RETURNVAR_ERROR },
  { LOOKUP_GROUPS_ERROR, MSG_LOOKUP_GROUPS_ERROR },
  { FILE_NOT_EXISTS, MSG_FILE_NOT_EXISTS },
  { CANT_GET_ATTRS, MSG_CANT_GET_ATTRS },
  { OPENFILE_ERROR, MSG_OPENFILE_ERROR },
  { READ_ERROR, MSG_READ_ERROR },
  { COPY_FATAL, MSG_COPY_FATAL },
  { TOREMOTE_COPY_ERROR, MSG_TOREMOTE_COPY_ERROR },
  { TOLOCAL_COPY_ERROR, MSG_TOLOCAL_COPY_ERROR },
  { SCP_EMPTY_LINE, MSG_SCP_EMPTY_LINE },
  { SCP_ILLEGAL_TIME_FORMAT, MSG_SCP_ILLEGAL_TIME_FORMAT },
  { SCP_INVALID_CONTROL_RECORD, MSG_SCP_INVALID_CONTROL_RECORD },
  { COPY_ERROR, MSG_COPY_ERROR },
  { SCP_ILLEGAL_FILE_DESCRIPTOR, MSG_SCP_ILLEGAL_FILE_DESCRIPTOR },
  { NOT_DIRECTORY_ERROR, MSG_NOT_DIRECTORY_ERROR },
  { CREATE_DIR_ERROR, MSG_CREATE_DIR_ERROR },
  { CREATE_FILE_ERROR, MSG_CREATE_FILE_ERROR },
  { WRITE_ERROR, MSG_WRITE_ERROR },
  { CANT_SET_ATTRS, MSG_CANT_SET_ATTRS },
  { REMOTE_ERROR, MSG_REMOTE_ERROR },
  { DELETE_FILE_ERROR, MSG_DELETE_FILE_ERROR },
  { LOG_GEN_ERROR, MSG_LOG_GEN_ERROR },
  { LOG_OPENERROR, MSG_LOG_OPENERROR },
  { RENAME_FILE_ERROR, MSG_RENAME_FILE_ERROR },
  { RENAME_CREATE_FILE_EXISTS, MSG_RENAME_CREATE_FILE_EXISTS },
  { RENAME_CREATE_DIR_EXISTS, MSG_RENAME_CREATE_DIR_EXISTS },
  { CHANGE_HOMEDIR_ERROR, MSG_CHANGE_HOMEDIR_ERROR },
  { UNALIAS_ALL_ERROR, MSG_UNALIAS_ALL_ERROR },
  { UNSET_NATIONAL_ERROR, MSG_UNSET_NATIONAL_ERROR },
  { FIRST_LINE_EXPECTED, MSG_FIRST_LINE_EXPECTED },
  { CLEANUP_INIFILE_ERROR, MSG_CLEANUP_INIFILE_ERROR },
  { AUTHENTICATION_LOG, MSG_AUTHENTICATION_LOG },
  { AUTHENTICATION_FAILED, MSG_AUTHENTICATION_FAILED },
  { NOT_CONNECTED, MSG_NOT_CONNECTED },
  { SAVE_KEY_ERROR, MSG_SAVE_KEY_ERROR },
  { SSH_EXITCODE, MSG_SSH_EXITCODE },
  { SFTP_INVALID_TYPE, MSG_SFTP_INVALID_TYPE },
  { SFTP_VERSION_NOT_SUPPORTED, MSG_SFTP_VERSION_NOT_SUPPORTED },
  { SFTP_MESSAGE_NUMBER, MSG_SFTP_MESSAGE_NUMBER },
  { SFTP_STATUS_OK, MSG_SFTP_STATUS_OK },
  { SFTP_STATUS_EOF, MSG_SFTP_STATUS_EOF },
  { SFTP_STATUS_NO_SUCH_FILE, MSG_SFTP_STATUS_NO_SUCH_FILE },
  { SFTP_STATUS_PERMISSION_DENIED, MSG_SFTP_STATUS_PERMISSION_DENIED },
  { SFTP_STATUS_FAILURE, MSG_SFTP_STATUS_FAILURE },
  { SFTP_STATUS_BAD_MESSAGE, MSG_SFTP_STATUS_BAD_MESSAGE },
  { SFTP_STATUS_NO_CONNECTION, MSG_SFTP_STATUS_NO_CONNECTION },
  { SFTP_STATUS_CONNECTION_LOST, MSG_SFTP_STATUS_CONNECTION_LOST },
  { SFTP_STATUS_OP_UNSUPPORTED, MSG_SFTP_STATUS_OP_UNSUPPORTED },
  { SFTP_ERROR_FORMAT3, MSG_SFTP_ERROR_FORMAT3 },
  { SFTP_STATUS_UNKNOWN, MSG_SFTP_STATUS_UNKNOWN },
  { READ_SYMLINK_ERROR, MSG_READ_SYMLINK_ERROR },
  { EMPTY_DIRECTORY, MSG_EMPTY_DIRECTORY },
  { SFTP_NON_ONE_FXP_NAME_PACKET, MSG_SFTP_NON_ONE_FXP_NAME_PACKET },
  { SFTP_REALPATH_ERROR, MSG_SFTP_REALPATH_ERROR },
  { CHANGE_PROPERTIES_ERROR, MSG_CHANGE_PROPERTIES_ERROR },
  { SFTP_INITIALIZE_ERROR, MSG_SFTP_INITIALIZE_ERROR },
  { TIMEZONE_ERROR, MSG_TIMEZONE_ERROR },
  { SFTP_CREATE_FILE_ERROR, MSG_SFTP_CREATE_FILE_ERROR },
  { SFTP_OPEN_FILE_ERROR, MSG_SFTP_OPEN_FILE_ERROR },
  { SFTP_CLOSE_FILE_ERROR, MSG_SFTP_CLOSE_FILE_ERROR },
  { NOT_FILE_ERROR, MSG_NOT_FILE_ERROR },
  { RENAME_AFTER_RESUME_ERROR, MSG_RENAME_AFTER_RESUME_ERROR },
  { CREATE_LINK_ERROR, MSG_CREATE_LINK_ERROR },
  { INVALID_SHELL_COMMAND, MSG_INVALID_SHELL_COMMAND },
  { SFTP_SERVER_MESSAGE_UNSUPPORTED, MSG_SFTP_SERVER_MESSAGE_UNSUPPORTED },
  { INVALID_OCTAL_PERMISSIONS, MSG_INVALID_OCTAL_PERMISSIONS },
  { SFTP_INVALID_EOL, MSG_SFTP_INVALID_EOL },
  { SFTP_UNKNOWN_FILE_TYPE, MSG_SFTP_UNKNOWN_FILE_TYPE },
  { SFTP_STATUS_INVALID_HANDLE, MSG_SFTP_STATUS_INVALID_HANDLE },
  { SFTP_STATUS_NO_SUCH_PATH, MSG_SFTP_STATUS_NO_SUCH_PATH },
  { SFTP_STATUS_FILE_ALREADY_EXISTS, MSG_SFTP_STATUS_FILE_ALREADY_EXISTS },
  { SFTP_STATUS_WRITE_PROTECT, MSG_SFTP_STATUS_WRITE_PROTECT },
  { SFTP_STATUS_NO_MEDIA, MSG_SFTP_STATUS_NO_MEDIA },
  { DECODE_UTF_ERROR, MSG_DECODE_UTF_ERROR },
  { CUSTOM_COMMAND_ERROR, MSG_CUSTOM_COMMAND_ERROR },
  { LOCALE_LOAD_ERROR, MSG_LOCALE_LOAD_ERROR },
  { SFTP_INCOMPLETE_BEFORE_EOF, MSG_SFTP_INCOMPLETE_BEFORE_EOF },
  { CALCULATE_SIZE_ERROR, MSG_CALCULATE_SIZE_ERROR },
  { SFTP_PACKET_TOO_BIG, MSG_SFTP_PACKET_TOO_BIG },
  { SCP_INIT_ERROR, MSG_SCP_INIT_ERROR },
  { DUPLICATE_BOOKMARK, MSG_DUPLICATE_BOOKMARK },
  { MOVE_FILE_ERROR, MSG_MOVE_FILE_ERROR },
  { SFTP_PACKET_TOO_BIG_INIT_EXPLAIN, MSG_SFTP_PACKET_TOO_BIG_INIT_EXPLAIN },
  { PRESERVE_TIME_PERM_ERROR3, MSG_PRESERVE_TIME_PERM_ERROR3 },
  { ACCESS_VIOLATION_ERROR3, MSG_ACCESS_VIOLATION_ERROR3 },
  { SFTP_STATUS_NO_SPACE_ON_FILESYSTEM, MSG_SFTP_STATUS_NO_SPACE_ON_FILESYSTEM },
  { SFTP_STATUS_QUOTA_EXCEEDED, MSG_SFTP_STATUS_QUOTA_EXCEEDED },
  { SFTP_STATUS_UNKNOWN_PRINCIPAL, MSG_SFTP_STATUS_UNKNOWN_PRINCIPAL },
  { COPY_FILE_ERROR, MSG_COPY_FILE_ERROR },
  { CUSTOM_COMMAND_UNTERMINATED, MSG_CUSTOM_COMMAND_UNTERMINATED },
  { CUSTOM_COMMAND_UNKNOWN, MSG_CUSTOM_COMMAND_UNKNOWN },
  { CUSTOM_COMMAND_FILELIST_ERROR, MSG_CUSTOM_COMMAND_FILELIST_ERROR },

  { UNKNOWN_SOCKET_STATUS, MSG_UNKNOWN_SOCKET_STATUS },
  { DELETE_ON_RESUME_ERROR, MSG_DELETE_ON_RESUME_ERROR },
  { SFTP_PACKET_ERROR, MSG_SFTP_PACKET_ERROR },
  { ITEM_NAME_INVALID, MSG_ITEM_NAME_INVALID },
  { SFTP_STATUS_LOCK_CONFLICT, MSG_SFTP_STATUS_LOCK_CONFLICT },
  { SFTP_STATUS_DIR_NOT_EMPTY, MSG_SFTP_STATUS_DIR_NOT_EMPTY },
  { SFTP_STATUS_NOT_A_DIRECTORY, MSG_SFTP_STATUS_NOT_A_DIRECTORY },
  { SFTP_STATUS_INVALID_FILENAME, MSG_SFTP_STATUS_INVALID_FILENAME },
  { SFTP_STATUS_LINK_LOOP, MSG_SFTP_STATUS_LINK_LOOP },
  { SFTP_STATUS_CANNOT_DELETE, MSG_SFTP_STATUS_CANNOT_DELETE },
  { SFTP_STATUS_INVALID_PARAMETER, MSG_SFTP_STATUS_INVALID_PARAMETER },
  { SFTP_STATUS_FILE_IS_A_DIRECTORY, MSG_SFTP_STATUS_FILE_IS_A_DIRECTORY },
  { SFTP_STATUS_BYTE_RANGE_LOCK_CONFLICT, MSG_SFTP_STATUS_BYTE_RANGE_LOCK_CONFLICT },
  { SFTP_STATUS_BYTE_RANGE_LOCK_REFUSED, MSG_SFTP_STATUS_BYTE_RANGE_LOCK_REFUSED },
  { SFTP_STATUS_DELETE_PENDING, MSG_SFTP_STATUS_DELETE_PENDING },
  { SFTP_STATUS_FILE_CORRUPT, MSG_SFTP_STATUS_FILE_CORRUPT },
  { KEY_TYPE_UNKNOWN2, MSG_KEY_TYPE_UNKNOWN2 },
  { KEY_TYPE_UNSUPPORTED2, MSG_KEY_TYPE_UNSUPPORTED2 },
  { KEY_TYPE_DIFFERENT_SSH, MSG_KEY_TYPE_DIFFERENT_SSH },
  { SFTP_OVERWRITE_FILE_ERROR2, MSG_SFTP_OVERWRITE_FILE_ERROR2 },
  { SFTP_OVERWRITE_DELETE_BUTTON, MSG_SFTP_OVERWRITE_DELETE_BUTTON },
  { SPACE_AVAILABLE_ERROR, MSG_SPACE_AVAILABLE_ERROR },
  { TUNNEL_NO_FREE_PORT, MSG_TUNNEL_NO_FREE_PORT },
  { EVENT_SELECT_ERROR, MSG_EVENT_SELECT_ERROR },
  { UNEXPECTED_CLOSE_ERROR, MSG_UNEXPECTED_CLOSE_ERROR },
  { TUNNEL_ERROR, MSG_TUNNEL_ERROR },
  { CHECKSUM_ERROR, MSG_CHECKSUM_ERROR },
  { INTERNAL_ERROR, MSG_INTERNAL_ERROR },
  { FZ_NOTSUPPORTED, MSG_FZ_NOTSUPPORTED },
  { FTP_ACCESS_DENIED, MSG_FTP_ACCESS_DENIED },
  { FTP_CREDENTIAL_PROMPT, MSG_FTP_CREDENTIAL_PROMPT },
  { FTP_RESPONSE_ERROR, MSG_FTP_RESPONSE_ERROR },
  { FTP_UNSUPPORTED, MSG_FTP_UNSUPPORTED },

  { TRANSFER_ERROR, MSG_TRANSFER_ERROR },
  { EXECUTE_APP_ERROR, MSG_EXECUTE_APP_ERROR },
  { FILE_NOT_FOUND, MSG_FILE_NOT_FOUND },
  { DOCUMENT_WAIT_ERROR, MSG_DOCUMENT_WAIT_ERROR },
  { SPEED_INVALID, MSG_SPEED_INVALID },
  { CERT_ERR_DEPTH_ZERO_SELF_SIGNED_CERT, MSG_CERT_ERR_DEPTH_ZERO_SELF_SIGNED_CERT },
  { CERT_ERR_ERROR_IN_CERT_NOT_AFTER_FIELD, MSG_CERT_ERR_ERROR_IN_CERT_NOT_AFTER_FIELD },
  { CERT_ERR_ERROR_IN_CERT_NOT_BEFORE_FIELD, MSG_CERT_ERR_ERROR_IN_CERT_NOT_BEFORE_FIELD },
  { CERT_ERR_INVALID_CA, MSG_CERT_ERR_INVALID_CA },
  { CERT_ERR_INVALID_PURPOSE, MSG_CERT_ERR_INVALID_PURPOSE },
  { CERT_ERR_KEYUSAGE_NO_CERTSIGN, MSG_CERT_ERR_KEYUSAGE_NO_CERTSIGN },
  { CERT_ERR_PATH_LENGTH_EXCEEDED, MSG_CERT_ERR_PATH_LENGTH_EXCEEDED },
  { CERT_ERR_SELF_SIGNED_CERT_IN_CHAIN, MSG_CERT_ERR_SELF_SIGNED_CERT_IN_CHAIN },
  { CERT_ERR_UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY, MSG_CERT_ERR_UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY },
  { CERT_ERR_UNABLE_TO_DECRYPT_CERT_SIGNATURE, MSG_CERT_ERR_UNABLE_TO_DECRYPT_CERT_SIGNATURE },
  { CERT_ERR_UNABLE_TO_GET_ISSUER_CERT, MSG_CERT_ERR_UNABLE_TO_GET_ISSUER_CERT },
  { CERT_ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY, MSG_CERT_ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY },
  { CERT_ERR_UNABLE_TO_VERIFY_LEAF_SIGNATURE, MSG_CERT_ERR_UNABLE_TO_VERIFY_LEAF_SIGNATURE },
  { CERT_ERR_UNKNOWN, MSG_CERT_ERR_UNKNOWN },
  { CERT_ERRDEPTH, MSG_CERT_ERRDEPTH },
  { MASK_ERROR, MSG_MASK_ERROR },
  { FTP_CANNOT_OPEN_ACTIVE_CONNECTION2, MSG_FTP_CANNOT_OPEN_ACTIVE_CONNECTION2 },
  { CORE_DELETE_LOCAL_FILE_ERROR, MSG_CORE_DELETE_LOCAL_FILE_ERROR },
  { URL_OPTION_BOOL_VALUE_ERROR, MSG_URL_OPTION_BOOL_VALUE_ERROR },
  { FTP_ACCESS_DENIED_EMPTY_PASSWORD, MSG_FTP_ACCESS_DENIED_EMPTY_PASSWORD },

  { NET_TRANSL_NO_ROUTE2, MSG_NET_TRANSL_NO_ROUTE2 },
  { NET_TRANSL_CONN_ABORTED, MSG_NET_TRANSL_CONN_ABORTED },
  { NET_TRANSL_HOST_NOT_EXIST2, MSG_NET_TRANSL_HOST_NOT_EXIST2 },
  { NET_TRANSL_PACKET_GARBLED, MSG_NET_TRANSL_PACKET_GARBLED },
  { REPORT_ERROR, MSG_REPORT_ERROR },
  { TLS_CERT_DECODE_ERROR, MSG_TLS_CERT_DECODE_ERROR },
  { FIND_FILE_ERROR, MSG_FIND_FILE_ERROR },
  { CERT_NAME_MISMATCH, MSG_CERT_NAME_MISMATCH },

  { CERT_ERR_BAD_CHAIN, MSG_CERT_ERR_BAD_CHAIN },
  { CERT_OK, MSG_CERT_OK },
  { CERT_ERR_CERT_CHAIN_TOO_LONG, MSG_CERT_ERR_CERT_CHAIN_TOO_LONG },
  { CERT_ERR_CERT_HAS_EXPIRED, MSG_CERT_ERR_CERT_HAS_EXPIRED },
  { CERT_ERR_CERT_NOT_YET_VALID, MSG_CERT_ERR_CERT_NOT_YET_VALID },
  { CERT_ERR_CERT_REJECTED, MSG_CERT_ERR_CERT_REJECTED },
  { CERT_ERR_CERT_SIGNATURE_FAILURE, MSG_CERT_ERR_CERT_SIGNATURE_FAILURE },
  { CERT_ERR_CERT_UNTRUSTED, MSG_CERT_ERR_CERT_UNTRUSTED },
  { REQUEST_REDIRECTED, MSG_REQUEST_REDIRECTED },
  { TOO_MANY_REDIRECTS, MSG_TOO_MANY_REDIRECTS },
  { REDIRECT_LOOP, MSG_REDIRECT_LOOP },
  { INVALID_URL, MSG_INVALID_URL },
  { PROXY_AUTHENTICATION_FAILED, MSG_PROXY_AUTHENTICATION_FAILED },
  { CONFIGURED_KEY_NOT_MATCH, MSG_CONFIGURED_KEY_NOT_MATCH },
  { SFTP_STATUS_OWNER_INVALID, MSG_SFTP_STATUS_OWNER_INVALID },
  { SFTP_STATUS_GROUP_INVALID, MSG_SFTP_STATUS_GROUP_INVALID },
  { SFTP_STATUS_NO_MATCHING_BYTE_RANGE_LOCK, MSG_SFTP_STATUS_NO_MATCHING_BYTE_RANGE_LOCK },
  { KEY_TYPE_UNOPENABLE, MSG_KEY_TYPE_UNOPENABLE },
  { UNKNOWN_CHECKSUM, MSG_UNKNOWN_CHECKSUM },
  { CIPHER_NOT_VERIFIED, MSG_CIPHER_NOT_VERIFIED },
  { KEX_NOT_VERIFIED, MSG_KEX_NOT_VERIFIED },
  { SFTP_STATUS_4, MSG_SFTP_STATUS_4 },
  { CERTIFICATE_OPEN_ERROR, MSG_CERTIFICATE_OPEN_ERROR },
  { CERTIFICATE_READ_ERROR, MSG_CERTIFICATE_READ_ERROR },
  { CERTIFICATE_DECODE_ERROR_INFO, MSG_CERTIFICATE_DECODE_ERROR_INFO },
  { CERTIFICATE_DECODE_ERROR, MSG_CERTIFICATE_DECODE_ERROR },
  { CERTIFICATE_PUBLIC_KEY_NOT_FOUND, MSG_CERTIFICATE_PUBLIC_KEY_NOT_FOUND },
  { LOCK_FILE_ERROR, MSG_LOCK_FILE_ERROR },
  { UNLOCK_FILE_ERROR, MSG_UNLOCK_FILE_ERROR },
  { NOT_LOCKED, MSG_NOT_LOCKED },
  { KEY_SAVE_ERROR, MSG_KEY_SAVE_ERROR },
  { NEON_INIT_FAILED, MSG_NEON_INIT_FAILED },
  { SCRIPT_AMBIGUOUS_SLASH_IN_PATH, MSG_SCRIPT_AMBIGUOUS_SLASH_IN_PATH },
  { CERT_IP_CANNOT_VERIFY, MSG_CERT_IP_CANNOT_VERIFY },
  { HOSTKEY_NOT_CONFIGURED, MSG_HOSTKEY_NOT_CONFIGURED },
  { UNENCRYPTED_REDIRECT, MSG_UNENCRYPTED_REDIRECT },
  { HTTP_ERROR2, MSG_HTTP_ERROR2 },
  { FILEZILLA_SITE_MANAGER_NOT_FOUND, MSG_FILEZILLA_SITE_MANAGER_NOT_FOUND },
  { FILEZILLA_NO_SITES, MSG_FILEZILLA_NO_SITES },
  { FILEZILLA_SITE_NOT_EXIST, MSG_FILEZILLA_SITE_NOT_EXIST },
  { SFTP_AS_FTP_ERROR, MSG_SFTP_AS_FTP_ERROR },

  { CORE_CONFIRMATION_STRINGS, MSG_CORE_CONFIRMATION_STRINGS },
  { CONFIRM_PROLONG_TIMEOUT3, MSG_CONFIRM_PROLONG_TIMEOUT3 },
  { PROMPT_KEY_PASSPHRASE, MSG_PROMPT_KEY_PASSPHRASE },
  { PROMPT_FILE_OVERWRITE, MSG_PROMPT_FILE_OVERWRITE },
  { DIRECTORY_OVERWRITE, MSG_DIRECTORY_OVERWRITE },
  { CIPHER_BELOW_TRESHOLD, MSG_CIPHER_BELOW_TRESHOLD },
  { CIPHER_TYPE_BOTH, MSG_CIPHER_TYPE_BOTH },
  { CIPHER_TYPE_CS, MSG_CIPHER_TYPE_CS },
  { CIPHER_TYPE_SC, MSG_CIPHER_TYPE_SC },
  { RESUME_TRANSFER2, MSG_RESUME_TRANSFER2 },
  { PARTIAL_BIGGER_THAN_SOURCE, MSG_PARTIAL_BIGGER_THAN_SOURCE },
  { APPEND_OR_RESUME2, MSG_APPEND_OR_RESUME2 },
  { FILE_OVERWRITE_DETAILS, MSG_FILE_OVERWRITE_DETAILS },
  { READ_ONLY_OVERWRITE, MSG_READ_ONLY_OVERWRITE },
  { LOCAL_FILE_OVERWRITE2, MSG_LOCAL_FILE_OVERWRITE2 },
  { REMOTE_FILE_OVERWRITE2, MSG_REMOTE_FILE_OVERWRITE2 },
  { TIMEOUT_STILL_WAITING3, MSG_TIMEOUT_STILL_WAITING3 },
  { KEX_BELOW_TRESHOLD, MSG_KEX_BELOW_TRESHOLD },
  { RECONNECT_BUTTON, MSG_RECONNECT_BUTTON },
  { RENAME_BUTTON, MSG_RENAME_BUTTON },
  { TUNNEL_SESSION_NAME, MSG_TUNNEL_SESSION_NAME },
  { PASSWORD_TITLE, MSG_PASSWORD_TITLE },
  { PASSPHRASE_TITLE, MSG_PASSPHRASE_TITLE },
  { SERVER_PROMPT_TITLE, MSG_SERVER_PROMPT_TITLE },
  { USERNAME_TITLE, MSG_USERNAME_TITLE },
  { USERNAME_PROMPT2, MSG_USERNAME_PROMPT2 },
  { SERVER_PROMPT_TITLE2, MSG_SERVER_PROMPT_TITLE2 },
  { NEW_PASSWORD_TITLE, MSG_NEW_PASSWORD_TITLE },
  { PROMPT_PROMPT, MSG_PROMPT_PROMPT },
  { TIS_INSTRUCTION, MSG_TIS_INSTRUCTION },
  { CRYPTOCARD_INSTRUCTION, MSG_CRYPTOCARD_INSTRUCTION },
  { PASSWORD_PROMPT, MSG_PASSWORD_PROMPT },
  { KEYBINTER_INSTRUCTION, MSG_KEYBINTER_INSTRUCTION },
  { NEW_PASSWORD_CURRENT_PROMPT, MSG_NEW_PASSWORD_CURRENT_PROMPT },
  { NEW_PASSWORD_NEW_PROMPT, MSG_NEW_PASSWORD_NEW_PROMPT },
  { NEW_PASSWORD_CONFIRM_PROMPT, MSG_NEW_PASSWORD_CONFIRM_PROMPT },
  { TUNNEL_INSTRUCTION, MSG_TUNNEL_INSTRUCTION },
  { RENAME_TITLE, MSG_RENAME_TITLE },
  { RENAME_PROMPT2, MSG_RENAME_PROMPT2 },
  { VERIFY_CERT_PROMPT3, MSG_VERIFY_CERT_PROMPT3 },
  { VERIFY_CERT_CONTACT, MSG_VERIFY_CERT_CONTACT },
  { VERIFY_CERT_CONTACT_LIST, MSG_VERIFY_CERT_CONTACT_LIST },
  { CERT_TEXT, MSG_CERT_TEXT },

  { CERTIFICATE_PASSPHRASE_PROMPT, MSG_CERTIFICATE_PASSPHRASE_PROMPT },
  { CERTIFICATE_PASSPHRASE_TITLE, MSG_CERTIFICATE_PASSPHRASE_TITLE },
  { KEY_TYPE_CONVERT3, MSG_KEY_TYPE_CONVERT3 },
  { MULTI_FILES_TO_ONE, MSG_MULTI_FILES_TO_ONE },
  
  { CORE_INFORMATION_STRINGS, MSG_CORE_INFORMATION_STRINGS },
  { YES_STR, MSG_YES_STR },
  { NO_STR, MSG_NO_STR },
  { SESSION_INFO_TIP2, MSG_SESSION_INFO_TIP2 },
  { VERSION2, MSG_VERSION2 },
  { CLOSED_ON_COMPLETION, MSG_CLOSED_ON_COMPLETION },
  { SFTP_PROTOCOL_NAME2, MSG_SFTP_PROTOCOL_NAME2 },
  { FS_RENAME_NOT_SUPPORTED, MSG_FS_RENAME_NOT_SUPPORTED },
  { SFTP_NO_EXTENSION_INFO, MSG_SFTP_NO_EXTENSION_INFO },
  { SFTP_EXTENSION_INFO, MSG_SFTP_EXTENSION_INFO },
  { APPEND_BUTTON, MSG_APPEND_BUTTON },
  { YES_TO_NEWER_BUTTON, MSG_YES_TO_NEWER_BUTTON },

  { SKIP_ALL_BUTTON, MSG_SKIP_ALL_BUTTON },

  { COPY_PARAM_PRESET_ASCII, MSG_COPY_PARAM_PRESET_ASCII },
  { COPY_PARAM_PRESET_BINARY, MSG_COPY_PARAM_PRESET_BINARY },
  { COPY_PARAM_PRESET_EXCLUDE_ALL_DIR, MSG_COPY_PARAM_PRESET_EXCLUDE_ALL_DIR },
  { COPY_INFO_TRANSFER_TYPE2, MSG_COPY_INFO_TRANSFER_TYPE2 },
  { COPY_INFO_FILENAME, MSG_COPY_INFO_FILENAME },
  { COPY_INFO_PERMISSIONS, MSG_COPY_INFO_PERMISSIONS },
  { COPY_INFO_ADD_X_TO_DIRS, MSG_COPY_INFO_ADD_X_TO_DIRS },
  { COPY_INFO_TIMESTAMP, MSG_COPY_INFO_TIMESTAMP },
  { COPY_INFO_FILE_MASK, MSG_COPY_INFO_FILE_MASK },
  { COPY_INFO_CLEAR_ARCHIVE, MSG_COPY_INFO_CLEAR_ARCHIVE },
  { COPY_INFO_DONT_REPLACE_INV_CHARS, MSG_COPY_INFO_DONT_REPLACE_INV_CHARS },
  { COPY_INFO_DONT_PRESERVE_TIME, MSG_COPY_INFO_DONT_PRESERVE_TIME },
  { COPY_INFO_DONT_CALCULATE_SIZE, MSG_COPY_INFO_DONT_CALCULATE_SIZE },
  { COPY_INFO_DEFAULT, MSG_COPY_INFO_DEFAULT },
  { COPY_RULE_HOSTNAME, MSG_COPY_RULE_HOSTNAME },
  { COPY_RULE_USERNAME, MSG_COPY_RULE_USERNAME },
  { COPY_RULE_REMOTE_DIR, MSG_COPY_RULE_REMOTE_DIR },
  { COPY_RULE_LOCAL_DIR, MSG_COPY_RULE_LOCAL_DIR },
  { SYNCHRONIZE_SCAN, MSG_SYNCHRONIZE_SCAN },
  { SYNCHRONIZE_START, MSG_SYNCHRONIZE_START },
  { SYNCHRONIZE_CHANGE, MSG_SYNCHRONIZE_CHANGE },
  { SYNCHRONIZE_UPLOADED, MSG_SYNCHRONIZE_UPLOADED },
  { SYNCHRONIZE_DELETED, MSG_SYNCHRONIZE_DELETED },
  { COPY_INFO_NOT_USABLE, MSG_COPY_INFO_NOT_USABLE },
  { COPY_INFO_IGNORE_PERM_ERRORS, MSG_COPY_INFO_IGNORE_PERM_ERRORS },
  { AUTH_TRANSL_USERNAME, MSG_AUTH_TRANSL_USERNAME },
  { AUTH_TRANSL_KEYB_INTER, MSG_AUTH_TRANSL_KEYB_INTER },
  { AUTH_TRANSL_PUBLIC_KEY, MSG_AUTH_TRANSL_PUBLIC_KEY },
  { AUTH_TRANSL_WRONG_PASSPHRASE, MSG_AUTH_TRANSL_WRONG_PASSPHRASE },
  { AUTH_TRANSL_ACCESS_DENIED, MSG_AUTH_TRANSL_ACCESS_DENIED },
  { AUTH_TRANSL_PUBLIC_KEY_AGENT, MSG_AUTH_TRANSL_PUBLIC_KEY_AGENT },
  { AUTH_TRANSL_TRY_PUBLIC_KEY, MSG_AUTH_TRANSL_TRY_PUBLIC_KEY },
  { AUTH_PASSWORD, MSG_AUTH_PASSWORD },
  { OPEN_TUNNEL, MSG_OPEN_TUNNEL },
  { NETBOX_STATUS_CLOSED, MSG_NETBOX_STATUS_CLOSED },
  { STATUS_LOOKUPHOST, MSG_STATUS_LOOKUPHOST },
  { STATUS_CONNECT, MSG_STATUS_CONNECT },
  { STATUS_AUTHENTICATE, MSG_STATUS_AUTHENTICATE },
  { STATUS_AUTHENTICATED, MSG_STATUS_AUTHENTICATED },
  { STATUS_STARTUP, MSG_STATUS_STARTUP },
  { STATUS_READY, MSG_STATUS_READY },
  { STATUS_OPEN_DIRECTORY, MSG_STATUS_OPEN_DIRECTORY },
  { USING_TUNNEL, MSG_USING_TUNNEL },
  { AUTH_TRANSL_KEY_REFUSED, MSG_AUTH_TRANSL_KEY_REFUSED },
  { PFWD_TRANSL_ADMIN, MSG_PFWD_TRANSL_ADMIN },
  { PFWD_TRANSL_CONNECT, MSG_PFWD_TRANSL_CONNECT },
  { NET_TRANSL_REFUSED2, MSG_NET_TRANSL_REFUSED2 },
  { NET_TRANSL_RESET, MSG_NET_TRANSL_RESET },
  { NET_TRANSL_TIMEOUT2, MSG_NET_TRANSL_TIMEOUT2 },
  { SESSION_INFO_TIP_NO_SSH, MSG_SESSION_INFO_TIP_NO_SSH },
  { RESUME_BUTTON, MSG_RESUME_BUTTON },
  { FTP_NO_FEATURE_INFO, MSG_FTP_NO_FEATURE_INFO },
  { FTP_FEATURE_INFO, MSG_FTP_FEATURE_INFO },
  { COPY_INFO_CPS_LIMIT2, MSG_COPY_INFO_CPS_LIMIT2 },
  { COPY_KEY_BUTTON, MSG_COPY_KEY_BUTTON },
  { UPDATE_KEY_BUTTON, MSG_UPDATE_KEY_BUTTON },
  { ADD_KEY_BUTTON, MSG_ADD_KEY_BUTTON },
  { COPY_INFO_PRESERVE_READONLY, MSG_COPY_INFO_PRESERVE_READONLY },

  { SPEED_UNLIMITED, MSG_SPEED_UNLIMITED },
  { FTPS_IMPLICIT, MSG_FTPS_IMPLICIT },
  { FTPS_EXPLICIT, MSG_FTPS_EXPLICIT },

  { HOSTKEY, MSG_HOSTKEY },

  { COPY_PARAM_NEWER_ONLY, MSG_COPY_PARAM_NEWER_ONLY },
  { FTP_SUGGESTION, MSG_FTP_SUGGESTION },

  { ANY_HOSTKEY, MSG_ANY_HOSTKEY },
  { ANY_CERTIFICATE, MSG_ANY_CERTIFICATE },

  { COPY_INFO_REMOVE_CTRLZ, MSG_COPY_INFO_REMOVE_CTRLZ },
  { COPY_INFO_REMOVE_BOM, MSG_COPY_INFO_REMOVE_BOM },

  { VERSION_BUILD, MSG_VERSION_BUILD },
  { VERSION_DEV_BUILD, MSG_VERSION_DEV_BUILD },
  { VERSION_DEBUG_BUILD, MSG_VERSION_DEBUG_BUILD },
  { VERSION_DONT_DISTRIBUTE, MSG_VERSION_DONT_DISTRIBUTE },
  { WEBDAV_EXTENSION_INFO, MSG_WEBDAV_EXTENSION_INFO },
  { COPY_PARAM_PRESET_EXCLUDE_ALL_DIR, MSG_COPY_PARAM_PRESET_EXCLUDE_ALL_DIR },
  { SCRIPT_CHECKSUM_DESC, MSG_SCRIPT_CHECKSUM_DESC },
  { CLIENT_CERTIFICATE_LOADING, MSG_CLIENT_CERTIFICATE_LOADING },
  { NEED_CLIENT_CERTIFICATE, MSG_NEED_CLIENT_CERTIFICATE },
  { LOCKED, MSG_LOCKED },
  { EXECUTABLE, MSG_EXECUTABLE },
  { SCRIPT_CMDLINE_PARAMETERS, MSG_SCRIPT_CMDLINE_PARAMETERS },
  { SCRIPTING_USE_HOSTKEY, MSG_SCRIPTING_USE_HOSTKEY },
  { SCRIPT_SITE_WARNING, MSG_SCRIPT_SITE_WARNING },
  { CODE_SESSION_OPTIONS, MSG_CODE_SESSION_OPTIONS },
  { CODE_CONNECT, MSG_CODE_CONNECT },
  { CODE_YOUR_CODE, MSG_CODE_YOUR_CODE },
  { CODE_PS_ADD_TYPE, MSG_CODE_PS_ADD_TYPE },
  { COPY_INFO_PRESERVE_TIME_DIRS, MSG_COPY_INFO_PRESERVE_TIME_DIRS },

  { CORE_VARIABLE_STRINGS, MSG_CORE_VARIABLE_STRINGS },
  { PUTTY_BASED_ON, MSG_PUTTY_BASED_ON },
  { PUTTY_VERSION, MSG_PUTTY_VERSION },
  { PUTTY_COPYRIGHT, MSG_PUTTY_COPYRIGHT },
  { PUTTY_URL, MSG_PUTTY_URL },
  { FILEZILLA_BASED_ON2, MSG_FILEZILLA_BASED_ON2 },
  { FILEZILLA_VERSION, MSG_FILEZILLA_VERSION },
  { FILEZILLA_COPYRIGHT2, MSG_FILEZILLA_COPYRIGHT2 },
  { FILEZILLA_URL, MSG_FILEZILLA_URL },
  { OPENSSL_BASED_ON, MSG_OPENSSL_BASED_ON },
  { OPENSSL_COPYRIGHT2, MSG_OPENSSL_COPYRIGHT2 },
  { OPENSSL_VERSION, MSG_OPENSSL_VERSION },
  { OPENSSL_URL, MSG_OPENSSL_URL },
  { NEON_BASED_ON, MSG_NEON_BASED_ON },
  { NEON_COPYRIGHT, MSG_NEON_COPYRIGHT },
  { NEON_URL, MSG_NEON_URL },
  { EXPAT_BASED_ON, MSG_EXPAT_BASED_ON },
  { EXPAT_COPYRIGHT, MSG_EXPAT_COPYRIGHT },
  { EXPAT_URL, MSG_EXPAT_URL },
  { PUTTY_LICENSE_URL, MSG_PUTTY_LICENSE_URL },
  { MAIN_MSG_TAG, MSG_MAIN_MSG_TAG },
  { INTERACTIVE_MSG_TAG, MSG_INTERACTIVE_MSG_TAG },

  { WINSCPFAR_NAME, MSG_WINSCPFAR_NAME },
  { WINSCP_VERSION, MSG_WINSCP_VERSION },
  { WINSCPFAR_VERSION, MSG_WINSCPFAR_VERSION },
  { WINSCPFAR_BASED_ON, MSG_WINSCPFAR_BASED_ON },
  { WINSCPFAR_BASED_VERSION, MSG_WINSCPFAR_BASED_VERSION },
  { WINSCPFAR_BASED_COPYRIGHT, MSG_WINSCPFAR_BASED_COPYRIGHT },

  { UNKNOWN_KEY3, MSG_UNKNOWN_KEY3 },
  { DIFFERENT_KEY4, MSG_DIFFERENT_KEY4 },
  { OLD_KEY, MSG_OLD_KEY },

  // rtlconsts.rc
  { SDuplicateString, MSG_SDuplicateString },
  { SListCountError, MSG_SListCountError },
  { SListIndexError, MSG_SListIndexError },
  { SMemoryStreamError, MSG_SMemoryStreamError },
  { SReadError, MSG_SReadError },
  { SSortedListError, MSG_SSortedListError },
  { STimeEncodeError, MSG_STimeEncodeError },
  { SWriteError, MSG_SWriteError },
  { SNotImplemented, MSG_SNotImplemented },
  { SOSError, MSG_SOSError },
  { SUnkOSError, MSG_SUnkOSError },

  { SDateEncodeError, MSG_SDateEncodeError },
  { SCannotOpenClipboard, MSG_SCannotOpenClipboard },

  { IDS_ERRORMSG_TIMEOUT, MSG_IDS_ERRORMSG_TIMEOUT },
  { IDS_STATUSMSG_DISCONNECTED, MSG_IDS_STATUSMSG_DISCONNECTED },

  { CONVERTKEY_SAVE_TITLE, MSG_CONVERTKEY_SAVE_TITLE },
  { CONVERTKEY_SAVE_FILTER, MSG_CONVERTKEY_SAVE_FILTER },
  { CONVERTKEY_SAVED, MSG_CONVERTKEY_SAVED },

  { 0, 0 }
};