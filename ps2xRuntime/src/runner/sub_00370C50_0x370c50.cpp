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

// Function: sub_00370C50
// Address: 0x370c50 - 0x370e34
void sub_00370C50_0x370c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370C50_0x370c50");
#endif

    switch (ctx->pc) {
        case 0x370c6cu: goto label_370c6c;
        case 0x370c7cu: goto label_370c7c;
        case 0x370c94u: goto label_370c94;
        case 0x370c9cu: goto label_370c9c;
        case 0x370ca4u: goto label_370ca4;
        case 0x370cacu: goto label_370cac;
        case 0x370ce0u: goto label_370ce0;
        case 0x370d04u: goto label_370d04;
        case 0x370d18u: goto label_370d18;
        case 0x370d34u: goto label_370d34;
        case 0x370d40u: goto label_370d40;
        case 0x370d54u: goto label_370d54;
        case 0x370d68u: goto label_370d68;
        case 0x370d70u: goto label_370d70;
        case 0x370d78u: goto label_370d78;
        case 0x370d90u: goto label_370d90;
        case 0x370d9cu: goto label_370d9c;
        case 0x370da8u: goto label_370da8;
        case 0x370dc4u: goto label_370dc4;
        case 0x370ddcu: goto label_370ddc;
        case 0x370de8u: goto label_370de8;
        case 0x370df0u: goto label_370df0;
        case 0x370e00u: goto label_370e00;
        case 0x370e0cu: goto label_370e0c;
        case 0x370e18u: goto label_370e18;
        case 0x370e20u: goto label_370e20;
        default: break;
    }

    ctx->pc = 0x370c50u;

    // 0x370c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x370c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x370c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x370c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x370c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c64: 0xc040274  jal         func_1009D0
    ctx->pc = 0x370C64u;
    SET_GPR_U32(ctx, 31, 0x370C6Cu);
    ctx->pc = 0x370C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C64u;
    // 0x370c68: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x370C64u, 0x370C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C6Cu;
label_370c6c:
    // 0x370c6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x370C6Cu;
    {
        const bool branch_taken_0x370c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C6Cu;
        // 0x370c70: 0x2604009c  addiu       $a0, $s0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c6c) {
            ctx->pc = 0x370C88u;
            goto label_370c88;
        }
    }
    ctx->pc = 0x370C74u;
    // 0x370c74: 0xc040274  jal         func_1009D0
    ctx->pc = 0x370C74u;
    SET_GPR_U32(ctx, 31, 0x370C7Cu);
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x370C74u, 0x370C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C7Cu;
label_370c7c:
    // 0x370c7c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x370C7Cu;
    {
        const bool branch_taken_0x370c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370c7c) {
            ctx->pc = 0x370E20u;
            goto label_370e20;
        }
    }
    ctx->pc = 0x370C84u;
    // 0x370c84: 0x0  nop
    ctx->pc = 0x370c84u;
    // NOP
label_370c88:
    // 0x370c88: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x370c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x370c8c: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x370C8Cu;
    SET_GPR_U32(ctx, 31, 0x370C94u);
    ctx->pc = 0x370C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C8Cu;
    // 0x370c90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x370C8Cu, 0x370C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C94u;
label_370c94:
    // 0x370c94: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x370C94u;
    SET_GPR_U32(ctx, 31, 0x370C9Cu);
    ctx->pc = 0x370C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C94u;
    // 0x370c98: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x370C94u, 0x370C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C9Cu;
label_370c9c:
    // 0x370c9c: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x370C9Cu;
    SET_GPR_U32(ctx, 31, 0x370CA4u);
    ctx->pc = 0x370CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C9Cu;
    // 0x370ca0: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x370C9Cu, 0x370CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370CA4u;
label_370ca4:
    // 0x370ca4: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x370CA4u;
    SET_GPR_U32(ctx, 31, 0x370CACu);
    ctx->pc = 0x370CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370CA4u;
    // 0x370ca8: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x370CA4u, 0x370CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370CACu;
label_370cac:
    // 0x370cac: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x370cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x370cb0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x370cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x370cb4: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x370cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x370cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x370cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x370cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x370cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x370cc0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x370cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x370cc4: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x370cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x370cc8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x370cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x370ccc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x370CCCu;
    {
        const bool branch_taken_0x370ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CCCu;
        // 0x370cd0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ccc) {
            ctx->pc = 0x370D38u;
            goto label_370d38;
        }
    }
    ctx->pc = 0x370CD4u;
    // 0x370cd4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x370cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370cd8: 0xc095030  jal         func_2540C0
    ctx->pc = 0x370CD8u;
    SET_GPR_U32(ctx, 31, 0x370CE0u);
    ctx->pc = 0x370CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370CD8u;
    // 0x370cdc: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2540C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2540C0u, 0x370CD8u, 0x370CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370CE0u;
