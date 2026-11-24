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

// Function: sub_00391A20
// Address: 0x391a20 - 0x391c80
void sub_00391A20_0x391a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391A20_0x391a20");
#endif

    switch (ctx->pc) {
        case 0x391a80u: goto label_391a80;
        case 0x391ab0u: goto label_391ab0;
        case 0x391af4u: goto label_391af4;
        case 0x391b50u: goto label_391b50;
        case 0x391b64u: goto label_391b64;
        case 0x391bdcu: goto label_391bdc;
        case 0x391c1cu: goto label_391c1c;
        case 0x391c24u: goto label_391c24;
        case 0x391c64u: goto label_391c64;
        case 0x391c6cu: goto label_391c6c;
        default: break;
    }

    ctx->pc = 0x391a20u;

    // 0x391a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x391a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x391a24: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x391a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x391a28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x391a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x391a2c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x391a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x391a30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x391a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x391a34: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x391a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x391a38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x391a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391a3c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x391a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x391a40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x391a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x391a44: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x391A44u;
    {
        const bool branch_taken_0x391a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x391a44) {
            ctx->pc = 0x391AF8u;
            goto label_391af8;
        }
    }
    ctx->pc = 0x391A4Cu;
    // 0x391a4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x391a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x391a50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x391a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x391a54: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x391a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x391a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x391a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x391a5c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x391a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x391a60: 0x82020332  lb          $v0, 0x332($s0)
    ctx->pc = 0x391a60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 818)));
    // 0x391a64: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x391a64u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x391a68: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x391a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x391a6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x391a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x391a70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x391a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x391a74: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x391a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x391a78: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x391A78u;
    SET_GPR_U32(ctx, 31, 0x391A80u);
    ctx->pc = 0x391A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391A78u;
    // 0x391a7c: 0xa2020332  sb          $v0, 0x332($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 818), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x391A78u, 0x391A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391A80u;
label_391a80:
    // 0x391a80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x391a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391a84: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x391a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x391a88: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x391a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x391a8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x391a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x391a90: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x391a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x391a94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391a98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391a9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x391a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391aa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x391aa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391aa4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x391aa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391aa8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x391AA8u;
    SET_GPR_U32(ctx, 31, 0x391AB0u);
    ctx->pc = 0x391AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391AA8u;
    // 0x391aac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x391AA8u, 0x391AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391AB0u;
label_391ab0:
    // 0x391ab0: 0x82030332  lb          $v1, 0x332($s0)
    ctx->pc = 0x391ab0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 818)));
    // 0x391ab4: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x391ab4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x391ab8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x391AB8u;
    {
        const bool branch_taken_0x391ab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x391ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AB8u;
        // 0x391abc: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ab8) {
            ctx->pc = 0x391AF8u;
            goto label_391af8;
        }
    }
    ctx->pc = 0x391AC0u;
    // 0x391ac0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x391ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x391ac4: 0x2463c7e0  addiu       $v1, $v1, -0x3820
    ctx->pc = 0x391ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952928));
    // 0x391ac8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x391ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x391acc: 0x92030339  lbu         $v1, 0x339($s0)
    ctx->pc = 0x391accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 825)));
    // 0x391ad0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x391ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x391ad4: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x391AD4u;
    {
        const bool branch_taken_0x391ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x391ad4) {
            ctx->pc = 0x391AF8u;
            goto label_391af8;
        }
    }
    ctx->pc = 0x391ADCu;
    // 0x391adc: 0xa2040339  sb          $a0, 0x339($s0)
    ctx->pc = 0x391adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 825), (uint8_t)GPR_U32(ctx, 4));
    // 0x391ae0: 0x92050339  lbu         $a1, 0x339($s0)
    ctx->pc = 0x391ae0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 825)));
    // 0x391ae4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x391ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x391ae8: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x391ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x391aec: 0xc0e47d8  jal         func_391F60
    ctx->pc = 0x391AECu;
    SET_GPR_U32(ctx, 31, 0x391AF4u);
    ctx->pc = 0x391AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391AECu;
    // 0x391af0: 0x24843090  addiu       $a0, $a0, 0x3090 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391F60u, 0x391AECu, 0x391AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391AF4u;
