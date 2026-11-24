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

// Function: sub_004031D8
// Address: 0x4031d8 - 0x40325c
void sub_004031D8_0x4031d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004031D8_0x4031d8");
#endif

    switch (ctx->pc) {
        case 0x4031f8u: goto label_4031f8;
        case 0x403218u: goto label_403218;
        default: break;
    }

    ctx->pc = 0x4031d8u;

    // 0x4031d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4031d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4031dc: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x4031dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x4031e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4031e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4031e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4031e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4031e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4031e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4031ec: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x4031ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x4031f0: 0xc01d07a  jal         func_0741E8
    ctx->pc = 0x4031F0u;
    SET_GPR_U32(ctx, 31, 0x4031F8u);
    ctx->pc = 0x4031F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4031F0u;
    // 0x4031f4: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x741E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x741E8u, 0x4031F0u, 0x4031F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4031F8u;
label_4031f8:
    // 0x4031f8: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4031f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x4031fc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4031fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x403200: 0x3c0603ff  lui         $a2, 0x3FF
    ctx->pc = 0x403200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1023 << 16));
    // 0x403204: 0x3c070c00  lui         $a3, 0xC00
    ctx->pc = 0x403204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3072 << 16));
    // 0x403208: 0x24434780  addiu       $v1, $v0, 0x4780
    ctx->pc = 0x403208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18304));
    // 0x40320c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403210: 0x34a5c402  ori         $a1, $a1, 0xC402
    ctx->pc = 0x403210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50178);
    // 0x403214: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x403214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_403218:
    // 0x403218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x403218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40321c: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40321Cu;
    {
        const bool branch_taken_0x40321c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x40321c) {
            ctx->pc = 0x403220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40321Cu;
            // 0x403220: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40323Cu;
            goto label_40323c;
        }
    }
    ctx->pc = 0x403224u;
    // 0x403224: 0x16050009  bne         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x403224u;
    {
        const bool branch_taken_0x403224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x403228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403224u;
        // 0x403228: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403224) {
            ctx->pc = 0x40324Cu;
            goto label_40324c;
        }
    }
    ctx->pc = 0x40322Cu;
    // 0x40322c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x40322cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x403230: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x403230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x403234: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x403234u;
    {
        const bool branch_taken_0x403234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403234u;
        // 0x403238: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403234) {
            ctx->pc = 0x40324Cu;
            goto label_40324c;
        }
    }
    ctx->pc = 0x40323Cu;
label_40323c:
    // 0x40323c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x40323cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x403240: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x403240u;
    {
        const bool branch_taken_0x403240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403240u;
        // 0x403244: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403240) {
            ctx->pc = 0x403218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403218;
        }
    }
    ctx->pc = 0x403248u;
    // 0x403248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x403248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40324c:
    // 0x40324c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x403250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x403254: 0x3e00008  jr          $ra
    ctx->pc = 0x403254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403254u;
        // 0x403258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40325Cu;
}
