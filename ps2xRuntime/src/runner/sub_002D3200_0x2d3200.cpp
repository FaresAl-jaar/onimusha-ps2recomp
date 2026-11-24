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

// Function: sub_002D3200
// Address: 0x2d3200 - 0x2d3370
void sub_002D3200_0x2d3200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3200_0x2d3200");
#endif

    switch (ctx->pc) {
        case 0x2d32bcu: goto label_2d32bc;
        default: break;
    }

    ctx->pc = 0x2d3200u;

    // 0x2d3200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d3204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d3208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d320c: 0x10c00054  beqz        $a2, . + 4 + (0x54 << 2)
    ctx->pc = 0x2D320Cu;
    {
        const bool branch_taken_0x2d320c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D320Cu;
        // 0x2d3210: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d320c) {
            ctx->pc = 0x2D3360u;
            goto label_2d3360;
        }
    }
    ctx->pc = 0x2D3214u;
    // 0x2d3214: 0x8cc329c0  lw          $v1, 0x29C0($a2)
    ctx->pc = 0x2d3214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2d3218: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2D3218u;
    {
        const bool branch_taken_0x2d3218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3218) {
            ctx->pc = 0x2D3360u;
            goto label_2d3360;
        }
    }
    ctx->pc = 0x2D3220u;
    // 0x2d3220: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x2d3220u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2d3224: 0x2403008d  addiu       $v1, $zero, 0x8D
    ctx->pc = 0x2d3224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x2d3228: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3228u;
    {
        const bool branch_taken_0x2d3228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3228u;
        // 0x2d322c: 0x92050030  lbu         $a1, 0x30($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3228) {
            ctx->pc = 0x2D3248u;
            goto label_2d3248;
        }
    }
    ctx->pc = 0x2D3230u;
    // 0x2d3230: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x2d3230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2d3234: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3234u;
    {
        const bool branch_taken_0x2d3234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3234) {
            ctx->pc = 0x2D3248u;
            goto label_2d3248;
        }
    }
    ctx->pc = 0x2D323Cu;
    // 0x2d323c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D323Cu;
    {
        const bool branch_taken_0x2d323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d323c) {
            ctx->pc = 0x2D3270u;
            goto label_2d3270;
        }
    }
    ctx->pc = 0x2D3244u;
    // 0x2d3244: 0x0  nop
    ctx->pc = 0x2d3244u;
    // NOP
label_2d3248:
    // 0x2d3248: 0x90c32b24  lbu         $v1, 0x2B24($a2)
    ctx->pc = 0x2d3248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11044)));
    // 0x2d324c: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x2d324cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x2d3250: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2d3250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d3254: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3254u;
    {
        const bool branch_taken_0x2d3254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3254u;
        // 0x2d3258: 0x64030002  daddiu      $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3254) {
            ctx->pc = 0x2D3268u;
            goto label_2d3268;
        }
    }
    ctx->pc = 0x2D325Cu;
    // 0x2d325c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D325Cu;
    {
        const bool branch_taken_0x2d325c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d325c) {
            ctx->pc = 0x2D3278u;
            goto label_2d3278;
        }
    }
    ctx->pc = 0x2D3264u;
    // 0x2d3264: 0x0  nop
    ctx->pc = 0x2d3264u;
    // NOP
label_2d3268:
    // 0x2d3268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3268u;
    {
        const bool branch_taken_0x2d3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3268u;
        // 0x2d326c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3268) {
            ctx->pc = 0x2D3278u;
            goto label_2d3278;
        }
    }
    ctx->pc = 0x2D3270u;
label_2d3270:
    // 0x2d3270: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d3270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3274: 0x0  nop
    ctx->pc = 0x2d3274u;
    // NOP
label_2d3278:
    // 0x2d3278: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x2d3278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d327c: 0x92040030  lbu         $a0, 0x30($s0)
    ctx->pc = 0x2d327cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2d3280: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d3280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3284: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D3284u;
    {
        const bool branch_taken_0x2d3284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3284) {
            ctx->pc = 0x2D3318u;
            goto label_2d3318;
        }
    }
    ctx->pc = 0x2D328Cu;
    // 0x2d328c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3290: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3290u;
    {
        const bool branch_taken_0x2d3290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3290) {
            ctx->pc = 0x2D32C8u;
            goto label_2d32c8;
        }
    }
    ctx->pc = 0x2D3298u;
    // 0x2d3298: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3298u;
    {
        const bool branch_taken_0x2d3298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3298) {
            ctx->pc = 0x2D32A8u;
            goto label_2d32a8;
        }
    }
    ctx->pc = 0x2D32A0u;
    // 0x2d32a0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2D32A0u;
    {
        const bool branch_taken_0x2d32a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d32a0) {
            ctx->pc = 0x2D3360u;
            goto label_2d3360;
        }
    }
    ctx->pc = 0x2D32A8u;
