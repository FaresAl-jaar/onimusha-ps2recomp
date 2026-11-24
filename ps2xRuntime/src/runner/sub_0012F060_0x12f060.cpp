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

// Function: sub_0012F060
// Address: 0x12f060 - 0x12f0fc
void sub_0012F060_0x12f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F060_0x12f060");
#endif

    switch (ctx->pc) {
        case 0x12f078u: goto label_12f078;
        case 0x12f0d8u: goto label_12f0d8;
        default: break;
    }

    ctx->pc = 0x12f060u;

    // 0x12f060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f064: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x12f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x12f068: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f06c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f070: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12F070u;
    SET_GPR_U32(ctx, 31, 0x12F078u);
    ctx->pc = 0x12F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F070u;
    // 0x12f074: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12F070u, 0x12F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F078u;
label_12f078:
    // 0x12f078: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x12f078u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f07c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f080: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x12f080u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x12f084: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x12F084u;
    {
        const bool branch_taken_0x12f084 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F084u;
        // 0x12f088: 0x2dac0002  sltiu       $t4, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f084) {
            ctx->pc = 0x12F0E0u;
            goto label_12f0e0;
        }
    }
    ctx->pc = 0x12F08Cu;
    // 0x12f08c: 0x15800015  bnez        $t4, . + 4 + (0x15 << 2)
    ctx->pc = 0x12F08Cu;
    {
        const bool branch_taken_0x12f08c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F08Cu;
        // 0x12f090: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f08c) {
            ctx->pc = 0x12F0E4u;
            goto label_12f0e4;
        }
    }
    ctx->pc = 0x12F094u;
    // 0x12f094: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12f094u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12f098: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12F098u;
    {
        const bool branch_taken_0x12f098 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F098u;
        // 0x12f09c: 0x39af0004  xori        $t7, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f098) {
            ctx->pc = 0x12F0E4u;
            goto label_12f0e4;
        }
    }
    ctx->pc = 0x12F0A0u;
    // 0x12f0a0: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F0A0u;
    {
        const bool branch_taken_0x12f0a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0A0u;
        // 0x12f0a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0a0) {
            ctx->pc = 0x12F0E4u;
            goto label_12f0e4;
        }
    }
    ctx->pc = 0x12F0A8u;
    // 0x12f0a8: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x12f0a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f0ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0b0: 0x5a0000c  bltz        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x12F0B0u;
    {
        const bool branch_taken_0x12f0b0 = (GPR_S64(ctx, 13) < 0);
        ctx->pc = 0x12F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0B0u;
        // 0x12f0b4: 0x29af0020  slti        $t7, $t5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0b0) {
            ctx->pc = 0x12F0E4u;
            goto label_12f0e4;
        }
    }
    ctx->pc = 0x12F0B8u;
    // 0x12f0b8: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12F0B8u;
    {
        const bool branch_taken_0x12f0b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0B8u;
        // 0x12f0bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0b8) {
            ctx->pc = 0x12F0E4u;
            goto label_12f0e4;
        }
    }
    ctx->pc = 0x12F0C0u;
    // 0x12f0c0: 0x29af003d  slti        $t7, $t5, 0x3D
    ctx->pc = 0x12f0c0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x12f0c4: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F0C4u;
    {
        const bool branch_taken_0x12f0c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0C4u;
        // 0x12f0c8: 0x240e003c  addiu       $t6, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0c4) {
            ctx->pc = 0x12F0ECu;
            goto label_12f0ec;
        }
    }
    ctx->pc = 0x12F0CCu;
    // 0x12f0cc: 0xdfaf0010  ld          $t7, 0x10($sp)
    ctx->pc = 0x12f0ccu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f0d0: 0x25aeffc4  addiu       $t6, $t5, -0x3C
    ctx->pc = 0x12f0d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967236));
    // 0x12f0d4: 0x1cf7814  dsllv       $t7, $t7, $t6
    ctx->pc = 0x12f0d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (GPR_U32(ctx, 14) & 0x3F));
label_12f0d8:
    // 0x12f0d8: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x12f0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12f0dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12f0dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_12f0e0:
    // 0x12f0e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12f0e4:
    // 0x12f0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x12F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0E4u;
        // 0x12f0e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F0ECu;
label_12f0ec:
    // 0x12f0ec: 0xdfaf0010  ld          $t7, 0x10($sp)
    ctx->pc = 0x12f0ecu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f0f0: 0x1cd7023  subu        $t6, $t6, $t5
    ctx->pc = 0x12f0f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x12f0f4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12F0F4u;
    {
        const bool branch_taken_0x12f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0F4u;
        // 0x12f0f8: 0x1cf7816  dsrlv       $t7, $t7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 14) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0f4) {
            ctx->pc = 0x12F0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f0d8;
        }
    }
    ctx->pc = 0x12F0FCu;
}
