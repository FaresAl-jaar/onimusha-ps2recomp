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

// Function: sub_00366D50
// Address: 0x366d50 - 0x3672c4
void sub_00366D50_0x366d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366D50_0x366d50");
#endif

    switch (ctx->pc) {
        case 0x366d74u: goto label_366d74;
        case 0x366da0u: goto label_366da0;
        case 0x366dd8u: goto label_366dd8;
        case 0x366de0u: goto label_366de0;
        case 0x366df8u: goto label_366df8;
        case 0x366e2cu: goto label_366e2c;
        case 0x366e64u: goto label_366e64;
        case 0x366eb0u: goto label_366eb0;
        case 0x366ec4u: goto label_366ec4;
        case 0x366f2cu: goto label_366f2c;
        case 0x366f40u: goto label_366f40;
        case 0x366f8cu: goto label_366f8c;
        case 0x366fb4u: goto label_366fb4;
        case 0x366fccu: goto label_366fcc;
        case 0x3670dcu: goto label_3670dc;
        case 0x367104u: goto label_367104;
        case 0x367120u: goto label_367120;
        case 0x367134u: goto label_367134;
        case 0x367178u: goto label_367178;
        case 0x3671acu: goto label_3671ac;
        case 0x367224u: goto label_367224;
        case 0x367240u: goto label_367240;
        case 0x367274u: goto label_367274;
        case 0x36729cu: goto label_36729c;
        default: break;
    }

    ctx->pc = 0x366d50u;

    // 0x366d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x366d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x366d54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x366d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x366d58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x366d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x366d5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x366d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x366d60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x366d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x366d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x366d68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x366d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d6c: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x366D6Cu;
    SET_GPR_U32(ctx, 31, 0x366D74u);
    ctx->pc = 0x366D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D6Cu;
    // 0x366d70: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x366D6Cu, 0x366D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D74u;
label_366d74:
    // 0x366d74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x366d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d78: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x366d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x366d7c: 0x82620334  lb          $v0, 0x334($s3)
    ctx->pc = 0x366d7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x366d80: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x366d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x366d84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x366d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x366d88: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x366d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x366d8c: 0x2451011c  addiu       $s1, $v0, 0x11C
    ctx->pc = 0x366d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x366d90: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x366d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x366d94: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x366d94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x366d98: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x366D98u;
    SET_GPR_U32(ctx, 31, 0x366DA0u);
    ctx->pc = 0x366D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D98u;
    // 0x366d9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x366D98u, 0x366DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DA0u;
label_366da0:
    // 0x366da0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x366da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x366da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x366da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366da8: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x366da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x366dac: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x366dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x366db0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x366DB0u;
    {
        const bool branch_taken_0x366db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366db0) {
            ctx->pc = 0x366E38u;
            goto label_366e38;
        }
    }
    ctx->pc = 0x366DB8u;
    // 0x366db8: 0x8e620154  lw          $v0, 0x154($s3)
    ctx->pc = 0x366db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x366dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x366dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366dc0: 0x2665013c  addiu       $a1, $s3, 0x13C
    ctx->pc = 0x366dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 316));
    // 0x366dc4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x366dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x366dc8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x366dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x366dcc: 0x8e620158  lw          $v0, 0x158($s3)
    ctx->pc = 0x366dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
    // 0x366dd0: 0xc049522  jal         func_125488
    ctx->pc = 0x366DD0u;
    SET_GPR_U32(ctx, 31, 0x366DD8u);
    ctx->pc = 0x366DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366DD0u;
    // 0x366dd4: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x366DD0u, 0x366DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DD8u;
label_366dd8:
    // 0x366dd8: 0xc0d99c0  jal         func_366700
    ctx->pc = 0x366DD8u;
    SET_GPR_U32(ctx, 31, 0x366DE0u);
    ctx->pc = 0x366DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366DD8u;
    // 0x366ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366700u, 0x366DD8u, 0x366DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DE0u;
label_366de0:
    // 0x366de0: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x366de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x366de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366de8: 0x34450011  ori         $a1, $v0, 0x11
    ctx->pc = 0x366de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x366dec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x366decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366df0: 0xc0dc81c  jal         func_372070
    ctx->pc = 0x366DF0u;
    SET_GPR_U32(ctx, 31, 0x366DF8u);
    ctx->pc = 0x366DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366DF0u;
    // 0x366df4: 0x24070050  addiu       $a3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372070u, 0x366DF0u, 0x366DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DF8u;
