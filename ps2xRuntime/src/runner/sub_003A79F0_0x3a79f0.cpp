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

// Function: sub_003A79F0
// Address: 0x3a79f0 - 0x3a7f94
void sub_003A79F0_0x3a79f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A79F0_0x3a79f0");
#endif

    switch (ctx->pc) {
        case 0x3a7a60u: goto label_3a7a60;
        case 0x3a7a70u: goto label_3a7a70;
        case 0x3a7a98u: goto label_3a7a98;
        case 0x3a7aa8u: goto label_3a7aa8;
        case 0x3a7ad0u: goto label_3a7ad0;
        case 0x3a7ae0u: goto label_3a7ae0;
        case 0x3a7af0u: goto label_3a7af0;
        case 0x3a7b28u: goto label_3a7b28;
        case 0x3a7b48u: goto label_3a7b48;
        case 0x3a7b64u: goto label_3a7b64;
        case 0x3a7b70u: goto label_3a7b70;
        case 0x3a7bccu: goto label_3a7bcc;
        case 0x3a7bf8u: goto label_3a7bf8;
        case 0x3a7c0cu: goto label_3a7c0c;
        case 0x3a7c5cu: goto label_3a7c5c;
        case 0x3a7cd0u: goto label_3a7cd0;
        case 0x3a7cecu: goto label_3a7cec;
        case 0x3a7d60u: goto label_3a7d60;
        case 0x3a7d7cu: goto label_3a7d7c;
        case 0x3a7da8u: goto label_3a7da8;
        case 0x3a7dd8u: goto label_3a7dd8;
        case 0x3a7df4u: goto label_3a7df4;
        case 0x3a7e2cu: goto label_3a7e2c;
        case 0x3a7e88u: goto label_3a7e88;
        case 0x3a7e94u: goto label_3a7e94;
        case 0x3a7ee4u: goto label_3a7ee4;
        case 0x3a7efcu: goto label_3a7efc;
        case 0x3a7f0cu: goto label_3a7f0c;
        case 0x3a7f7cu: goto label_3a7f7c;
        default: break;
    }

    ctx->pc = 0x3a79f0u;

    // 0x3a79f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a79f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a79f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a79f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a79f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a79f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a79fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a79fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a7a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a7a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7a04: 0x80850007  lb          $a1, 0x7($a0)
    ctx->pc = 0x3a7a04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3a7a08: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x3a7a08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a7a0c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3a7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a7a10: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x3a7a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a7a14: 0x2ce10008  sltiu       $at, $a3, 0x8
    ctx->pc = 0x3a7a14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a7a18: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3a7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a7a1c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3a7a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a7a20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a7a24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3a7a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a7a28: 0x10200155  beqz        $at, . + 4 + (0x155 << 2)
    ctx->pc = 0x3A7A28u;
    {
        const bool branch_taken_0x3a7a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A28u;
        // 0x3a7a2c: 0x24700190  addiu       $s0, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a28) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7A30u;
    // 0x3a7a30: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3a7a30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3a7a34: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3a7a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3a7a38: 0x24c62860  addiu       $a2, $a2, 0x2860
    ctx->pc = 0x3a7a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10336));
    // 0x3a7a3c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3a7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a7a40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a7a44: 0x600008  jr          $v1
    ctx->pc = 0x3A7A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A7A50u: goto label_3a7a50;
            case 0x3A7A88u: goto label_3a7a88;
            case 0x3A7AC0u: goto label_3a7ac0;
            case 0x3A7B20u: goto label_3a7b20;
            case 0x3A7B40u: goto label_3a7b40;
            case 0x3A7BD8u: goto label_3a7bd8;
            case 0x3A7C18u: goto label_3a7c18;
            case 0x3A7EA0u: goto label_3a7ea0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7A44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A7A4Cu;
    // 0x3a7a4c: 0x0  nop
    ctx->pc = 0x3a7a4cu;
    // NOP
label_3a7a50:
    // 0x3a7a50: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a7a54: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a7a58: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A7A58u;
    SET_GPR_U32(ctx, 31, 0x3A7A60u);
    ctx->pc = 0x3A7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A58u;
    // 0x3a7a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A7A58u, 0x3A7A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A60u;