label_370ce0:
    // 0x370ce0: 0x92040026  lbu         $a0, 0x26($s0)
    ctx->pc = 0x370ce0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x370ce4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x370ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x370ce8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x370ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x370cec: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x370CECu;
    {
        const bool branch_taken_0x370cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x370CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CECu;
        // 0x370cf0: 0x112c3c  dsll32      $a1, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370cec) {
            ctx->pc = 0x370D10u;
            goto label_370d10;
        }
    }
    ctx->pc = 0x370CF4u;
    // 0x370cf4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x370cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x370cf8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x370cf8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x370cfc: 0xc0b6340  jal         func_2D8D00
    ctx->pc = 0x370CFCu;
    SET_GPR_U32(ctx, 31, 0x370D04u);
    ctx->pc = 0x370D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370CFCu;
    // 0x370d00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D00u, 0x370CFCu, 0x370D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D04u;
label_370d04:
    // 0x370d04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x370D04u;
    {
        const bool branch_taken_0x370d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370d04) {
            ctx->pc = 0x370D38u;
            goto label_370d38;
        }
    }
    ctx->pc = 0x370D0Cu;
    // 0x370d0c: 0x0  nop
    ctx->pc = 0x370d0cu;
    // NOP
label_370d10:
    // 0x370d10: 0xc0d8f34  jal         func_363CD0
    ctx->pc = 0x370D10u;
    SET_GPR_U32(ctx, 31, 0x370D18u);
    ctx->pc = 0x363CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363CD0u, 0x370D10u, 0x370D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D18u;
label_370d18:
    // 0x370d18: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x370d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x370d1c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x370d1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x370d20: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x370d20u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x370d24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x370d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d28: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x370d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x370d2c: 0xc0b6364  jal         func_2D8D90
    ctx->pc = 0x370D2Cu;
    SET_GPR_U32(ctx, 31, 0x370D34u);
    ctx->pc = 0x370D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D2Cu;
    // 0x370d30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D90u, 0x370D2Cu, 0x370D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D34u;
label_370d34:
    // 0x370d34: 0x0  nop
    ctx->pc = 0x370d34u;
    // NOP
label_370d38:
    // 0x370d38: 0xc09c468  jal         func_2711A0
    ctx->pc = 0x370D38u;
    SET_GPR_U32(ctx, 31, 0x370D40u);
    ctx->pc = 0x370D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D38u;
    // 0x370d3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711A0u, 0x370D38u, 0x370D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D40u;
label_370d40:
    // 0x370d40: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x370d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x370d44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x370d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370d48: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x370d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x370d4c: 0xc0951c8  jal         func_254720
    ctx->pc = 0x370D4Cu;
    SET_GPR_U32(ctx, 31, 0x370D54u);
    ctx->pc = 0x370D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D4Cu;
    // 0x370d50: 0x3406fff9  ori         $a2, $zero, 0xFFF9 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254720u, 0x370D4Cu, 0x370D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D54u;
label_370d54:
    // 0x370d54: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x370d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x370d58: 0x3405fff9  ori         $a1, $zero, 0xFFF9
    ctx->pc = 0x370d58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x370d5c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x370d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x370d60: 0xc0ed6dc  jal         func_3B5B70
    ctx->pc = 0x370D60u;
    SET_GPR_U32(ctx, 31, 0x370D68u);
    ctx->pc = 0x370D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D60u;
    // 0x370d64: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B70u, 0x370D60u, 0x370D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D68u;
label_370d68:
    // 0x370d68: 0xc0dc82c  jal         func_3720B0
    ctx->pc = 0x370D68u;
    SET_GPR_U32(ctx, 31, 0x370D70u);
    ctx->pc = 0x370D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D68u;
    // 0x370d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3720B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3720B0u, 0x370D68u, 0x370D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D70u;
label_370d70:
    // 0x370d70: 0xc040274  jal         func_1009D0
    ctx->pc = 0x370D70u;
    SET_GPR_U32(ctx, 31, 0x370D78u);
    ctx->pc = 0x370D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D70u;
    // 0x370d74: 0x2604009c  addiu       $a0, $s0, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x370D70u, 0x370D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D78u;
label_370d78:
    // 0x370d78: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x370D78u;
    {
        const bool branch_taken_0x370d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D78u;
        // 0x370d7c: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d78) {
            ctx->pc = 0x370DC8u;
            goto label_370dc8;
        }
    }
    ctx->pc = 0x370D80u;
    // 0x370d80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x370d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370d84: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x370d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x370d88: 0xc0951c8  jal         func_254720
    ctx->pc = 0x370D88u;
    SET_GPR_U32(ctx, 31, 0x370D90u);
    ctx->pc = 0x370D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D88u;
    // 0x370d8c: 0x3406fff9  ori         $a2, $zero, 0xFFF9 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254720u, 0x370D88u, 0x370D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D90u;