label_391af4:
    // 0x391af4: 0x0  nop
    ctx->pc = 0x391af4u;
    // NOP
label_391af8:
    // 0x391af8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x391af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x391afc: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x391afcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x391b00: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x391b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x391b04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x391B04u;
    {
        const bool branch_taken_0x391b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x391b04) {
            ctx->pc = 0x391B18u;
            goto label_391b18;
        }
    }
    ctx->pc = 0x391B0Cu;
    // 0x391b0c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x391B0Cu;
    {
        const bool branch_taken_0x391b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B0Cu;
        // 0x391b10: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b0c) {
            ctx->pc = 0x391B70u;
            goto label_391b70;
        }
    }
    ctx->pc = 0x391B14u;
    // 0x391b14: 0x0  nop
    ctx->pc = 0x391b14u;
    // NOP
label_391b18:
    // 0x391b18: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x391b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x391b1c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x391B1Cu;
    {
        const bool branch_taken_0x391b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x391b1c) {
            ctx->pc = 0x391B40u;
            goto label_391b40;
        }
    }
    ctx->pc = 0x391B24u;
    // 0x391b24: 0x82040332  lb          $a0, 0x332($s0)
    ctx->pc = 0x391b24u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 818)));
    // 0x391b28: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x391b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x391b2c: 0x2463c7c0  addiu       $v1, $v1, -0x3840
    ctx->pc = 0x391b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952896));
    // 0x391b30: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x391b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x391b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x391b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x391b38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x391B38u;
    {
        const bool branch_taken_0x391b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B38u;
        // 0x391b3c: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b38) {
            ctx->pc = 0x391B70u;
            goto label_391b70;
        }
    }
    ctx->pc = 0x391B40u;
label_391b40:
    // 0x391b40: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x391b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x391b44: 0x24843090  addiu       $a0, $a0, 0x3090
    ctx->pc = 0x391b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12432));
    // 0x391b48: 0xc0e47fc  jal         func_391FF0
    ctx->pc = 0x391B48u;
    SET_GPR_U32(ctx, 31, 0x391B50u);
    ctx->pc = 0x391B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B48u;
    // 0x391b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391FF0u, 0x391B48u, 0x391B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B50u;
label_391b50:
    // 0x391b50: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x391b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x391b54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x391b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x391b58: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x391b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x391b5c: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x391B5Cu;
    SET_GPR_U32(ctx, 31, 0x391B64u);
    ctx->pc = 0x391B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391B5Cu;
    // 0x391b60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x391B5Cu, 0x391B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391B64u;
label_391b64:
    // 0x391b64: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x391B64u;
    {
        const bool branch_taken_0x391b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391b64) {
            ctx->pc = 0x391C70u;
            goto label_391c70;
        }
    }
    ctx->pc = 0x391B6Cu;
    // 0x391b6c: 0x0  nop
    ctx->pc = 0x391b6cu;
    // NOP
