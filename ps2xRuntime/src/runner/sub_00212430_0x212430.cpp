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

// Function: sub_00212430
// Address: 0x212430 - 0x2124c4
void sub_00212430_0x212430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212430_0x212430");
#endif

    switch (ctx->pc) {
        case 0x212460u: goto label_212460;
        case 0x212470u: goto label_212470;
        case 0x2124a8u: goto label_2124a8;
        default: break;
    }

    ctx->pc = 0x212430u;

    // 0x212430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21243c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21243cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212440: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x212440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x212448: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x212448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21244c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21244Cu;
    {
        const bool branch_taken_0x21244c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x212450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21244Cu;
        // 0x212450: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21244c) {
            ctx->pc = 0x212468u;
            goto label_212468;
        }
    }
    ctx->pc = 0x212454u;
    // 0x212454: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x212454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x212458: 0xc084932  jal         func_2124C8
    ctx->pc = 0x212458u;
    SET_GPR_U32(ctx, 31, 0x212460u);
    ctx->pc = 0x21245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212458u;
    // 0x21245c: 0x2484a164  addiu       $a0, $a0, -0x5E9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124C8u, 0x212458u, 0x212460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212460u;
label_212460:
    // 0x212460: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x212460u;
    {
        const bool branch_taken_0x212460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212460u;
        // 0x212464: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212460) {
            ctx->pc = 0x2124ACu;
            goto label_2124ac;
        }
    }
    ctx->pc = 0x212468u;
label_212468:
    // 0x212468: 0xc084968  jal         func_2125A0
    ctx->pc = 0x212468u;
    SET_GPR_U32(ctx, 31, 0x212470u);
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x212468u, 0x212470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212470u;
label_212470:
    // 0x212470: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x212470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x212474: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x212474u;
    {
        const bool branch_taken_0x212474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212474u;
        // 0x212478: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212474) {
            ctx->pc = 0x212498u;
            goto label_212498;
        }
    }
    ctx->pc = 0x21247Cu;
    // 0x21247c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21247cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212480: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x212480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x212484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212488: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21248c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21248cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212490: 0x80848e0  j           func_212380
    ctx->pc = 0x212490u;
    ctx->pc = 0x212494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212490u;
    // 0x212494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x212498u;
label_212498:
    // 0x212498: 0x260409f8  addiu       $a0, $s0, 0x9F8
    ctx->pc = 0x212498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2552));
    // 0x21249c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21249cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124a0: 0xc084932  jal         func_2124C8
    ctx->pc = 0x2124A0u;
    SET_GPR_U32(ctx, 31, 0x2124A8u);
    ctx->pc = 0x2124A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124A0u;
    // 0x2124a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124C8u, 0x2124A0u, 0x2124A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124A8u;
label_2124a8:
    // 0x2124a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2124a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2124ac:
    // 0x2124ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2124acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2124b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2124b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2124b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2124b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2124b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2124bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2124BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2124C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124BCu;
        // 0x2124c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2124BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2124C4u;
}
