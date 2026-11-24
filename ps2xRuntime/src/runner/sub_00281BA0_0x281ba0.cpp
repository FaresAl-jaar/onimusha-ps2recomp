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

// Function: sub_00281BA0
// Address: 0x281ba0 - 0x281e8c
void sub_00281BA0_0x281ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281BA0_0x281ba0");
#endif

    switch (ctx->pc) {
        case 0x281c34u: goto label_281c34;
        case 0x281c54u: goto label_281c54;
        case 0x281c74u: goto label_281c74;
        case 0x281d50u: goto label_281d50;
        case 0x281e48u: goto label_281e48;
        default: break;
    }

    ctx->pc = 0x281ba0u;

    // 0x281ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x281ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x281ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x281ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x281ba8: 0x27a8004c  addiu       $t0, $sp, 0x4C
    ctx->pc = 0x281ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x281bac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281bb0: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x281bb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281bb8: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x281bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x281bbc: 0x87828164  lh          $v0, -0x7E9C($gp)
    ctx->pc = 0x281bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934884)));
    // 0x281bc0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x281bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281bc4: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x281bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x281bc8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x281bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x281bcc: 0x87828168  lh          $v0, -0x7E98($gp)
    ctx->pc = 0x281bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x281bd0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x281bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x281bd4: 0x8782816c  lh          $v0, -0x7E94($gp)
    ctx->pc = 0x281bd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934892)));
    // 0x281bd8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x281bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x281bdc: 0x87828170  lh          $v0, -0x7E90($gp)
    ctx->pc = 0x281bdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x281be0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x281be0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x281be4: 0x87838174  lh          $v1, -0x7E8C($gp)
    ctx->pc = 0x281be4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x281be8: 0x93828176  lbu         $v0, -0x7E8A($gp)
    ctx->pc = 0x281be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934902)));
    // 0x281bec: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x281becu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x281bf0: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x281bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x281bf4: 0x94820784  lhu         $v0, 0x784($a0)
    ctx->pc = 0x281bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1924)));
    // 0x281bf8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x281BF8u;
    {
        const bool branch_taken_0x281bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281BF8u;
        // 0x281bfc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281bf8) {
            ctx->pc = 0x281C60u;
            goto label_281c60;
        }
    }
    ctx->pc = 0x281C00u;
    // 0x281c00: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x281c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x281c04: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x281c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x281c08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x281c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c0c: 0x262607a0  addiu       $a2, $s1, 0x7A0
    ctx->pc = 0x281c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    // 0x281c10: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x281c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x281c14: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x281c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x281c18: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x281c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x281c1c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x281c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x281c20: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x281c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x281c24: 0x96220784  lhu         $v0, 0x784($s1)
    ctx->pc = 0x281c24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1924)));
    // 0x281c28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x281c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x281c2c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x281C2Cu;
    SET_GPR_U32(ctx, 31, 0x281C34u);
    ctx->pc = 0x281C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C2Cu;
    // 0x281c30: 0xa6220784  sh          $v0, 0x784($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1924), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x281C2Cu, 0x281C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C34u;
label_281c34:
    // 0x281c34: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x281c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x281c38: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x281c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x281c3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x281C3Cu;
    {
        const bool branch_taken_0x281c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281c3c) {
            ctx->pc = 0x281C78u;
            goto label_281c78;
        }
    }
    ctx->pc = 0x281C44u;
    // 0x281c44: 0x96220784  lhu         $v0, 0x784($s1)
    ctx->pc = 0x281c44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1924)));
    // 0x281c48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c4c: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x281C4Cu;
    SET_GPR_U32(ctx, 31, 0x281C54u);
    ctx->pc = 0x281C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C4Cu;
    // 0x281c50: 0x2445fffe  addiu       $a1, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x281C4Cu, 0x281C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C54u;
label_281c54:
    // 0x281c54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281C54u;
    {
        const bool branch_taken_0x281c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C54u;
        // 0x281c58: 0xa6220784  sh          $v0, 0x784($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1924), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c54) {
            ctx->pc = 0x281C78u;
            goto label_281c78;
        }
    }
    ctx->pc = 0x281C5Cu;
    // 0x281c5c: 0x0  nop
    ctx->pc = 0x281c5cu;
    // NOP
label_281c60:
    // 0x281c60: 0x92220821  lbu         $v0, 0x821($s1)
    ctx->pc = 0x281c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x281c64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x281c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x281c68: 0x9045003c  lbu         $a1, 0x3C($v0)
    ctx->pc = 0x281c68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x281c6c: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x281C6Cu;
    SET_GPR_U32(ctx, 31, 0x281C74u);
    ctx->pc = 0x281C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C6Cu;
    // 0x281c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x281C6Cu, 0x281C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C74u;
