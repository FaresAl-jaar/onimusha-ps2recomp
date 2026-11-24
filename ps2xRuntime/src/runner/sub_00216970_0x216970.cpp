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

// Function: sub_00216970
// Address: 0x216970 - 0x216a18
void sub_00216970_0x216970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216970_0x216970");
#endif

    switch (ctx->pc) {
        case 0x2169ccu: goto label_2169cc;
        case 0x2169f0u: goto label_2169f0;
        default: break;
    }

    ctx->pc = 0x216970u;

    // 0x216970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x216970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x216974: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x216974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216978: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x216978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21697c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21697cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216980: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x216980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x216984: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x216984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216988: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x216988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21698c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x21698cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216990: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x216990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x216994: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x216994u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216998: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x216998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21699c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21699cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2169a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2169a4: 0x26021fb8  addiu       $v0, $s0, 0x1FB8
    ctx->pc = 0x2169a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8120));
    // 0x2169a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2169a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2169ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2169acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169b0: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x2169b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2169b4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2169b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2169b8: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x2169b8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x2169bc: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2169BCu;
    {
        const bool branch_taken_0x2169bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2169C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169BCu;
        // 0x2169c0: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169bc) {
            ctx->pc = 0x2169F4u;
            goto label_2169f4;
        }
    }
    ctx->pc = 0x2169C4u;
    // 0x2169c4: 0xc087a00  jal         func_21E800
    ctx->pc = 0x2169C4u;
    SET_GPR_U32(ctx, 31, 0x2169CCu);
    ctx->pc = 0x21E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E800u, 0x2169C4u, 0x2169CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169CCu;
label_2169cc:
    // 0x2169cc: 0x26040d30  addiu       $a0, $s0, 0xD30
    ctx->pc = 0x2169ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x2169d0: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x2169d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2169d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2169d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169d8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2169d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2169DCu;
    {
        const bool branch_taken_0x2169dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2169E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169DCu;
        // 0x2169e0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169dc) {
            ctx->pc = 0x2169F4u;
            goto label_2169f4;
        }
    }
    ctx->pc = 0x2169E4u;
    // 0x2169e4: 0x26650118  addiu       $a1, $s3, 0x118
    ctx->pc = 0x2169e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x2169e8: 0xc085a90  jal         func_216A40
    ctx->pc = 0x2169E8u;
    SET_GPR_U32(ctx, 31, 0x2169F0u);
    ctx->pc = 0x2169ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169E8u;
    // 0x2169ec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216A40u, 0x2169E8u, 0x2169F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169F0u;
label_2169f0:
    // 0x2169f0: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x2169f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_2169f4:
    // 0x2169f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2169f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2169f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2169f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2169fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2169fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216a00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x216a00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216a04: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x216a04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216a08: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x216a08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x216a0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x216a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216a10: 0x3e00008  jr          $ra
    ctx->pc = 0x216A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A10u;
        // 0x216a14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216A18u;
}
