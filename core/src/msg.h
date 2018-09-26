/*
 * Copyright (c) 2018, CESAR. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

size_t msg_create_auth(knot_msg *msg, const char *uuid, const char *token);
void msg_create_schema(knot_msg_schema *msg, u8_t id,
		       const knot_schema *schema, bool end);