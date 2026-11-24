#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F3240
// Address: 0x2f3240 - 0x2f33dc
void sub_002F3240_0x2f3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3240_0x2f3240");
#endif

    switch (ctx->pc) {
        case 0x2f3278u: goto label_2f3278;
        case 0x2f33a0u: goto label_2f33a0;
        default: break;
    }

    ctx->pc = 0x2f3240u;

    // 0x2f3240: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f3240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f3244: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x2f3244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f3248: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x2f3248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2f324c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f324cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3250: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2f3250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2f3254: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3258: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2f3258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f325c: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F325Cu;
    {
        const bool branch_taken_0x2f325c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F325Cu;
        // 0x2f3260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f325c) {
            ctx->pc = 0x2F33D0u;
            goto label_2f33d0;
        }
    }
    ctx->pc = 0x2F3264u;
    // 0x2f3264: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x2f3264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f3268: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F3268u;
    {
        const bool branch_taken_0x2f3268 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3268u;
        // 0x2f326c: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3268) {
            ctx->pc = 0x2F3388u;
            goto label_2f3388;
        }
    }
    ctx->pc = 0x2F3270u;
    // 0x2f3270: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f3270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f3274: 0x24428f90  addiu       $v0, $v0, -0x7070
    ctx->pc = 0x2f3274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938512));
label_2f3278:
    // 0x2f3278: 0x94480006  lhu         $t0, 0x6($v0)
    ctx->pc = 0x2f3278u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2f327c: 0x25090007  addiu       $t1, $t0, 0x7
    ctx->pc = 0x2f327cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2f3280: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3280u;
    {
        const bool branch_taken_0x2f3280 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x2F3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3280u;
        // 0x2f3284: 0x940c3  sra         $t0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3280) {
            ctx->pc = 0x2F3290u;
            goto label_2f3290;
        }
    }
    ctx->pc = 0x2F3288u;
    // 0x2f3288: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x2f3288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x2f328c: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x2f328cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_2f3290:
    // 0x2f3290: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x2f3290u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f3294: 0x94480016  lhu         $t0, 0x16($v0)
    ctx->pc = 0x2f3294u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x2f3298: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2f3298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2f329c: 0x25090007  addiu       $t1, $t0, 0x7
    ctx->pc = 0x2f329cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2f32a0: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F32A0u;
    {
        const bool branch_taken_0x2f32a0 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x2F32A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32A0u;
        // 0x2f32a4: 0x940c3  sra         $t0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32a0) {
            ctx->pc = 0x2F32B0u;
            goto label_2f32b0;
        }
    }
    ctx->pc = 0x2F32A8u;
    // 0x2f32a8: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x2f32a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x2f32ac: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x2f32acu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_2f32b0:
    // 0x2f32b0: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x2f32b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f32b4: 0x94480026  lhu         $t0, 0x26($v0)
    ctx->pc = 0x2f32b4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x2f32b8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2f32b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2f32bc: 0x25090007  addiu       $t1, $t0, 0x7
    ctx->pc = 0x2f32bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2f32c0: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F32C0u;
    {
        const bool branch_taken_0x2f32c0 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x2F32C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32C0u;
        // 0x2f32c4: 0x940c3  sra         $t0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32c0) {
            ctx->pc = 0x2F32D0u;
            goto label_2f32d0;
        }
    }
    ctx->pc = 0x2F32C8u;
    // 0x2f32c8: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x2f32c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x2f32cc: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x2f32ccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_2f32d0:
    // 0x2f32d0: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x2f32d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f32d4: 0x94480036  lhu         $t0, 0x36($v0)
    ctx->pc = 0x2f32d4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x2f32d8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2f32d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2f32dc: 0x25090007  addiu       $t1, $t0, 0x7
    ctx->pc = 0x2f32dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2f32e0: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F32E0u;
    {
        const bool branch_taken_0x2f32e0 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x2F32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32E0u;
        // 0x2f32e4: 0x940c3  sra         $t0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32e0) {
            ctx->pc = 0x2F32F0u;
            goto label_2f32f0;
        }
    }
    ctx->pc = 0x2F32E8u;
    // 0x2f32e8: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x2f32e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x2f32ec: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x2f32ecu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_2f32f0:
    // 0x2f32f0: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x2f32f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f32f4: 0x94480046  lhu         $t0, 0x46($v0)
    ctx->pc = 0x2f32f4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2f32f8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2f32f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2f32fc: 0x25090007  addiu       $t1, $t0, 0x7
    ctx->pc = 0x2f32fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2f3300: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3300u;
    {
        const bool branch_taken_0x2f3300 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x2F3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3300u;
        // 0x2f3304: 0x940c3  sra         $t0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3300) {
            ctx->pc = 0x2F3310u;
            goto label_2f3310;
        }
    }
    ctx->pc = 0x2F3308u;
    // 0x2f3308: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x2f3308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x2f330c: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x2f330cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_2f3310:
    // 0x2f3310: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x2f3310u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f3314: 0x94480056  lhu         $t0, 0x56($v0)
    ctx->pc = 0x2f3314u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
    // 0x2f3318: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2f3318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2f331c: 0x25090007  addiu       $t1, $t0, 0x7
    ctx->pc = 0x2f331cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2f3320: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3320u;
    {
        const bool branch_taken_0x2f3320 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x2F3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3320u;
        // 0x2f3324: 0x940c3  sra         $t0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3320) {
            ctx->pc = 0x2F3330u;
            goto label_2f3330;
        }
    }
    ctx->pc = 0x2F3328u;
    // 0x2f3328: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x2f3328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x2f332c: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x2f332cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_2f3330:
    // 0x2f3330: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x2f3330u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f3334: 0x94480066  lhu         $t0, 0x66($v0)
    ctx->pc = 0x2f3334u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 102)));
    // 0x2f3338: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2f3338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2f333c: 0x25090007  addiu       $t1, $t0, 0x7
    ctx->pc = 0x2f333cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2f3340: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3340u;
    {
        const bool branch_taken_0x2f3340 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x2F3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3340u;
        // 0x2f3344: 0x940c3  sra         $t0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3340) {
            ctx->pc = 0x2F3350u;
            goto label_2f3350;
        }
    }
    ctx->pc = 0x2F3348u;
    // 0x2f3348: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x2f3348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x2f334c: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x2f334cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_2f3350:
    // 0x2f3350: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x2f3350u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f3354: 0x94480076  lhu         $t0, 0x76($v0)
    ctx->pc = 0x2f3354u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 118)));
    // 0x2f3358: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2f3358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2f335c: 0x25090007  addiu       $t1, $t0, 0x7
    ctx->pc = 0x2f335cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2f3360: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3360u;
    {
        const bool branch_taken_0x2f3360 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x2F3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3360u;
        // 0x2f3364: 0x940c3  sra         $t0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3360) {
            ctx->pc = 0x2F3370u;
            goto label_2f3370;
        }
    }
    ctx->pc = 0x2F3368u;
    // 0x2f3368: 0x25280007  addiu       $t0, $t1, 0x7
    ctx->pc = 0x2f3368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x2f336c: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x2f336cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_2f3370:
    // 0x2f3370: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2f3370u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f3374: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f3374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f3378: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2f3378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2f337c: 0xa4402a  slt         $t0, $a1, $a0
    ctx->pc = 0x2f337cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f3380: 0x1500ffbd  bnez        $t0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2F3380u;
    {
        const bool branch_taken_0x2f3380 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3380u;
        // 0x2f3384: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3380) {
            ctx->pc = 0x2F3278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3278;
        }
    }
    ctx->pc = 0x2F3388u;