label_281c74:
    // 0x281c74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281c78:
    // 0x281c78: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x281c78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x281c7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281c80: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x281C80u;
    {
        const bool branch_taken_0x281c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x281C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C80u;
        // 0x281c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c80) {
            ctx->pc = 0x281D98u;
            goto label_281d98;
        }
    }
    ctx->pc = 0x281C88u;
    // 0x281c88: 0x10850011  beq         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x281C88u;
    {
        const bool branch_taken_0x281c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x281c88) {
            ctx->pc = 0x281CD0u;
            goto label_281cd0;
        }
    }
    ctx->pc = 0x281C90u;
    // 0x281c90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281C90u;
    {
        const bool branch_taken_0x281c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x281c90) {
            ctx->pc = 0x281CA0u;
            goto label_281ca0;
        }
    }
    ctx->pc = 0x281C98u;
    // 0x281c98: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x281C98u;
    {
        const bool branch_taken_0x281c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281c98) {
            ctx->pc = 0x281E20u;
            goto label_281e20;
        }
    }
    ctx->pc = 0x281CA0u;
label_281ca0:
    // 0x281ca0: 0xa620082a  sh          $zero, 0x82A($s1)
    ctx->pc = 0x281ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x281ca4: 0xae2007a4  sw          $zero, 0x7A4($s1)
    ctx->pc = 0x281ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1956), GPR_U32(ctx, 0));
    // 0x281ca8: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x281ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x281cac: 0x92240839  lbu         $a0, 0x839($s1)
    ctx->pc = 0x281cacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x281cb0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x281cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x281cb4: 0x9084004c  lbu         $a0, 0x4C($a0)
    ctx->pc = 0x281cb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x281cb8: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x281cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x281cbc: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x281cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x281cc0: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x281cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x281cc4: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x281cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x281cc8: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x281cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x281ccc: 0xa2250821  sb          $a1, 0x821($s1)
    ctx->pc = 0x281cccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 5));
label_281cd0:
    // 0x281cd0: 0x8e2306b4  lw          $v1, 0x6B4($s1)
    ctx->pc = 0x281cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
    // 0x281cd4: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x281cd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x281cd8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x281cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x281cdc: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x281CDCu;
    {
        const bool branch_taken_0x281cdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x281CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CDCu;
        // 0x281ce0: 0xae2306b4  sw          $v1, 0x6B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cdc) {
            ctx->pc = 0x281E20u;
            goto label_281e20;
        }
    }
    ctx->pc = 0x281CE4u;
    // 0x281ce4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x281ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281ce8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x281ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x281cec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x281cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x281cf0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x281cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x281cf4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x281cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x281cf8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x281cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x281cfc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x281cfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x281d00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x281d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281d08: 0x0  nop
    ctx->pc = 0x281d08u;
    // NOP
    // 0x281d0c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x281d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x281d10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x281d10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281d14: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x281D14u;
    {
        const bool branch_taken_0x281d14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281d14) {
            ctx->pc = 0x281D2Cu;
            goto label_281d2c;
        }
    }
    ctx->pc = 0x281D1Cu;
    // 0x281d1c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281d1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281d20: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x281d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x281d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281D24u;
    {
        const bool branch_taken_0x281d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D24u;
        // 0x281d28: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d24) {
            ctx->pc = 0x281D48u;
            goto label_281d48;
        }
    }
    ctx->pc = 0x281D2Cu;
label_281d2c:
    // 0x281d2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x281d2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x281d30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x281d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x281d34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281d34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281d38: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x281d38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x281d3c: 0x0  nop
    ctx->pc = 0x281d3cu;
    // NOP
    // 0x281d40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x281d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x281d44: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x281d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_281d48:
    // 0x281d48: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x281D48u;
    SET_GPR_U32(ctx, 31, 0x281D50u);
    ctx->pc = 0x281D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281D48u;
    // 0x281d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x281D48u, 0x281D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281D50u;
label_281d50:
    // 0x281d50: 0x92260839  lbu         $a2, 0x839($s1)
    ctx->pc = 0x281d50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x281d54: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x281d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x281d58: 0x9225083b  lbu         $a1, 0x83B($s1)
    ctx->pc = 0x281d58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2107)));
    // 0x281d5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281d60: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x281d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x281d64: 0x90c60040  lbu         $a2, 0x40($a2)
    ctx->pc = 0x281d64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x281d68: 0xa225083c  sb          $a1, 0x83C($s1)
    ctx->pc = 0x281d68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2108), (uint8_t)GPR_U32(ctx, 5));
    // 0x281d6c: 0xa226083b  sb          $a2, 0x83B($s1)
    ctx->pc = 0x281d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2107), (uint8_t)GPR_U32(ctx, 6));
    // 0x281d70: 0x92250839  lbu         $a1, 0x839($s1)
    ctx->pc = 0x281d70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x281d74: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x281d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x281d78: 0x90a50048  lbu         $a1, 0x48($a1)
    ctx->pc = 0x281d78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x281d7c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x281d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x281d80: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x281d80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x281d84: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x281d84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x281d88: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x281d88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x281d8c: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x281d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x281d90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x281D90u;
    {
        const bool branch_taken_0x281d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D90u;
        // 0x281d94: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d90) {
            ctx->pc = 0x281E20u;
            goto label_281e20;
        }
    }
    ctx->pc = 0x281D98u;
