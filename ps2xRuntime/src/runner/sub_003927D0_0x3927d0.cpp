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

// Function: sub_003927D0
// Address: 0x3927d0 - 0x3928a0
void sub_003927D0_0x3927d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003927D0_0x3927d0");
#endif

    switch (ctx->pc) {
        case 0x3927e4u: goto label_3927e4;
        default: break;
    }

    ctx->pc = 0x3927d0u;

    // 0x3927d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3927d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3927d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3927d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3927d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3927d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3927dc: 0xc0ab8e0  jal         func_2AE380
    ctx->pc = 0x3927DCu;
    SET_GPR_U32(ctx, 31, 0x3927E4u);
    ctx->pc = 0x3927E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3927DCu;
    // 0x3927e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE380u, 0x3927DCu, 0x3927E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3927E4u;
label_3927e4:
    // 0x3927e4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x3927e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x3927e8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x3927e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3927ec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3927ECu;
    {
        const bool branch_taken_0x3927ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3927F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927ECu;
        // 0x3927f0: 0x240400e8  addiu       $a0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3927ec) {
            ctx->pc = 0x3927F8u;
            goto label_3927f8;
        }
    }
    ctx->pc = 0x3927F4u;
    // 0x3927f4: 0x24040128  addiu       $a0, $zero, 0x128
    ctx->pc = 0x3927f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
label_3927f8:
    // 0x3927f8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x3927f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3927fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3927fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x392800: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x392800u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x392804: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x392804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x392808: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x392808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x39280c: 0x3c042028  lui         $a0, 0x2028
    ctx->pc = 0x39280cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8232 << 16));
    // 0x392810: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x392810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x392814: 0x34850156  ori         $a1, $a0, 0x156
    ctx->pc = 0x392814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)342);
    // 0x392818: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x392818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x39281c: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x39281cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x392820: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x392820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x392824: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x392824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x392828: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x392828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x39282c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x39282cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x392830: 0x3404fff9  ori         $a0, $zero, 0xFFF9
    ctx->pc = 0x392830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x392834: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x392834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x392838: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x392838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x39283c: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x39283cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x392840: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x392840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x392844: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x392844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x392848: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x392848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x39284c: 0x34652000  ori         $a1, $v1, 0x2000
    ctx->pc = 0x39284cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x392850: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x392850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x392854: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x392854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x392858: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x392858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x39285c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x39285cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x392860: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x392860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x392864: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x392864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x392868: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x392868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39286c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x39286cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x392870: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x392870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x392874: 0xa204000f  sb          $a0, 0xF($s0)
    ctx->pc = 0x392874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x392878: 0xa2000031  sb          $zero, 0x31($s0)
    ctx->pc = 0x392878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x39287c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x39287cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x392880: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x392880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x392884: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x392884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x392888: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x392888u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x39288c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x39288cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x392890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x392890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392898: 0x3e00008  jr          $ra
    ctx->pc = 0x392898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392898u;
        // 0x39289c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3928A0u;
}
