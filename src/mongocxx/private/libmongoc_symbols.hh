// Copyright 2014 MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_execute)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_get_write_concern)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_insert)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_new)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_remove_many_with_opts)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_remove_one_with_opts)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_replace_one_with_opts)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_set_bypass_document_validation)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_set_client)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_set_collection)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_set_database)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_set_write_concern)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_update_many_with_opts)
MONGOCXX_LIBMONGOC_SYMBOL(bulk_operation_update_one_with_opts)
MONGOCXX_LIBMONGOC_SYMBOL(cleanup)
MONGOCXX_LIBMONGOC_SYMBOL(client_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(client_find_databases)
MONGOCXX_LIBMONGOC_SYMBOL(client_get_collection)
MONGOCXX_LIBMONGOC_SYMBOL(client_get_database)
MONGOCXX_LIBMONGOC_SYMBOL(client_get_read_concern)
MONGOCXX_LIBMONGOC_SYMBOL(client_get_read_prefs)
MONGOCXX_LIBMONGOC_SYMBOL(client_get_uri)
MONGOCXX_LIBMONGOC_SYMBOL(client_get_write_concern)
MONGOCXX_LIBMONGOC_SYMBOL(client_new_from_uri)
MONGOCXX_LIBMONGOC_SYMBOL(client_pool_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(client_pool_new)
MONGOCXX_LIBMONGOC_SYMBOL(client_pool_pop)
MONGOCXX_LIBMONGOC_SYMBOL(client_pool_push)
MONGOCXX_LIBMONGOC_SYMBOL(client_pool_try_pop)
MONGOCXX_LIBMONGOC_SYMBOL(client_set_read_concern)
MONGOCXX_LIBMONGOC_SYMBOL(client_set_read_prefs)
MONGOCXX_LIBMONGOC_SYMBOL(client_set_write_concern)
MONGOCXX_LIBMONGOC_SYMBOL(collection_aggregate)
MONGOCXX_LIBMONGOC_SYMBOL(collection_copy)
MONGOCXX_LIBMONGOC_SYMBOL(collection_count)
MONGOCXX_LIBMONGOC_SYMBOL(collection_count_with_opts)
MONGOCXX_LIBMONGOC_SYMBOL(collection_create_index)
MONGOCXX_LIBMONGOC_SYMBOL(collection_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(collection_drop)
MONGOCXX_LIBMONGOC_SYMBOL(collection_find_and_modify_with_opts)
MONGOCXX_LIBMONGOC_SYMBOL(collection_find_indexes)
MONGOCXX_LIBMONGOC_SYMBOL(collection_find_with_opts)
MONGOCXX_LIBMONGOC_SYMBOL(collection_get_last_error)
MONGOCXX_LIBMONGOC_SYMBOL(collection_get_name)
MONGOCXX_LIBMONGOC_SYMBOL(collection_get_read_concern)
MONGOCXX_LIBMONGOC_SYMBOL(collection_get_read_prefs)
MONGOCXX_LIBMONGOC_SYMBOL(collection_get_write_concern)
MONGOCXX_LIBMONGOC_SYMBOL(collection_keys_to_index_string)
MONGOCXX_LIBMONGOC_SYMBOL(collection_read_command_with_opts)
MONGOCXX_LIBMONGOC_SYMBOL(collection_rename)
MONGOCXX_LIBMONGOC_SYMBOL(collection_set_read_concern)
MONGOCXX_LIBMONGOC_SYMBOL(collection_set_read_prefs)
MONGOCXX_LIBMONGOC_SYMBOL(collection_set_write_concern)
MONGOCXX_LIBMONGOC_SYMBOL(cursor_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(cursor_error)
MONGOCXX_LIBMONGOC_SYMBOL(cursor_new_from_command_reply)
MONGOCXX_LIBMONGOC_SYMBOL(cursor_next)
MONGOCXX_LIBMONGOC_SYMBOL(cursor_set_max_await_time_ms)
MONGOCXX_LIBMONGOC_SYMBOL(database_command)
MONGOCXX_LIBMONGOC_SYMBOL(database_command_simple)
MONGOCXX_LIBMONGOC_SYMBOL(database_copy)
MONGOCXX_LIBMONGOC_SYMBOL(database_create_collection)
MONGOCXX_LIBMONGOC_SYMBOL(database_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(database_drop)
MONGOCXX_LIBMONGOC_SYMBOL(database_find_collections)
MONGOCXX_LIBMONGOC_SYMBOL(database_get_collection)
MONGOCXX_LIBMONGOC_SYMBOL(database_get_read_concern)
MONGOCXX_LIBMONGOC_SYMBOL(database_get_read_prefs)
MONGOCXX_LIBMONGOC_SYMBOL(database_get_write_concern)
MONGOCXX_LIBMONGOC_SYMBOL(database_has_collection)
MONGOCXX_LIBMONGOC_SYMBOL(database_set_read_concern)
MONGOCXX_LIBMONGOC_SYMBOL(database_set_read_prefs)
MONGOCXX_LIBMONGOC_SYMBOL(database_set_write_concern)
MONGOCXX_LIBMONGOC_SYMBOL(find_and_modify_opts_append)
MONGOCXX_LIBMONGOC_SYMBOL(find_and_modify_opts_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(find_and_modify_opts_new)
MONGOCXX_LIBMONGOC_SYMBOL(find_and_modify_opts_set_bypass_document_validation)
MONGOCXX_LIBMONGOC_SYMBOL(find_and_modify_opts_set_fields)
MONGOCXX_LIBMONGOC_SYMBOL(find_and_modify_opts_set_flags)
MONGOCXX_LIBMONGOC_SYMBOL(find_and_modify_opts_set_sort)
MONGOCXX_LIBMONGOC_SYMBOL(find_and_modify_opts_set_update)
MONGOCXX_LIBMONGOC_SYMBOL(handshake_data_append)
MONGOCXX_LIBMONGOC_SYMBOL(index_opt_geo_init)
MONGOCXX_LIBMONGOC_SYMBOL(index_opt_init)
MONGOCXX_LIBMONGOC_SYMBOL(index_opt_wt_init)
MONGOCXX_LIBMONGOC_SYMBOL(init)
MONGOCXX_LIBMONGOC_SYMBOL(log_set_handler)
MONGOCXX_LIBMONGOC_SYMBOL(read_concern_copy)
MONGOCXX_LIBMONGOC_SYMBOL(read_concern_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(read_concern_get_level)
MONGOCXX_LIBMONGOC_SYMBOL(read_concern_new)
MONGOCXX_LIBMONGOC_SYMBOL(read_concern_set_level)
MONGOCXX_LIBMONGOC_SYMBOL(read_prefs_copy)
MONGOCXX_LIBMONGOC_SYMBOL(read_prefs_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(read_prefs_get_max_staleness_seconds)
MONGOCXX_LIBMONGOC_SYMBOL(read_prefs_get_mode)
MONGOCXX_LIBMONGOC_SYMBOL(read_prefs_get_tags)
MONGOCXX_LIBMONGOC_SYMBOL(read_prefs_new)
MONGOCXX_LIBMONGOC_SYMBOL(read_prefs_set_max_staleness_seconds)
MONGOCXX_LIBMONGOC_SYMBOL(read_prefs_set_mode)
MONGOCXX_LIBMONGOC_SYMBOL(read_prefs_set_tags)
MONGOCXX_LIBMONGOC_SYMBOL(uri_copy)
MONGOCXX_LIBMONGOC_SYMBOL(uri_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_auth_mechanism)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_auth_source)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_database)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_hosts)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_options)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_password)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_read_concern)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_read_prefs_t)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_replica_set)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_ssl)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_string)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_username)
MONGOCXX_LIBMONGOC_SYMBOL(uri_get_write_concern)
MONGOCXX_LIBMONGOC_SYMBOL(uri_new)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_copy)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_destroy)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_get_journal)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_get_w)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_get_wmajority)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_get_wtag)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_get_wtimeout)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_new)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_set_journal)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_set_w)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_set_wmajority)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_set_wtag)
MONGOCXX_LIBMONGOC_SYMBOL(write_concern_set_wtimeout)

#if defined(MONGOC_ENABLE_SSL)
MONGOCXX_LIBMONGOC_SYMBOL(client_pool_set_ssl_opts)
MONGOCXX_LIBMONGOC_SYMBOL(client_set_ssl_opts)
#endif