label_3a7a60:
    // 0x3a7a60: 0x1c400147  bgtz        $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x3A7A60u;
    {
        const bool branch_taken_0x3a7a60 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A60u;
        // 0x3a7a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a60) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7A68u;
    // 0x3a7a68: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A7A68u;
    SET_GPR_U32(ctx, 31, 0x3A7A70u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A7A68u, 0x3A7A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A70u;
label_3a7a70:
    // 0x3a7a70: 0x4400143  bltz        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x3A7A70u;
    {
        const bool branch_taken_0x3a7a70 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a7a70) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7A78u;
    // 0x3a7a78: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3a7a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a7a7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a7a80: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x3A7A80u;
    {
        const bool branch_taken_0x3a7a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A80u;
        // 0x3a7a84: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a80) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7A88u;
label_3a7a88:
    // 0x3a7a88: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a7a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a7a8c: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a7a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a7a90: 0xc052aa4  jal         func_14AA90
    ctx->pc = 0x3A7A90u;
    SET_GPR_U32(ctx, 31, 0x3A7A98u);
    ctx->pc = 0x3A7A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A90u;
    // 0x3a7a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA90u, 0x3A7A90u, 0x3A7A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A98u;
label_3a7a98:
    // 0x3a7a98: 0x1c400139  bgtz        $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x3A7A98u;
    {
        const bool branch_taken_0x3a7a98 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A98u;
        // 0x3a7a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a98) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7AA0u;
    // 0x3a7aa0: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A7AA0u;
    SET_GPR_U32(ctx, 31, 0x3A7AA8u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A7AA0u, 0x3A7AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7AA8u;
label_3a7aa8:
    // 0x3a7aa8: 0x4400135  bltz        $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x3A7AA8u;
    {
        const bool branch_taken_0x3a7aa8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a7aa8) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7AB0u;
    // 0x3a7ab0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3a7ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a7ab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a7ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a7ab8: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x3A7AB8u;
    {
        const bool branch_taken_0x3a7ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AB8u;
        // 0x3a7abc: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ab8) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7AC0u;
label_3a7ac0:
    // 0x3a7ac0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a7ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a7ac4: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a7ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a7ac8: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x3A7AC8u;
    SET_GPR_U32(ctx, 31, 0x3A7AD0u);
    ctx->pc = 0x3A7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7AC8u;
    // 0x3a7acc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x3A7AC8u, 0x3A7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7AD0u;
label_3a7ad0:
    // 0x3a7ad0: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x3A7AD0u;
    {
        const bool branch_taken_0x3a7ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AD0u;
        // 0x3a7ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ad0) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7AD8u;
    // 0x3a7ad8: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A7AD8u;
    SET_GPR_U32(ctx, 31, 0x3A7AE0u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A7AD8u, 0x3A7AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7AE0u;
label_3a7ae0:
    // 0x3a7ae0: 0x4400127  bltz        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x3A7AE0u;
    {
        const bool branch_taken_0x3a7ae0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AE0u;
        // 0x3a7ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ae0) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7AE8u;
    // 0x3a7ae8: 0xc0eb678  jal         func_3AD9E0
    ctx->pc = 0x3A7AE8u;
    SET_GPR_U32(ctx, 31, 0x3A7AF0u);
    ctx->pc = 0x3AD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD9E0u, 0x3A7AE8u, 0x3A7AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7AF0u;
label_3a7af0:
    // 0x3a7af0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7AF0u;
    {
        const bool branch_taken_0x3a7af0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3a7af0) {
            ctx->pc = 0x3A7B10u;
            goto label_3a7b10;
        }
    }
    ctx->pc = 0x3A7AF8u;
    // 0x3a7af8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a7af8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7afc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7b00: 0xa223000a  sb          $v1, 0xA($s1)
    ctx->pc = 0x3a7b00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a7b04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a7b08: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x3A7B08u;
    {
        const bool branch_taken_0x3a7b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B08u;
        // 0x3a7b0c: 0xa6230014  sh          $v1, 0x14($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7b08) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7B10u;
label_3a7b10:
    // 0x3a7b10: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3a7b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a7b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a7b18: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x3A7B18u;
    {
        const bool branch_taken_0x3a7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B18u;
        // 0x3a7b1c: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7b18) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7B20u;
label_3a7b20:
    // 0x3a7b20: 0xc0eaac4  jal         func_3AAB10
    ctx->pc = 0x3A7B20u;
    SET_GPR_U32(ctx, 31, 0x3A7B28u);
    ctx->pc = 0x3AAB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAB10u, 0x3A7B20u, 0x3A7B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7B28u;
label_3a7b28:
    // 0x3a7b28: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x3A7B28u;
    {
        const bool branch_taken_0x3a7b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7b28) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7B30u;
    // 0x3a7b30: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3a7b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a7b34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a7b38: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x3A7B38u;
    {
        const bool branch_taken_0x3a7b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B38u;
        // 0x3a7b3c: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7b38) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7B40u;
label_3a7b40:
    // 0x3a7b40: 0xc0eab50  jal         func_3AAD40
    ctx->pc = 0x3A7B40u;
    SET_GPR_U32(ctx, 31, 0x3A7B48u);
    ctx->pc = 0x3AAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAD40u, 0x3A7B40u, 0x3A7B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7B48u;
label_3a7b48:
    // 0x3a7b48: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x3A7B48u;
    {
        const bool branch_taken_0x3a7b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7b48) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7B50u;
    // 0x3a7b50: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3a7b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a7b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7b58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a7b5c: 0xc0eaf18  jal         func_3ABC60
    ctx->pc = 0x3A7B5Cu;
    SET_GPR_U32(ctx, 31, 0x3A7B64u);
    ctx->pc = 0x3A7B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7B5Cu;
    // 0x3a7b60: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABC60u, 0x3A7B5Cu, 0x3A7B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7B64u;
label_3a7b64:
    // 0x3a7b64: 0x82250008  lb          $a1, 0x8($s1)
    ctx->pc = 0x3a7b64u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a7b68: 0xc0eaf7c  jal         func_3ABDF0
    ctx->pc = 0x3A7B68u;
    SET_GPR_U32(ctx, 31, 0x3A7B70u);
    ctx->pc = 0x3A7B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7B68u;
    // 0x3a7b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABDF0u, 0x3A7B68u, 0x3A7B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7B70u;
label_3a7b70:
    // 0x3a7b70: 0x82230058  lb          $v1, 0x58($s1)
    ctx->pc = 0x3a7b70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x3a7b74: 0x82220007  lb          $v0, 0x7($s1)
    ctx->pc = 0x3a7b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x3a7b78: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A7B78u;
    {
        const bool branch_taken_0x3a7b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a7b78) {
            ctx->pc = 0x3A7BB0u;
            goto label_3a7bb0;
        }
    }
    ctx->pc = 0x3A7B80u;
    // 0x3a7b80: 0x82230059  lb          $v1, 0x59($s1)
    ctx->pc = 0x3a7b80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
    // 0x3a7b84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7b8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a7b90: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a7b94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3a7b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7b98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7B98u;
    {
        const bool branch_taken_0x3a7b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7b98) {
            ctx->pc = 0x3A7BA8u;
            goto label_3a7ba8;
        }
    }
    ctx->pc = 0x3A7BA0u;
    // 0x3a7ba0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7BA0u;
    {
        const bool branch_taken_0x3a7ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7BA0u;
        // 0x3a7ba4: 0xa2230008  sb          $v1, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ba0) {
            ctx->pc = 0x3A7BB0u;
            goto label_3a7bb0;
        }
    }
    ctx->pc = 0x3A7BA8u;
label_3a7ba8:
    // 0x3a7ba8: 0xa2200059  sb          $zero, 0x59($s1)
    ctx->pc = 0x3a7ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7bac: 0x0  nop
    ctx->pc = 0x3a7bacu;
    // NOP
label_3a7bb0:
    // 0x3a7bb0: 0x82230008  lb          $v1, 0x8($s1)
    ctx->pc = 0x3a7bb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a7bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7bc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a7bc4: 0xc0eb124  jal         func_3AC490
    ctx->pc = 0x3A7BC4u;
    SET_GPR_U32(ctx, 31, 0x3A7BCCu);
    ctx->pc = 0x3A7BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7BC4u;
    // 0x3a7bc8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC490u, 0x3A7BC4u, 0x3A7BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7BCCu;
label_3a7bcc:
    // 0x3a7bcc: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x3A7BCCu;
    {
        const bool branch_taken_0x3a7bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7bcc) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7BD4u;
    // 0x3a7bd4: 0x0  nop
    ctx->pc = 0x3a7bd4u;
    // NOP
label_3a7bd8:
    // 0x3a7bd8: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x3a7bd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x3a7bdc: 0x146000e8  bnez        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x3A7BDCu;
    {
        const bool branch_taken_0x3a7bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7bdc) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7BE4u;
    // 0x3a7be4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x3a7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3a7be8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a7be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a7bec: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a7becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a7bf0: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A7BF0u;
    SET_GPR_U32(ctx, 31, 0x3A7BF8u);
    ctx->pc = 0x3A7BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7BF0u;
    // 0x3a7bf4: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A7BF0u, 0x3A7BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7BF8u;
label_3a7bf8:
    // 0x3a7bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bfc: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x3a7bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3a7c00: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a7c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a7c04: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A7C04u;
    SET_GPR_U32(ctx, 31, 0x3A7C0Cu);
    ctx->pc = 0x3A7C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C04u;
    // 0x3a7c08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A7C04u, 0x3A7C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C0Cu;
label_3a7c0c:
    // 0x3a7c0c: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x3A7C0Cu;
    {
        const bool branch_taken_0x3a7c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7c0c) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7C14u;
    // 0x3a7c14: 0x0  nop
    ctx->pc = 0x3a7c14u;
    // NOP
label_3a7c18:
    // 0x3a7c18: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3a7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a7c1c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3a7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a7c20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7c24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a7c28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a7c2c: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a7c30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7c38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7c3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A7C3Cu;
    {
        const bool branch_taken_0x3a7c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7c3c) {
            ctx->pc = 0x3A7C68u;
            goto label_3a7c68;
        }
    }
    ctx->pc = 0x3A7C44u;
    // 0x3a7c44: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x3a7c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7c48: 0xa220000a  sb          $zero, 0xA($s1)
    ctx->pc = 0x3a7c48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7c4c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x3a7c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7c50: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a7c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7c54: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A7C54u;
    SET_GPR_U32(ctx, 31, 0x3A7C5Cu);
    ctx->pc = 0x3A7C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C54u;
    // 0x3a7c58: 0x82250007  lb          $a1, 0x7($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A7C54u, 0x3A7C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C5Cu;
label_3a7c5c:
    // 0x3a7c5c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x3A7C5Cu;
    {
        const bool branch_taken_0x3a7c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7c5c) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7C64u;
    // 0x3a7c64: 0x0  nop
    ctx->pc = 0x3a7c64u;
    // NOP
label_3a7c68:
    // 0x3a7c68: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3a7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3a7c6c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3a7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3a7c70: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3a7c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3a7c74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a7c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a7c78: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A7C78u;
    {
        const bool branch_taken_0x3a7c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7c78) {
            ctx->pc = 0x3A7CF0u;
            goto label_3a7cf0;
        }
    }
    ctx->pc = 0x3A7C80u;
    // 0x3a7c80: 0x82220008  lb          $v0, 0x8($s1)
    ctx->pc = 0x3a7c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a7c84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7C84u;
    {
        const bool branch_taken_0x3a7c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7c84) {
            ctx->pc = 0x3A7C98u;
            goto label_3a7c98;
        }
    }
    ctx->pc = 0x3A7C8Cu;
    // 0x3a7c8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a7c90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7C90u;
    {
        const bool branch_taken_0x3a7c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C90u;
        // 0x3a7c94: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7c90) {
            ctx->pc = 0x3A7CA0u;
            goto label_3a7ca0;
        }
    }
    ctx->pc = 0x3A7C98u;
label_3a7c98:
    // 0x3a7c98: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3a7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a7c9c: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x3a7c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_3a7ca0:
    // 0x3a7ca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7ca4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7ca8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a7ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a7cac: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a7cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a7cb0: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3a7cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3a7cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a7cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7cb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7cbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7cc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a7cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7cc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a7cc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7cc8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A7CC8u;
    SET_GPR_U32(ctx, 31, 0x3A7CD0u);
    ctx->pc = 0x3A7CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CC8u;
    // 0x3a7ccc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A7CC8u, 0x3A7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CD0u;
label_3a7cd0:
    // 0x3a7cd0: 0x82230008  lb          $v1, 0x8($s1)
    ctx->pc = 0x3a7cd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a7cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7cd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7ce0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a7ce4: 0xc0eb124  jal         func_3AC490
    ctx->pc = 0x3A7CE4u;
    SET_GPR_U32(ctx, 31, 0x3A7CECu);
    ctx->pc = 0x3A7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CE4u;
    // 0x3a7ce8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC490u, 0x3A7CE4u, 0x3A7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CECu;
label_3a7cec:
    // 0x3a7cec: 0x0  nop
    ctx->pc = 0x3a7cecu;
    // NOP
label_3a7cf0:
    // 0x3a7cf0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3a7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3a7cf4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3a7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3a7cf8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3a7cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x3a7cfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a7cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a7d00: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A7D00u;
    {
        const bool branch_taken_0x3a7d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7d00) {
            ctx->pc = 0x3A7D80u;
            goto label_3a7d80;
        }
    }
    ctx->pc = 0x3A7D08u;
    // 0x3a7d08: 0x82220008  lb          $v0, 0x8($s1)
    ctx->pc = 0x3a7d08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a7d0c: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x3a7d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a7d10: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7D10u;
    {
        const bool branch_taken_0x3a7d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7d10) {
            ctx->pc = 0x3A7D28u;
            goto label_3a7d28;
        }
    }
    ctx->pc = 0x3A7D18u;
    // 0x3a7d18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a7d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7D1Cu;
    {
        const bool branch_taken_0x3a7d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D1Cu;
        // 0x3a7d20: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d1c) {
            ctx->pc = 0x3A7D30u;
            goto label_3a7d30;
        }
    }
    ctx->pc = 0x3A7D24u;
    // 0x3a7d24: 0x0  nop
    ctx->pc = 0x3a7d24u;
    // NOP
label_3a7d28:
    // 0x3a7d28: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x3a7d28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7d2c: 0x0  nop
    ctx->pc = 0x3a7d2cu;
    // NOP
label_3a7d30:
    // 0x3a7d30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7d34: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7d38: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a7d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a7d3c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a7d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a7d40: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3a7d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3a7d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a7d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a7d50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a7d54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d58: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A7D58u;
    SET_GPR_U32(ctx, 31, 0x3A7D60u);
    ctx->pc = 0x3A7D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7D58u;
    // 0x3a7d5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A7D58u, 0x3A7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D60u;
label_3a7d60:
    // 0x3a7d60: 0x82230008  lb          $v1, 0x8($s1)
    ctx->pc = 0x3a7d60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a7d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7d70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a7d74: 0xc0eb124  jal         func_3AC490
    ctx->pc = 0x3A7D74u;
    SET_GPR_U32(ctx, 31, 0x3A7D7Cu);
    ctx->pc = 0x3A7D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7D74u;
    // 0x3a7d78: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC490u, 0x3A7D74u, 0x3A7D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D7Cu;
label_3a7d7c:
    // 0x3a7d7c: 0x0  nop
    ctx->pc = 0x3a7d7cu;
    // NOP
label_3a7d80:
    // 0x3a7d80: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3a7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3a7d84: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3a7d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3a7d88: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A7D88u;
    {
        const bool branch_taken_0x3a7d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7d88) {
            ctx->pc = 0x3A7E38u;
            goto label_3a7e38;
        }
    }
    ctx->pc = 0x3A7D90u;
    // 0x3a7d90: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3a7d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a7d94: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a7d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a7d98: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a7d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a7d9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a7d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a7da0: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A7DA0u;
    SET_GPR_U32(ctx, 31, 0x3A7DA8u);
    ctx->pc = 0x3A7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7DA0u;
    // 0x3a7da4: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A7DA0u, 0x3A7DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7DA8u;
