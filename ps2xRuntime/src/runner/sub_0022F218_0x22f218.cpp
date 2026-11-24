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

// Function: sub_0022F218
// Address: 0x22f218 - 0x22f2a0
void sub_0022F218_0x22f218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F218_0x22f218");
#endif

    switch (ctx->pc) {
        case 0x22f254u: goto label_22f254;
        case 0x22f270u: goto label_22f270;
        case 0x22f278u: goto label_22f278;
        default: break;
    }

    ctx->pc = 0x22f218u;

    // 0x22f218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f228: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f22c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f230: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f234: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f238: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22f238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f23c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22f240: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22f240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f244: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22f244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22f248: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f24c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F24Cu;
    SET_GPR_U32(ctx, 31, 0x22F254u);
    ctx->pc = 0x22F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F24Cu;
    // 0x22f250: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F24Cu, 0x22F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F254u;
label_22f254:
    // 0x22f254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f25c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f260: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22f260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f264: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x22f264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f268: 0xc08bca8  jal         func_22F2A0
    ctx->pc = 0x22F268u;
    SET_GPR_U32(ctx, 31, 0x22F270u);
    ctx->pc = 0x22F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F268u;
    // 0x22f26c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F2A0u, 0x22F268u, 0x22F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F270u;
label_22f270:
    // 0x22f270: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F270u;
    SET_GPR_U32(ctx, 31, 0x22F278u);
    ctx->pc = 0x22F274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F270u;
    // 0x22f274: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F270u, 0x22F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F278u;
label_22f278:
    // 0x22f278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f27c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f28c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22f28cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f290: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22f290u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22f294: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22f294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f298: 0x3e00008  jr          $ra
    ctx->pc = 0x22F298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F298u;
        // 0x22f29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F2A0u;
}