label_391b70:
    // 0x391b70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x391b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x391b74: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x391B74u;
    {
        const bool branch_taken_0x391b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x391B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B74u;
        // 0x391b78: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b74) {
            ctx->pc = 0x391C30u;
            goto label_391c30;
        }
    }
    ctx->pc = 0x391B7Cu;
    // 0x391b7c: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x391B7Cu;
    {
        const bool branch_taken_0x391b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x391b7c) {
            ctx->pc = 0x391BE8u;
            goto label_391be8;
        }
    }
    ctx->pc = 0x391B84u;
    // 0x391b84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x391b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391b88: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x391B88u;
    {
        const bool branch_taken_0x391b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x391B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B88u;
        // 0x391b8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b88) {
            ctx->pc = 0x391BA8u;
            goto label_391ba8;
        }
    }
    ctx->pc = 0x391B90u;
    // 0x391b90: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x391B90u;
    {
        const bool branch_taken_0x391b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x391b90) {
            ctx->pc = 0x391BA8u;
            goto label_391ba8;
        }
    }
    ctx->pc = 0x391B98u;
    // 0x391b98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x391B98u;
    {
        const bool branch_taken_0x391b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x391b98) {
            ctx->pc = 0x391BA8u;
            goto label_391ba8;
        }
    }
    ctx->pc = 0x391BA0u;
    // 0x391ba0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x391BA0u;
    {
        const bool branch_taken_0x391ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391ba0) {
            ctx->pc = 0x391C70u;
            goto label_391c70;
        }
    }
    ctx->pc = 0x391BA8u;
label_391ba8:
    // 0x391ba8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x391ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391bac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x391bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x391bb0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x391bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x391bb4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x391bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x391bb8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x391bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x391bbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391bc0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x391bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x391bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391bc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x391bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391bcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x391bccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391bd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x391bd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391bd4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x391BD4u;
    SET_GPR_U32(ctx, 31, 0x391BDCu);
    ctx->pc = 0x391BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391BD4u;
    // 0x391bd8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x391BD4u, 0x391BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391BDCu;
label_391bdc:
    // 0x391bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x391bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x391be0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x391BE0u;
    {
        const bool branch_taken_0x391be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391BE0u;
        // 0x391be4: 0xa2030020  sb          $v1, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391be0) {
            ctx->pc = 0x391C70u;
            goto label_391c70;
        }
    }
    ctx->pc = 0x391BE8u;
label_391be8:
    // 0x391be8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x391be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391bec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x391becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x391bf0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x391bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x391bf4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x391bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x391bf8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x391bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x391bfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c00: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x391c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x391c04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x391c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x391c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x391c10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c14: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x391C14u;
    SET_GPR_U32(ctx, 31, 0x391C1Cu);
    ctx->pc = 0x391C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C14u;
    // 0x391c18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x391C14u, 0x391C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C1Cu;
label_391c1c:
    // 0x391c1c: 0xc0dbc08  jal         func_36F020
    ctx->pc = 0x391C1Cu;
    SET_GPR_U32(ctx, 31, 0x391C24u);
    ctx->pc = 0x391C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C1Cu;
    // 0x391c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F020u, 0x391C1Cu, 0x391C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C24u;
label_391c24:
    // 0x391c24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x391C24u;
    {
        const bool branch_taken_0x391c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391c24) {
            ctx->pc = 0x391C70u;
            goto label_391c70;
        }
    }
    ctx->pc = 0x391C2Cu;
    // 0x391c2c: 0x0  nop
    ctx->pc = 0x391c2cu;
    // NOP
label_391c30:
    // 0x391c30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x391c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391c34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x391c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x391c38: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x391c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x391c3c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x391c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x391c40: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x391c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x391c44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c48: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x391c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x391c4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x391c50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x391c54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x391c58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c5c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x391C5Cu;
    SET_GPR_U32(ctx, 31, 0x391C64u);
    ctx->pc = 0x391C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C5Cu;
    // 0x391c60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x391C5Cu, 0x391C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C64u;
label_391c64:
    // 0x391c64: 0xc0dbc08  jal         func_36F020
    ctx->pc = 0x391C64u;
    SET_GPR_U32(ctx, 31, 0x391C6Cu);
    ctx->pc = 0x391C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C64u;
    // 0x391c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F020u, 0x391C64u, 0x391C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C6Cu;
label_391c6c:
    // 0x391c6c: 0x0  nop
    ctx->pc = 0x391c6cu;
    // NOP
label_391c70:
    // 0x391c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x391c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x391c74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x391c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391c78: 0x3e00008  jr          $ra
    ctx->pc = 0x391C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C78u;
        // 0x391c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391C80u;
}
