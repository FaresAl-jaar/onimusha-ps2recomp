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

// Function: sub_00366B30
// Address: 0x366b30 - 0x366c78
void sub_00366B30_0x366b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366B30_0x366b30");
#endif

    switch (ctx->pc) {
        case 0x366b5cu: goto label_366b5c;
        case 0x366ba0u: goto label_366ba0;
        case 0x366ba8u: goto label_366ba8;
        case 0x366bf4u: goto label_366bf4;
        case 0x366c28u: goto label_366c28;
        case 0x366c30u: goto label_366c30;
        case 0x366c68u: goto label_366c68;
        default: break;
    }

    ctx->pc = 0x366b30u;

    // 0x366b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x366b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x366b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x366b38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x366b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x366b3c: 0x90830021  lbu         $v1, 0x21($a0)
    ctx->pc = 0x366b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x366b40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x366B40u;
    {
        const bool branch_taken_0x366b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x366B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B40u;
        // 0x366b44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b40) {
            ctx->pc = 0x366B50u;
            goto label_366b50;
        }
    }
    ctx->pc = 0x366B48u;
    // 0x366b48: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x366B48u;
    {
        const bool branch_taken_0x366b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366b48) {
            ctx->pc = 0x366C68u;
            goto label_366c68;
        }
    }
    ctx->pc = 0x366B50u;
label_366b50:
    // 0x366b50: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x366b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x366b54: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x366B54u;
    SET_GPR_U32(ctx, 31, 0x366B5Cu);
    ctx->pc = 0x366B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B54u;
    // 0x366b58: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x366B54u, 0x366B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B5Cu;
label_366b5c:
    // 0x366b5c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x366b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x366b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366b64: 0x14440012  bne         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x366B64u;
    {
        const bool branch_taken_0x366b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x366B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B64u;
        // 0x366b68: 0x8c251284  lw          $a1, 0x1284($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366b64) {
            ctx->pc = 0x366BB0u;
            goto label_366bb0;
        }
    }
    ctx->pc = 0x366B6Cu;
    // 0x366b6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x366b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366b70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x366b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x366b74: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x366b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x366b78: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x366b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x366b7c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x366b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x366b80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b84: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x366b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x366b88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x366b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366b90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366b94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b98: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x366B98u;
    SET_GPR_U32(ctx, 31, 0x366BA0u);
    ctx->pc = 0x366B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B98u;
    // 0x366b9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x366B98u, 0x366BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366BA0u;
label_366ba0:
    // 0x366ba0: 0xc0d99c0  jal         func_366700
    ctx->pc = 0x366BA0u;
    SET_GPR_U32(ctx, 31, 0x366BA8u);
    ctx->pc = 0x366BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366BA0u;
    // 0x366ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366700u, 0x366BA0u, 0x366BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366BA8u;
label_366ba8:
    // 0x366ba8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x366BA8u;
    {
        const bool branch_taken_0x366ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366ba8) {
            ctx->pc = 0x366C68u;
            goto label_366c68;
        }
    }
    ctx->pc = 0x366BB0u;
label_366bb0:
    // 0x366bb0: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x366BB0u;
    {
        const bool branch_taken_0x366bb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x366BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366BB0u;
        // 0x366bb4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366bb0) {
            ctx->pc = 0x366C68u;
            goto label_366c68;
        }
    }
    ctx->pc = 0x366BB8u;
    // 0x366bb8: 0x1443002b  bne         $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x366BB8u;
    {
        const bool branch_taken_0x366bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x366bb8) {
            ctx->pc = 0x366C68u;
            goto label_366c68;
        }
    }
    ctx->pc = 0x366BC0u;
    // 0x366bc0: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x366bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x366bc4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x366bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x366bc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x366BC8u;
    {
        const bool branch_taken_0x366bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366bc8) {
            ctx->pc = 0x366BD8u;
            goto label_366bd8;
        }
    }
    ctx->pc = 0x366BD0u;
    // 0x366bd0: 0x14440019  bne         $v0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x366BD0u;
    {
        const bool branch_taken_0x366bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x366bd0) {
            ctx->pc = 0x366C38u;
            goto label_366c38;
        }
    }
    ctx->pc = 0x366BD8u;
label_366bd8:
    // 0x366bd8: 0x82020334  lb          $v0, 0x334($s0)
    ctx->pc = 0x366bd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x366bdc: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x366bdcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x366be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366be4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x366be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x366be8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x366be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x366bec: 0xc0d9f04  jal         func_367C10
    ctx->pc = 0x366BECu;
    SET_GPR_U32(ctx, 31, 0x366BF4u);
    ctx->pc = 0x366BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366BECu;
    // 0x366bf0: 0x2445011c  addiu       $a1, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367C10u, 0x366BECu, 0x366BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366BF4u;
label_366bf4:
    // 0x366bf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x366bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366bf8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x366bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x366bfc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x366bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x366c00: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x366c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x366c04: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x366c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x366c08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c0c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x366c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x366c10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x366c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366c1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c20: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x366C20u;
    SET_GPR_U32(ctx, 31, 0x366C28u);
    ctx->pc = 0x366C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C20u;
    // 0x366c24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x366C20u, 0x366C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C28u;
label_366c28:
    // 0x366c28: 0xc0d99c0  jal         func_366700
    ctx->pc = 0x366C28u;
    SET_GPR_U32(ctx, 31, 0x366C30u);
    ctx->pc = 0x366C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C28u;
    // 0x366c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366700u, 0x366C28u, 0x366C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C30u;
label_366c30:
    // 0x366c30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x366C30u;
    {
        const bool branch_taken_0x366c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366c30) {
            ctx->pc = 0x366C68u;
            goto label_366c68;
        }
    }
    ctx->pc = 0x366C38u;
label_366c38:
    // 0x366c38: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x366c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x366c3c: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x366c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x366c40: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x366c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x366c44: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x366c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x366c48: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x366c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x366c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366c50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x366c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366c58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366c5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c60: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x366C60u;
    SET_GPR_U32(ctx, 31, 0x366C68u);
    ctx->pc = 0x366C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C60u;
    // 0x366c64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x366C60u, 0x366C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C68u;
label_366c68:
    // 0x366c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x366c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366c6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x366c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366c70: 0x3e00008  jr          $ra
    ctx->pc = 0x366C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C70u;
        // 0x366c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366C78u;
}
