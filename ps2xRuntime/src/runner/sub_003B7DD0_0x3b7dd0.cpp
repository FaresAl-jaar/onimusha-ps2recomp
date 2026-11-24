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

// Function: sub_003B7DD0
// Address: 0x3b7dd0 - 0x3b7fcc
void sub_003B7DD0_0x3b7dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7DD0_0x3b7dd0");
#endif

    switch (ctx->pc) {
        case 0x3b7ef8u: goto label_3b7ef8;
        case 0x3b7f10u: goto label_3b7f10;
        case 0x3b7f28u: goto label_3b7f28;
        case 0x3b7f40u: goto label_3b7f40;
        case 0x3b7f58u: goto label_3b7f58;
        case 0x3b7f70u: goto label_3b7f70;
        case 0x3b7f88u: goto label_3b7f88;
        case 0x3b7fa0u: goto label_3b7fa0;
        case 0x3b7fb4u: goto label_3b7fb4;
        default: break;
    }

    ctx->pc = 0x3b7dd0u;

    // 0x3b7dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b7dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b7dd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b7dd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b7dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b7ddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b7ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b7de0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b7de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7de4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b7de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b7de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b7dec: 0x2e21000c  sltiu       $at, $s1, 0xC
    ctx->pc = 0x3b7decu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3b7df0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7df4: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x3B7DF4u;
    {
        const bool branch_taken_0x3b7df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DF4u;
        // 0x3b7df8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7df4) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7DFCu;
    // 0x3b7dfc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3b7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3b7e00: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3b7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3b7e04: 0x24632c50  addiu       $v1, $v1, 0x2C50
    ctx->pc = 0x3b7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11344));
    // 0x3b7e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b7e0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7e10: 0x400008  jr          $v0
    ctx->pc = 0x3B7E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B7E18u: goto label_3b7e18;
            case 0x3B7E28u: goto label_3b7e28;
            case 0x3B7E30u: goto label_3b7e30;
            case 0x3B7E40u: goto label_3b7e40;
            case 0x3B7E50u: goto label_3b7e50;
            case 0x3B7E60u: goto label_3b7e60;
            case 0x3B7E68u: goto label_3b7e68;
            case 0x3B7E78u: goto label_3b7e78;
            case 0x3B7E88u: goto label_3b7e88;
            case 0x3B7E98u: goto label_3b7e98;
            case 0x3B7EA0u: goto label_3b7ea0;
            case 0x3B7EB0u: goto label_3b7eb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7E10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B7E18u;
