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

// Function: sub_003A0A40
// Address: 0x3a0a40 - 0x3a0b68
void sub_003A0A40_0x3a0a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0A40_0x3a0a40");
#endif

    switch (ctx->pc) {
        case 0x3a0b14u: goto label_3a0b14;
        case 0x3a0b28u: goto label_3a0b28;
        case 0x3a0b3cu: goto label_3a0b3c;
        case 0x3a0b58u: goto label_3a0b58;
        default: break;
    }

    ctx->pc = 0x3a0a40u;

    // 0x3a0a40: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3a0a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3a0a44: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a0a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a0a48: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3a0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a0a4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0a50: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3a0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3a0a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a0a58: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3a0a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3a0a5c: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x3a0a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3a0a60: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3a0a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3a0a64: 0x8f838060  lw          $v1, -0x7FA0($gp)
    ctx->pc = 0x3a0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x3a0a68: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x3a0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x3a0a6c: 0x2810  mfhi        $a1
    ctx->pc = 0x3a0a6cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x3a0a70: 0x24426c12  addiu       $v0, $v0, 0x6C12
    ctx->pc = 0x3a0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27666));
    // 0x3a0a74: 0x906429d0  lbu         $a0, 0x29D0($v1)
    ctx->pc = 0x3a0a74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10704)));
    // 0x3a0a78: 0x51883  sra         $v1, $a1, 2
    ctx->pc = 0x3a0a78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
    // 0x3a0a7c: 0x43840  sll         $a3, $a0, 1
    ctx->pc = 0x3a0a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3a0a80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3a0a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a0a84: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x3a0a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3a0a88: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3a0a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3a0a8c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3a0a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a0a90: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x3a0a90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a0a94: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3A0A94u;
    {
        const bool branch_taken_0x3a0a94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A94u;
        // 0x3a0a98: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0a94) {
            ctx->pc = 0x3A0AC8u;
            goto label_3a0ac8;
        }
    }
    ctx->pc = 0x3A0A9Cu;
    // 0x3a0a9c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3a0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3a0aa0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3a0aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a0aa4: 0x2463268c  addiu       $v1, $v1, 0x268C
    ctx->pc = 0x3a0aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9868));
    // 0x3a0aa8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3a0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a0aac: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3a0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a0ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a0ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a0ab8: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3a0ab8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a0abc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A0ABCu;
    {
        const bool branch_taken_0x3a0abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0ABCu;
        // 0x3a0ac0: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0abc) {
            ctx->pc = 0x3A0B00u;
            goto label_3a0b00;
        }
    }
    ctx->pc = 0x3A0AC4u;
    // 0x3a0ac4: 0x0  nop
    ctx->pc = 0x3a0ac4u;
    // NOP
label_3a0ac8:
    // 0x3a0ac8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3a0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a0acc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3a0accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a0ad0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3a0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3a0ad4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3a0ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3a0ad8: 0x2442268e  addiu       $v0, $v0, 0x268E
    ctx->pc = 0x3a0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9870));
    // 0x3a0adc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3a0adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a0ae0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3a0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a0ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a0ae8: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x3a0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x3a0aec: 0x94700000  lhu         $s0, 0x0($v1)
    ctx->pc = 0x3a0aecu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a0af0: 0x24426c13  addiu       $v0, $v0, 0x6C13
    ctx->pc = 0x3a0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27667));
    // 0x3a0af4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3a0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3a0af8: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x3a0af8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a0afc: 0x0  nop
    ctx->pc = 0x3a0afcu;
    // NOP
label_3a0b00:
    // 0x3a0b00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a0b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a0b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a0b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b0c: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x3A0B0Cu;
    SET_GPR_U32(ctx, 31, 0x3A0B14u);
    ctx->pc = 0x3A0B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B0Cu;
    // 0x3a0b10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x3A0B0Cu, 0x3A0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B14u;
label_3a0b14:
    // 0x3a0b14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3a0b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a0b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a0b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b20: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x3A0B20u;
    SET_GPR_U32(ctx, 31, 0x3A0B28u);
    ctx->pc = 0x3A0B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B20u;
    // 0x3a0b24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x3A0B20u, 0x3A0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B28u;
label_3a0b28:
    // 0x3a0b28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a0b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0b2c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x3a0b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3a0b30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3a0b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a0b34: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x3A0B34u;
    SET_GPR_U32(ctx, 31, 0x3A0B3Cu);
    ctx->pc = 0x3A0B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B34u;
    // 0x3a0b38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x3A0B34u, 0x3A0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B3Cu;
label_3a0b3c:
    // 0x3a0b3c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x3a0b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x3a0b40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3a0b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a0b44: 0x2484ea40  addiu       $a0, $a0, -0x15C0
    ctx->pc = 0x3a0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961728));
    // 0x3a0b48: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3a0b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a0b4c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3a0b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a0b50: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x3A0B50u;
    SET_GPR_U32(ctx, 31, 0x3A0B58u);
    ctx->pc = 0x3A0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B50u;
    // 0x3a0b54: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321320u, 0x3A0B50u, 0x3A0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B58u;
label_3a0b58:
    // 0x3a0b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0b60: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B60u;
        // 0x3a0b64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0B68u;
}
