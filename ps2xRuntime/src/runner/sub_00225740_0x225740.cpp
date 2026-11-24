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

// Function: sub_00225740
// Address: 0x225740 - 0x2257b4
void sub_00225740_0x225740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225740_0x225740");
#endif

    switch (ctx->pc) {
        case 0x225760u: goto label_225760;
        case 0x225798u: goto label_225798;
        default: break;
    }

    ctx->pc = 0x225740u;

    // 0x225740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22574c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225750: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x225750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225758: 0xc089c5a  jal         func_227168
    ctx->pc = 0x225758u;
    SET_GPR_U32(ctx, 31, 0x225760u);
    ctx->pc = 0x22575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225758u;
    // 0x22575c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227168u, 0x225758u, 0x225760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225760u;
label_225760:
    // 0x225760: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x225760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x225764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22576c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x22576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x225770: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x225770u;
    {
        const bool branch_taken_0x225770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x225774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225770u;
        // 0x225774: 0x24c691f8  addiu       $a2, $a2, -0x6E08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225770) {
            ctx->pc = 0x225790u;
            goto label_225790;
        }
    }
    ctx->pc = 0x225778u;
    // 0x225778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22577c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22577cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225788: 0x80898b2  j           func_2262C8
    ctx->pc = 0x225788u;
    ctx->pc = 0x22578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225788u;
    // 0x22578c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    sub_002262C8_0x2262c8(rdram, ctx, runtime); return;
    ctx->pc = 0x225790u;
label_225790:
    // 0x225790: 0xc089da8  jal         func_2276A0
    ctx->pc = 0x225790u;
    SET_GPR_U32(ctx, 31, 0x225798u);
    ctx->pc = 0x2276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2276A0u, 0x225790u, 0x225798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225798u;
label_225798:
    // 0x225798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22579c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22579cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2257a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2257a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2257a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2257a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2257a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2257ac: 0x8089554  j           func_225550
    ctx->pc = 0x2257ACu;
    ctx->pc = 0x2257B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257ACu;
    // 0x2257b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225550u;
    sub_00225550_0x225550(rdram, ctx, runtime); return;
    ctx->pc = 0x2257B4u;
}