label_2d32a8:
    // 0x2d32a8: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x2d32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2d32ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d32acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d32b0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2d32b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d32b4: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2D32B4u;
    SET_GPR_U32(ctx, 31, 0x2D32BCu);
    ctx->pc = 0x2D32B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D32B4u;
    // 0x2d32b8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2D32B4u, 0x2D32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32BCu;
label_2d32bc:
    // 0x2d32bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d32bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d32c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2D32C0u;
    {
        const bool branch_taken_0x2d32c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D32C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D32C0u;
        // 0x2d32c4: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d32c0) {
            ctx->pc = 0x2D3360u;
            goto label_2d3360;
        }
    }
    ctx->pc = 0x2D32C8u;
label_2d32c8:
    // 0x2d32c8: 0x90c32b24  lbu         $v1, 0x2B24($a2)
    ctx->pc = 0x2d32c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11044)));
    // 0x2d32cc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D32CCu;
    {
        const bool branch_taken_0x2d32cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D32CCu;
        // 0x2d32d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d32cc) {
            ctx->pc = 0x2D3308u;
            goto label_2d3308;
        }
    }
    ctx->pc = 0x2D32D4u;
    // 0x2d32d4: 0x8cc529c0  lw          $a1, 0x29C0($a2)
    ctx->pc = 0x2d32d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2d32d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2d32d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d32dc: 0x94c42b20  lhu         $a0, 0x2B20($a2)
    ctx->pc = 0x2d32dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11040)));
    // 0x2d32e0: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x2d32e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d32e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d32e8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2d32e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d32ec: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D32ECu;
    {
        const bool branch_taken_0x2d32ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d32ec) {
            ctx->pc = 0x2D32FCu;
            goto label_2d32fc;
        }
    }
    ctx->pc = 0x2D32F4u;
    // 0x2d32f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D32F4u;
    {
        const bool branch_taken_0x2d32f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d32f4) {
            ctx->pc = 0x2D3304u;
            goto label_2d3304;
        }
    }
    ctx->pc = 0x2D32FCu;
label_2d32fc:
    // 0x2d32fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D32FCu;
    {
        const bool branch_taken_0x2d32fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D32FCu;
        // 0x2d3300: 0xa31823  subu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d32fc) {
            ctx->pc = 0x2D3308u;
            goto label_2d3308;
        }
    }
    ctx->pc = 0x2D3304u;
label_2d3304:
    // 0x2d3304: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d3304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3308:
    // 0x2d3308: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2d3308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2d330c: 0x94c32b20  lhu         $v1, 0x2B20($a2)
    ctx->pc = 0x2d330cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11040)));
    // 0x2d3310: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D3310u;
    {
        const bool branch_taken_0x2d3310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3310u;
        // 0x2d3314: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3310) {
            ctx->pc = 0x2D3360u;
            goto label_2d3360;
        }
    }
    ctx->pc = 0x2D3318u;
label_2d3318:
    // 0x2d3318: 0x90c32b24  lbu         $v1, 0x2B24($a2)
    ctx->pc = 0x2d3318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11044)));
    // 0x2d331c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D331Cu;
    {
        const bool branch_taken_0x2d331c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d331c) {
            ctx->pc = 0x2D332Cu;
            goto label_2d332c;
        }
    }
    ctx->pc = 0x2D3324u;
    // 0x2d3324: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3324u;
    {
        const bool branch_taken_0x2d3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3324u;
        // 0x2d3328: 0x94c32b22  lhu         $v1, 0x2B22($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3324) {
            ctx->pc = 0x2D3334u;
            goto label_2d3334;
        }
    }
    ctx->pc = 0x2D332Cu;
label_2d332c:
    // 0x2d332c: 0x8cc329c0  lw          $v1, 0x29C0($a2)
    ctx->pc = 0x2d332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2d3330: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2d3330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2d3334:
    // 0x2d3334: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d3334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d3338: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2d3338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d333c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2d333cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2d3340: 0x94c52b22  lhu         $a1, 0x2B22($a2)
    ctx->pc = 0x2d3340u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11042)));
    // 0x2d3344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3348: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3348u;
    {
        const bool branch_taken_0x2d3348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3348u;
        // 0x2d334c: 0xae050020  sw          $a1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3348) {
            ctx->pc = 0x2D3360u;
            goto label_2d3360;
        }
    }
    ctx->pc = 0x2D3350u;
    // 0x2d3350: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2d3350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d3354: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2d3354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2d3358: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2d3358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2d335c: 0x0  nop
    ctx->pc = 0x2d335cu;
    // NOP
label_2d3360:
    // 0x2d3360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3368: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3368u;
        // 0x2d336c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3370u;
}
