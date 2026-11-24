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

// Function: sub_002732A0
// Address: 0x2732a0 - 0x273340
void sub_002732A0_0x2732a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002732A0_0x2732a0");
#endif

    switch (ctx->pc) {
        case 0x2732b8u: goto label_2732b8;
        case 0x2732c8u: goto label_2732c8;
        case 0x2732d4u: goto label_2732d4;
        case 0x2732ecu: goto label_2732ec;
        case 0x273300u: goto label_273300;
        case 0x27331cu: goto label_27331c;
        case 0x273334u: goto label_273334;
        default: break;
    }

    ctx->pc = 0x2732a0u;

    // 0x2732a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2732a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2732a4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2732a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2732a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2732a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2732ac: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x2732acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x2732b0: 0xc0b65e8  jal         func_2D97A0
    ctx->pc = 0x2732B0u;
    SET_GPR_U32(ctx, 31, 0x2732B8u);
    ctx->pc = 0x2732B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732B0u;
    // 0x2732b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D97A0u, 0x2732B0u, 0x2732B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732B8u;
label_2732b8:
    // 0x2732b8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2732b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2732bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2732bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732c0: 0xc0ce078  jal         func_3381E0
    ctx->pc = 0x2732C0u;
    SET_GPR_U32(ctx, 31, 0x2732C8u);
    ctx->pc = 0x2732C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732C0u;
    // 0x2732c4: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3381E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3381E0u, 0x2732C0u, 0x2732C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732C8u;
label_2732c8:
    // 0x2732c8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2732c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2732cc: 0xc0b65e4  jal         func_2D9790
    ctx->pc = 0x2732CCu;
    SET_GPR_U32(ctx, 31, 0x2732D4u);
    ctx->pc = 0x2732D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732CCu;
    // 0x2732d0: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9790u, 0x2732CCu, 0x2732D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732D4u;
label_2732d4:
    // 0x2732d4: 0x978588b8  lhu         $a1, -0x7748($gp)
    ctx->pc = 0x2732d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x2732d8: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2732D8u;
    {
        const bool branch_taken_0x2732d8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2732DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732D8u;
        // 0x2732dc: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732d8) {
            ctx->pc = 0x273310u;
            goto label_273310;
        }
    }
    ctx->pc = 0x2732E0u;
    // 0x2732e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2732e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732e4: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x2732E4u;
    SET_GPR_U32(ctx, 31, 0x2732ECu);
    ctx->pc = 0x2732E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732E4u;
    // 0x2732e8: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x2732E4u, 0x2732ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732ECu;
label_2732ec:
    // 0x2732ec: 0xa78288c8  sh          $v0, -0x7738($gp)
    ctx->pc = 0x2732ecu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936776), (uint16_t)GPR_U32(ctx, 2));
    // 0x2732f0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2732f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2732f4: 0x978588c8  lhu         $a1, -0x7738($gp)
    ctx->pc = 0x2732f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936776)));
    // 0x2732f8: 0xc07cc2c  jal         func_1F30B0
    ctx->pc = 0x2732F8u;
    SET_GPR_U32(ctx, 31, 0x273300u);
    ctx->pc = 0x2732FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732F8u;
    // 0x2732fc: 0x2484f820  addiu       $a0, $a0, -0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B0u, 0x2732F8u, 0x273300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273300u;
label_273300:
    // 0x273300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273300u;
    {
        const bool branch_taken_0x273300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273300u;
        // 0x273304: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273300) {
            ctx->pc = 0x273310u;
            goto label_273310;
        }
    }
    ctx->pc = 0x273308u;
    // 0x273308: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x273308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x27330c: 0x0  nop
    ctx->pc = 0x27330cu;
    // NOP
label_273310:
    // 0x273310: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x273310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x273314: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x273314u;
    SET_GPR_U32(ctx, 31, 0x27331Cu);
    ctx->pc = 0x273318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273314u;
    // 0x273318: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x273314u, 0x27331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27331Cu;
label_27331c:
    // 0x27331c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x27331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x273320: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x273320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x273324: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x273324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x273328: 0xa38288a4  sb          $v0, -0x775C($gp)
    ctx->pc = 0x273328u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936740), (uint8_t)GPR_U32(ctx, 2));
    // 0x27332c: 0xc0ce978  jal         func_33A5E0
    ctx->pc = 0x27332Cu;
    SET_GPR_U32(ctx, 31, 0x273334u);
    ctx->pc = 0x273330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27332Cu;
    // 0x273330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A5E0u, 0x27332Cu, 0x273334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273334u;
label_273334:
    // 0x273334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273338: 0x3e00008  jr          $ra
    ctx->pc = 0x273338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273338u;
        // 0x27333c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273340u;
}
