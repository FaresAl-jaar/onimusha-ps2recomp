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

// Function: sub_002C5740
// Address: 0x2c5740 - 0x2c57ec
void sub_002C5740_0x2c5740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5740_0x2c5740");
#endif

    switch (ctx->pc) {
        case 0x2c57b8u: goto label_2c57b8;
        default: break;
    }

    ctx->pc = 0x2c5740u;

    // 0x2c5740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c5744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c5748: 0x90830038  lbu         $v1, 0x38($a0)
    ctx->pc = 0x2c5748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2c574c: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2c574cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c5750: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5750u;
    {
        const bool branch_taken_0x2c5750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5750u;
        // 0x2c5754: 0x90c70001  lbu         $a3, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5750) {
            ctx->pc = 0x2C5760u;
            goto label_2c5760;
        }
    }
    ctx->pc = 0x2C5758u;
    // 0x2c5758: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x2c5758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x2c575c: 0x0  nop
    ctx->pc = 0x2c575cu;
    // NOP
label_2c5760:
    // 0x2c5760: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C5760u;
    {
        const bool branch_taken_0x2c5760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5760) {
            ctx->pc = 0x2C57D8u;
            goto label_2c57d8;
        }
    }
    ctx->pc = 0x2C5768u;
    // 0x2c5768: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c5768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c576c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C576Cu;
    {
        const bool branch_taken_0x2c576c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C576Cu;
        // 0x2c5770: 0x90c60003  lbu         $a2, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c576c) {
            ctx->pc = 0x2C57C0u;
            goto label_2c57c0;
        }
    }
    ctx->pc = 0x2C5774u;
    // 0x2c5774: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C5774u;
    {
        const bool branch_taken_0x2c5774 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5774u;
        // 0x2c5778: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5774) {
            ctx->pc = 0x2C57B0u;
            goto label_2c57b0;
        }
    }
    ctx->pc = 0x2C577Cu;
    // 0x2c577c: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c577cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c5780: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c5780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c5784: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c5784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c5788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c5788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c578c: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c578cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c5790: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c5790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c5794: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c5794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5798: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c5798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c579c: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c579cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c57a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c57a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c57a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C57A8u;
    {
        const bool branch_taken_0x2c57a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57A8u;
        // 0x2c57ac: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57a8) {
            ctx->pc = 0x2C57D0u;
            goto label_2c57d0;
        }
    }
    ctx->pc = 0x2C57B0u;
label_2c57b0:
    // 0x2c57b0: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C57B0u;
    SET_GPR_U32(ctx, 31, 0x2C57B8u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C57B0u, 0x2C57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C57B8u;
label_2c57b8:
    // 0x2c57b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C57B8u;
    {
        const bool branch_taken_0x2c57b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c57b8) {
            ctx->pc = 0x2C57C8u;
            goto label_2c57c8;
        }
    }
    ctx->pc = 0x2C57C0u;
label_2c57c0:
    // 0x2c57c0: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c57c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c57c4: 0x0  nop
    ctx->pc = 0x2c57c4u;
    // NOP
label_2c57c8:
    // 0x2c57c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c57c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57cc: 0x0  nop
    ctx->pc = 0x2c57ccu;
    // NOP
label_2c57d0:
    // 0x2c57d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C57D0u;
    {
        const bool branch_taken_0x2c57d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c57d0) {
            ctx->pc = 0x2C57E0u;
            goto label_2c57e0;
        }
    }
    ctx->pc = 0x2C57D8u;
label_2c57d8:
    // 0x2c57d8: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c57dc: 0x0  nop
    ctx->pc = 0x2c57dcu;
    // NOP
label_2c57e0:
    // 0x2c57e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c57e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c57e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C57E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57E4u;
        // 0x2c57e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C57E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C57ECu;
}