label_3a7da8:
    // 0x3a7da8: 0x82230008  lb          $v1, 0x8($s1)
    ctx->pc = 0x3a7da8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a7dac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7db4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a7db8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a7dbc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3a7dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7dc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7DC0u;
    {
        const bool branch_taken_0x3a7dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DC0u;
        // 0x3a7dc4: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7dc0) {
            ctx->pc = 0x3A7DE0u;
            goto label_3a7de0;
        }
    }
    ctx->pc = 0x3A7DC8u;
    // 0x3a7dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7dcc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a7dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7dd0: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A7DD0u;
    SET_GPR_U32(ctx, 31, 0x3A7DD8u);
    ctx->pc = 0x3A7DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7DD0u;
    // 0x3a7dd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A7DD0u, 0x3A7DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7DD8u;
label_3a7dd8:
    // 0x3a7dd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7DD8u;
    {
        const bool branch_taken_0x3a7dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7dd8) {
            ctx->pc = 0x3A7DF8u;
            goto label_3a7df8;
        }
    }
    ctx->pc = 0x3A7DE0u;
label_3a7de0:
    // 0x3a7de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7de4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3a7de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a7de8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a7de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a7dec: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A7DECu;
    SET_GPR_U32(ctx, 31, 0x3A7DF4u);
    ctx->pc = 0x3A7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7DECu;
    // 0x3a7df0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A7DECu, 0x3A7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7DF4u;
