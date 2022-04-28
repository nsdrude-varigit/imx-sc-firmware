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
 * Header file containing the entry points and debug resource strings
 * for the DC subsystem.
 *
 * @addtogroup DC_SS
 * @{
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by bin/perl/config_ss_h.pl */

#ifndef SC_SS_DC_CONFIG_H
#define SC_SS_DC_CONFIG_H

/*!
 * This define defines the number of resources.
 */
#define SS_NUM_RSRC_DC 11U

/*! Define used to create subsystem function prototypes */
#define SS_FUNC_PROTO_DC \
    void ss_trans_power_mode_dc(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_power_mode_t from_mode, sc_pm_power_mode_t \
        to_mode); \
    sc_err_t ss_set_clock_rate_dc(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_pm_clock_rate_t *rate); \
    sc_err_t ss_clock_enable_dc(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_bool_t enable, sc_bool_t autog); \
    sc_err_t ss_set_clock_parent_dc(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_pm_clk_parent_t new_parent); \
    sc_err_t ss_get_clock_parent_dc(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_pm_clk_parent_t *parent); \
    void ss_rdc_set_master_dc(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t valid, sc_bool_t lock, sc_rm_spa_t sa, \
        sc_rm_spa_t pa, sc_rm_did_t did, sc_rm_sid_t sid, uint8_t cid); \
    void ss_dump_dc(sc_sub_t ss, sc_bool_t xrdc, sc_bool_t dsc, sc_bool_t \
        clk); \
    void ss_prepost_clock_mode_dc(sc_sub_t ss, ss_clock_t clk, ss_prepost_t \
        type, sc_pm_clk_mode_t from_mode, sc_pm_clk_mode_t to_mode); \


/*!
 * This define is used to override the default SS function entry points.
 * If this isn't defined, then the SS uses functions in base.
 */
#define SS_EP_INIT_DC \
    { \
        ss_init_base, \
        ss_trans_power_mode_dc, \
        ss_rsrc_reset_base, \
        ss_set_cpu_power_mode_base, \
        ss_set_cpu_resume_base, \
        ss_req_sys_if_power_mode_base, \
        ss_set_clock_rate_dc, \
        ss_get_clock_rate_base, \
        ss_clock_enable_dc, \
        ss_force_clock_enable_base, \
        ss_set_clock_parent_dc, \
        ss_get_clock_parent_dc, \
        ss_is_rsrc_accessible_base, \
        ss_mu_irq_base, \
        ss_cpu_start_base, \
        ss_rdc_enable_base, \
        ss_rdc_set_master_dc, \
        ss_rdc_set_peripheral_base, \
        ss_rdc_set_memory_base, \
        ss_set_control_base, \
        ss_get_control_base, \
        ss_irq_enable_base, \
        ss_irq_status_base, \
        ss_irq_trigger_base, \
        ss_dump_dc, \
        ss_do_mem_repair_base, \
        ss_updown_base, \
        ss_prepost_power_mode_base, \
        ss_iso_disable_base, \
        ss_link_enable_base, \
        ss_ssi_power_base, \
        ss_ssi_bhole_mode_base, \
        ss_ssi_pause_mode_base, \
        ss_ssi_wait_idle_base, \
        ss_adb_enable_base, \
        ss_adb_wait_base, \
        ss_prepost_clock_mode_dc, \
        ss_rdc_is_did_vld_base, \
    }

#ifdef DEBUG
    /*!
     * This define is used to name resources for debug output.
     */
    #define RNAME_INIT_DC_0 \
        "DC_0", \
        "DC_0_BLIT_OUT", \
        "DC_0_BLIT2", \
        "DC_0_BLIT1", \
        "DC_0_BLIT0", \
        "DC_0_FRAC0", \
        "DC_0_VIDEO0", \
        "DC_0_VIDEO1", \
        "DC_0_WARP", \
        "DC_0_PLL_0", \
        "DC_0_PLL_1", \

    /*!
     * This define is used to name resources for debug output.
     */
    #define RNAME_INIT_DC_1 \
        "DC_1", \
        "DC_1_BLIT_OUT", \
        "DC_1_BLIT2", \
        "DC_1_BLIT1", \
        "DC_1_BLIT0", \
        "DC_1_FRAC0", \
        "DC_1_VIDEO0", \
        "DC_1_VIDEO1", \
        "DC_1_WARP", \
        "DC_1_PLL_0", \
        "DC_1_PLL_1", \

#endif

#endif /* SC_SS_DC_CONFIG_H */

/** @} */

