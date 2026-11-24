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

// Function: sub_0025FDF0
// Address: 0x25fdf0 - 0x25ff8c
void sub_0025FDF0_0x25fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FDF0_0x25fdf0");
#endif

    switch (ctx->pc) {
        case 0x25fe18u: goto label_25fe18;
        case 0x25fe74u: goto label_25fe74;
        case 0x25fe84u: goto label_25fe84;
        case 0x25fe9cu: goto label_25fe9c;
        case 0x25fec0u: goto label_25fec0;
        case 0x25fed4u: goto label_25fed4;
        case 0x25feecu: goto label_25feec;
        case 0x25ff08u: goto label_25ff08;
        case 0x25ff40u: goto label_25ff40;
        default: break;
    }

    ctx->pc = 0x25fdf0u;

    // 0x25fdf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25fdf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25fdf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25fdfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25fe00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25fe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25fe04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25fe04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe08: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x25fe08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25fe0c: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x25fe0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25fe10: 0xc0d25d0  jal         func_349740
    ctx->pc = 0x25FE10u;
    SET_GPR_U32(ctx, 31, 0x25FE18u);
    ctx->pc = 0x25FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE10u;
    // 0x25fe14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349740u, 0x25FE10u, 0x25FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE18u;
label_25fe18:
    // 0x25fe18: 0xa20229d0  sb          $v0, 0x29D0($s0)
    ctx->pc = 0x25fe18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 2));
    // 0x25fe1c: 0x920229d0  lbu         $v0, 0x29D0($s0)
    ctx->pc = 0x25fe1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x25fe20: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x25fe20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25fe24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FE24u;
    {
        const bool branch_taken_0x25fe24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fe24) {
            ctx->pc = 0x25FE38u;
            goto label_25fe38;
        }
    }
    ctx->pc = 0x25FE2Cu;
    // 0x25fe2c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x25fe2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25fe30: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x25fe30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x25fe34: 0xa20229d0  sb          $v0, 0x29D0($s0)
    ctx->pc = 0x25fe34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 2));
label_25fe38:
    // 0x25fe38: 0x920429d0  lbu         $a0, 0x29D0($s0)
    ctx->pc = 0x25fe38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x25fe3c: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x25fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x25fe40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fe44: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25fe48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fe4c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25fe50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25fe54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fe58: 0xae0229c0  sw          $v0, 0x29C0($s0)
    ctx->pc = 0x25fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10688), GPR_U32(ctx, 2));
    // 0x25fe5c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x25fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x25fe60: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25fe60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fe64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25FE64u;
    {
        const bool branch_taken_0x25fe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE64u;
        // 0x25fe68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe64) {
            ctx->pc = 0x25FE90u;
            goto label_25fe90;
        }
    }
    ctx->pc = 0x25FE6Cu;
    // 0x25fe6c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x25FE6Cu;
    SET_GPR_U32(ctx, 31, 0x25FE74u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x25FE6Cu, 0x25FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE74u;
label_25fe74:
    // 0x25fe74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25fe74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25fe78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fe7c: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x25FE7Cu;
    SET_GPR_U32(ctx, 31, 0x25FE84u);
    ctx->pc = 0x25FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE7Cu;
    // 0x25fe80: 0x228c3  sra         $a1, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x25FE7Cu, 0x25FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE84u;
label_25fe84:
    // 0x25fe84: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x25fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x25fe88: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x25fe88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25fe8c: 0x0  nop
    ctx->pc = 0x25fe8cu;
    // NOP
label_25fe90:
    // 0x25fe90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe94: 0xc0a4fd4  jal         func_293F50
    ctx->pc = 0x25FE94u;
    SET_GPR_U32(ctx, 31, 0x25FE9Cu);
    ctx->pc = 0x25FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE94u;
    // 0x25fe98: 0xa6002ad0  sh          $zero, 0x2AD0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10960), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293F50u, 0x25FE94u, 0x25FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE9Cu;
label_25fe9c:
    // 0x25fe9c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x25fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x25fea0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x25fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x25fea4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x25fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x25fea8: 0xae0206c0  sw          $v0, 0x6C0($s0)
    ctx->pc = 0x25fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
    // 0x25feac: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x25feacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x25feb0: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x25feb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25feb4: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x25feb4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x25feb8: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x25FEB8u;
    SET_GPR_U32(ctx, 31, 0x25FEC0u);
    ctx->pc = 0x25FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEB8u;
    // 0x25febc: 0x2404009e  addiu       $a0, $zero, 0x9E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x25FEB8u, 0x25FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEC0u;
label_25fec0:
    // 0x25fec0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25fec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fec4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25FEC4u;
    {
        const bool branch_taken_0x25fec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEC4u;
        // 0x25fec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fec4) {
            ctx->pc = 0x25FEE0u;
            goto label_25fee0;
        }
    }
    ctx->pc = 0x25FECCu;
    // 0x25fecc: 0xc09e6e4  jal         func_279B90
    ctx->pc = 0x25FECCu;
    SET_GPR_U32(ctx, 31, 0x25FED4u);
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x25FECCu, 0x25FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FED4u;
label_25fed4:
    // 0x25fed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25FED4u;
    {
        const bool branch_taken_0x25fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FED4u;
        // 0x25fed8: 0xae1104b0  sw          $s1, 0x4B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fed4) {
            ctx->pc = 0x25FEF8u;
            goto label_25fef8;
        }
    }
    ctx->pc = 0x25FEDCu;
    // 0x25fedc: 0x0  nop
    ctx->pc = 0x25fedcu;
    // NOP
