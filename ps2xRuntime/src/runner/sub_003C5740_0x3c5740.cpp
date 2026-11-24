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

// Function: sub_003C5740
// Address: 0x3c5740 - 0x3c57b0
void sub_003C5740_0x3c5740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5740_0x3c5740");
#endif

    switch (ctx->pc) {
        case 0x3c5754u: goto label_3c5754;
        case 0x3c5794u: goto label_3c5794;
        case 0x3c579cu: goto label_3c579c;
        default: break;
    }

    ctx->pc = 0x3c5740u;

    // 0x3c5740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c5740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c5744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c5744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c5748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c5748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c574c: 0xc0a7114  jal         func_29C450
    ctx->pc = 0x3C574Cu;
    SET_GPR_U32(ctx, 31, 0x3C5754u);
    ctx->pc = 0x3C5750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C574Cu;
    // 0x3c5750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C450u, 0x3C574Cu, 0x3C5754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5754u;
label_3c5754:
    // 0x3c5754: 0x8e07004c  lw          $a3, 0x4C($s0)
    ctx->pc = 0x3c5754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c5758: 0x3c06457a  lui         $a2, 0x457A
    ctx->pc = 0x3c5758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17786 << 16));
    // 0x3c575c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3c575cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3c5760: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c5760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c5764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5768: 0x8ce50094  lw          $a1, 0x94($a3)
    ctx->pc = 0x3c5768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x3c576c: 0x24a50770  addiu       $a1, $a1, 0x770
    ctx->pc = 0x3c576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1904));
    // 0x3c5770: 0xace50088  sw          $a1, 0x88($a3)
    ctx->pc = 0x3c5770u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 5));
    // 0x3c5774: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3c5774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c5778: 0xaca60084  sw          $a2, 0x84($a1)
    ctx->pc = 0x3c5778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 6));
    // 0x3c577c: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x3c577cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c5780: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3c5780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c5784: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3c5784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3c5788: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3c5788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3c578c: 0xc0f1a48  jal         func_3C6920
    ctx->pc = 0x3C578Cu;
    SET_GPR_U32(ctx, 31, 0x3C5794u);
    ctx->pc = 0x3C5790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C578Cu;
    // 0x3c5790: 0xa2020163  sb          $v0, 0x163($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 355), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6920u, 0x3C578Cu, 0x3C5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5794u;
label_3c5794:
    // 0x3c5794: 0xc0f1adc  jal         func_3C6B70
    ctx->pc = 0x3C5794u;
    SET_GPR_U32(ctx, 31, 0x3C579Cu);
    ctx->pc = 0x3C5798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5794u;
    // 0x3c5798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6B70u, 0x3C5794u, 0x3C579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C579Cu;
label_3c579c:
    // 0x3c579c: 0xa2000506  sb          $zero, 0x506($s0)
    ctx->pc = 0x3c579cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1286), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c57a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c57a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c57a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c57a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c57a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C57A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57A8u;
        // 0x3c57ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C57A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C57B0u;
}
