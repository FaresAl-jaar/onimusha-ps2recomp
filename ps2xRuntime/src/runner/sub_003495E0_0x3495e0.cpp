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

// Function: sub_003495E0
// Address: 0x3495e0 - 0x349634
void sub_003495E0_0x3495e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003495E0_0x3495e0");
#endif

    switch (ctx->pc) {
        case 0x349604u: goto label_349604;
        case 0x34960cu: goto label_34960c;
        default: break;
    }

    ctx->pc = 0x3495e0u;

    // 0x3495e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3495e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3495e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3495e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3495e8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x3495e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3495ec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3495ECu;
    {
        const bool branch_taken_0x3495ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3495F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495ECu;
        // 0x3495f0: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495ec) {
            ctx->pc = 0x349628u;
            goto label_349628;
        }
    }
    ctx->pc = 0x3495F4u;
    // 0x3495f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3495f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3495f8: 0x24849d90  addiu       $a0, $a0, -0x6270
    ctx->pc = 0x3495f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942096));
    // 0x3495fc: 0xc049590  jal         func_125640
    ctx->pc = 0x3495FCu;
    SET_GPR_U32(ctx, 31, 0x349604u);
    ctx->pc = 0x349600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495FCu;
    // 0x349600: 0x240602f4  addiu       $a2, $zero, 0x2F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3495FCu, 0x349604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349604u;
label_349604:
    // 0x349604: 0xc0969d8  jal         func_25A760
    ctx->pc = 0x349604u;
    SET_GPR_U32(ctx, 31, 0x34960Cu);
    ctx->pc = 0x349608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349604u;
    // 0x349608: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A760u, 0x349604u, 0x34960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34960Cu;
label_34960c:
    // 0x34960c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34960cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x349610: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x349610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x349614: 0x24639d90  addiu       $v1, $v1, -0x6270
    ctx->pc = 0x349614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942096));
    // 0x349618: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x349618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34961c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x349620: 0xaf838ba8  sw          $v1, -0x7458($gp)
    ctx->pc = 0x349620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937512), GPR_U32(ctx, 3));
    // 0x349624: 0x0  nop
    ctx->pc = 0x349624u;
    // NOP
label_349628:
    // 0x349628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34962c: 0x3e00008  jr          $ra
    ctx->pc = 0x34962Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34962Cu;
        // 0x349630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34962Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349634u;
}
