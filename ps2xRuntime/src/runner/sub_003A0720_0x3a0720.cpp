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

// Function: sub_003A0720
// Address: 0x3a0720 - 0x3a0790
void sub_003A0720_0x3a0720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0720_0x3a0720");
#endif

    switch (ctx->pc) {
        case 0x3a0754u: goto label_3a0754;
        case 0x3a075cu: goto label_3a075c;
        default: break;
    }

    ctx->pc = 0x3a0720u;

    // 0x3a0720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a072c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a072cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0730: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A0730u;
    {
        const bool branch_taken_0x3a0730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0730u;
        // 0x3a0734: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0730) {
            ctx->pc = 0x3A0780u;
            goto label_3a0780;
        }
    }
    ctx->pc = 0x3A0738u;
    // 0x3a0738: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3a0738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3a073c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3a073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3a0740: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3a0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3a0744: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3a0744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3a0748: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3a0748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3a074c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3A074Cu;
    SET_GPR_U32(ctx, 31, 0x3A0754u);
    ctx->pc = 0x3A0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A074Cu;
    // 0x3a0750: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3A074Cu, 0x3A0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0754u;
label_3a0754:
    // 0x3a0754: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3A0754u;
    SET_GPR_U32(ctx, 31, 0x3A075Cu);
    ctx->pc = 0x3A0758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0754u;
    // 0x3a0758: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3A0754u, 0x3A075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A075Cu;
label_3a075c:
    // 0x3a075c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3a075cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3a0760: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a0760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0764: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3a0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3a0768: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3a0768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3a076c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3a076cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3a0770: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3a0770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a0774: 0x2463a120  addiu       $v1, $v1, -0x5EE0
    ctx->pc = 0x3a0774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943008));
    // 0x3a0778: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3a0778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3a077c: 0x0  nop
    ctx->pc = 0x3a077cu;
    // NOP
label_3a0780:
    // 0x3a0780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0788: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0788u;
        // 0x3a078c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0790u;
}