label_366df8:
    // 0x366df8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x366df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366dfc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x366dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x366e00: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x366e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x366e04: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x366e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x366e08: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x366e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x366e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e10: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x366e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x366e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x366e18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366e1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366e20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e24: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x366E24u;
    SET_GPR_U32(ctx, 31, 0x366E2Cu);
    ctx->pc = 0x366E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E24u;
    // 0x366e28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x366E24u, 0x366E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E2Cu;
label_366e2c:
    // 0x366e2c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x366E2Cu;
    {
        const bool branch_taken_0x366e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e2c) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x366E34u;
    // 0x366e34: 0x0  nop
    ctx->pc = 0x366e34u;
    // NOP
label_366e38:
    // 0x366e38: 0x30626000  andi        $v0, $v1, 0x6000
    ctx->pc = 0x366e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x366e3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x366E3Cu;
    {
        const bool branch_taken_0x366e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e3c) {
            ctx->pc = 0x366EB8u;
            goto label_366eb8;
        }
    }
    ctx->pc = 0x366E44u;
    // 0x366e44: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x366e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x366e48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x366e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x366e50: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x366e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x366e54: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x366e54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x366e58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x366e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x366e5c: 0xc0d99c0  jal         func_366700
    ctx->pc = 0x366E5Cu;
    SET_GPR_U32(ctx, 31, 0x366E64u);
    ctx->pc = 0x366E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E5Cu;
    // 0x366e60: 0xa4430002  sh          $v1, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366700u, 0x366E5Cu, 0x366E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E64u;
label_366e64:
    // 0x366e64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x366e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366e68: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x366e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x366e6c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x366e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x366e70: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x366e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x366e74: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x366e74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x366e78: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x366e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x366e7c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x366e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x366e80: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x366e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x366e84: 0x3442030f  ori         $v0, $v0, 0x30F
    ctx->pc = 0x366e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x366e88: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x366e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x366e8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x366e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366e9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366e9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ea0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x366ea0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ea4: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x366ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x366ea8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x366EA8u;
    SET_GPR_U32(ctx, 31, 0x366EB0u);
    ctx->pc = 0x366EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366EA8u;
    // 0x366eac: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x366EA8u, 0x366EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EB0u;
label_366eb0:
    // 0x366eb0: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x366EB0u;
    {
        const bool branch_taken_0x366eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366eb0) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x366EB8u;
label_366eb8:
    // 0x366eb8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x366eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x366ebc: 0xc0ceb88  jal         func_33AE20
    ctx->pc = 0x366EBCu;
    SET_GPR_U32(ctx, 31, 0x366EC4u);
    ctx->pc = 0x366EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366EBCu;
    // 0x366ec0: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE20u, 0x366EBCu, 0x366EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EC4u;
label_366ec4:
    // 0x366ec4: 0x92650021  lbu         $a1, 0x21($s3)
    ctx->pc = 0x366ec4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
    // 0x366ec8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x366ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x366ecc: 0x10a300ee  beq         $a1, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x366ECCu;
    {
        const bool branch_taken_0x366ecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x366ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366ECCu;
        // 0x366ed0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366ecc) {
            ctx->pc = 0x367288u;
            goto label_367288;
        }
    }
    ctx->pc = 0x366ED4u;
    // 0x366ed4: 0x10a300c6  beq         $a1, $v1, . + 4 + (0xC6 << 2)
    ctx->pc = 0x366ED4u;
    {
        const bool branch_taken_0x366ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x366ed4) {
            ctx->pc = 0x3671F0u;
            goto label_3671f0;
        }
    }
    ctx->pc = 0x366EDCu;
    // 0x366edc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366ee0: 0x10a300b5  beq         $a1, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x366EE0u;
    {
        const bool branch_taken_0x366ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x366ee0) {
            ctx->pc = 0x3671B8u;
            goto label_3671b8;
        }
    }
    ctx->pc = 0x366EE8u;
    // 0x366ee8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x366EE8u;
    {
        const bool branch_taken_0x366ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x366ee8) {
            ctx->pc = 0x366EF8u;
            goto label_366ef8;
        }
    }
    ctx->pc = 0x366EF0u;
    // 0x366ef0: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x366EF0u;
    {
        const bool branch_taken_0x366ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366ef0) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x366EF8u;
