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

// Function: sub_00273E90
// Address: 0x273e90 - 0x273f44
void sub_00273E90_0x273e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273E90_0x273e90");
#endif

    switch (ctx->pc) {
        case 0x273eecu: goto label_273eec;
        case 0x273ef8u: goto label_273ef8;
        default: break;
    }

    ctx->pc = 0x273e90u;

    // 0x273e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273e94: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x273e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x273e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273e9c: 0x838488a4  lb          $a0, -0x775C($gp)
    ctx->pc = 0x273e9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x273ea0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x273EA0u;
    {
        const bool branch_taken_0x273ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x273EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EA0u;
        // 0x273ea4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ea0) {
            ctx->pc = 0x273EB0u;
            goto label_273eb0;
        }
    }
    ctx->pc = 0x273EA8u;
    // 0x273ea8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x273EA8u;
    {
        const bool branch_taken_0x273ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EA8u;
        // 0x273eac: 0xa78388f0  sh          $v1, -0x7710($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936816), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ea8) {
            ctx->pc = 0x273F38u;
            goto label_273f38;
        }
    }
    ctx->pc = 0x273EB0u;
label_273eb0:
    // 0x273eb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273eb4: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x273EB4u;
    {
        const bool branch_taken_0x273eb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x273eb4) {
            ctx->pc = 0x273F38u;
            goto label_273f38;
        }
    }
    ctx->pc = 0x273EBCu;
    // 0x273ebc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x273ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273ec0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x273ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x273ec4: 0xa38288a4  sb          $v0, -0x775C($gp)
    ctx->pc = 0x273ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936740), (uint8_t)GPR_U32(ctx, 2));
    // 0x273ec8: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x273ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x273ecc: 0x978788c0  lhu         $a3, -0x7740($gp)
    ctx->pc = 0x273eccu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936768)));
    // 0x273ed0: 0x978288bc  lhu         $v0, -0x7744($gp)
    ctx->pc = 0x273ed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273ed4: 0x938888a0  lbu         $t0, -0x7760($gp)
    ctx->pc = 0x273ed4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x273ed8: 0x978588b4  lhu         $a1, -0x774C($gp)
    ctx->pc = 0x273ed8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x273edc: 0x938988ac  lbu         $t1, -0x7754($gp)
    ctx->pc = 0x273edcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936748)));
    // 0x273ee0: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x273ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x273ee4: 0xc0b657c  jal         func_2D95F0
    ctx->pc = 0x273EE4u;
    SET_GPR_U32(ctx, 31, 0x273EECu);
    ctx->pc = 0x273EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EE4u;
    // 0x273ee8: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D95F0u, 0x273EE4u, 0x273EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EECu;
label_273eec:
    // 0x273eec: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x273eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x273ef0: 0xc0ce074  jal         func_3381D0
    ctx->pc = 0x273EF0u;
    SET_GPR_U32(ctx, 31, 0x273EF8u);
    ctx->pc = 0x273EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EF0u;
    // 0x273ef4: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3381D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3381D0u, 0x273EF0u, 0x273EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EF8u;
label_273ef8:
    // 0x273ef8: 0x838388a0  lb          $v1, -0x7760($gp)
    ctx->pc = 0x273ef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x273efc: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x273efcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x273f00: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x273F00u;
    {
        const bool branch_taken_0x273f00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F00u;
        // 0x273f04: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f00) {
            ctx->pc = 0x273F38u;
            goto label_273f38;
        }
    }
    ctx->pc = 0x273F08u;
    // 0x273f08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273f0c: 0x24845a40  addiu       $a0, $a0, 0x5A40
    ctx->pc = 0x273f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
    // 0x273f10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273f14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x273f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273f18: 0x600008  jr          $v1
    ctx->pc = 0x273F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273F20u: goto label_273f20;
            case 0x273F30u: goto label_273f30;
            case 0x273F38u: goto label_273f38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273F20u;
label_273f20:
    // 0x273f20: 0x978388bc  lhu         $v1, -0x7744($gp)
    ctx->pc = 0x273f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273f24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273F24u;
    {
        const bool branch_taken_0x273f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F24u;
        // 0x273f28: 0xa78388c0  sh          $v1, -0x7740($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936768), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f24) {
            ctx->pc = 0x273F38u;
            goto label_273f38;
        }
    }
    ctx->pc = 0x273F2Cu;
    // 0x273f2c: 0x0  nop
    ctx->pc = 0x273f2cu;
    // NOP
label_273f30:
    // 0x273f30: 0x978388c0  lhu         $v1, -0x7740($gp)
    ctx->pc = 0x273f30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936768)));
    // 0x273f34: 0xa78388bc  sh          $v1, -0x7744($gp)
    ctx->pc = 0x273f34u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 3));
label_273f38:
    // 0x273f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x273F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F3Cu;
        // 0x273f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273F44u;
}