label_3a7df4:
    // 0x3a7df4: 0x0  nop
    ctx->pc = 0x3a7df4u;
    // NOP
label_3a7df8:
    // 0x3a7df8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7dfc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a7dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a7e00: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7e04: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3a7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3a7e08: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a7e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a7e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a7e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e10: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a7e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a7e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7e18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a7e1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a7e20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e24: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A7E24u;
    SET_GPR_U32(ctx, 31, 0x3A7E2Cu);
    ctx->pc = 0x3A7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E24u;
    // 0x3a7e28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A7E24u, 0x3A7E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E2Cu;
label_3a7e2c:
    // 0x3a7e2c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3A7E2Cu;
    {
        const bool branch_taken_0x3a7e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7e2c) {
            ctx->pc = 0x3A7E88u;
            goto label_3a7e88;
        }
    }
    ctx->pc = 0x3A7E34u;
    // 0x3a7e34: 0x0  nop
    ctx->pc = 0x3a7e34u;
    // NOP
label_3a7e38:
    // 0x3a7e38: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3a7e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3a7e3c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A7E3Cu;
    {
        const bool branch_taken_0x3a7e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7e3c) {
            ctx->pc = 0x3A7E88u;
            goto label_3a7e88;
        }
    }
    ctx->pc = 0x3A7E44u;
    // 0x3a7e44: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x3a7e44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7e48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a7e4c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a7e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7e50: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7e54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7e58: 0xa6200016  sh          $zero, 0x16($s1)
    ctx->pc = 0x3a7e58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a7e5c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a7e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a7e60: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a7e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a7e64: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3a7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3a7e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a7e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e6c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a7e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a7e70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7e74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a7e78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a7e7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e80: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A7E80u;
    SET_GPR_U32(ctx, 31, 0x3A7E88u);
    ctx->pc = 0x3A7E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E80u;
    // 0x3a7e84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A7E80u, 0x3A7E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E88u;
