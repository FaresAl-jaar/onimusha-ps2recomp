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

// Function: sub_00331710
// Address: 0x331710 - 0x331794
void sub_00331710_0x331710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331710_0x331710");
#endif

    switch (ctx->pc) {
        case 0x331748u: goto label_331748;
        case 0x331778u: goto label_331778;
        default: break;
    }

    ctx->pc = 0x331710u;

    // 0x331710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x331710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x331714: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x331714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x331718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x331718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33171c: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x33171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x331720: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x331720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x331724: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x331728: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x331728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33172c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x331730: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x331730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x331738: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x331738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33173c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x33173cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x331740: 0xc0dace0  jal         func_36B380
    ctx->pc = 0x331740u;
    SET_GPR_U32(ctx, 31, 0x331748u);
    ctx->pc = 0x331744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331740u;
    // 0x331744: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B380u, 0x331740u, 0x331748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331748u;
label_331748:
    // 0x331748: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x331748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x33174c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33174cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x331750: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x331750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x331754: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x331754u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x331758: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x331758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x33175c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33175cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331760: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x331760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x331764: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x331764u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x331768: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x331768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33176c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x33176cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x331770: 0xc095f88  jal         func_257E20
    ctx->pc = 0x331770u;
    SET_GPR_U32(ctx, 31, 0x331778u);
    ctx->pc = 0x331774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331770u;
    // 0x331774: 0x2529ce10  addiu       $t1, $t1, -0x31F0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x331770u, 0x331778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331778u;
label_331778:
    // 0x331778: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x331778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33177c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33177cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331780: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33178c: 0x3e00008  jr          $ra
    ctx->pc = 0x33178Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33178Cu;
        // 0x331790: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33178Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331794u;
}
