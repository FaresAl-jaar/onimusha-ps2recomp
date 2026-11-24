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

// Function: sub_00339EA0
// Address: 0x339ea0 - 0x339f38
void sub_00339EA0_0x339ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339EA0_0x339ea0");
#endif

    switch (ctx->pc) {
        case 0x339edcu: goto label_339edc;
        case 0x339f14u: goto label_339f14;
        default: break;
    }

    ctx->pc = 0x339ea0u;

    // 0x339ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x339ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339eb0: 0x58140  sll         $s0, $a1, 5
    ctx->pc = 0x339eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x339eb4: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x339eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x339eb8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x339eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x339ebc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x339ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x339ec0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x339EC0u;
    {
        const bool branch_taken_0x339ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EC0u;
        // 0x339ec4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ec0) {
            ctx->pc = 0x339EE8u;
            goto label_339ee8;
        }
    }
    ctx->pc = 0x339EC8u;
    // 0x339ec8: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x339ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x339ecc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339ed0: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x339ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x339ed4: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x339ED4u;
    SET_GPR_U32(ctx, 31, 0x339EDCu);
    ctx->pc = 0x339ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339ED4u;
    // 0x339ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x339ED4u, 0x339EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339EDCu;
label_339edc:
    // 0x339edc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x339EDCu;
    {
        const bool branch_taken_0x339edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339edc) {
            ctx->pc = 0x339F18u;
            goto label_339f18;
        }
    }
    ctx->pc = 0x339EE4u;
    // 0x339ee4: 0x0  nop
    ctx->pc = 0x339ee4u;
    // NOP
label_339ee8:
    // 0x339ee8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x339ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x339eec: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x339eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x339ef0: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x339ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x339ef4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x339ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339ef8: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x339ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x339efc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x339efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339f00: 0x34430700  ori         $v1, $v0, 0x700
    ctx->pc = 0x339f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x339f04: 0x34420500  ori         $v0, $v0, 0x500
    ctx->pc = 0x339f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x339f08: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x339f08u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x339f0c: 0xc0c9a00  jal         func_326800
    ctx->pc = 0x339F0Cu;
    SET_GPR_U32(ctx, 31, 0x339F14u);
    ctx->pc = 0x339F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339F0Cu;
    // 0x339f10: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326800u, 0x339F0Cu, 0x339F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339F14u;
label_339f14:
    // 0x339f14: 0x0  nop
    ctx->pc = 0x339f14u;
    // NOP
label_339f18:
    // 0x339f18: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x339f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x339f1c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x339f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x339f20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x339f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x339f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339f30: 0x3e00008  jr          $ra
    ctx->pc = 0x339F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F30u;
        // 0x339f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339F38u;
}
