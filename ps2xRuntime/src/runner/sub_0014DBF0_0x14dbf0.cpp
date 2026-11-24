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

// Function: sub_0014DBF0
// Address: 0x14dbf0 - 0x14dcbc
void sub_0014DBF0_0x14dbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DBF0_0x14dbf0");
#endif

    switch (ctx->pc) {
        case 0x14dc64u: goto label_14dc64;
        default: break;
    }

    ctx->pc = 0x14dbf0u;

    // 0x14dbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14dbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14dbf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14dbf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14dbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14dbfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14dbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14dc00: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x14dc00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x14dc04: 0x2e010009  sltiu       $at, $s0, 0x9
    ctx->pc = 0x14dc04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x14dc08: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x14DC08u;
    {
        const bool branch_taken_0x14dc08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC08u;
        // 0x14dc0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc08) {
            ctx->pc = 0x14DC80u;
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DC10u;
    // 0x14dc10: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x14dc10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x14dc14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14dc18: 0x24844a50  addiu       $a0, $a0, 0x4A50
    ctx->pc = 0x14dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19024));
    // 0x14dc1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14dc20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14dc24: 0x600008  jr          $v1
    ctx->pc = 0x14DC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DC30u: goto label_14dc30;
            case 0x14DC38u: goto label_14dc38;
            case 0x14DC40u: goto label_14dc40;
            case 0x14DC48u: goto label_14dc48;
            case 0x14DC50u: goto label_14dc50;
            case 0x14DC58u: goto label_14dc58;
            case 0x14DC70u: goto label_14dc70;
            case 0x14DC78u: goto label_14dc78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DC24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14DC2Cu;
    // 0x14dc2c: 0x0  nop
    ctx->pc = 0x14dc2cu;
    // NOP
label_14dc30:
    // 0x14dc30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14DC30u;
    {
        const bool branch_taken_0x14dc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC30u;
        // 0x14dc34: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc30) {
            ctx->pc = 0x14DC80u;
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DC38u;
label_14dc38:
    // 0x14dc38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14DC38u;
    {
        const bool branch_taken_0x14dc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC38u;
        // 0x14dc3c: 0xae25001c  sw          $a1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc38) {
            ctx->pc = 0x14DC80u;
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DC40u;
label_14dc40:
    // 0x14dc40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14DC40u;
    {
        const bool branch_taken_0x14dc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC40u;
        // 0x14dc44: 0xae25001c  sw          $a1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc40) {
            ctx->pc = 0x14DC80u;
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DC48u;
label_14dc48:
    // 0x14dc48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14DC48u;
    {
        const bool branch_taken_0x14dc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC48u;
        // 0x14dc4c: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc48) {
            ctx->pc = 0x14DC80u;
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DC50u;
label_14dc50:
    // 0x14dc50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14DC50u;
    {
        const bool branch_taken_0x14dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC50u;
        // 0x14dc54: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc50) {
            ctx->pc = 0x14DC80u;
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DC58u;
label_14dc58:
    // 0x14dc58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14dc5c: 0xc05e390  jal         func_178E40
    ctx->pc = 0x14DC5Cu;
    SET_GPR_U32(ctx, 31, 0x14DC64u);
    ctx->pc = 0x14DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC5Cu;
    // 0x14dc60: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x14DC5Cu, 0x14DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC64u;
label_14dc64:
    // 0x14dc64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14DC64u;
    {
        const bool branch_taken_0x14dc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc64) {
            ctx->pc = 0x14DC80u;
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DC6Cu;
    // 0x14dc6c: 0x0  nop
    ctx->pc = 0x14dc6cu;
    // NOP
label_14dc70:
    // 0x14dc70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DC70u;
    {
        const bool branch_taken_0x14dc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC70u;
        // 0x14dc74: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc70) {
            ctx->pc = 0x14DC80u;
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DC78u;
label_14dc78:
    // 0x14dc78: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x14dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x14dc7c: 0x0  nop
    ctx->pc = 0x14dc7cu;
    // NOP
label_14dc80:
    // 0x14dc80: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14dc84: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DC84u;
    {
        const bool branch_taken_0x14dc84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x14dc84) {
            ctx->pc = 0x14DCA8u;
            goto label_14dca8;
        }
    }
    ctx->pc = 0x14DC8Cu;
    // 0x14dc8c: 0x96244060  lhu         $a0, 0x4060($s1)
    ctx->pc = 0x14dc8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16480)));
    // 0x14dc90: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x14dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14dc94: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14dc98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14dc9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x14dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x14dca0: 0xa060085e  sb          $zero, 0x85E($v1)
    ctx->pc = 0x14dca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2142), (uint8_t)GPR_U32(ctx, 0));
    // 0x14dca4: 0x0  nop
    ctx->pc = 0x14dca4u;
    // NOP
label_14dca8:
    // 0x14dca8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14dca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dcac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14dcacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dcb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14dcb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x14DCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCB4u;
        // 0x14dcb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DCBCu;
}