label_3a7e88:
    // 0x3a7e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e8c: 0xc0eb300  jal         func_3ACC00
    ctx->pc = 0x3A7E8Cu;
    SET_GPR_U32(ctx, 31, 0x3A7E94u);
    ctx->pc = 0x3A7E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E8Cu;
    // 0x3a7e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC00u, 0x3A7E8Cu, 0x3A7E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E94u;
label_3a7e94:
    // 0x3a7e94: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3A7E94u;
    {
        const bool branch_taken_0x3a7e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7e94) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7E9Cu;
    // 0x3a7e9c: 0x0  nop
    ctx->pc = 0x3a7e9cu;
    // NOP
label_3a7ea0:
    // 0x3a7ea0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3a7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a7ea4: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3a7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a7ea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7eac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a7eb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a7eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a7eb4: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a7eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7ec0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7ec4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A7EC4u;
    {
        const bool branch_taken_0x3a7ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7ec4) {
            ctx->pc = 0x3A7EF0u;
            goto label_3a7ef0;
        }
    }
    ctx->pc = 0x3A7ECCu;
    // 0x3a7ecc: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x3a7eccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7ed0: 0xa220000a  sb          $zero, 0xA($s1)
    ctx->pc = 0x3a7ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7ed4: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x3a7ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7ed8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a7ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7edc: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A7EDCu;
    SET_GPR_U32(ctx, 31, 0x3A7EE4u);
    ctx->pc = 0x3A7EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7EDCu;
    // 0x3a7ee0: 0x82250007  lb          $a1, 0x7($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A7EDCu, 0x3A7EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7EE4u;
