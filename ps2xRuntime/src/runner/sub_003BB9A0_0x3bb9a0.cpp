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

// Function: sub_003BB9A0
// Address: 0x3bb9a0 - 0x3bbb28
void sub_003BB9A0_0x3bb9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB9A0_0x3bb9a0");
#endif

    switch (ctx->pc) {
        case 0x3bb9d0u: goto label_3bb9d0;
        case 0x3bba54u: goto label_3bba54;
        case 0x3bba90u: goto label_3bba90;
        case 0x3bbaa4u: goto label_3bbaa4;
        case 0x3bbab0u: goto label_3bbab0;
        case 0x3bbadcu: goto label_3bbadc;
        case 0x3bbaf0u: goto label_3bbaf0;
        default: break;
    }

    ctx->pc = 0x3bb9a0u;

    // 0x3bb9a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3bb9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3bb9a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bb9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3bb9a8: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x3bb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x3bb9ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bb9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bb9b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bb9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bb9b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bb9b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb9bc: 0x64110004  daddiu      $s1, $zero, 0x4
    ctx->pc = 0x3bb9bcu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x3bb9c0: 0xc7808424  lwc1        $f0, -0x7BDC($gp)
    ctx->pc = 0x3bb9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb9c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bb9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb9c8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3bb9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3bb9cc: 0x0  nop
    ctx->pc = 0x3bb9ccu;
    // NOP
label_3bb9d0:
    // 0x3bb9d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb9d4: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3BB9D4u;
    {
        const bool branch_taken_0x3bb9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9D4u;
        // 0x3bb9d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb9d4) {
            ctx->pc = 0x3BBA20u;
            goto label_3bba20;
        }
    }
    ctx->pc = 0x3BB9DCu;
    // 0x3bb9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb9e0: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB9E0u;
    {
        const bool branch_taken_0x3bb9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bb9e0) {
            ctx->pc = 0x3BBA00u;
            goto label_3bba00;
        }
    }
    ctx->pc = 0x3BB9E8u;
    // 0x3bb9e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB9E8u;
    {
        const bool branch_taken_0x3bb9e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb9e8) {
            ctx->pc = 0x3BB9F8u;
            goto label_3bb9f8;
        }
    }
    ctx->pc = 0x3BB9F0u;
    // 0x3bb9f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3BB9F0u;
    {
        const bool branch_taken_0x3bb9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb9f0) {
            ctx->pc = 0x3BBA40u;
            goto label_3bba40;
        }
    }
    ctx->pc = 0x3BB9F8u;
label_3bb9f8:
    // 0x3bb9f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3BB9F8u;
    {
        const bool branch_taken_0x3bb9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9F8u;
        // 0x3bb9fc: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb9f8) {
            ctx->pc = 0x3BBA40u;
            goto label_3bba40;
        }
    }
    ctx->pc = 0x3BBA00u;
label_3bba00:
    // 0x3bba00: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bba00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bba04: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3bba04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bba08: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3bba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bba0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bba10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bba14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BBA14u;
    {
        const bool branch_taken_0x3bba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA14u;
        // 0x3bba18: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bba14) {
            ctx->pc = 0x3BBA40u;
            goto label_3bba40;
        }
    }
    ctx->pc = 0x3BBA1Cu;
    // 0x3bba1c: 0x0  nop
    ctx->pc = 0x3bba1cu;
    // NOP
label_3bba20:
    // 0x3bba20: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bba20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bba24: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3bba24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bba28: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3bba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bba2c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3bba2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3bba30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bba30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bba34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bba38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3bba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bba3c: 0x0  nop
    ctx->pc = 0x3bba3cu;
    // NOP
label_3bba40:
    // 0x3bba40: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3BBA40u;
    {
        const bool branch_taken_0x3bba40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bba40) {
            ctx->pc = 0x3BBA78u;
            goto label_3bba78;
        }
    }
    ctx->pc = 0x3BBA48u;
    // 0x3bba48: 0x8e442b50  lw          $a0, 0x2B50($s2)
    ctx->pc = 0x3bba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11088)));
    // 0x3bba4c: 0xc0edd90  jal         func_3B7640
    ctx->pc = 0x3BBA4Cu;
    SET_GPR_U32(ctx, 31, 0x3BBA54u);
    ctx->pc = 0x3BBA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBA4Cu;
    // 0x3bba50: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7640u, 0x3BBA4Cu, 0x3BBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBA54u;
