/*
** ###################################################################
**
**     Copyright (c) 2016 Freescale Semiconductor, Inc.
**     Copyright 2017-2021 NXP
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/*!
 * @file
 *
 * File containing server-side RPC functions for the RM service.
 *
 * @addtogroup RM_SVC
 * @{
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by bin/perl/rpc_srv_c.pl */

/* Includes */

#include "main/scfw.h"
#include "main/types.h"
#include "main/main.h"
#include "main/rpc.h"
#include "svc/rm/svc.h"
#include "svc/rm/rpc.h"

/* Local Defines */

/* Local Types */

/*--------------------------------------------------------------------------*/
/* Dispatch incoming RPC function call                                      */
/*--------------------------------------------------------------------------*/
void rm_dispatch(sc_rm_pt_t caller_pt, sc_rsrc_t mu, sc_rpc_msg_t *msg)
{
    uint8_t func = RPC_FUNC(msg);
    sc_err_t err = SC_ERR_NONE;

    switch (func)
    {
        /* Handle unknown function */
        case RM_FUNC_UNKNOWN :
            {
                RPC_SIZE(msg) = 1;
                err = SC_ERR_NOTFOUND;
                RPC_R8(msg) = (uint8_t) err;
            }
            break;
        /* Dispatch partition_alloc() */
        case RM_FUNC_PARTITION_ALLOC :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) 0U);
                sc_bool_t secure = U2B(RPC_U8(msg, 0U));
                sc_bool_t isolated = U2B(RPC_U8(msg, 1U));
                sc_bool_t restricted = U2B(RPC_U8(msg, 2U));
                sc_bool_t grant = U2B(RPC_U8(msg, 3U));
                sc_bool_t coherent = U2B(RPC_U8(msg, 4U));

                /* Call function */
                err = rm_partition_alloc(caller_pt, &pt, secure, isolated,
                    restricted, grant, coherent);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(pt);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch set_confidential() */
        case RM_FUNC_SET_CONFIDENTIAL :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 0U));
                sc_bool_t retro = U2B(RPC_U8(msg, 1U));

                /* Call function */
                err = rm_set_confidential(caller_pt, pt, retro);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch partition_free() */
        case RM_FUNC_PARTITION_FREE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 0U));

                /* Call function */
                err = rm_partition_free(caller_pt, pt);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_did() */
        case RM_FUNC_GET_DID :
            {
                /* Declare return and parameters */
                sc_rm_did_t result;

                /* Call function */
                result = rm_get_did(caller_pt);

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch partition_static() */
        case RM_FUNC_PARTITION_STATIC :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 0U));
                sc_rm_did_t did = ((sc_rm_did_t) RPC_U8(msg, 1U));

                /* Call function */
                err = rm_partition_static(caller_pt, pt, did);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch partition_lock() */
        case RM_FUNC_PARTITION_LOCK :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 0U));

                /* Call function */
                err = rm_partition_lock(caller_pt, pt);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_partition() */
        case RM_FUNC_GET_PARTITION :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) 0U);

                /* Call function */
                err = rm_get_partition(caller_pt, &pt);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(pt);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch set_parent() */
        case RM_FUNC_SET_PARENT :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 0U));
                sc_rm_pt_t pt_parent = ((sc_rm_pt_t) RPC_U8(msg, 1U));

                /* Call function */
                err = rm_set_parent(caller_pt, pt, pt_parent);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch move_all() */
        case RM_FUNC_MOVE_ALL :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt_src = ((sc_rm_pt_t) RPC_U8(msg, 0U));
                sc_rm_pt_t pt_dst = ((sc_rm_pt_t) RPC_U8(msg, 1U));
                sc_bool_t move_rsrc = U2B(RPC_U8(msg, 2U));
                sc_bool_t move_pads = U2B(RPC_U8(msg, 3U));

                /* Call function */
                err = rm_move_all(caller_pt, pt_src, pt_dst, move_rsrc,
                    move_pads);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch assign_resource() */
        case RM_FUNC_ASSIGN_RESOURCE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 2U));
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));

                /* Call function */
                err = rm_assign_resource(caller_pt, pt, resource);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch set_resource_movable() */
        case RM_FUNC_SET_RESOURCE_MOVABLE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rsrc_t resource_fst = ((sc_rsrc_t) RPC_U16(msg, 0U));
                sc_rsrc_t resource_lst = ((sc_rsrc_t) RPC_U16(msg, 2U));
                sc_bool_t movable = U2B(RPC_U8(msg, 4U));

                /* Call function */
                err = rm_set_resource_movable(caller_pt, resource_fst,
                    resource_lst, movable);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch set_subsys_rsrc_movable() */
        case RM_FUNC_SET_SUBSYS_RSRC_MOVABLE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));
                sc_bool_t movable = U2B(RPC_U8(msg, 2U));

                /* Call function */
                err = rm_set_subsys_rsrc_movable(caller_pt, resource, movable);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch set_master_attributes() */
        case RM_FUNC_SET_MASTER_ATTRIBUTES :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));
                sc_rm_spa_t sa = ((sc_rm_spa_t) RPC_U8(msg, 2U));
                sc_rm_spa_t pa = ((sc_rm_spa_t) RPC_U8(msg, 3U));
                sc_bool_t smmu_bypass = U2B(RPC_U8(msg, 4U));

                /* Call function */
                err = rm_set_master_attributes(caller_pt, resource, sa, pa,
                    smmu_bypass);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch set_master_sid() */
        case RM_FUNC_SET_MASTER_SID :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));
                sc_rm_sid_t sid = ((sc_rm_sid_t) RPC_U16(msg, 2U));

                /* Call function */
                err = rm_set_master_sid(caller_pt, resource, sid);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch set_peripheral_permissions() */
        case RM_FUNC_SET_PERIPHERAL_PERMISSIONS :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 2U));
                sc_rm_perm_t perm = ((sc_rm_perm_t) RPC_U8(msg, 3U));

                /* Call function */
                err = rm_set_peripheral_permissions(caller_pt, resource, pt,
                    perm);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch is_resource_owned() */
        case RM_FUNC_IS_RESOURCE_OWNED :
            {
                /* Declare return and parameters */
                sc_bool_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));

                /* Call function */
                result = rm_is_resource_owned(caller_pt, resource);

                /* Copy in return parameters */
                RPC_R8(msg) = B2U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_resource_owner() */
        case RM_FUNC_GET_RESOURCE_OWNER :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));
                sc_rm_pt_t pt = ((sc_rm_pt_t) 0U);

                /* Call function */
                err = rm_get_resource_owner(caller_pt, resource, &pt);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(pt);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch is_resource_master() */
        case RM_FUNC_IS_RESOURCE_MASTER :
            {
                /* Declare return and parameters */
                sc_bool_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));

                /* Call function */
                result = rm_is_resource_master(caller_pt, resource);

                /* Copy in return parameters */
                RPC_R8(msg) = B2U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch is_resource_peripheral() */
        case RM_FUNC_IS_RESOURCE_PERIPHERAL :
            {
                /* Declare return and parameters */
                sc_bool_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));

                /* Call function */
                result = rm_is_resource_peripheral(caller_pt, resource);

                /* Copy in return parameters */
                RPC_R8(msg) = B2U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_resource_info() */
        case RM_FUNC_GET_RESOURCE_INFO :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rsrc_t resource = ((sc_rsrc_t) RPC_U16(msg, 0U));
                sc_rm_sid_t sid = ((sc_rm_sid_t) 0U);

                /* Call function */
                err = rm_get_resource_info(caller_pt, resource, &sid);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U16(msg, 0U) = U16(sid);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch memreg_alloc() */
        case RM_FUNC_MEMREG_ALLOC :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_mr_t mr = ((sc_rm_mr_t) 0U);
                sc_faddr_t addr_start = ((sc_faddr_t) RPC_U64(msg, 0U));
                sc_faddr_t addr_end = ((sc_faddr_t) RPC_U64(msg, 8U));

                /* Call function */
                err = rm_memreg_alloc(caller_pt, &mr, addr_start, addr_end);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(mr);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch memreg_split() */
        case RM_FUNC_MEMREG_SPLIT :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_mr_t mr = ((sc_rm_mr_t) RPC_U8(msg, 16U));
                sc_rm_mr_t mr_ret = ((sc_rm_mr_t) 0U);
                sc_faddr_t addr_start = ((sc_faddr_t) RPC_U64(msg, 0U));
                sc_faddr_t addr_end = ((sc_faddr_t) RPC_U64(msg, 8U));

                /* Call function */
                err = rm_memreg_split(caller_pt, mr, &mr_ret, addr_start,
                    addr_end);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(mr_ret);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch memreg_frag() */
        case RM_FUNC_MEMREG_FRAG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_mr_t mr_ret = ((sc_rm_mr_t) 0U);
                sc_faddr_t addr_start = ((sc_faddr_t) RPC_U64(msg, 0U));
                sc_faddr_t addr_end = ((sc_faddr_t) RPC_U64(msg, 8U));

                /* Call function */
                err = rm_memreg_frag(caller_pt, &mr_ret, addr_start, addr_end);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(mr_ret);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch memreg_free() */
        case RM_FUNC_MEMREG_FREE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_mr_t mr = ((sc_rm_mr_t) RPC_U8(msg, 0U));

                /* Call function */
                err = rm_memreg_free(caller_pt, mr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch find_memreg() */
        case RM_FUNC_FIND_MEMREG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_mr_t mr = ((sc_rm_mr_t) 0U);
                sc_faddr_t addr_start = ((sc_faddr_t) RPC_U64(msg, 0U));
                sc_faddr_t addr_end = ((sc_faddr_t) RPC_U64(msg, 8U));

                /* Call function */
                err = rm_find_memreg(caller_pt, &mr, addr_start, addr_end);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(mr);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch assign_memreg() */
        case RM_FUNC_ASSIGN_MEMREG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 0U));
                sc_rm_mr_t mr = ((sc_rm_mr_t) RPC_U8(msg, 1U));

                /* Call function */
                err = rm_assign_memreg(caller_pt, pt, mr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch set_memreg_permissions() */
        case RM_FUNC_SET_MEMREG_PERMISSIONS :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_mr_t mr = ((sc_rm_mr_t) RPC_U8(msg, 0U));
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 1U));
                sc_rm_perm_t perm = ((sc_rm_perm_t) RPC_U8(msg, 2U));

                /* Call function */
                err = rm_set_memreg_permissions(caller_pt, mr, pt, perm);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch set_memreg_iee() */
        case RM_FUNC_SET_MEMREG_IEE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_mr_t mr = ((sc_rm_mr_t) RPC_U8(msg, 0U));
                sc_rm_det_t det = ((sc_rm_det_t) RPC_U8(msg, 1U));
                sc_rm_rmsg_t rmsg = ((sc_rm_rmsg_t) RPC_U8(msg, 2U));

                /* Call function */
                err = rm_set_memreg_iee(caller_pt, mr, det, rmsg);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch is_memreg_owned() */
        case RM_FUNC_IS_MEMREG_OWNED :
            {
                /* Declare return and parameters */
                sc_bool_t result;
                sc_rm_mr_t mr = ((sc_rm_mr_t) RPC_U8(msg, 0U));

                /* Call function */
                result = rm_is_memreg_owned(caller_pt, mr);

                /* Copy in return parameters */
                RPC_R8(msg) = B2U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_memreg_info() */
        case RM_FUNC_GET_MEMREG_INFO :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_mr_t mr = ((sc_rm_mr_t) RPC_U8(msg, 0U));
                sc_faddr_t addr_start = ((sc_faddr_t) 0U);
                sc_faddr_t addr_end = ((sc_faddr_t) 0U);

                /* Call function */
                err = rm_get_memreg_info(caller_pt, mr, &addr_start, &addr_end);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(addr_start >> 32ULL);
                RPC_U32(msg, 4U) = U32(addr_start);
                RPC_U32(msg, 8U) = U32(addr_end >> 32ULL);
                RPC_U32(msg, 12U) = U32(addr_end);
                RPC_SIZE(msg) = 5U;
                break;
            }
        /* Dispatch assign_pad() */
        case RM_FUNC_ASSIGN_PAD :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_rm_pt_t pt = ((sc_rm_pt_t) RPC_U8(msg, 2U));
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));

                /* Call function */
                err = rm_assign_pad(caller_pt, pt, pad);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch set_pad_movable() */
        case RM_FUNC_SET_PAD_MOVABLE :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad_fst = ((sc_pad_t) RPC_U16(msg, 0U));
                sc_pad_t pad_lst = ((sc_pad_t) RPC_U16(msg, 2U));
                sc_bool_t movable = U2B(RPC_U8(msg, 4U));

                /* Call function */
                err = rm_set_pad_movable(caller_pt, pad_fst, pad_lst, movable);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch is_pad_owned() */
        case RM_FUNC_IS_PAD_OWNED :
            {
                /* Declare return and parameters */
                sc_bool_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));

                /* Call function */
                result = rm_is_pad_owned(caller_pt, pad);

                /* Copy in return parameters */
                RPC_R8(msg) = B2U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch dump() */
        case RM_FUNC_DUMP :
            {
                /* Declare return and parameters */

                /* Call function */
                rm_dump(caller_pt);

                /* Copy in return parameters */
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Handle default */
        default :
            {
                RPC_SIZE(msg) = 1;
                err = SC_ERR_NOTFOUND;
                RPC_R8(msg) = (uint8_t) err;
            }
            break;
    }

    /* Fill in header */
    RPC_VER(msg) = SC_RPC_VERSION;
    RPC_SVC(msg) = (uint8_t) SC_RPC_SVC_RETURN;

    /* Handle error debug */
    if (err != SC_ERR_NONE)
    {
        if (rpc_debug)
        {
            always_print("ipc_err: api=rm, func=%d, err=%d\n", func, err);
        }
        else
        {
            rpc_print(0, "ipc_err: api=rm, func=%d, err=%d\n", func, err);
        }
    }
}

/** @} */

