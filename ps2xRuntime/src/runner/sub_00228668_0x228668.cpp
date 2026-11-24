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

// Function: sub_00228668
// Address: 0x228668 - 0x2286e4
void sub_00228668_0x228668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228668_0x228668");
#endif

    switch (ctx->pc) {
        case 0x2286a8u: goto label_2286a8;
        case 0x2286b8u: goto label_2286b8;
        case 0x2286c0u: goto label_2286c0;
        default: break;
    }

    ctx->pc = 0x228668u;

    // 0x228668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22866c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x228674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x228678: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x228678u;
    {
        const bool branch_taken_0x228678 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228678u;
        // 0x22867c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228678) {
            ctx->pc = 0x2286A0u;
            goto label_2286a0;
        }
    }
    ctx->pc = 0x228680u;
    // 0x228680: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x228688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22868c: 0x248496d8  addiu       $a0, $a0, -0x6928
    ctx->pc = 0x22868cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940376));
    // 0x228690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x228690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228694: 0x808a0d4  j           func_228350
    ctx->pc = 0x228694u;
    ctx->pc = 0x228698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228694u;
    // 0x228698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    sub_00228350_0x228350(rdram, ctx, runtime); return;
    ctx->pc = 0x22869Cu;
    // 0x22869c: 0x0  nop
    ctx->pc = 0x22869cu;
    // NOP
label_2286a0:
    // 0x2286a0: 0xc08a0c8  jal         func_228320
    ctx->pc = 0x2286A0u;
    SET_GPR_U32(ctx, 31, 0x2286A8u);
    ctx->pc = 0x2286A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2286A0u;
    // 0x2286a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228320u, 0x2286A0u, 0x2286A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2286A8u;
label_2286a8:
    // 0x2286a8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2286a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2286ac: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2286ACu;
    {
        const bool branch_taken_0x2286ac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2286ac) {
            ctx->pc = 0x2286B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2286ACu;
            // 0x2286b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2286D4u;
            goto label_2286d4;
        }
    }
    ctx->pc = 0x2286B4u;
    // 0x2286b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2286b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2286b8:
    // 0x2286b8: 0xc08a1ba  jal         func_2286E8
    ctx->pc = 0x2286B8u;
    SET_GPR_U32(ctx, 31, 0x2286C0u);
    ctx->pc = 0x2286BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2286B8u;
    // 0x2286bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286E8u, 0x2286B8u, 0x2286C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2286C0u;
label_2286c0:
    // 0x2286c0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2286c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2286c4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2286c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2286c8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2286C8u;
    {
        const bool branch_taken_0x2286c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2286CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286C8u;
        // 0x2286cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286c8) {
            ctx->pc = 0x2286B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2286b8;
        }
    }
    ctx->pc = 0x2286D0u;
    // 0x2286d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2286d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2286d4:
    // 0x2286d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2286d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2286d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2286d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2286dc: 0x808a0ce  j           func_228338
    ctx->pc = 0x2286DCu;
    ctx->pc = 0x2286E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2286DCu;
    // 0x2286e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228338u;
    sub_00228338_0x228338(rdram, ctx, runtime); return;
    ctx->pc = 0x2286E4u;
}
