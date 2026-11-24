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

// Function: sub_00291230
// Address: 0x291230 - 0x2912d0
void sub_00291230_0x291230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291230_0x291230");
#endif

    switch (ctx->pc) {
        case 0x291258u: goto label_291258;
        case 0x2912a0u: goto label_2912a0;
        default: break;
    }

    ctx->pc = 0x291230u;

    // 0x291230: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x291230u;
    {
        const bool branch_taken_0x291230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x291230) {
            ctx->pc = 0x291288u;
            goto label_291288;
        }
    }
    ctx->pc = 0x291238u;
    // 0x291238: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x291238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x29123c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x29123cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x291240: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x291240u;
    {
        const bool branch_taken_0x291240 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x291244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291240u;
        // 0x291244: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291240) {
            ctx->pc = 0x2912C8u;
            goto label_2912c8;
        }
    }
    ctx->pc = 0x291248u;
    // 0x291248: 0x240701f0  addiu       $a3, $zero, 0x1F0
    ctx->pc = 0x291248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x29124c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x29124cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x291250: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x291250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x291254: 0x0  nop
    ctx->pc = 0x291254u;
    // NOP
label_291258:
    // 0x291258: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x291258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x29125c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x29125cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x291260: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x291260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x291264: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x291264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x291268: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x291268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x29126c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x29126cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x291270: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x291270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x291274: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x291274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x291278: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x291278u;
    {
        const bool branch_taken_0x291278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291278u;
        // 0x29127c: 0x24e701f0  addiu       $a3, $a3, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291278) {
            ctx->pc = 0x291258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291258;
        }
    }
    ctx->pc = 0x291280u;
    // 0x291280: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x291280u;
    {
        const bool branch_taken_0x291280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291280) {
            ctx->pc = 0x2912C8u;
            goto label_2912c8;
        }
    }
    ctx->pc = 0x291288u;
label_291288:
    // 0x291288: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x291288u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x29128c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x29128cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x291290: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x291290u;
    {
        const bool branch_taken_0x291290 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x291294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291290u;
        // 0x291294: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291290) {
            ctx->pc = 0x2912C8u;
            goto label_2912c8;
        }
    }
    ctx->pc = 0x291298u;
    // 0x291298: 0x240701f0  addiu       $a3, $zero, 0x1F0
    ctx->pc = 0x291298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x29129c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x29129cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_2912a0:
    // 0x2912a0: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x2912a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2912a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2912a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2912a8: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x2912a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2912ac: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2912acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2912b0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2912b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2912b4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2912b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2912b8: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x2912b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2912bc: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x2912bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2912c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2912C0u;
    {
        const bool branch_taken_0x2912c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2912C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912C0u;
        // 0x2912c4: 0x24e701f0  addiu       $a3, $a3, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912c0) {
            ctx->pc = 0x2912A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2912a0;
        }
    }
    ctx->pc = 0x2912C8u;
label_2912c8:
    // 0x2912c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2912C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2912C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2912D0u;
}
