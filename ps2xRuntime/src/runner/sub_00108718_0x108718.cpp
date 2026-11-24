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

// Function: sub_00108718
// Address: 0x108718 - 0x1087d4
void sub_00108718_0x108718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108718_0x108718");
#endif

    switch (ctx->pc) {
        case 0x1087acu: goto label_1087ac;
        default: break;
    }

    ctx->pc = 0x108718u;

    // 0x108718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10871c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x10871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x108720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108724: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x108724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10872c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10872cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108730: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x108730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108734: 0x8c820820  lw          $v0, 0x820($a0)
    ctx->pc = 0x108734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2080)));
    // 0x108738: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x108738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x10873c: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x10873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x108740: 0xac4906dc  sw          $t1, 0x6DC($v0)
    ctx->pc = 0x108740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 9));
    // 0x108744: 0xac8901c0  sw          $t1, 0x1C0($a0)
    ctx->pc = 0x108744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 9));
    // 0x108748: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x108748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x10874c: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10874Cu;
    {
        const bool branch_taken_0x10874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x10874c) {
            ctx->pc = 0x108750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10874Cu;
            // 0x108750: 0x8c830184  lw          $v1, 0x184($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108768u;
            goto label_108768;
        }
    }
    ctx->pc = 0x108754u;
    // 0x108754: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x108754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x108758: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x108758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x10875c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x10875cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x108760: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x108760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x108764: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x108764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_108768:
    // 0x108768: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10876c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10876Cu;
    {
        const bool branch_taken_0x10876c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10876c) {
            ctx->pc = 0x108770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10876Cu;
            // 0x108770: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10877Cu;
            goto label_10877c;
        }
    }
    ctx->pc = 0x108774u;
    // 0x108774: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x108774u;
    {
        const bool branch_taken_0x108774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108774u;
        // 0x108778: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108774) {
            ctx->pc = 0x108790u;
            goto label_108790;
        }
    }
    ctx->pc = 0x10877Cu;
label_10877c:
    // 0x10877c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x10877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x108780: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x108780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x108784: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x108784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x108788: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x108788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x10878c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x10878cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_108790:
    // 0x108790: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x108790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x108794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108798: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108798u;
    {
        const bool branch_taken_0x108798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108798) {
            ctx->pc = 0x10879Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108798u;
            // 0x10879c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1087B4u;
            goto label_1087b4;
        }
    }
    ctx->pc = 0x1087A0u;
    // 0x1087a0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1087a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1087a4: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x1087A4u;
    SET_GPR_U32(ctx, 31, 0x1087ACu);
    ctx->pc = 0x1087A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087A4u;
    // 0x1087a8: 0x24a51ef8  addiu       $a1, $a1, 0x1EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x1087A4u, 0x1087ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087ACu;
label_1087ac:
    // 0x1087ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1087acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1087b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1087b4:
    // 0x1087b4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1087b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1087b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1087b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1087bc: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1087bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1087c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1087c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1087c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1087c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1087c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1087cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1087CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1087D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087CCu;
        // 0x1087d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1087CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1087D4u;
}
