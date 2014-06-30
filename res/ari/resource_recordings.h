/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 2012 - 2013, Digium, Inc.
 *
 * David M. Lee, II <dlee@digium.com>
 *
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 *
 * \brief Generated file - declares stubs to be implemented in
 * res/ari/resource_recordings.c
 *
 * Recording resources
 *
 * \author David M. Lee, II <dlee@digium.com>
 */

/*
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * !!!!!                               DO NOT EDIT                        !!!!!
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * This file is generated by a mustache template. Please see the original
 * template in rest-api-templates/ari_resource.h.mustache
 */

#ifndef _ASTERISK_RESOURCE_RECORDINGS_H
#define _ASTERISK_RESOURCE_RECORDINGS_H

#include "asterisk/ari.h"

/*! \brief Argument struct for ast_ari_recordings_list_stored() */
struct ast_ari_recordings_list_stored_args {
};
/*!
 * \brief List recordings that are complete.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_list_stored(struct ast_variable *headers, struct ast_ari_recordings_list_stored_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_recordings_get_stored() */
struct ast_ari_recordings_get_stored_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Get a stored recording's details.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_get_stored(struct ast_variable *headers, struct ast_ari_recordings_get_stored_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_recordings_delete_stored() */
struct ast_ari_recordings_delete_stored_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Delete a stored recording.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_delete_stored(struct ast_variable *headers, struct ast_ari_recordings_delete_stored_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_recordings_get_live() */
struct ast_ari_recordings_get_live_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief List live recordings.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_get_live(struct ast_variable *headers, struct ast_ari_recordings_get_live_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_recordings_cancel() */
struct ast_ari_recordings_cancel_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Stop a live recording and discard it.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_cancel(struct ast_variable *headers, struct ast_ari_recordings_cancel_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_recordings_stop() */
struct ast_ari_recordings_stop_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Stop a live recording and store it.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_stop(struct ast_variable *headers, struct ast_ari_recordings_stop_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_recordings_pause() */
struct ast_ari_recordings_pause_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Pause a live recording.
 *
 * Pausing a recording suspends silence detection, which will be restarted when the recording is unpaused. Paused time is not included in the accounting for maxDurationSeconds.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_pause(struct ast_variable *headers, struct ast_ari_recordings_pause_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_recordings_unpause() */
struct ast_ari_recordings_unpause_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Unpause a live recording.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_unpause(struct ast_variable *headers, struct ast_ari_recordings_unpause_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_recordings_mute() */
struct ast_ari_recordings_mute_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Mute a live recording.
 *
 * Muting a recording suspends silence detection, which will be restarted when the recording is unmuted.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_mute(struct ast_variable *headers, struct ast_ari_recordings_mute_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_recordings_unmute() */
struct ast_ari_recordings_unmute_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Unmute a live recording.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_recordings_unmute(struct ast_variable *headers, struct ast_ari_recordings_unmute_args *args, struct ast_ari_response *response);

#endif /* _ASTERISK_RESOURCE_RECORDINGS_H */