label_2f3388:
    // 0x2f3388: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2f3388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f338c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F338Cu;
    {
        const bool branch_taken_0x2f338c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F338Cu;
        // 0x2f3390: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f338c) {
            ctx->pc = 0x2F33D0u;
            goto label_2f33d0;
        }
    }
    ctx->pc = 0x2F3394u;
    // 0x2f3394: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2f3394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2f3398: 0x24428f90  addiu       $v0, $v0, -0x7070
    ctx->pc = 0x2f3398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938512));
    // 0x2f339c: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x2f339cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f33a0:
    // 0x2f33a0: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x2f33a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x2f33a4: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2f33a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2f33a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F33A8u;
    {
        const bool branch_taken_0x2f33a8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2F33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33A8u;
        // 0x2f33ac: 0x410c3  sra         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33a8) {
            ctx->pc = 0x2F33B8u;
            goto label_2f33b8;
        }
    }
    ctx->pc = 0x2F33B0u;
    // 0x2f33b0: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x2f33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x2f33b4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2f33b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2f33b8:
    // 0x2f33b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2f33bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f33bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f33c0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2f33c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f33c4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2f33c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f33c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F33C8u;
    {
        const bool branch_taken_0x2f33c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33C8u;
        // 0x2f33cc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33c8) {
            ctx->pc = 0x2F33A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f33a0;
        }
    }
    ctx->pc = 0x2F33D0u;
label_2f33d0:
    // 0x2f33d0: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x2f33d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2f33d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F33D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33D4u;
        // 0x2f33d8: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F33D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F33DCu;
}
