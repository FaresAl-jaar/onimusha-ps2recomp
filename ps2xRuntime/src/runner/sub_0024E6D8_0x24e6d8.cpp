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

// Function: sub_0024E6D8
// Address: 0x24e6d8 - 0x24e7a0
void sub_0024E6D8_0x24e6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E6D8_0x24e6d8");
#endif

    switch (ctx->pc) {
        case 0x24e714u: goto label_24e714;
        case 0x24e764u: goto label_24e764;
        default: break;
    }

    ctx->pc = 0x24e6d8u;

    // 0x24e6d8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e6dc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24e6dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24e6e0: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e6e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e6e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x24e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x24e6ec: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E6ECu;
    {
        const bool branch_taken_0x24e6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6ECu;
        // 0x24e6f0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6ec) {
            ctx->pc = 0x24E704u;
            goto label_24e704;
        }
    }
    ctx->pc = 0x24E6F4u;
    // 0x24e6f4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e6f8: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e6fc: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x24E6FCu;
    {
        const bool branch_taken_0x24e6fc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6FCu;
        // 0x24e700: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6fc) {
            ctx->pc = 0x24E794u;
            goto label_24e794;
        }
    }
    ctx->pc = 0x24E704u;
label_24e704:
    // 0x24e704: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24e704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24e708: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x24e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e70c: 0xc090d6a  jal         func_2435A8
    ctx->pc = 0x24E70Cu;
    SET_GPR_U32(ctx, 31, 0x24E714u);
    ctx->pc = 0x24E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E70Cu;
    // 0x24e710: 0x2484e710  addiu       $a0, $a0, -0x18F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2435A8u, 0x24E70Cu, 0x24E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E714u;
label_24e714:
    // 0x24e714: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24e714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24e718: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x24e718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24e71c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24e71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e720: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x24e720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24e724: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x24e724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24e728: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x24e728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24e72c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E72Cu;
    {
        const bool branch_taken_0x24e72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E72Cu;
        // 0x24e730: 0x24707518  addiu       $s0, $v1, 0x7518 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e72c) {
            ctx->pc = 0x24E740u;
            goto label_24e740;
        }
    }
    ctx->pc = 0x24E734u;
    // 0x24e734: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24E734u;
    {
        const bool branch_taken_0x24e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E734u;
        // 0x24e738: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e734) {
            ctx->pc = 0x24E744u;
            goto label_24e744;
        }
    }
    ctx->pc = 0x24E73Cu;
    // 0x24e73c: 0x0  nop
    ctx->pc = 0x24e73cu;
    // NOP
label_24e740:
    // 0x24e740: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x24e740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_24e744:
    // 0x24e744: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24e744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24e748: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24e748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24e74c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e750: 0x9449752c  lhu         $t1, 0x752C($v0)
    ctx->pc = 0x24e750u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x4D752Cu));
    // 0x24e754: 0x9462752e  lhu         $v0, 0x752E($v1)
    ctx->pc = 0x24e754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x4D752Eu));
    // 0x24e758: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x24e758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x24e75c: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24E75Cu;
    SET_GPR_U32(ctx, 31, 0x24E764u);
    ctx->pc = 0x24E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E75Cu;
    // 0x24e760: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24E75Cu, 0x24E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E764u;
label_24e764:
    // 0x24e764: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x24e764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x24e768: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24e768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24e76c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x24e76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24e770: 0x24637510  addiu       $v1, $v1, 0x7510
    ctx->pc = 0x24e770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29968));
    // 0x24e774: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24e774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24e778: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x24e778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x24e77c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24e780: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x24e780u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4D7514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7514u, _value); } while (0);
    // 0x24e784: 0xac807504  sw          $zero, 0x7504($a0)
    ctx->pc = 0x24e784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4D7504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7504u, _value); } while (0);
    // 0x24e788: 0xaca07508  sw          $zero, 0x7508($a1)
    ctx->pc = 0x24e788u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4D7508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7508u, _value); } while (0);
    // 0x24e78c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x24e78cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x4D7510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7510u, _value); } while (0);
    // 0x24e790: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24e790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24e794:
    // 0x24e794: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x24e794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24e798: 0x3e00008  jr          $ra
    ctx->pc = 0x24E798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E798u;
        // 0x24e79c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E7A0u;
}