label_370d90:
    // 0x370d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d94: 0xc040250  jal         func_100940
    ctx->pc = 0x370D94u;
    SET_GPR_U32(ctx, 31, 0x370D9Cu);
    ctx->pc = 0x370D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D94u;
    // 0x370d98: 0x2619009c  addiu       $t9, $s0, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x370D94u, 0x370D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D9Cu;
label_370d9c:
    // 0x370d9c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x370d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x370da0: 0xc095030  jal         func_2540C0
    ctx->pc = 0x370DA0u;
    SET_GPR_U32(ctx, 31, 0x370DA8u);
    ctx->pc = 0x370DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DA0u;
    // 0x370da4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2540C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2540C0u, 0x370DA0u, 0x370DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DA8u;
label_370da8:
    // 0x370da8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x370da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370dac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x370dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370db0: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x370db0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x370db4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x370db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x370db8: 0x24080162  addiu       $t0, $zero, 0x162
    ctx->pc = 0x370db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
    // 0x370dbc: 0xc09c4e8  jal         func_2713A0
    ctx->pc = 0x370DBCu;
    SET_GPR_U32(ctx, 31, 0x370DC4u);
    ctx->pc = 0x370DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DBCu;
    // 0x370dc0: 0x3c096000  lui         $t1, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24576 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2713A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2713A0u, 0x370DBCu, 0x370DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DC4u;
label_370dc4:
    // 0x370dc4: 0x0  nop
    ctx->pc = 0x370dc4u;
    // NOP
label_370dc8:
    // 0x370dc8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x370dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x370dcc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x370dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x370dd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x370dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370dd4: 0xc0951c8  jal         func_254720
    ctx->pc = 0x370DD4u;
    SET_GPR_U32(ctx, 31, 0x370DDCu);
    ctx->pc = 0x370DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DD4u;
    // 0x370dd8: 0x3406fff6  ori         $a2, $zero, 0xFFF6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254720u, 0x370DD4u, 0x370DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DDCu;
label_370ddc:
    // 0x370ddc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x370ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x370de0: 0xc095480  jal         func_255200
    ctx->pc = 0x370DE0u;
    SET_GPR_U32(ctx, 31, 0x370DE8u);
    ctx->pc = 0x370DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DE0u;
    // 0x370de4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255200u, 0x370DE0u, 0x370DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DE8u;
label_370de8:
    // 0x370de8: 0xc040274  jal         func_1009D0
    ctx->pc = 0x370DE8u;
    SET_GPR_U32(ctx, 31, 0x370DF0u);
    ctx->pc = 0x370DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DE8u;
    // 0x370dec: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x370DE8u, 0x370DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DF0u;
label_370df0:
    // 0x370df0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x370DF0u;
    {
        const bool branch_taken_0x370df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370DF0u;
        // 0x370df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370df0) {
            ctx->pc = 0x370E00u;
            goto label_370e00;
        }
    }
    ctx->pc = 0x370DF8u;
    // 0x370df8: 0xc040250  jal         func_100940
    ctx->pc = 0x370DF8u;
    SET_GPR_U32(ctx, 31, 0x370E00u);
    ctx->pc = 0x370DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DF8u;
    // 0x370dfc: 0x26190090  addiu       $t9, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x370DF8u, 0x370E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E00u;
label_370e00:
    // 0x370e00: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x370e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x370e04: 0xc095484  jal         func_255210
    ctx->pc = 0x370E04u;
    SET_GPR_U32(ctx, 31, 0x370E0Cu);
    ctx->pc = 0x370E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E04u;
    // 0x370e08: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255210u, 0x370E04u, 0x370E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E0Cu;
label_370e0c:
    // 0x370e0c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x370e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x370e10: 0xc0951d8  jal         func_254760
    ctx->pc = 0x370E10u;
    SET_GPR_U32(ctx, 31, 0x370E18u);
    ctx->pc = 0x370E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E10u;
    // 0x370e14: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254760u, 0x370E10u, 0x370E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E18u;
label_370e18:
    // 0x370e18: 0xc09c468  jal         func_2711A0
    ctx->pc = 0x370E18u;
    SET_GPR_U32(ctx, 31, 0x370E20u);
    ctx->pc = 0x370E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E18u;
    // 0x370e1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711A0u, 0x370E18u, 0x370E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E20u;
label_370e20:
    // 0x370e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x370e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x370E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E2Cu;
        // 0x370e30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370E34u;
}