label_3a7ee4:
    // 0x3a7ee4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3A7EE4u;
    {
        const bool branch_taken_0x3a7ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7ee4) {
            ctx->pc = 0x3A7F80u;
            goto label_3a7f80;
        }
    }
    ctx->pc = 0x3A7EECu;
    // 0x3a7eec: 0x0  nop
    ctx->pc = 0x3a7eecu;
    // NOP
label_3a7ef0:
    // 0x3a7ef0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a7ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a7ef4: 0xc095150  jal         func_254540
    ctx->pc = 0x3A7EF4u;
    SET_GPR_U32(ctx, 31, 0x3A7EFCu);
    ctx->pc = 0x3A7EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7EF4u;
    // 0x3a7ef8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A7EF4u, 0x3A7EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7EFCu;
label_3a7efc:
    // 0x3a7efc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A7EFCu;
    {
        const bool branch_taken_0x3a7efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EFCu;
        // 0x3a7f00: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7efc) {
            ctx->pc = 0x3A7F70u;
            goto label_3a7f70;
        }
    }
    ctx->pc = 0x3A7F04u;
    // 0x3a7f04: 0xc095154  jal         func_254550
    ctx->pc = 0x3A7F04u;
    SET_GPR_U32(ctx, 31, 0x3A7F0Cu);
    ctx->pc = 0x3A7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7F04u;
    // 0x3a7f08: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3A7F04u, 0x3A7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7F0Cu;