label_366ef8:
    // 0x366ef8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x366ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x366efc: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x366efcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x366f00: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x366f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x366f04: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x366F04u;
    {
        const bool branch_taken_0x366f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x366f04) {
            ctx->pc = 0x366F38u;
            goto label_366f38;
        }
    }
    ctx->pc = 0x366F0Cu;
    // 0x366f0c: 0xa2600022  sb          $zero, 0x22($s3)
    ctx->pc = 0x366f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x366f10: 0x9663008c  lhu         $v1, 0x8C($s3)
    ctx->pc = 0x366f10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x366f14: 0x146000e4  bnez        $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x366F14u;
    {
        const bool branch_taken_0x366f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x366f14) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x366F1Cu;
    // 0x366f1c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x366f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x366f20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f24: 0xc0dc804  jal         func_372010
    ctx->pc = 0x366F24u;
    SET_GPR_U32(ctx, 31, 0x366F2Cu);
    ctx->pc = 0x366F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366F24u;
    // 0x366f28: 0x3445000f  ori         $a1, $v0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x366F24u, 0x366F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F2Cu;
label_366f2c:
    // 0x366f2c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x366F2Cu;
    {
        const bool branch_taken_0x366f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366f2c) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x366F34u;
    // 0x366f34: 0x0  nop
    ctx->pc = 0x366f34u;
    // NOP
label_366f38:
    // 0x366f38: 0xc0d9cb4  jal         func_3672D0
    ctx->pc = 0x366F38u;
    SET_GPR_U32(ctx, 31, 0x366F40u);
    ctx->pc = 0x366F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366F38u;
    // 0x366f3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672D0u, 0x366F38u, 0x366F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F40u;
label_366f40:
    // 0x366f40: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x366F40u;
    {
        const bool branch_taken_0x366f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366f40) {
            ctx->pc = 0x366F98u;
            goto label_366f98;
        }
    }
    ctx->pc = 0x366F48u;
    // 0x366f48: 0x92630022  lbu         $v1, 0x22($s3)
    ctx->pc = 0x366f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x366f4c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x366F4Cu;
    {
        const bool branch_taken_0x366f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366F4Cu;
        // 0x366f50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366f4c) {
            ctx->pc = 0x366F90u;
            goto label_366f90;
        }
    }
    ctx->pc = 0x366F54u;
    // 0x366f54: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x366f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x366f58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x366f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366f5c: 0xa2630022  sb          $v1, 0x22($s3)
    ctx->pc = 0x366f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 3));
    // 0x366f60: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x366f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x366f64: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x366f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x366f68: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x366f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x366f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f70: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x366f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x366f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x366f78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366f80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366f84: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x366F84u;
    SET_GPR_U32(ctx, 31, 0x366F8Cu);
    ctx->pc = 0x366F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366F84u;
    // 0x366f88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x366F84u, 0x366F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F8Cu;
label_366f8c:
    // 0x366f8c: 0x0  nop
    ctx->pc = 0x366f8cu;
    // NOP
label_366f90:
    // 0x366f90: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x366F90u;
    {
        const bool branch_taken_0x366f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366f90) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x366F98u;
label_366f98:
    // 0x366f98: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x366f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x366f9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fa0: 0x3445000e  ori         $a1, $v0, 0xE
    ctx->pc = 0x366fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
    // 0x366fa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366fa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fac: 0xc0dc810  jal         func_372040
    ctx->pc = 0x366FACu;
    SET_GPR_U32(ctx, 31, 0x366FB4u);
    ctx->pc = 0x366FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366FACu;
    // 0x366fb0: 0xa2600022  sb          $zero, 0x22($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x366FACu, 0x366FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FB4u;
label_366fb4:
    // 0x366fb4: 0x8f828be0  lw          $v0, -0x7420($gp)
    ctx->pc = 0x366fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937568)));
    // 0x366fb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x366fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366fc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366fc4: 0xc0d9cf4  jal         func_3673D0
    ctx->pc = 0x366FC4u;
    SET_GPR_U32(ctx, 31, 0x366FCCu);
    ctx->pc = 0x366FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366FC4u;
    // 0x366fc8: 0xaf828be0  sw          $v0, -0x7420($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3673D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3673D0u, 0x366FC4u, 0x366FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FCCu;
