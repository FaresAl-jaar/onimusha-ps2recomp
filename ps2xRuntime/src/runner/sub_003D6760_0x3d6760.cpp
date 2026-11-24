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

// Function: sub_003D6760
// Address: 0x3d6760 - 0x3d6834
void sub_003D6760_0x3d6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6760_0x3d6760");
#endif

    switch (ctx->pc) {
        case 0x3d67d4u: goto label_3d67d4;
        case 0x3d6804u: goto label_3d6804;
        case 0x3d6810u: goto label_3d6810;
        default: break;
    }

    ctx->pc = 0x3d6760u;

    // 0x3d6760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d6764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d6764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d6768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d6768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d676c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d6770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d6770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d6774: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d6774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d6778: 0x10650023  beq         $v1, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3D6778u;
    {
        const bool branch_taken_0x3d6778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3D677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6778u;
        // 0x3d677c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6778) {
            ctx->pc = 0x3D6808u;
            goto label_3d6808;
        }
    }
    ctx->pc = 0x3D6780u;
    // 0x3d6780: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6780u;
    {
        const bool branch_taken_0x3d6780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6780) {
            ctx->pc = 0x3D6790u;
            goto label_3d6790;
        }
    }
    ctx->pc = 0x3D6788u;
    // 0x3d6788: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3D6788u;
    {
        const bool branch_taken_0x3d6788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6788) {
            ctx->pc = 0x3D6820u;
            goto label_3d6820;
        }
    }
    ctx->pc = 0x3D6790u;
label_3d6790:
    // 0x3d6790: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d6790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6794: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d6794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6798: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3d6798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d679c: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3d679cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d67a0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d67a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d67a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3d67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d67a8: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x3d67a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d67ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d67acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d67b0: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x3d67b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3d67b4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3d67b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3d67b8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3d67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3d67bc: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x3d67bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d67c0: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3d67c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3d67c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d67c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d67cc: 0xc0f57d0  jal         func_3D5F40
    ctx->pc = 0x3D67CCu;
    SET_GPR_U32(ctx, 31, 0x3D67D4u);
    ctx->pc = 0x3D67D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D67CCu;
    // 0x3d67d0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5F40u, 0x3D67CCu, 0x3D67D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D67D4u;
label_3d67d4:
    // 0x3d67d4: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3d67d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3d67d8: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x3d67d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x3d67dc: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3d67dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3d67e0: 0x3c0a0068  lui         $t2, 0x68
    ctx->pc = 0x3d67e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)104 << 16));
    // 0x3d67e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d67e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d67e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d67e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d67ec: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3d67ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3d67f0: 0x250845b0  addiu       $t0, $t0, 0x45B0
    ctx->pc = 0x3d67f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17840));
    // 0x3d67f4: 0x252945c0  addiu       $t1, $t1, 0x45C0
    ctx->pc = 0x3d67f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 17856));
    // 0x3d67f8: 0x254a45d0  addiu       $t2, $t2, 0x45D0
    ctx->pc = 0x3d67f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 17872));
    // 0x3d67fc: 0xc0bc834  jal         func_2F20D0
    ctx->pc = 0x3D67FCu;
    SET_GPR_U32(ctx, 31, 0x3D6804u);
    ctx->pc = 0x3D6800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D67FCu;
    // 0x3d6800: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F20D0u, 0x3D67FCu, 0x3D6804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6804u;
label_3d6804:
    // 0x3d6804: 0xae022b20  sw          $v0, 0x2B20($s0)
    ctx->pc = 0x3d6804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 2));
label_3d6808:
    // 0x3d6808: 0xc0c0894  jal         func_302250
    ctx->pc = 0x3D6808u;
    SET_GPR_U32(ctx, 31, 0x3D6810u);
    ctx->pc = 0x3D680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6808u;
    // 0x3d680c: 0x8e042b20  lw          $a0, 0x2B20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302250u, 0x3D6808u, 0x3D6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6810u;
label_3d6810:
    // 0x3d6810: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6810u;
    {
        const bool branch_taken_0x3d6810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6810u;
        // 0x3d6814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6810) {
            ctx->pc = 0x3D6820u;
            goto label_3d6820;
        }
    }
    ctx->pc = 0x3D6818u;
    // 0x3d6818: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d6818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d681c: 0x0  nop
    ctx->pc = 0x3d681cu;
    // NOP
label_3d6820:
    // 0x3d6820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d6820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d6824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d6824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d682c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D682Cu;
        // 0x3d6830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6834u;
}