label_3b7e18:
    // 0x3b7e18: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x3b7e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b7e1c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3B7E1Cu;
    {
        const bool branch_taken_0x3b7e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E1Cu;
        // 0x3b7e20: 0x64040003  daddiu      $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e1c) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7E24u;
    // 0x3b7e24: 0x0  nop
    ctx->pc = 0x3b7e24u;
    // NOP
label_3b7e28:
    // 0x3b7e28: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3B7E28u;
    {
        const bool branch_taken_0x3b7e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E28u;
        // 0x3b7e2c: 0x2410008c  addiu       $s0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e28) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7E30u;
label_3b7e30:
    // 0x3b7e30: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x3b7e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3b7e34: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3B7E34u;
    {
        const bool branch_taken_0x3b7e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E34u;
        // 0x3b7e38: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e34) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7E3Cu;
    // 0x3b7e3c: 0x0  nop
    ctx->pc = 0x3b7e3cu;
    // NOP
label_3b7e40:
    // 0x3b7e40: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x3b7e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3b7e44: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3B7E44u;
    {
        const bool branch_taken_0x3b7e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E44u;
        // 0x3b7e48: 0x64040002  daddiu      $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e44) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7E4Cu;
    // 0x3b7e4c: 0x0  nop
    ctx->pc = 0x3b7e4cu;
    // NOP
label_3b7e50:
    // 0x3b7e50: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x3b7e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x3b7e54: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3B7E54u;
    {
        const bool branch_taken_0x3b7e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E54u;
        // 0x3b7e58: 0x64040003  daddiu      $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e54) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7E5Cu;
    // 0x3b7e5c: 0x0  nop
    ctx->pc = 0x3b7e5cu;
    // NOP
label_3b7e60:
    // 0x3b7e60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3B7E60u;
    {
        const bool branch_taken_0x3b7e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E60u;
        // 0x3b7e64: 0x24100118  addiu       $s0, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e60) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7E68u;
label_3b7e68:
    // 0x3b7e68: 0x241000c8  addiu       $s0, $zero, 0xC8
    ctx->pc = 0x3b7e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x3b7e6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3B7E6Cu;
    {
        const bool branch_taken_0x3b7e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E6Cu;
        // 0x3b7e70: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e6c) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7E74u;
    // 0x3b7e74: 0x0  nop
    ctx->pc = 0x3b7e74u;
    // NOP
label_3b7e78:
    // 0x3b7e78: 0x241000a0  addiu       $s0, $zero, 0xA0
    ctx->pc = 0x3b7e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3b7e7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B7E7Cu;
    {
        const bool branch_taken_0x3b7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E7Cu;
        // 0x3b7e80: 0x64040002  daddiu      $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e7c) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7E84u;
    // 0x3b7e84: 0x0  nop
    ctx->pc = 0x3b7e84u;
    // NOP
label_3b7e88:
    // 0x3b7e88: 0x241001f4  addiu       $s0, $zero, 0x1F4
    ctx->pc = 0x3b7e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x3b7e8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B7E8Cu;
    {
        const bool branch_taken_0x3b7e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E8Cu;
        // 0x3b7e90: 0x64040003  daddiu      $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e8c) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7E94u;
    // 0x3b7e94: 0x0  nop
    ctx->pc = 0x3b7e94u;
    // NOP
label_3b7e98:
    // 0x3b7e98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B7E98u;
    {
        const bool branch_taken_0x3b7e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E98u;
        // 0x3b7e9c: 0x24100230  addiu       $s0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e98) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7EA0u;
label_3b7ea0:
    // 0x3b7ea0: 0x24100190  addiu       $s0, $zero, 0x190
    ctx->pc = 0x3b7ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x3b7ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7EA4u;
    {
        const bool branch_taken_0x3b7ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7EA4u;
        // 0x3b7ea8: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ea4) {
            ctx->pc = 0x3B7EB8u;
            goto label_3b7eb8;
        }
    }
    ctx->pc = 0x3B7EACu;
    // 0x3b7eac: 0x0  nop
    ctx->pc = 0x3b7eacu;
    // NOP
label_3b7eb0:
    // 0x3b7eb0: 0x24100140  addiu       $s0, $zero, 0x140
    ctx->pc = 0x3b7eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x3b7eb4: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x3b7eb4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_3b7eb8:
    // 0x3b7eb8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b7eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3b7ebc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b7ec0: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3B7EC0u;
    {
        const bool branch_taken_0x3b7ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7EC0u;
        // 0x3b7ec4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ec0) {
            ctx->pc = 0x3B7F80u;
            goto label_3b7f80;
        }
    }
    ctx->pc = 0x3B7EC8u;
    // 0x3b7ec8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3B7EC8u;
    {
        const bool branch_taken_0x3b7ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7ec8) {
            ctx->pc = 0x3B7F50u;
            goto label_3b7f50;
        }
    }
    ctx->pc = 0x3B7ED0u;
    // 0x3b7ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7ed4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B7ED4u;
    {
        const bool branch_taken_0x3b7ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b7ed4) {
            ctx->pc = 0x3B7F20u;
            goto label_3b7f20;
        }
    }
    ctx->pc = 0x3B7EDCu;
    // 0x3b7edc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7EDCu;
    {
        const bool branch_taken_0x3b7edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7edc) {
            ctx->pc = 0x3B7EF0u;
            goto label_3b7ef0;
        }
    }
    ctx->pc = 0x3B7EE4u;
    // 0x3b7ee4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3B7EE4u;
    {
        const bool branch_taken_0x3b7ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7ee4) {
            ctx->pc = 0x3B7FA8u;
            goto label_3b7fa8;
        }
    }
    ctx->pc = 0x3B7EECu;
    // 0x3b7eec: 0x0  nop
    ctx->pc = 0x3b7eecu;
    // NOP
label_3b7ef0:
    // 0x3b7ef0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B7EF0u;
    SET_GPR_U32(ctx, 31, 0x3B7EF8u);
    ctx->pc = 0x3B7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7EF0u;
    // 0x3b7ef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B7EF0u, 0x3B7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7EF8u;
label_3b7ef8:
    // 0x3b7ef8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3b7ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b7efc: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3b7efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b7f00: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x3b7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3b7f04: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3b7f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7f08: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3B7F08u;
    SET_GPR_U32(ctx, 31, 0x3B7F10u);
    ctx->pc = 0x3B7F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F08u;
    // 0x3b7f0c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3B7F08u, 0x3B7F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F10u;
label_3b7f10:
    // 0x3b7f10: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x3b7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3b7f14: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3B7F14u;
    {
        const bool branch_taken_0x3b7f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F14u;
        // 0x3b7f18: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f14) {
            ctx->pc = 0x3B7FA8u;
            goto label_3b7fa8;
        }
    }
    ctx->pc = 0x3B7F1Cu;
    // 0x3b7f1c: 0x0  nop
    ctx->pc = 0x3b7f1cu;
    // NOP
label_3b7f20:
    // 0x3b7f20: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B7F20u;
    SET_GPR_U32(ctx, 31, 0x3B7F28u);
    ctx->pc = 0x3B7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F20u;
    // 0x3b7f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B7F20u, 0x3B7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F28u;
label_3b7f28:
    // 0x3b7f28: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3b7f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b7f2c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3b7f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b7f30: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x3b7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3b7f34: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3b7f34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7f38: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3B7F38u;
    SET_GPR_U32(ctx, 31, 0x3B7F40u);
    ctx->pc = 0x3B7F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F38u;
    // 0x3b7f3c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3B7F38u, 0x3B7F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F40u;
label_3b7f40:
    // 0x3b7f40: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x3b7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3b7f44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3B7F44u;
    {
        const bool branch_taken_0x3b7f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F44u;
        // 0x3b7f48: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f44) {
            ctx->pc = 0x3B7FA8u;
            goto label_3b7fa8;
        }
    }
    ctx->pc = 0x3B7F4Cu;
    // 0x3b7f4c: 0x0  nop
    ctx->pc = 0x3b7f4cu;
    // NOP
label_3b7f50:
    // 0x3b7f50: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B7F50u;
    SET_GPR_U32(ctx, 31, 0x3B7F58u);
    ctx->pc = 0x3B7F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F50u;
    // 0x3b7f54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B7F50u, 0x3B7F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F58u;
label_3b7f58:
    // 0x3b7f58: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3b7f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b7f5c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3b7f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b7f60: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x3b7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3b7f64: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3b7f64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7f68: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3B7F68u;
    SET_GPR_U32(ctx, 31, 0x3B7F70u);
    ctx->pc = 0x3B7F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F68u;
    // 0x3b7f6c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3B7F68u, 0x3B7F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F70u;
label_3b7f70:
    // 0x3b7f70: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x3b7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3b7f74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B7F74u;
    {
        const bool branch_taken_0x3b7f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F74u;
        // 0x3b7f78: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f74) {
            ctx->pc = 0x3B7FA8u;
            goto label_3b7fa8;
        }
    }
    ctx->pc = 0x3B7F7Cu;
    // 0x3b7f7c: 0x0  nop
    ctx->pc = 0x3b7f7cu;
    // NOP
label_3b7f80:
    // 0x3b7f80: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B7F80u;
    SET_GPR_U32(ctx, 31, 0x3B7F88u);
    ctx->pc = 0x3B7F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F80u;
    // 0x3b7f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B7F80u, 0x3B7F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F88u;
label_3b7f88:
    // 0x3b7f88: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3b7f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b7f8c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3b7f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b7f90: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x3b7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3b7f94: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3b7f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7f98: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3B7F98u;
    SET_GPR_U32(ctx, 31, 0x3B7FA0u);
    ctx->pc = 0x3B7F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F98u;
    // 0x3b7f9c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3B7F98u, 0x3B7FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7FA0u;
label_3b7fa0:
    // 0x3b7fa0: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x3b7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3b7fa4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3b7fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_3b7fa8:
    // 0x3b7fa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b7fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7fac: 0xc0a5fcc  jal         func_297F30
    ctx->pc = 0x3B7FACu;
    SET_GPR_U32(ctx, 31, 0x3B7FB4u);
    ctx->pc = 0x3B7FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7FACu;
    // 0x3b7fb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F30u, 0x3B7FACu, 0x3B7FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7FB4u;
label_3b7fb4:
    // 0x3b7fb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b7fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7fb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b7fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b7fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b7fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FC4u;
        // 0x3b7fc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7FCCu;
}