label_366fcc:
    // 0x366fcc: 0xe660014c  swc1        $f0, 0x14C($s3)
    ctx->pc = 0x366fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 332), bits); }
    // 0x366fd0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x366fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x366fd4: 0xc6620150  lwc1        $f2, 0x150($s3)
    ctx->pc = 0x366fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x366fd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x366fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366fdc: 0x0  nop
    ctx->pc = 0x366fdcu;
    // NOP
    // 0x366fe0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x366fe0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x366fe4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x366fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366fe8: 0x450100af  bc1t        . + 4 + (0xAF << 2)
    ctx->pc = 0x366FE8u;
    {
        const bool branch_taken_0x366fe8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x366FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366FE8u;
        // 0x366fec: 0xe6620150  swc1        $f2, 0x150($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x366fe8) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x366FF0u;
    // 0x366ff0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x366ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x366ff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x366ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366ff8: 0x0  nop
    ctx->pc = 0x366ff8u;
    // NOP
    // 0x366ffc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x366ffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367000: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x367000u;
    {
        const bool branch_taken_0x367000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x367000) {
            ctx->pc = 0x367018u;
            goto label_367018;
        }
    }
    ctx->pc = 0x367008u;
    // 0x367008: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x367008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36700c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x36700cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x367010: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x367010u;
    {
        const bool branch_taken_0x367010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367010u;
        // 0x367014: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367010) {
            ctx->pc = 0x367034u;
            goto label_367034;
        }
    }
    ctx->pc = 0x367018u;
label_367018:
    // 0x367018: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x367018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x36701c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x36701cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x367020: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x367020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x367024: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x367024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x367028: 0x0  nop
    ctx->pc = 0x367028u;
    // NOP
    // 0x36702c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x36702cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x367030: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x367030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_367034:
    // 0x367034: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x367034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x367038: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x367038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36703c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x36703cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x367040: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x367040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x367044: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x367044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x367048: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x367048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x36704c: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x36704cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x367050: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x367050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x367054: 0xa623000a  sh          $v1, 0xA($s1)
    ctx->pc = 0x367054u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x367058: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x367058u;
    {
        const bool branch_taken_0x367058 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x36705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367058u;
        // 0x36705c: 0xc6610150  lwc1        $f1, 0x150($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367058) {
            ctx->pc = 0x36706Cu;
            goto label_36706c;
        }
    }
    ctx->pc = 0x367060u;
    // 0x367060: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x367060u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367064: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x367064u;
    {
        const bool branch_taken_0x367064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367064u;
        // 0x367068: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367064) {
            ctx->pc = 0x367088u;
            goto label_367088;
        }
    }
    ctx->pc = 0x36706Cu;
label_36706c:
    // 0x36706c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x36706cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x367070: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x367070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x367074: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x367074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x367078: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x367078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36707c: 0x0  nop
    ctx->pc = 0x36707cu;
    // NOP
    // 0x367080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x367080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x367084: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x367084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_367088:
    // 0x367088: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x367088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36708c: 0xe6600150  swc1        $f0, 0x150($s3)
    ctx->pc = 0x36708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 336), bits); }
    // 0x367090: 0x9624000a  lhu         $a0, 0xA($s1)
    ctx->pc = 0x367090u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x367094: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x367094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x367098: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x367098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36709c: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x36709Cu;
    {
        const bool branch_taken_0x36709c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36709c) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x3670A4u;
    // 0x3670a4: 0xaf808be0  sw          $zero, -0x7420($gp)
    ctx->pc = 0x3670a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 0));
    // 0x3670a8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3670a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3670ac: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x3670acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3670b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3670b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3670b4: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x3670b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3670b8: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x3670b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3670bc: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x3670bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x3670c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3670c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3670c4: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x3670c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x3670c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3670c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3670cc: 0x9226000c  lbu         $a2, 0xC($s1)
    ctx->pc = 0x3670ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3670d0: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3670d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3670d4: 0xc0bd138  jal         func_2F44E0
    ctx->pc = 0x3670D4u;
    SET_GPR_U32(ctx, 31, 0x3670DCu);
    ctx->pc = 0x3670D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3670D4u;
    // 0x3670d8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F44E0u, 0x3670D4u, 0x3670DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3670DCu;