label_25fee0:
    // 0x25fee0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x25fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x25fee4: 0xc09e6e4  jal         func_279B90
    ctx->pc = 0x25FEE4u;
    SET_GPR_U32(ctx, 31, 0x25FEECu);
    ctx->pc = 0x25FEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FEE4u;
    // 0x25fee8: 0x248499c0  addiu       $a0, $a0, -0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x25FEE4u, 0x25FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEECu;
label_25feec:
    // 0x25feec: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x25feecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x25fef0: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x25fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x25fef4: 0xae0204b0  sw          $v0, 0x4B0($s0)
    ctx->pc = 0x25fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 2));
label_25fef8:
    // 0x25fef8: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x25fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x25fefc: 0x2484f610  addiu       $a0, $a0, -0x9F0
    ctx->pc = 0x25fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    // 0x25ff00: 0xc0a7394  jal         func_29CE50
    ctx->pc = 0x25FF00u;
    SET_GPR_U32(ctx, 31, 0x25FF08u);
    ctx->pc = 0x25FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF00u;
    // 0x25ff04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE50u, 0x25FF00u, 0x25FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF08u;
label_25ff08:
    // 0x25ff08: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x25ff08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x25ff0c: 0x24030ed0  addiu       $v1, $zero, 0xED0
    ctx->pc = 0x25ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3792));
    // 0x25ff10: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x25ff10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x25ff14: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x25FF14u;
    {
        const bool branch_taken_0x25ff14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25ff14) {
            ctx->pc = 0x25FF78u;
            goto label_25ff78;
        }
    }
    ctx->pc = 0x25FF1Cu;
    // 0x25ff1c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x25ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x25ff20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25ff20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ff24: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x25ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25ff28: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x25ff28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x25ff2c: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x25ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x25ff30: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x25ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x25ff34: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x25ff34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x25ff38: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x25ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x25ff3c: 0x0  nop
    ctx->pc = 0x25ff3cu;
    // NOP
label_25ff40:
    // 0x25ff40: 0x8ca40858  lw          $a0, 0x858($a1)
    ctx->pc = 0x25ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2136)));
    // 0x25ff44: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25FF44u;
    {
        const bool branch_taken_0x25ff44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ff44) {
            ctx->pc = 0x25FF68u;
            goto label_25ff68;
        }
    }
    ctx->pc = 0x25FF4Cu;
    // 0x25ff4c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x25ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x25ff50: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x25ff50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x25ff54: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x25ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x25ff58: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x25ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x25ff5c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x25ff5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x25ff60: 0xac83014c  sw          $v1, 0x14C($a0)
    ctx->pc = 0x25ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 3));
    // 0x25ff64: 0x0  nop
    ctx->pc = 0x25ff64u;
    // NOP
label_25ff68:
    // 0x25ff68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25ff6c: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x25ff6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25ff70: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x25FF70u;
    {
        const bool branch_taken_0x25ff70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF70u;
        // 0x25ff74: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff70) {
            ctx->pc = 0x25FF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ff40;
        }
    }
    ctx->pc = 0x25FF78u;
label_25ff78:
    // 0x25ff78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25ff78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ff7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ff7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ff80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ff80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ff84: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF84u;
        // 0x25ff88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF8Cu;
}