label_3bba54:
    // 0x3bba54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3bba54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3bba58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3bba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3bba5c: 0x2443005c  addiu       $v1, $v0, 0x5C
    ctx->pc = 0x3bba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x3bba60: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3bba60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bba64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BBA64u;
    {
        const bool branch_taken_0x3bba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bba64) {
            ctx->pc = 0x3BBA78u;
            goto label_3bba78;
        }
    }
    ctx->pc = 0x3BBA6Cu;
    // 0x3bba6c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x3bba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3bba70: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3bba70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bba74: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x3bba74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3bba78:
    // 0x3bba78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bba78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3bba7c: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x3bba7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3bba80: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3BBA80u;
    {
        const bool branch_taken_0x3bba80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bba80) {
            ctx->pc = 0x3BB9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb9d0;
        }
    }
    ctx->pc = 0x3BBA88u;
    // 0x3bba88: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3BBA88u;
    SET_GPR_U32(ctx, 31, 0x3BBA90u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3BBA88u, 0x3BBA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBA90u;
label_3bba90:
    // 0x3bba90: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3bba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3bba94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bba98: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3bba98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3bba9c: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3BBA9Cu;
    SET_GPR_U32(ctx, 31, 0x3BBAA4u);
    ctx->pc = 0x3BBAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBA9Cu;
    // 0x3bbaa0: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3BBA9Cu, 0x3BBAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBAA4u;
label_3bbaa4:
    // 0x3bbaa4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3bbaa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3bbaa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bbaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbaac: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x3bbaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3bbab0:
    // 0x3bbab0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3bbab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bbab4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3BBAB4u;
    {
        const bool branch_taken_0x3bbab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBAB4u;
        // 0x3bbab8: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbab4) {
            ctx->pc = 0x3BBB00u;
            goto label_3bbb00;
        }
    }
    ctx->pc = 0x3BBABCu;
    // 0x3bbabc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3BBABCu;
    {
        const bool branch_taken_0x3bbabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bbabc) {
            ctx->pc = 0x3BBAF8u;
            goto label_3bbaf8;
        }
    }
    ctx->pc = 0x3BBAC4u;
    // 0x3bbac4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3bbac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3bbac8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3bbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3bbacc: 0x8e452b50  lw          $a1, 0x2B50($s2)
    ctx->pc = 0x3bbaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11088)));
    // 0x3bbad0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bbad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bbad4: 0xc0eddec  jal         func_3B77B0
    ctx->pc = 0x3BBAD4u;
    SET_GPR_U32(ctx, 31, 0x3BBADCu);
    ctx->pc = 0x3BBAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBAD4u;
    // 0x3bbad8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B77B0u, 0x3BBAD4u, 0x3BBADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBADCu;
label_3bbadc:
    // 0x3bbadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bbadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbae0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3bbae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3bbae4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x3bbae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3bbae8: 0xc0eef1c  jal         func_3BBC70
    ctx->pc = 0x3BBAE8u;
    SET_GPR_U32(ctx, 31, 0x3BBAF0u);
    ctx->pc = 0x3BBAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBAE8u;
    // 0x3bbaec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC70u, 0x3BBAE8u, 0x3BBAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBAF0u;
label_3bbaf0:
    // 0x3bbaf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BBAF0u;
    {
        const bool branch_taken_0x3bbaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbaf0) {
            ctx->pc = 0x3BBB10u;
            goto label_3bbb10;
        }
    }
    ctx->pc = 0x3BBAF8u;
label_3bbaf8:
    // 0x3bbaf8: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x3bbaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3bbafc: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x3bbafcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3bbb00:
    // 0x3bbb00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bbb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bbb04: 0x2ca30004  sltiu       $v1, $a1, 0x4
    ctx->pc = 0x3bbb04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3bbb08: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3BBB08u;
    {
        const bool branch_taken_0x3bbb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB08u;
        // 0x3bbb0c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb08) {
            ctx->pc = 0x3BBAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbab0;
        }
    }
    ctx->pc = 0x3BBB10u;
label_3bbb10:
    // 0x3bbb10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bbb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bbb14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bbb14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bbb18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bbb18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bbb1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bbb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bbb20: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB20u;
        // 0x3bbb24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBB28u;
}
