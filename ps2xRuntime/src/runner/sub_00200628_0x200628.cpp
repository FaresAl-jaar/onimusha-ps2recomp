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

// Function: sub_00200628
// Address: 0x200628 - 0x2006cc
void sub_00200628_0x200628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200628_0x200628");
#endif

    switch (ctx->pc) {
        case 0x20065cu: goto label_20065c;
        case 0x200688u: goto label_200688;
        default: break;
    }

    ctx->pc = 0x200628u;

    // 0x200628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20062c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200638: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20063c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20063cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200640: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x200640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x200644: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x200644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x200648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20064c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20064cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200650: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x200650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x200654: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x200654u;
    SET_GPR_U32(ctx, 31, 0x20065Cu);
    ctx->pc = 0x200658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200654u;
    // 0x200658: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x200654u, 0x20065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20065Cu;
label_20065c:
    // 0x20065c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20065cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200664: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200664u;
    {
        const bool branch_taken_0x200664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x200668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200664u;
        // 0x200668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200664) {
            ctx->pc = 0x200680u;
            goto label_200680;
        }
    }
    ctx->pc = 0x20066Cu;
    // 0x20066c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20066cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x200670: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x200670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x200674: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x200674u;
    {
        const bool branch_taken_0x200674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200674u;
        // 0x200678: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200674) {
            ctx->pc = 0x200694u;
            goto label_200694;
        }
    }
    ctx->pc = 0x20067Cu;
    // 0x20067c: 0x0  nop
    ctx->pc = 0x20067cu;
    // NOP
label_200680:
    // 0x200680: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x200680u;
    SET_GPR_U32(ctx, 31, 0x200688u);
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x200680u, 0x200688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200688u;
label_200688:
    // 0x200688: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x200688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20068c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x200690: 0x2042823  subu        $a1, $s0, $a0
    ctx->pc = 0x200690u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_200694:
    // 0x200694: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200698: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x200698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20069c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20069cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2006a0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2006a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2006a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2006a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2006a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2006a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2006ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2006acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2006b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2006b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2006b4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2006b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2006b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2006b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2006bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2006bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2006c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2006c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2006c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2006C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2006C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006C4u;
        // 0x2006c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2006C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2006CCu;
}
