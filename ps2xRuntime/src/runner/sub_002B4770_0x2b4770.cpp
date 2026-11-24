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

// Function: sub_002B4770
// Address: 0x2b4770 - 0x2b4828
void sub_002B4770_0x2b4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4770_0x2b4770");
#endif

    switch (ctx->pc) {
        case 0x2b4798u: goto label_2b4798;
        case 0x2b47a8u: goto label_2b47a8;
        default: break;
    }

    ctx->pc = 0x2b4770u;

    // 0x2b4770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b4774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b4778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b477c: 0x87838234  lh          $v1, -0x7DCC($gp)
    ctx->pc = 0x2b477cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935092)));
    // 0x2b4780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4784: 0x93828236  lbu         $v0, -0x7DCA($gp)
    ctx->pc = 0x2b4784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935094)));
    // 0x2b4788: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2b4788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2b478c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2b478cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b4790: 0xc0b2bc0  jal         func_2CAF00
    ctx->pc = 0x2B4790u;
    SET_GPR_U32(ctx, 31, 0x2B4798u);
    ctx->pc = 0x2B4794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4790u;
    // 0x2b4794: 0xa0820002  sb          $v0, 0x2($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF00u, 0x2B4790u, 0x2B4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4798u;
label_2b4798:
    // 0x2b4798: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2b4798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b479c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B479Cu;
    {
        const bool branch_taken_0x2b479c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B479Cu;
        // 0x2b47a0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b479c) {
            ctx->pc = 0x2B4818u;
            goto label_2b4818;
        }
    }
    ctx->pc = 0x2B47A4u;
    // 0x2b47a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b47a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b47a8:
    // 0x2b47a8: 0x14650017  bne         $v1, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B47A8u;
    {
        const bool branch_taken_0x2b47a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b47a8) {
            ctx->pc = 0x2B4808u;
            goto label_2b4808;
        }
    }
    ctx->pc = 0x2B47B0u;
    // 0x2b47b0: 0x8cc329c0  lw          $v1, 0x29C0($a2)
    ctx->pc = 0x2b47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2b47b4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2b47b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b47b8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B47B8u;
    {
        const bool branch_taken_0x2b47b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b47b8) {
            ctx->pc = 0x2B47F8u;
            goto label_2b47f8;
        }
    }
    ctx->pc = 0x2B47C0u;
    // 0x2b47c0: 0x8cc306c8  lw          $v1, 0x6C8($a2)
    ctx->pc = 0x2b47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1736)));
    // 0x2b47c4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2b47c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2b47c8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B47C8u;
    {
        const bool branch_taken_0x2b47c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b47c8) {
            ctx->pc = 0x2B47F8u;
            goto label_2b47f8;
        }
    }
    ctx->pc = 0x2B47D0u;
    // 0x2b47d0: 0x90c32ab0  lbu         $v1, 0x2AB0($a2)
    ctx->pc = 0x2b47d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10928)));
    // 0x2b47d4: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2b47d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2b47d8: 0xa0c32ab0  sb          $v1, 0x2AB0($a2)
    ctx->pc = 0x2b47d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10928), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b47dc: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x2b47dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x2b47e0: 0x90c42ab0  lbu         $a0, 0x2AB0($a2)
    ctx->pc = 0x2b47e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10928)));
    // 0x2b47e4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2b47e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2b47e8: 0x9063002c  lbu         $v1, 0x2C($v1)
    ctx->pc = 0x2b47e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2b47ec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2b47ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b47f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B47F0u;
    {
        const bool branch_taken_0x2b47f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47F0u;
        // 0x2b47f4: 0xa0c32ab0  sb          $v1, 0x2AB0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 10928), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47f0) {
            ctx->pc = 0x2B4808u;
            goto label_2b4808;
        }
    }
    ctx->pc = 0x2B47F8u;
label_2b47f8:
    // 0x2b47f8: 0x90c32ab0  lbu         $v1, 0x2AB0($a2)
    ctx->pc = 0x2b47f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10928)));
    // 0x2b47fc: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x2b47fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x2b4800: 0xa0c32ab0  sb          $v1, 0x2AB0($a2)
    ctx->pc = 0x2b4800u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10928), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4804: 0x0  nop
    ctx->pc = 0x2b4804u;
    // NOP
label_2b4808:
    // 0x2b4808: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x2b4808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2b480c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2b480cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b4810: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2B4810u;
    {
        const bool branch_taken_0x2b4810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4810) {
            ctx->pc = 0x2B47A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b47a8;
        }
    }
    ctx->pc = 0x2B4818u;
label_2b4818:
    // 0x2b4818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b481c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b481cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4820: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4820u;
        // 0x2b4824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4828u;
}
