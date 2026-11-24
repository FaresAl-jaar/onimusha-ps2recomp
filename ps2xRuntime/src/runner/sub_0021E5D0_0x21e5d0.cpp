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

// Function: sub_0021E5D0
// Address: 0x21e5d0 - 0x21e658
void sub_0021E5D0_0x21e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E5D0_0x21e5d0");
#endif

    switch (ctx->pc) {
        case 0x21e604u: goto label_21e604;
        case 0x21e63cu: goto label_21e63c;
        default: break;
    }

    ctx->pc = 0x21e5d0u;

    // 0x21e5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e5d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e5d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21e5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e5e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21e5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e5e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21e5e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5ec: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E5ECu;
    {
        const bool branch_taken_0x21e5ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5ECu;
        // 0x21e5f0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5ec) {
            ctx->pc = 0x21E63Cu;
            goto label_21e63c;
        }
    }
    ctx->pc = 0x21E5F4u;
    // 0x21e5f4: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E5F4u;
    {
        const bool branch_taken_0x21e5f4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x21E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5F4u;
        // 0x21e5f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5f4) {
            ctx->pc = 0x21E640u;
            goto label_21e640;
        }
    }
    ctx->pc = 0x21E5FCu;
    // 0x21e5fc: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21E5FCu;
    SET_GPR_U32(ctx, 31, 0x21E604u);
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21E5FCu, 0x21E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E604u;
label_21e604:
    // 0x21e604: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21e608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e60c: 0x34a50165  ori         $a1, $a1, 0x165
    ctx->pc = 0x21e60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)357);
    // 0x21e610: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E610u;
    {
        const bool branch_taken_0x21e610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E610u;
        // 0x21e614: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e610) {
            ctx->pc = 0x21E630u;
            goto label_21e630;
        }
    }
    ctx->pc = 0x21E618u;
    // 0x21e618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e61c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e620: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e624: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e628: 0x80848e0  j           func_212380
    ctx->pc = 0x21E628u;
    ctx->pc = 0x21E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E628u;
    // 0x21e62c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21E630u;
label_21e630:
    // 0x21e630: 0x264413bc  addiu       $a0, $s2, 0x13BC
    ctx->pc = 0x21e630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5052));
    // 0x21e634: 0xc087996  jal         func_21E658
    ctx->pc = 0x21E634u;
    SET_GPR_U32(ctx, 31, 0x21E63Cu);
    ctx->pc = 0x21E638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E634u;
    // 0x21e638: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x21E634u, 0x21E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E63Cu;
label_21e63c:
    // 0x21e63c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e640:
    // 0x21e640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e648: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e64c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e650: 0x3e00008  jr          $ra
    ctx->pc = 0x21E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E650u;
        // 0x21e654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E658u;
}