label_3a7f0c:
    // 0x3a7f0c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3a7f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3a7f10: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3a7f10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3a7f14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a7f18: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A7F18u;
    {
        const bool branch_taken_0x3a7f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a7f18) {
            ctx->pc = 0x3A7F58u;
            goto label_3a7f58;
        }
    }
    ctx->pc = 0x3A7F20u;
    // 0x3a7f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7f24: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A7F24u;
    {
        const bool branch_taken_0x3a7f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a7f24) {
            ctx->pc = 0x3A7F58u;
            goto label_3a7f58;
        }
    }
    ctx->pc = 0x3A7F2Cu;
    // 0x3a7f2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7F2Cu;
    {
        const bool branch_taken_0x3a7f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7f2c) {
            ctx->pc = 0x3A7F40u;
            goto label_3a7f40;
        }
    }
    ctx->pc = 0x3A7F34u;
    // 0x3a7f34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A7F34u;
    {
        const bool branch_taken_0x3a7f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7f34) {
            ctx->pc = 0x3A7F70u;
            goto label_3a7f70;
        }
    }
    ctx->pc = 0x3A7F3Cu;
    // 0x3a7f3c: 0x0  nop
    ctx->pc = 0x3a7f3cu;
    // NOP
label_3a7f40:
    // 0x3a7f40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7f44: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x3a7f44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7f48: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a7f48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7f4c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x3a7f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7f50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7F50u;
    {
        const bool branch_taken_0x3a7f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F50u;
        // 0x3a7f54: 0xa220000a  sb          $zero, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f50) {
            ctx->pc = 0x3A7F70u;
            goto label_3a7f70;
        }
    }
    ctx->pc = 0x3A7F58u;
label_3a7f58:
    // 0x3a7f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7f5c: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x3a7f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7f60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3a7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a7f64: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a7f64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7f68: 0xa6200016  sh          $zero, 0x16($s1)
    ctx->pc = 0x3a7f68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a7f6c: 0x0  nop
    ctx->pc = 0x3a7f6cu;
    // NOP
label_3a7f70:
    // 0x3a7f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7f74: 0xc0eb300  jal         func_3ACC00
    ctx->pc = 0x3A7F74u;
    SET_GPR_U32(ctx, 31, 0x3A7F7Cu);
    ctx->pc = 0x3A7F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7F74u;
    // 0x3a7f78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC00u, 0x3A7F74u, 0x3A7F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7F7Cu;
label_3a7f7c:
    // 0x3a7f7c: 0x0  nop
    ctx->pc = 0x3a7f7cu;
    // NOP
label_3a7f80:
    // 0x3a7f80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a7f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a7f84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a7f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7f88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a7f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F8Cu;
        // 0x3a7f90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7F94u;
}