label_3670dc:
    // 0x3670dc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3670dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3670e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3670e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3670e4: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x3670e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x3670e8: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3670e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3670ec: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3670ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3670f0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3670f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3670f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3670f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670f8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3670f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670fc: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3670FCu;
    SET_GPR_U32(ctx, 31, 0x367104u);
    ctx->pc = 0x367100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3670FCu;
    // 0x367100: 0xae600150  sw          $zero, 0x150($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3670FCu, 0x367104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367104u;
label_367104:
    // 0x367104: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x367104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x367108: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x367108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36710c: 0x9227000c  lbu         $a3, 0xC($s1)
    ctx->pc = 0x36710cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x367110: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x367110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x367114: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x367114u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367118: 0xc0cebec  jal         func_33AFB0
    ctx->pc = 0x367118u;
    SET_GPR_U32(ctx, 31, 0x367120u);
    ctx->pc = 0x36711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367118u;
    // 0x36711c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFB0u, 0x367118u, 0x367120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367120u;
label_367120:
    // 0x367120: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x367120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x367124: 0x9226000c  lbu         $a2, 0xC($s1)
    ctx->pc = 0x367124u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x367128: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x367128u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36712c: 0xc0d9f78  jal         func_367DE0
    ctx->pc = 0x36712Cu;
    SET_GPR_U32(ctx, 31, 0x367134u);
    ctx->pc = 0x367130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36712Cu;
    // 0x367130: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367DE0u, 0x36712Cu, 0x367134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367134u;
label_367134:
    // 0x367134: 0x8e630190  lw          $v1, 0x190($s3)
    ctx->pc = 0x367134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x367138: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x367138u;
    {
        const bool branch_taken_0x367138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367138u;
        // 0x36713c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367138) {
            ctx->pc = 0x367150u;
            goto label_367150;
        }
    }
    ctx->pc = 0x367140u;
    // 0x367140: 0xa2630021  sb          $v1, 0x21($s3)
    ctx->pc = 0x367140u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x367144: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x367144u;
    {
        const bool branch_taken_0x367144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367144u;
        // 0x367148: 0xa2600022  sb          $zero, 0x22($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367144) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x36714Cu;
    // 0x36714c: 0x0  nop
    ctx->pc = 0x36714cu;
    // NOP
label_367150:
    // 0x367150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367154: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x367154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x367158: 0xa2630021  sb          $v1, 0x21($s3)
    ctx->pc = 0x367158u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x36715c: 0xa2620022  sb          $v0, 0x22($s3)
    ctx->pc = 0x36715cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x367160: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367164: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x367164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x367168: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x367168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36716c: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x36716cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x367170: 0xc0dc810  jal         func_372040
    ctx->pc = 0x367170u;
    SET_GPR_U32(ctx, 31, 0x367178u);
    ctx->pc = 0x367174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367170u;
    // 0x367174: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x367170u, 0x367178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367178u;
label_367178:
    // 0x367178: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x367178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36717c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36717cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x367180: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x367180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x367184: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x367184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x367188: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x367188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x36718c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36718cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367190: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x367190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x367194: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367198: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x367198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36719c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36719cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3671a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3671a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3671a4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3671A4u;
    SET_GPR_U32(ctx, 31, 0x3671ACu);
    ctx->pc = 0x3671A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3671A4u;
    // 0x3671a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3671A4u, 0x3671ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3671ACu;
label_3671ac:
    // 0x3671ac: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3671ACu;
    {
        const bool branch_taken_0x3671ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3671ac) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x3671B4u;
    // 0x3671b4: 0x0  nop
    ctx->pc = 0x3671b4u;
    // NOP
label_3671b8:
    // 0x3671b8: 0x92630022  lbu         $v1, 0x22($s3)
    ctx->pc = 0x3671b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x3671bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3671bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3671c0: 0xa2630022  sb          $v1, 0x22($s3)
    ctx->pc = 0x3671c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 3));
    // 0x3671c4: 0x92630022  lbu         $v1, 0x22($s3)
    ctx->pc = 0x3671c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x3671c8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3671C8u;
    {
        const bool branch_taken_0x3671c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3671CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671C8u;
        // 0x3671cc: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671c8) {
            ctx->pc = 0x3671E0u;
            goto label_3671e0;
        }
    }
    ctx->pc = 0x3671D0u;
    // 0x3671d0: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3671d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x3671d4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x3671d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x3671d8: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3671D8u;
    {
        const bool branch_taken_0x3671d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3671d8) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x3671E0u;