label_281d98:
    // 0x281d98: 0x16000021  bnez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x281D98u;
    {
        const bool branch_taken_0x281d98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x281d98) {
            ctx->pc = 0x281E20u;
            goto label_281e20;
        }
    }
    ctx->pc = 0x281DA0u;
    // 0x281da0: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x281da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x281da4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x281DA4u;
    {
        const bool branch_taken_0x281da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281da4) {
            ctx->pc = 0x281E20u;
            goto label_281e20;
        }
    }
    ctx->pc = 0x281DACu;
    // 0x281dac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x281dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281db0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x281db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x281db4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x281db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x281db8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x281db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x281dbc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x281dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x281dc0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x281dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x281dc4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x281dc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x281dc8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x281dc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281dd0: 0x0  nop
    ctx->pc = 0x281dd0u;
    // NOP
    // 0x281dd4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x281dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x281dd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x281dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281ddc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x281DDCu;
    {
        const bool branch_taken_0x281ddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281ddc) {
            ctx->pc = 0x281DF4u;
            goto label_281df4;
        }
    }
    ctx->pc = 0x281DE4u;
    // 0x281de4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281de4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281de8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x281de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x281dec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281DECu;
    {
        const bool branch_taken_0x281dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281DECu;
        // 0x281df0: 0xa6240784  sh          $a0, 0x784($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1924), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281dec) {
            ctx->pc = 0x281E10u;
            goto label_281e10;
        }
    }
    ctx->pc = 0x281DF4u;
label_281df4:
    // 0x281df4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x281df4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x281df8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281dfc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281dfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281e00: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x281e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x281e04: 0x0  nop
    ctx->pc = 0x281e04u;
    // NOP
    // 0x281e08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x281e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x281e0c: 0xa6240784  sh          $a0, 0x784($s1)
    ctx->pc = 0x281e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1924), (uint16_t)GPR_U32(ctx, 4));
label_281e10:
    // 0x281e10: 0x92230839  lbu         $v1, 0x839($s1)
    ctx->pc = 0x281e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x281e14: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x281e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x281e18: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x281e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x281e1c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x281e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_281e20:
    // 0x281e20: 0x8e2306bc  lw          $v1, 0x6BC($s1)
    ctx->pc = 0x281e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1724)));
    // 0x281e24: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x281e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x281e28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x281E28u;
    {
        const bool branch_taken_0x281e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281e28) {
            ctx->pc = 0x281E48u;
            goto label_281e48;
        }
    }
    ctx->pc = 0x281E30u;
    // 0x281e30: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x281e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x281e34: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x281e34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x281e38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x281E38u;
    {
        const bool branch_taken_0x281e38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E38u;
        // 0x281e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e38) {
            ctx->pc = 0x281E48u;
            goto label_281e48;
        }
    }
    ctx->pc = 0x281E40u;
    // 0x281e40: 0xc0a0644  jal         func_281910
    ctx->pc = 0x281E40u;
    SET_GPR_U32(ctx, 31, 0x281E48u);
    ctx->pc = 0x281E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281E40u;
    // 0x281e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281910u, 0x281E40u, 0x281E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281E48u;
label_281e48:
    // 0x281e48: 0x8e2406ac  lw          $a0, 0x6AC($s1)
    ctx->pc = 0x281e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x281e4c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x281e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x281e50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x281e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x281e54: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x281E54u;
    {
        const bool branch_taken_0x281e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281e54) {
            ctx->pc = 0x281E78u;
            goto label_281e78;
        }
    }
    ctx->pc = 0x281E5Cu;
    // 0x281e5c: 0x96230784  lhu         $v1, 0x784($s1)
    ctx->pc = 0x281e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1924)));
    // 0x281e60: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x281e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x281e64: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x281E64u;
    {
        const bool branch_taken_0x281e64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x281E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E64u;
        // 0x281e68: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e64) {
            ctx->pc = 0x281E78u;
            goto label_281e78;
        }
    }
    ctx->pc = 0x281E6Cu;
    // 0x281e6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281E6Cu;
    {
        const bool branch_taken_0x281e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E6Cu;
        // 0x281e70: 0xa6230784  sh          $v1, 0x784($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1924), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e6c) {
            ctx->pc = 0x281E78u;
            goto label_281e78;
        }
    }
    ctx->pc = 0x281E74u;
    // 0x281e74: 0x0  nop
    ctx->pc = 0x281e74u;
    // NOP
label_281e78:
    // 0x281e78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281e84: 0x3e00008  jr          $ra
    ctx->pc = 0x281E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E84u;
        // 0x281e88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281E8Cu;
}