label_3671e0:
    // 0x3671e0: 0xa2600021  sb          $zero, 0x21($s3)
    ctx->pc = 0x3671e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x3671e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3671E4u;
    {
        const bool branch_taken_0x3671e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3671E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671E4u;
        // 0x3671e8: 0xa2600022  sb          $zero, 0x22($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671e4) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x3671ECu;
    // 0x3671ec: 0x0  nop
    ctx->pc = 0x3671ecu;
    // NOP
label_3671f0:
    // 0x3671f0: 0x92640022  lbu         $a0, 0x22($s3)
    ctx->pc = 0x3671f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x3671f4: 0x8e630190  lw          $v1, 0x190($s3)
    ctx->pc = 0x3671f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x3671f8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3671f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3671fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3671FCu;
    {
        const bool branch_taken_0x3671fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x367200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671FCu;
        // 0x367200: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671fc) {
            ctx->pc = 0x367210u;
            goto label_367210;
        }
    }
    ctx->pc = 0x367204u;
    // 0x367204: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x367204u;
    {
        const bool branch_taken_0x367204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367204u;
        // 0x367208: 0xa2630021  sb          $v1, 0x21($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367204) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x36720Cu;
    // 0x36720c: 0x0  nop
    ctx->pc = 0x36720cu;
    // NOP
label_367210:
    // 0x367210: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x367210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x367214: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x367214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x367218: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36721c: 0xc095130  jal         func_2544C0
    ctx->pc = 0x36721Cu;
    SET_GPR_U32(ctx, 31, 0x367224u);
    ctx->pc = 0x367220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36721Cu;
    // 0x367220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x36721Cu, 0x367224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367224u;
label_367224:
    // 0x367224: 0x92620022  lbu         $v0, 0x22($s3)
    ctx->pc = 0x367224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x367228: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x367228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x36722c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x36722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x367230: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x367230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x367234: 0x8c460164  lw          $a2, 0x164($v0)
    ctx->pc = 0x367234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x367238: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x367238u;
    SET_GPR_U32(ctx, 31, 0x367240u);
    ctx->pc = 0x36723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367238u;
    // 0x36723c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x367238u, 0x367240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367240u;
label_367240:
    // 0x367240: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x367240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367244: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x367244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x367248: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x367248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36724c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x367250: 0x3c020b00  lui         $v0, 0xB00
    ctx->pc = 0x367250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2816 << 16));
    // 0x367254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367258: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x367258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36725c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36725cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367260: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x367260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367264: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x367264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367268: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x367268u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36726c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36726Cu;
    SET_GPR_U32(ctx, 31, 0x367274u);
    ctx->pc = 0x367270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36726Cu;
    // 0x367270: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36726Cu, 0x367274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367274u;
label_367274:
    // 0x367274: 0x92630022  lbu         $v1, 0x22($s3)
    ctx->pc = 0x367274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x367278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36727c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x36727Cu;
    {
        const bool branch_taken_0x36727c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36727Cu;
        // 0x367280: 0xa2630022  sb          $v1, 0x22($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36727c) {
            ctx->pc = 0x3672A8u;
            goto label_3672a8;
        }
    }
    ctx->pc = 0x367284u;
    // 0x367284: 0x0  nop
    ctx->pc = 0x367284u;
    // NOP
label_367288:
    // 0x367288: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x367288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36728c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x36728cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x367290: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367294: 0xc095130  jal         func_2544C0
    ctx->pc = 0x367294u;
    SET_GPR_U32(ctx, 31, 0x36729Cu);
    ctx->pc = 0x367298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367294u;
    // 0x367298: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x367294u, 0x36729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36729Cu;
label_36729c:
    // 0x36729c: 0xa2600021  sb          $zero, 0x21($s3)
    ctx->pc = 0x36729cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x3672a0: 0xa2600022  sb          $zero, 0x22($s3)
    ctx->pc = 0x3672a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x3672a4: 0x0  nop
    ctx->pc = 0x3672a4u;
    // NOP
label_3672a8:
    // 0x3672a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3672a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3672ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3672acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3672b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3672b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3672b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3672b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3672b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3672b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3672bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3672BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3672C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3672BCu;
        // 0x3672c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3672BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3672C4u;
}
